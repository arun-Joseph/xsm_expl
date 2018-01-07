%{

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	
	#define YYSTYPE tnode*
	#define reg_index int

	#include "exprtree.h"
	#include "exprtree.c"

	int yylex(void);
	extern FILE *yyin;
	
%}

%token ID NUM START END READ WRITE ASSIGN IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE;
%token PLUS MINUS MUL DIV LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV
%nonassoc LT GT LE GE NE EQ

%%

program	: START Slist END	{print($2); exit(1);}
	| START END		{print(NULL); exit(1);}
	;

Slist :	Slist Stmt	{$$=createTree(0, 0, NULL, NODE_CONN, $1, $2, NULL);}
	| Stmt		{$$=$1;}
	;

Stmt :	InputStmt | OutputStmt | AsgStmt | IfStmt | WhileStmt	{$$=$1;}
	| BREAK ';'	{$$=createTree(0, 0, NULL, NODE_BREAK, NULL, NULL, NULL);}
	| CONTINUE ';'	{$$=createTree(0, 0, NULL, NODE_CONTINUE, NULL, NULL, NULL);}
	;

InputStmt : READ '(' ID ')' ';'	{$$=createTree(0, 0, NULL, NODE_READ, $3, NULL, NULL);}
	;

OutputStmt : WRITE '(' E ')' ';'{$$=createTree(0, 0, NULL,  NODE_WRITE, $3, NULL, NULL);}
	;

AsgStmt : ID ASSIGN E ';' {
				typeCheck($1->type, $3->type);
				$$=createTree(0, 0, NULL, NODE_ASSIGN, $1, $3, NULL);
				$$->type=inttype;
			}
	;

IfStmt : IF '(' E ')' THEN Slist ELSE Slist ENDIF ';'	{$$=createTree(0, 0, NULL, NODE_ELIF, $3, $6, $8);}
	| IF '(' E ')' THEN Slist ENDIF ';'		{$$=createTree(0, 0, NULL, NODE_IF, $3, $6, NULL);}
	;

WhileStmt : WHILE '(' E ')' DO Slist ENDWHILE ';'	{$$=createTree(0, 0, NULL, NODE_WHILE, $3, $6, NULL);}
	;

E : 	E PLUS E 	{
				typeCheck($1->type, $3->type);
				$$=createTree(0, 0, NULL, NODE_PLUS, $1, $3, NULL);				
				$$->type=inttype;
			}
	| E MINUS E 	{
				typeCheck($1->type, $3->type);
				$$=createTree(0, 0, NULL, NODE_MINUS, $1, $3, NULL);				
				$$->type=inttype;
			}
	| E MUL E 	{
				typeCheck($1->type, $3->type);
				$$=createTree(0, 0, NULL, NODE_MUL, $1, $3, NULL);				
				$$->type=inttype;
			}
	| E DIV E 	{
				typeCheck($1->type, $3->type);
				$$=createTree(0, 0, NULL, NODE_DIV, $1, $3, NULL);				
				$$->type=inttype;
			}
	| E LT E	{
				typeCheck($1->type, $3->type);
				$$=createTree(0, 0, NULL, NODE_LT, $1, $3, NULL);				
				$$->type=booltype;
			}
	| E GT E	{
				typeCheck($1->type, $3->type);
				$$=createTree(0, 0, NULL, NODE_GT, $1, $3, NULL);				
				$$->type=booltype;
			}
	| E LE E	{
				typeCheck($1->type, $3->type);
				$$=createTree(0, 0, NULL, NODE_LE, $1, $3, NULL);				
				$$->type=booltype;
			}
	| E GE E	{
				typeCheck($1->type, $3->type);
				$$=createTree(0, 0, NULL, NODE_GE, $1, $3, NULL);				
				$$->type=booltype;
			}
	| E NE E	{
				typeCheck($1->type, $3->type);
				$$=createTree(0, 0, NULL, NODE_NE, $1, $3, NULL);				
				$$->type=booltype;
			}
	| E EQ E	{
				typeCheck($1->type, $3->type);
				$$=createTree(0, 0, NULL, NODE_EQ, $1, $3, NULL);				
				$$->type=booltype;
			}
	| '(' E ')' 	{$$=$2;}
	| NUM		{$$=$1;}
	| ID		{$$=$1;}
	;

%%

void yyerror(char const *s){
	printf("yyerror %s\n",s);
}

int main(int argc, char* argv[]){
	lHead=NULL;
	reg=label=-1;
	if(argc>1){
		fp=fopen(argv[1], "r");
		if(fp)
			yyin=fp;
	}
	target_file=fopen("test.xsm","w");
	yyparse();
	return 0;
}
