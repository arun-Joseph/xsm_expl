%{

	#include <stdio.h>
	#include "y.tab.h"
	#include <stdlib.h>
	#include <string.h>
	
	#define NODE_VAR 0
	#define NODE_NUM 1

	int intval;
	char *strval;
	
%}

%%

[0-9]+ 	{
		intval=atoi(yytext);
		yylval=createTree(intval, NODE_NUM, NULL, NULL, NULL);
		return NUM;
	}
"begin"	{return START;}
"end"	{return END;}
"read"	{return READ;}
"write"	{return WRITE;}
[a-z]	{
		strval=strdup(yytext);
		yylval=createTree(0, NODE_VAR, strval, NULL, NULL);
		return ID;
	}
"="	{return ASSIGN;}
"+" 	{return PLUS;}
"-" 	{return MINUS;}
"*" 	{return MUL;}
"/"	{return DIV;}
[\n \t] {}
[();] 	{return *yytext;}
. 	{
		yyerror("unknown character\n");
		exit(1);
	}

%%

int yywrap(void){
	return 1;
}
