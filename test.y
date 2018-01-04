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

%token ID NUM START END READ WRITE ASSIGN PLUS MINUS MUL DIV
%left PLUS MINUS
%left MUL DIV

%%

program	: START Slist END	{print($2); exit(1);}
	| START END		{print(NULL); exit(1);}
	;

Slist :	Slist Stmt	{$$=createTree(0, NODE_CONN, NULL, $1, $2);}
	| Stmt		{$$=$1;}
	;

Stmt :	InputStmt | OutputStmt | AsgStmt	{$$=$1;}
	;

InputStmt : READ '(' ID ')' ';'	{$$=createTree(0, NODE_READ, NULL, $3, NULL);}
	;

OutputStmt : WRITE '(' E ')' ';'{$$=createTree(0, NODE_WRITE, NULL, $3, NULL);}
	;

AsgStmt : ID ASSIGN E ';'	{$$=createTree(0, NODE_ASSIGN, NULL, $1, $3);}
	;

E : 	E PLUS E 	{$$=createTree(0, NODE_PLUS, NULL, $1, $3);}
	| E MINUS E 	{$$=createTree(0, NODE_MINUS, NULL, $1, $3);}
	| E MUL E 	{$$=createTree(0, NODE_MUL, NULL, $1, $3);}
	| E DIV E 	{$$=createTree(0, NODE_DIV, NULL, $1, $3);}
	| '(' E ')' 	{$$=$2;}
	| NUM | ID	{$$=$1;}
	;

%%

void yyerror(char const *s){
	printf("yyerror %s\n",s);
}

int main(int argc, char* argv[]){
	reg=-1;
	if(argc>1){
		fp=fopen(argv[1], "r");
		if(fp)
			yyin=fp;
	}
	target_file=fopen("test.xsm","w");
	yyparse();
	return 0;
}
