%{

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	
	#define YYSTYPE tnode*

	#include "exprtree.h"
	#include "exprtree.c"

	int yylex(void);
	void yyerror(char const *s);
	extern FILE *yyin;
	
%}

%token ID NUM STRVAL START END READ WRITE ASSIGN INIT ALLOC FREE
%token TYPE ENDTYPE DECL ENDDECL INT STR BRKP MAIN RETURN
%token CLASS ENDCLASS EXTENDS NEW DELETE SELF
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE REPEAT UNTIL
%token PLUS MINUS MUL DIV MOD LT GT LE GE NE EQ AND OR NOT NIL
%left OR
%left AND
%left PLUS MINUS
%left MUL DIV MOD
%right NOT
%nonassoc LT GT LE GE NE EQ

%%

program : TypeDefBlock ClassDefBlock GDeclBlock FDefBlock MainBlock
	| TypeDefBlock ClassDefBlock GDeclBlock MainBlock
	;

TypeDefBlock : TYPE TypeDefList ENDTYPE
	|
	;

TypeDefList : TypeDefList TypeDef
	| TypeDef
	;

TypeDef : ID '{' FieldDeclList '}'	{
			TInstall($1->name, 0, Fhead);
			Fhead=Ftail=NULL;
		}
	;

FieldDeclList : FieldDeclList FieldDecl
	| FieldDecl
	;

FieldDecl : TypeName ID ';'	{FInstall(declType, $2->name);}
	;

TypeName : INT	{declType=TLookup("integer");}
	| STR	{declType=TLookup("string");}
	| ID	{
		declType=TLookup($1->name);
		if(declType==NULL)
			declType=TLookup("type");
	}
	;

ClassDefBlock :	CLASS ClassDefList ENDCLASS	{
		struct Classtable *Ctemp=Chead;
		struct Memberfunclist *Mtemp;
		int i;

		fprintf(target_file, "L%d:\n", start);
		fprintf(target_file, "MOV SP, 4095\n");
		while(Ctemp!=NULL){
			binding+=8;
			Mtemp=Ctemp->Vfuncptr;
			i=0;
			while(Mtemp!=NULL){
				fprintf(target_file, "MOV R0, F%d\n", Mtemp->flabel);
				fprintf(target_file, "PUSH R0\n");
				i++;
				Mtemp=Mtemp->next;
			}
			fprintf(target_file, "MOV R0, -1\n");
			while(i<8){
				fprintf(target_file, "PUSH R0\n");
				i++;
			}
			Ctemp=Ctemp->next;
		}
	}
	|	{fprintf(target_file, "L%d:\n", start);}
	;

ClassDefList : ClassDefList ClassDef
	| ClassDef
	;

ClassDef : Cname '{' DECL Fieldlists MethodDecl ENDDECL MethodDefns '}'	{
		struct Fieldlist *Ftemp=Fhead;
		struct Memberfunclist *Mtemp=Mhead;

		count=0;
		while(Ftemp!=NULL){
			Ftemp->fieldIndex=count++;
			if(Ftemp->type==NULL)
				count++;
			Ftemp=Ftemp->next;
		}
		classType->Fieldcount=count;
		classType->Memberfield=Fhead;

		count=0;
		while(Mtemp!=NULL){
			Mtemp->Funcposition=count++;
			Mtemp=Mtemp->next;
		}
		classType->Methodcount=count;
		classType->Vfuncptr=Mhead;

		classType=NULL;
		Fhead=Ftail=NULL;
		Mhead=Mtail=NULL;
	}
	;

Cname : ID	{
		CInstall($1->name, NULL);
		classType=CLookup($1->name);
	}
	| ID EXTENDS ID	{
		CInstall($1->name, $3->name);
		classType=CLookup($1->name);
	}
	;

Fieldlists : Fieldlists Fld
	| Fld
	;

Fld : Type ID ';'	{
		if(declType!=NULL)
			Class_FInstall(classType, declType->name, $2->name);
		else if(declClass!=NULL)
			Class_FInstall(classType, declClass->name, $2->name);
		else{
			printf("Unknown type\n");
			exit(1);
		}
	}
	;

MethodDecl : MethodDecl MDecl
	| MDecl
	;

MDecl : Type ID '(' ParamList ')' ';'	{
		if(declType!=NULL)
			Class_MInstall(classType, $2->name, declType, Phead);
		else{
			printf("Unknown type\n");
			exit(1);
		}
		Phead=Ptail=NULL;
	}
	| Type ID '(' ')' ';'	{
		if(declType!=NULL)
			Class_MInstall(classType, $2->name, declType, NULL);
		else{
			printf("Unknown type\n");
			exit(1);
		}
	}
	;

MethodDefns : MethodDefns FDef
	| FDef
	;

GDeclBlock : DECL GDeclList ENDDECL	{
			evaluate();
			binding=1;
		}
	| DECL ENDDECL			{
			evaluate();
			binding=1;
		}
	;

