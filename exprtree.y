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

%token ID NUM STRVAL START END READ WRITE ASSIGN DECL ENDDECL INT STR BRKP
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE REPEAT UNTIL
%token PLUS MINUS MUL DIV MOD LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV MOD
%nonassoc LT GT LE GE NE EQ

%%

program : Declarations Body	{print($2);}
	;

Declarations : DECL DeclList ENDDECL	
	| DECL ENDDECL
	;

DeclList : DeclList Decl
	| Decl
	;

Decl : Type VarList ';'
	;

Type : INT 	{declType=inttype;}
	| STR	{declType=strtype;}
	;

VarList : VarList ',' ID				{Install($3->varname, declType, 1, 1, NODE_ID);}
	| VarList ',' ID '[' NUM ']'			{Install($3->varname, declType, $5->val, 1, NODE_ARRAY);}
	| VarList ',' ID '[' NUM ']' '[' NUM ']'	{Install($3->varname, declType, $5->val, $8->val, NODE_MATRIX);}
	| VarList ',' MUL ID				{Install($4->varname, declType, 1, 1, NODE_PTR);}
	| ID						{Install($1->varname, declType, 1, 1, NODE_ID);}
	| ID '[' NUM ']'				{Install($1->varname, declType, $3->val, 1, NODE_ARRAY);}
	| ID '[' NUM ']' '[' NUM ']'			{Install($1->varname, declType, $3->val, $6->val, NODE_MATRIX);}
	| MUL ID					{Install($2->varname, declType, 1, 1, NODE_PTR);}
	;

Body	: START Slist END	{$$=$2;}
	| START END		{$$=NULL;}
	;

Slist :	Slist Stmt	{$$=createTree(0, 0, NULL, NODE_CONN, $1, $2, NULL);}
	| Stmt		{$$=$1;}
	;

Stmt :	InputStmt | OutputStmt | AsgStmt | IfStmt | WhileStmt	{$$=$1;}
	| BREAK ';'	{$$=createTree(0, 0, NULL, NODE_BREAK, NULL, NULL, NULL);}
	| CONTINUE ';'	{$$=createTree(0, 0, NULL, NODE_CONTINUE, NULL, NULL, NULL);}
	| BRKP ';'	{$$=createTree(0, 0, NULL, NODE_BRKP, NULL, NULL, NULL);}
	;

InputStmt : READ '(' ID ')' ';'		{
				idCheck($3->Gentry, NODE_ID);
				$$=createTree(0, 0, NULL, NODE_READ, $3, NULL, NULL);
			}
	| READ '(' ID '[' Expr ']' ')' ';'	{
				idCheck($3->Gentry, NODE_ARRAY);
				typeCheck($5->type, 0, NODE_ARRAY);
				$$=createTree(0, 0, NULL, NODE_READ_ARRAY, $3, $5, NULL);
			}
	| READ '(' ID '[' Expr ']' '[' Expr ']' ')' ';'	{
				idCheck($3->Gentry, NODE_MATRIX);
				typeCheck($5->type, $8->type, NODE_MATRIX);
				$$=createTree(0, 0, NULL, NODE_READ_MATRIX, $3, $5, $8);
			}
	| READ '(' MUL ID ')' ';'		{
				idCheck($4->Gentry, NODE_PTR);
				$$=createTree(0, 0, NULL, NODE_READ_PTR, $4, NULL, NULL);
			}
	;

OutputStmt : WRITE '(' Expr ')' ';'	{$$=createTree(0, 0, NULL,  NODE_WRITE, $3, NULL, NULL);}
	;

AsgStmt : ID ASSIGN Expr ';' {
				idCheck($1->Gentry, NODE_ID);
				typeCheck($1->type, $3->type, NODE_ASSIGN);
				$$=createTree(0, 0, NULL, NODE_ASSIGN, $1, $3, NULL);
				$$->type=$1->type;
			}
	| ID '[' Expr ']' ASSIGN Expr ';'	{
				idCheck($1->Gentry, NODE_ARRAY);
				typeCheck($3->type, 0, NODE_ARRAY);
				typeCheck($1->type, $6->type, NODE_ASSIGN);
				$$=createTree(0, 0, NULL, NODE_ASSIGN_ARRAY, $1, $3, $6);
				$$->type=$1->type;
	}
	| ID '[' Expr ']' '[' Expr ']' ASSIGN Expr ';'	{
				idCheck($1->Gentry, NODE_MATRIX);
				typeCheck($3->type, $6->type, NODE_MATRIX);
				typeCheck($1->type, $9->type, NODE_ASSIGN);
				$$=createTree(0, 0, NULL, NODE_ASSIGN_MATRIX, $1, createTree(0, 0, NULL, NODE_CONN, $3, $6, NULL),$9);
				$$->type=$1->type;
	}
	| ID ASSIGN '&' ID ';' {
				idCheck($1->Gentry, NODE_PTR);
				typeCheck($1->type, $4->type, NODE_ASSIGN);
				$$=createTree(0, 0, NULL, NODE_ASSIGN_PTR, $1, $4, NULL);
				$$->type=$1->type;
			}
	| MUL ID ASSIGN Expr ';'	{
				idCheck($2->Gentry, NODE_PTR);
				typeCheck($2->type, $4->type, NODE_ASSIGN);
				$$=createTree(0, 0, NULL, NODE_ASSIGN_PTR2, $2, $4, NULL);
				$$->type=$2->type;
	}
	;