GDeclList : GDeclList GDecl
	| GDecl
	;

GDecl : Type GidList ';'
	;

Type : INT 	{declType=TLookup("integer");}
	| STR	{declType=TLookup("string");}
	| ID	{
			declType=TLookup($1->name);
			declClass=CLookup($1->name);
			if(declType==NULL && declClass==NULL){
				printf("Unknown type: %s\n", $1->name);
				exit(1);
			}
		}
	;

GidList : GidList ',' Gid
	| Gid
	;

Gid : ID				{GInstall($1->name, declType, declClass, 1, 1, NODE_ID, NULL);}
	| ID '[' NUM ']'		{GInstall($1->name, declType, NULL, $3->value.intval, 1, NODE_ARRAY, NULL);}
	| ID '[' NUM ']' '[' NUM ']'	{GInstall($1->name, declType, NULL, $3->value.intval, $6->value.intval, NODE_MATRIX, NULL);}
	| MUL ID			{GInstall($2->name, declType, NULL, 1, 1, NODE_PTR, NULL);}
	| ID '(' ParamList ')'		{
						GInstall($1->name, declType, NULL, 0, 0, NODE_FUNC, Phead);
						Phead=Ptail=NULL;
					}
	| MUL ID '(' ParamList ')'	{
						GInstall($2->name, declType, NULL, 0, 0, NODE_FUNC, Phead);	
						Phead=Ptail=NULL;
					}
	| ID '(' ')'			{GInstall($1->name, declType, NULL, 0, 0, NODE_FUNC, NULL);}
	| MUL ID '(' ')'		{GInstall($2->name, declType, NULL, 0, 0, NODE_FUNC, NULL);}
	;

FDefBlock : FDefBlock FDef
	| FDef
	;

FuncType : INT	{functype=TLookup("integer");}
	| STR	{functype=TLookup("string");}
	| ID	{
			functype=TLookup($1->name);
			if(functype==NULL){
				printf("Unknown type: %s\n", $1->name);
				exit(1);
			}
		}
	;