IfStmt : IF '(' Expr ')' THEN Slist ELSE Slist ENDIF ';'	{$$=createTree(0, 0, NULL, NODE_ELIF, $3, $6, $8);}
	| IF '(' Expr ')' THEN Slist ENDIF ';'		{$$=createTree(0, 0, NULL, NODE_IF, $3, $6, NULL);}
	;

WhileStmt : WHILE '(' Expr ')' DO Slist ENDWHILE ';'	{$$=createTree(0, 0, NULL, NODE_WHILE, $3, $6, NULL);}
	| DO Slist WHILE '(' Expr ')' ';'			{$$=createTree(0, 0, NULL, NODE_DO_WHILE, $2, $5, NULL);}
	| REPEAT Slist UNTIL '(' Expr ')' ';'		{$$=createTree(0, 0, NULL, NODE_REPEAT, $2, $5, NULL);}
	;

Expr : 	Expr PLUS Expr 	{
				typeCheck($1->type, $3->type, NODE_PLUS);
				$$=createTree(0, inttype, NULL, NODE_PLUS, $1, $3, NULL);
			}
	| Expr MINUS Expr 	{
				typeCheck($1->type, $3->type, NODE_MINUS);
				$$=createTree(0, inttype, NULL, NODE_MINUS, $1, $3, NULL);
			}
	| Expr MUL Expr 	{
				typeCheck($1->type, $3->type, NODE_MUL);
				$$=createTree(0, inttype, NULL, NODE_MUL, $1, $3, NULL);
			}
	| Expr DIV Expr 	{
				typeCheck($1->type, $3->type, NODE_DIV);
				$$=createTree(0, inttype, NULL, NODE_DIV, $1, $3, NULL);
			}
	| Expr MOD Expr	{
				typeCheck($1->type, $3->type, NODE_MOD);
				$$=createTree(0, inttype, NULL, NODE_MOD, $1, $3, NULL);
			}
	| Expr LT Expr	{
				typeCheck($1->type, $3->type, NODE_LT);
				$$=createTree(0, booltype, NULL, NODE_LT, $1, $3, NULL);
			}
	| Expr GT Expr	{
				typeCheck($1->type, $3->type, NODE_GT);
				$$=createTree(0, booltype, NULL, NODE_GT, $1, $3, NULL);
			}
	| Expr LE Expr	{
				typeCheck($1->type, $3->type, NODE_LE);
				$$=createTree(0, booltype, NULL, NODE_LE, $1, $3, NULL);
			}
	| Expr GE Expr	{
				typeCheck($1->type, $3->type, NODE_GE);
				$$=createTree(0, booltype, NULL, NODE_GE, $1, $3, NULL);
			}
	| Expr NE Expr	{
				typeCheck($1->type, $3->type, NODE_NE);
				$$=createTree(0, booltype, NULL, NODE_NE, $1, $3, NULL);
			}
	| Expr EQ Expr	{
				typeCheck($1->type, $3->type, NODE_EQ);
				$$=createTree(0, booltype, NULL, NODE_EQ, $1, $3, NULL);
			}
	| '(' Expr ')' 	{$$=$2;}
	| NUM		{$$=$1;}
	| STRVAL	{$$=$1;}
	| ID		{
				idCheck($1->Gentry, NODE_ID);
				$$=$1;
			}
	| ID '[' Expr ']'	{
				idCheck($1->Gentry, NODE_ARRAY);
				typeCheck($3->type, 0, NODE_ARRAY);
				$$=createTree(0, inttype, NULL, NODE_ARRAY, $1, $3, NULL);
			}
	| ID '[' Expr ']' '[' Expr ']'	{
				idCheck($1->Gentry, NODE_MATRIX);
				typeCheck($3->type, $6->type, NODE_MATRIX);
				$$=createTree(0, inttype, NULL, NODE_MATRIX, $1, $3, $6);
			}
	| MUL ID	{
				idCheck($2->Gentry, NODE_PTR);
				$$=createTree(0, inttype, NULL, NODE_PTR, $2, NULL, NULL);
			}
	;

%%

void yyerror(char const *s){
	printf("yyerror %s\n",s);
}

int main(int argc, char* argv[]){
	Ghead=Gtail=NULL;
	lHead=NULL;
	reg=label=-1;
	declType=inttype;
	bind=4096;
	if(argc>1){
		fp=fopen(argv[1], "r");
		if(fp)
			yyin=fp;
	}
	target_file=fopen("exprtree.xsm","w");
	yyparse();
	return 0;
}