FDef : FuncType ID '(' ParamList ')' '{' LDeclBlock Body '}'	{
		struct Lsymbol *Ltemp;
		struct Gsymbol *Gtemp;
		struct Memberfunclist *Mtemp;
		struct Paramstruct *Ptemp1, *Ptemp2;

		if(classType==NULL){
			binding=1;

			Gtemp=GLookup($2->name);
			if(Gtemp==NULL || Gtemp->nodetype!=NODE_FUNC){
				printf("Function not declared: %s\n", $2->name);
				exit(1);
			}
			if(Gtemp->size1!=0){
				printf("Multiple Function Declaration: %s\n", $2->name);
				exit(1);
			}
			Gtemp->size1--;
			$2->Lentry=Lhead;

			Ptemp1=Phead;
			Ptemp2=Gtemp->paramlist;

			while(Ptemp1!=NULL && Ptemp2!=NULL){
				if(Ptemp1->type!=Ptemp2->type
					|| strcmp(Ptemp1->name, Ptemp2->name)
					|| Ptemp1->nodetype!=Ptemp2->nodetype){
					printf("Incorrect Parameter List\n");
					exit(1);
				}
				Ptemp1=Ptemp1->next;
				Ptemp2=Ptemp2->next;
			}

			if(Ptemp1!=NULL || Ptemp2!=NULL){
				printf("Incorrect Parameter List\n");
				exit(1);
			}

			fprintf(target_file, "F%d:\n", Gtemp->flabel);
			fprintf(target_file, "PUSH BP\n");
			fprintf(target_file, "MOV BP, SP\n");

			lcount=0;
			Ltemp=Lhead;
			while(Ltemp!=NULL){
				lcount++;
				Ltemp=Ltemp->next;
			}
			fprintf(target_file, "ADD SP, %d\n", lcount);

			codeGen($8);

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");
		}
		else{
			Mtemp=Mhead;
			while(Mtemp!=NULL){
				if(!strcmp($2->name, Mtemp->name))
					break;
				Mtemp=Mtemp->next;
			}

			if(Mtemp==NULL){
				printf("Method not declared: %s\n", $2->name);
				exit(1);
			}

			Ptemp1=Phead;
			Ptemp2=Mtemp->paramlist;

			while(Ptemp1!=NULL && Ptemp2!=NULL){
				if(Ptemp1->type!=Ptemp2->type
					|| strcmp(Ptemp1->name, Ptemp2->name)
					|| Ptemp1->nodetype!=Ptemp2->nodetype){
					printf("Incorrect Parameter List\n");
					exit(1);
				}
				Ptemp1=Ptemp1->next;
				Ptemp2=Ptemp2->next;
			}

			if(Ptemp1!=NULL || Ptemp2!=NULL){
				printf("Incorrect Parameter List\n");
				exit(1);
			}

			fprintf(target_file, "F%d:\n", Mtemp->flabel);
			fprintf(target_file, "PUSH BP\n");
			fprintf(target_file, "MOV BP, SP\n");

			lcount=0;
			Ltemp=Lhead;
			while(Ltemp!=NULL){
				lcount++;
				Ltemp=Ltemp->next;
			}
			fprintf(target_file, "ADD SP, %d\n", lcount);

			codeGen($8);

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");
		}

		lbind=1;
		Lhead=Ltail=NULL;
		Phead=Ptail=NULL;
	}
	| FuncType ID '(' ')' '{' LDeclBlock Body '}'	{
		struct Lsymbol *Ltemp;
		struct Gsymbol *Gtemp;
		struct Memberfunclist *Mtemp;

		if(classType==NULL){
			binding=1;
			Gtemp=GLookup($2->name);
			if(Gtemp==NULL || Gtemp->nodetype!=NODE_FUNC){
				printf("Function not declared: %s\n", $2->name);
				exit(1);
			}
			if(Gtemp->size1!=0){
				printf("Multiple Function Declaration: %s\n", $2->name);
				exit(1);
			}
			Gtemp->size1--;
			$2->Lentry=Lhead;

			if(Gtemp->paramlist!=NULL){
				printf("Parameter List is not NULLs\n");
				exit(1);
			}

			fprintf(target_file, "F%d:\n", Gtemp->flabel);
			fprintf(target_file, "PUSH BP\n");
			fprintf(target_file, "MOV BP, SP\n");

			lcount=0;
			Ltemp=Lhead;
			while(Ltemp!=NULL){
				lcount++;
				Ltemp=Ltemp->next;
			}
			fprintf(target_file, "ADD SP, %d\n", lcount);

			codeGen($7);

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");
		}
		else{
			Mtemp=Mhead;
			while(Mtemp!=NULL){
				if(!strcmp($2->name, Mtemp->name))
					break;
				Mtemp=Mtemp->next;
			}

			if(Mtemp==NULL){
				printf("Method not declared: %s\n", $2->name);
				exit(1);
			}

			if(Mtemp->paramlist!=NULL){
				printf("Parameter List is not NULLs\n");
				exit(1);
			}

			fprintf(target_file, "F%d:\n", Mtemp->flabel);
			fprintf(target_file, "PUSH BP\n");
			fprintf(target_file, "MOV BP, SP\n");

			lcount=0;
			Ltemp=Lhead;
			while(Ltemp!=NULL){
				lcount++;
				Ltemp=Ltemp->next;
			}
			fprintf(target_file, "ADD SP, %d\n", lcount);

			codeGen($7);

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");
		}

		lbind=1;
		Lhead=Ltail=NULL;
		Phead=Ptail=NULL;
	}
	| FuncType MUL ID '(' ParamList ')' '{' LDeclBlock Body '}'	{
			struct Lsymbol *Ltemp;
			struct Gsymbol *Gtemp;
			struct Paramstruct *Ptemp1, *Ptemp2;
			binding=1;

			Gtemp=GLookup($3->name);
			if(Gtemp==NULL || Gtemp->nodetype!=NODE_FUNC){
				printf("Function not declared: %s\n", $3->name);
				exit(1);
			}
			if(Gtemp->size1!=0){
				printf("Multiple Function Declaration: %s\n", $3->name);
				exit(1);
			}
			Gtemp->size1--;
			$3->Lentry=Lhead;

			Ptemp1=Phead;
			Ptemp2=Gtemp->paramlist;

			while(Ptemp1!=NULL && Ptemp2!=NULL){
				if(Ptemp1->type!=Ptemp2->type || strcmp(Ptemp1->name, Ptemp2->name) || Ptemp1->nodetype!=Ptemp2->nodetype){
					printf("Incorrect Parameter List\n");
					exit(1);
				}
				Ptemp1=Ptemp1->next;
				Ptemp2=Ptemp2->next;
			}

			if(Ptemp1!=NULL || Ptemp2!=NULL){
				printf("Incorrect Parameter List\n");
				exit(1);
			}

			fprintf(target_file, "F%d:\n", Gtemp->flabel);
			fprintf(target_file, "PUSH BP\n");
			fprintf(target_file, "MOV BP, SP\n");

			lcount=0;
			Ltemp=Lhead;
			while(Ltemp!=NULL){
				lcount++;
				Ltemp=Ltemp->next;
			}
			fprintf(target_file, "ADD SP, %d\n", lcount);

			codeGen($9);

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");

			lbind=1;
			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
	| FuncType MUL ID '(' ')' '{' LDeclBlock Body '}'	{
			struct Lsymbol *Ltemp;
			struct Gsymbol *Gtemp;
			binding=1;

			Gtemp=GLookup($3->name);
			if(Gtemp==NULL || Gtemp->nodetype!=NODE_FUNC){
				printf("Function not declared: %s\n", $3->name);
				exit(1);
			}
			if(Gtemp->size1!=0){
				printf("Multiple Function Declaration: %s\n", $3->name);
				exit(1);
			}
			Gtemp->size1--;
			$3->Lentry=Lhead;

			if(Gtemp->paramlist!=NULL){
				printf("Parameter List is not NULLs\n");
				exit(1);
			}

			fprintf(target_file, "F%d:\n", Gtemp->flabel);
			fprintf(target_file, "PUSH BP\n");
			fprintf(target_file, "MOV BP, SP\n");

			lcount=0;
			Ltemp=Lhead;
			while(Ltemp!=NULL){
				lcount++;
				Ltemp=Ltemp->next;
			}
			fprintf(target_file, "ADD SP, %d\n", lcount);

			codeGen($8);

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");

			lbind=1;
			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
	;
ParamList : ParamList ',' Param
	| Param
	;

Param : PType ID	{
			struct Paramstruct *Ptemp;
			Ptemp=PLookup($2->name);
			if(Ptemp!=NULL){
				printf("Multiple variable declaration: %s\n", $2->name);
				exit(1);
			}
			PInstall($2->name, PdeclType, NODE_ID);
		}
	| PType MUL ID	{
			struct Paramstruct *Ptemp;
			Ptemp=PLookup($3->name);
			if(Ptemp!=NULL){
				printf("Multiple variable declaration: %s\n", $3->name);
				exit(1);
			}
			PInstall($3->name, PdeclType, NODE_PTR);
		}
	;

PType : INT 	{PdeclType=TLookup("integer");}
	| STR	{PdeclType=TLookup("string");}
	| ID	{
			PdeclType=TLookup($1->name);
			if(PdeclType==NULL){
				printf("Unknown type: %s", $1->name);
				exit(1);
			}
		}
	;

LDeclBlock : DECL LDeclList ENDDECL
	|
	;

LDeclList : LDeclList LDecl
	| 
	;

LDecl : Type IdList ';'
	;

IdList : IdList ',' ID		{LInstall($3->name, declType, NODE_ID);}
	| IdList ',' MUL ID	{LInstall($4->name, declType, NODE_PTR);}
	| ID			{LInstall($1->name, declType, NODE_ID);}
	| MUL ID		{LInstall($2->name, declType, NODE_PTR);}
	;

MainBlock : FuncType MAIN '(' ')' '{' LDeclBlock Body '}'	{
			struct Lsymbol *Ltemp;
			struct Gsymbol *Gtemp;
			binding=1;

			if(functype!=TLookup("integer")){
				printf("Main function should return INT\n");
			}

			Gtemp=Ghead;
			while(Gtemp!=NULL){
				if(Gtemp->size1==0){
					printf("Function not declared: %s\n", Gtemp->name);
					exit(1);
				}
				Gtemp=Gtemp->next;
			}

			fprintf(target_file, "MAIN:\n");
			fprintf(target_file, "PUSH BP\n");
			fprintf(target_file, "MOV BP, SP\n");

			lcount=0;
			Ltemp=Lhead;
			while(Ltemp!=NULL){
				lcount++;
				Ltemp=Ltemp->next;
			}
			fprintf(target_file, "ADD SP, %d\n", lcount);

			codeGen($7);

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");

			lbind=1;
			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
	;

Body : START Slist RetStmt END	{$$=createTree(TLookup("void"), NODE_CONN, NULL, NULL, NULL, $2, $3, NULL);}
	| START RetStmt END	{$$=createTree(TLookup("void"), NODE_CONN, NULL, NULL, NULL, $2, NULL, NULL);}
	;

Slist :	Slist Stmt	{$$=createTree(TLookup("void"), NODE_CONN, NULL, NULL, NULL, $1, $2, NULL);}
	| Stmt		{$$=$1;}
	;

Stmt :	InputStmt | OutputStmt | AsgStmt | IfStmt | WhileStmt	{$$=$1;}
	| BREAK ';'	{$$=createTree(TLookup("void"), NODE_BREAK, NULL, NULL, NULL, NULL, NULL, NULL);}
	| CONTINUE ';'	{$$=createTree(TLookup("void"), NODE_CONTINUE, NULL, NULL, NULL, NULL, NULL, NULL);}
	| BRKP ';'	{$$=createTree(TLookup("void"), NODE_BRKP, NULL, NULL, NULL, NULL, NULL, NULL);}
	;

InputStmt : READ '(' ID ')' ';'	{
				idCheck($3, NODE_ID);
				$$=createTree(TLookup("void"), NODE_READ, NULL, NULL, NULL, $3, NULL, NULL);
			}
	| READ '(' ID '[' Expr ']' ')' ';'	{
				idCheck($3, NODE_ARRAY);
				typeCheck($5->type, TLookup("integer"), NODE_ARRAY);
				$$=createTree(TLookup("void"), NODE_READ_ARRAY, NULL, NULL, NULL, $3, $5, NULL);
			}
	| READ '(' ID '[' Expr ']' '[' Expr ']' ')' ';'	{
				idCheck($3, NODE_MATRIX);
				typeCheck($5->type, $8->type, NODE_MATRIX);
				$$=createTree(TLookup("void"), NODE_READ_MATRIX, NULL, NULL, NULL, $3, $5, $8);
			}
	| READ '(' MUL ID ')' ';'	{
				idCheck($4, NODE_PTR);
				$$=createTree(TLookup("void"), NODE_READ_PTR, NULL, NULL, NULL, $4, NULL, NULL);
			}
	| READ '(' Field ')' ';'	{
				typeCheck($3->type, TLookup("type"), NODE_FIELD);
				$$=createTree(TLookup("void"), NODE_READ_TYPE, NULL, NULL, NULL, $3, NULL, NULL);
			}
	;

OutputStmt : WRITE '(' Expr ')' ';'	{$$=createTree(TLookup("void"), NODE_WRITE, NULL, NULL, NULL, $3, NULL, NULL);}
	;

AsgStmt : ID ASSIGN Expr ';' {
				idCheck($1, NODE_ID);
				typeCheck($1->type, $3->type, NODE_ASSIGN);
				$$=createTree(TLookup("void"), NODE_ASSIGN, NULL, NULL, NULL, $1, $3, NULL); 
			}
	| ID '[' Expr ']' ASSIGN Expr ';'	{
				idCheck($1, NODE_ARRAY);
				typeCheck($3->type, TLookup("void"), NODE_ARRAY);
				typeCheck($1->type, $6->type, NODE_ASSIGN);
				$$=createTree(TLookup("void"), NODE_ASSIGN_ARRAY, NULL, NULL, NULL, $1, $3, $6);
			}
	| ID '[' Expr ']' '[' Expr ']' ASSIGN Expr ';'	{
				idCheck($1, NODE_MATRIX);
				typeCheck($3->type, $6->type, NODE_MATRIX);
				typeCheck($1->type, $9->type, NODE_ASSIGN);
				$$=createTree(TLookup("void"), NODE_ASSIGN_MATRIX, NULL, NULL, NULL, $1,
					createTree(TLookup("void"), NODE_CONN, NULL, NULL, NULL, $3, $6, NULL), $9);
			}
	| MUL ID ASSIGN Expr ';'	{
				idCheck($2, NODE_PTR);
				typeCheck($2->type, $4->type, NODE_ASSIGN);
				$$=createTree(TLookup("void"), NODE_ASSIGN_PTR, NULL, NULL, NULL, $2, $4, NULL);
			}
	| Field ASSIGN Expr ';'	{
				typeCheck($1->type, $3->type, NODE_ASSIGN);
				$$=createTree(TLookup("void"), NODE_ASSIGN_FIELD, NULL, NULL, NULL, $1, $3, NULL);
			}
	| ID ASSIGN INIT '(' ')' ';'	{
				idCheck($1, NODE_ID);
				typeCheck($1->type, TLookup("integer"), NODE_ASSIGN);
				$$=createTree(TLookup("void"), NODE_ASSIGN, NULL, NULL, NULL, $1,
					createTree(TLookup("integer"), NODE_INIT, NULL, NULL, NULL, NULL, NULL, NULL), NULL);
			}
	| ID ASSIGN ALLOC '(' ')' ';'	{
				typeCheck($1->type, TLookup("type"), NODE_ALLOC);
				$$=createTree(TLookup("void"), NODE_ASSIGN, NULL, NULL, NULL, $1,
					createTree(TLookup("type"), NODE_ALLOC, NULL, NULL, NULL, NULL, NULL, NULL), NULL);
			}
	| Field ASSIGN ALLOC '(' ')' ';'	{
				typeCheck($1->type, TLookup("type"), NODE_ALLOC);
				$$=createTree(TLookup("void"), NODE_ASSIGN_FIELD, NULL, NULL, NULL, $1,
					createTree(TLookup("type"), NODE_ALLOC, NULL, NULL, NULL, NULL, NULL, NULL), NULL);
			}
	| FREE '(' ID ')' ';'	{
				typeCheck($3->type, TLookup("type"), NODE_FREE);
				$$=createTree(TLookup("void"), NODE_FREE, NULL, NULL, NULL, $3, NULL, NULL);
			}
	| FREE '(' Field ')' ';'	{
				typeCheck($3->type, TLookup("type"), NODE_FREE);
				$$=createTree(TLookup("void"), NODE_FREE, NULL, NULL, NULL, $3, NULL, NULL);
			}
	| ID ASSIGN NEW '(' ID ')' ';'	{
				typeCheck($1->type, NULL, NODE_NEW);
				$$=createTree(TLookup("void"), NODE_ASSIGN, NULL, NULL, NULL, $1,
					createTree(NULL, NODE_ALLOC, NULL, NULL, NULL, NULL, NULL, NULL), $5);
			}
	| Field ASSIGN NEW '(' ID ')' ';'	{
				typeCheck($1->type, NULL, NODE_NEW);
				$$=createTree(TLookup("void"), NODE_ASSIGN_FIELD, NULL, NULL, NULL, $1,
					createTree(NULL, NODE_ALLOC, NULL, NULL, NULL, NULL, NULL, NULL), $5);
			}
	| DELETE '(' ID ')' ';'	{
				typeCheck($3->type, NULL, NODE_FREE);
				$$=createTree(TLookup("void"), NODE_FREE, NULL, NULL, NULL, $3, NULL, NULL);
			}
	| DELETE '(' Field ')' ';'	{
				typeCheck($3->type, NULL, NODE_FREE);
				$$=createTree(TLookup("void"), NODE_FREE, NULL, NULL, NULL, $3, NULL, NULL);
			}
	;

IfStmt : IF '(' Expr ')' THEN Slist ELSE Slist ENDIF ';'{$$=createTree(TLookup("void"), NODE_ELIF, NULL, NULL, NULL, $3, $6, $8);}
	| IF '(' Expr ')' THEN Slist ENDIF ';'		{$$=createTree(TLookup("void"), NODE_IF, NULL, NULL, NULL, $3, $6, NULL);}
	;

WhileStmt : WHILE '(' Expr ')' DO Slist ENDWHILE ';'	{$$=createTree(TLookup("void"), NODE_WHILE, NULL, NULL, NULL, $3, $6, NULL);}
	| DO Slist WHILE '(' Expr ')' ';'	{$$=createTree(TLookup("void"), NODE_DO_WHILE, NULL, NULL, NULL, $2, $5, NULL);}
	| REPEAT Slist UNTIL '(' Expr ')' ';'	{$$=createTree(TLookup("void"), NODE_REPEAT, NULL, NULL, NULL, $2, $5, NULL);}
	;

Field : Field '.' ID	{
				struct Fieldlist *Ftemp=FLookup($1->type, $3->name);
				if(Ftemp==NULL){
					printf("Unknown identifier in FIELD: %s\n", $3->name);
					exit(1);
				}
				tptr=createTree(TLookup("void"), NODE_FIELD, NULL, NULL, NULL, NULL, $3, NULL);
				tptr1=$1;
				while(tptr1->ptr3!=NULL)
					tptr1=tptr1->ptr3;
				tptr1->ptr3=tptr;
				$$=$1;
				$$->type=Ftemp->type;
			}
	| ID '.' ID	{
				struct Fieldlist *Ftemp=FLookup($1->type, $3->name);
				if(Ftemp==NULL){
					printf("Unknown identifier in FIELD: %s\n", $3->name);
					exit(1);
				}
				$$=createTree(Ftemp->type, NODE_FIELD, NULL, NULL, NULL, $1, $3, NULL);
			}
	| SELF '.' ID	{
				struct Fieldlist *Ftemp;
				if(classType==NULL){
					printf("self can be used only inside class\n");
					exit(1);
				}
				Ftemp=Fhead;
				while(Ftemp!=NULL){
					if(!strcmp(Ftemp->name, $3->name))
						break;
					Ftemp=Ftemp->next;
				}
				if(Ftemp==NULL){
					printf("Unknown MemberField: %s\n", $3->name);
					exit(1);
				}
				$$=createTree(Ftemp->type, NODE_FIELD, NULL, NULL, NULL, NULL, $3, NULL);
			}
	;

FieldFunction : ID '.' ID '(' ArgList ')'	{
			struct Gsymbol *Gtemp;
			struct Memberfunclist *Mtemp;
			Gtemp=GLookup($1->name);
			if(Gtemp==NULL){
				printf("Unknown identifier: %s\n", $1->name);
				exit(1);
			}
			Mtemp=Class_MLookup(Gtemp->cptr, $3->name);
			if(Mtemp==NULL){
				printf("Unknown Member Function: %s\n", $3->name);
				exit(1);
			}
			$$=createTree(Mtemp->type, NODE_FUNC_CLASS, NULL, NULL, $5, $1, $3, NULL);
		}
	| ID '.' ID '(' ')'	{
			struct Gsymbol *Gtemp;
			struct Memberfunclist *Mtemp;
			Gtemp=GLookup($1->name);
			if(Gtemp==NULL){
				printf("Unknown identifier: %s\n", $1->name);
				exit(1);
			}
			Mtemp=Class_MLookup(Gtemp->cptr, $3->name);
			if(Mtemp==NULL){
				printf("Unknown Member Function: %s\n", $3->name);
				exit(1);
			}
			$$=createTree(Mtemp->type, NODE_FUNC_CLASS, NULL, NULL, NULL, $1, $3, NULL);
		}
	| SELF '.' ID '(' ArgList ')'	{
			struct Memberfunclist *Mtemp=Mhead;
			while(Mtemp!=NULL){
				if(!strcmp(Mtemp->name, $3->name))
					break;
				Mtemp=Mtemp->next;
			}
			if(Mtemp==NULL){
				printf("Unknown Member Function: %s\n", $3->name);
				exit(1);
			}
			$$=createTree(Mtemp->type, NODE_FUNC_CLASS2, NULL, NULL, $5, NULL, $3, NULL);
		}
	| SELF '.' ID  '(' ')'	{
			struct Memberfunclist *Mtemp=Mhead;
			while(Mtemp!=NULL){
				if(!strcmp(Mtemp->name, $3->name))
					break;
				Mtemp=Mtemp->next;
			}
			if(Mtemp==NULL){
				printf("Unknown Member Function: %s\n", $3->name);
				exit(1);
			}
			$$=createTree(Mtemp->type, NODE_FUNC_CLASS2, NULL, NULL, NULL, NULL, $3, NULL);
		}
	| Field '.' ID '(' ArgList ')'	{
			struct Fieldlist *Ftemp=Fhead;
			struct Memberfunclist *Mtemp;
			while(Ftemp!=NULL){
				if(!strcmp(Ftemp->name, $1->ptr2->name))
					break;
				Ftemp=Ftemp->next;
			}
			if(Ftemp==NULL){
				printf("Unknown Member Field: %s\n", $1->ptr2->name);
				exit(1);
			}
			Mtemp=Class_MLookup(Ftemp->Ctype, $3->name);
			if(Mtemp==NULL){
				printf("Unknown Member Function: %s\n", $3->name);
				exit(1);
			}
			$$=createTree(Mtemp->type, NODE_FUNC_CLASS3, NULL, NULL, $5, NULL, $1->ptr2, $3);
		}
	| Field '.' ID '(' ')'	{
			struct Fieldlist *Ftemp=Fhead;
			struct Memberfunclist *Mtemp;
			while(Ftemp!=NULL){
				if(!strcmp(Ftemp->name, $1->ptr2->name))
					break;
				Ftemp=Ftemp->next;
			}
			if(Ftemp==NULL){
				printf("Unknown Member Field: %s\n", $1->ptr2->name);
				exit(1);
			}
			Mtemp=Class_MLookup(Ftemp->Ctype, $3->name);
			if(Mtemp==NULL){
				printf("Unknown Member Function: %s\n", $3->name);
				exit(1);
			}
			$$=createTree(Mtemp->type, NODE_FUNC_CLASS3, NULL, NULL, NULL, NULL, $1->ptr2, $3);
		}
	;

Expr : 	Expr PLUS Expr 	{
				typeCheck($1->type, $3->type, NODE_PLUS);
				$$=createTree(TLookup("integer"), NODE_PLUS, NULL, NULL, NULL, $1, $3, NULL);
			}
	| Expr MINUS Expr 	{
				typeCheck($1->type, $3->type, NODE_MINUS);
				$$=createTree(TLookup("integer"), NODE_MINUS, NULL, NULL, NULL, $1, $3, NULL);
			}
	| Expr MUL Expr 	{
				typeCheck($1->type, $3->type, NODE_MUL);
				$$=createTree(TLookup("integer"), NODE_MUL, NULL, NULL, NULL, $1, $3, NULL);
			}
	| Expr DIV Expr 	{
				typeCheck($1->type, $3->type, NODE_DIV);
				$$=createTree(TLookup("integer"), NODE_DIV, NULL, NULL, NULL, $1, $3, NULL);
			}
	| Expr MOD Expr	{
				typeCheck($1->type, $3->type, NODE_MOD);
				$$=createTree(TLookup("integer"), NODE_MOD, NULL, NULL, NULL, $1, $3, NULL);
			}
	| Expr LT Expr	{
				typeCheck($1->type, $3->type, NODE_LT);
				$$=createTree(TLookup("boolean"), NODE_LT, NULL, NULL, NULL, $1, $3, NULL);
			}
	| Expr GT Expr	{
				typeCheck($1->type, $3->type, NODE_GT);
				$$=createTree(TLookup("boolean"), NODE_GT, NULL, NULL, NULL, $1, $3, NULL);
			}
	| Expr LE Expr	{
				typeCheck($1->type, $3->type, NODE_LE);
				$$=createTree(TLookup("boolean"), NODE_LE, NULL, NULL, NULL, $1, $3, NULL);
			}
	| Expr GE Expr	{
				typeCheck($1->type, $3->type, NODE_GE);
				$$=createTree(TLookup("boolean"), NODE_GE, NULL, NULL, NULL, $1, $3, NULL);
			}
	| Expr NE Expr	{
				typeCheck($1->type, $3->type, NODE_NE);
				$$=createTree(TLookup("boolean"), NODE_NE, NULL, NULL, NULL, $1, $3, NULL);
			}
	| Expr EQ Expr	{
				typeCheck($1->type, $3->type, NODE_EQ);
				$$=createTree(TLookup("boolean"), NODE_EQ, NULL, NULL, NULL, $1, $3, NULL);
			}
	| Expr AND Expr	{
				typeCheck($1->type, $3->type, NODE_AND);
				$$=createTree(TLookup("boolean"), NODE_AND, NULL, NULL, NULL, $1, $3, NULL);
			}
	| Expr OR Expr	{
				typeCheck($1->type, $3->type, NODE_OR);
				$$=createTree(TLookup("boolean"), NODE_OR, NULL, NULL, NULL, $1, $3, NULL);
			}
	| NOT Expr	{
				typeCheck($2->type, TLookup("integer"), NODE_NOT);
				$$=createTree(TLookup("boolean"), NODE_NOT, NULL, NULL, NULL, $2, NULL, NULL);
			}
	| MINUS Expr	{
				typeCheck(TLookup("integer"), $2->type, NODE_MINUS);
				$$=createTree(TLookup("boolean"), NODE_NEG, NULL, NULL, NULL, $2, NULL, NULL);
			}
	| '(' Expr ')' 	{$$=$2;}
	| NUM		{$$=$1;}
	| STRVAL	{$$=$1;}
	| NIL		{$$=createTree(TLookup("type"), NODE_NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
	| Field		{$$=$1;}
	| FieldFunction
	| ID		{
				idCheck($1, NODE_ID);
				$$=$1;
			}
	| ID '[' Expr ']'	{
				idCheck($1, NODE_ARRAY);
				typeCheck($3->type, 0, NODE_ARRAY);
				$$=createTree($1->type, NODE_ARRAY, NULL, NULL, NULL, $1, $3, NULL);
			}
	| ID '[' Expr ']' '[' Expr ']'	{
				idCheck($1, NODE_MATRIX);
				typeCheck($3->type, $6->type, NODE_MATRIX);
				$$=createTree($1->type, NODE_MATRIX, NULL, NULL, NULL, $1, $3, $6);
			}
	| MUL ID	{
				idCheck($2, NODE_PTR);
				$$=createTree($2->type, NODE_PTR, NULL, NULL, NULL, $2, NULL, NULL);
			}
	| '&' ID	{$$=createTree(TLookup("integer"), NODE_REF, NULL, NULL, NULL, $2, NULL, NULL);}
	| '&' ID '[' Expr ']'	{
				idCheck($2, NODE_REF_ARRAY);
				typeCheck($4->type, TLookup("integer"), NODE_ARRAY);
				$$=createTree(TLookup("integer"), NODE_REF_ARRAY, NULL, NULL, NULL, $2, $4, NULL);
			}
	| '&' ID '[' Expr ']' '[' Expr ']'	{
				idCheck($2, NODE_REF_MATRIX);
				typeCheck($4->type, $7->type, NODE_MATRIX);
				$$=createTree(TLookup("integer"), NODE_REF_MATRIX, NULL, NULL, NULL, $2, $4, $7);
			}
	| ID '(' ArgList ')'	{
				struct Gsymbol *Gtemp;
				idCheck($1, NODE_FUNC);
				Gtemp=GLookup($1->name);
				$$=createTree($1->type, NODE_FUNC, NULL, NULL, $3, $1, $3, NULL);
			}
	| ID '(' ')'	{
				struct Gsymbol *Gtemp;
				idCheck($1, NODE_FUNC);
				Gtemp=GLookup($1->name);
				if(Gtemp->paramlist!=NULL){
					printf("Parameter List is not NULL: %s\n", $1->name);
					exit(1);
				}
				$$=createTree($1->type, NODE_FUNC, NULL, NULL, NULL, $1, NULL, NULL);
			}
	;

ArgList : ArgList ',' Expr	{$$=createTree($3->type, NODE_ARG, NULL, NULL, NULL, $3, $1, NULL);}
	| Expr			{$$=createTree($1->type, NODE_ARG, NULL, NULL, NULL, $1, NULL, NULL);}
	;

RetStmt : RETURN Expr ';'	{
				typeCheck($2->type, functype, NODE_ASSIGN);
				$$=createTree($2->type, NODE_RET, NULL, NULL, NULL, $2, NULL, NULL);
			}
	;

%%

void yyerror(char const *s){
	printf("yyerror %s\n",s);
}

int main(int argc, char* argv[]){
	TypeTableCreate();
	if(argc>1){
		fp=fopen(argv[1], "r");
		if(fp)
			yyin=fp;
	}
	target_file=fopen("exprtree.xsm","w");
	start=getLabel();
	fprintf(target_file, "0\n2056\n0\n0\n0\n0\n0\n0\n");
	fprintf(target_file, "JMP L%d\n", start);
	yyparse();
	return 0;
}
