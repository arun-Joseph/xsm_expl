%{

	#include <stdio.h>
	#include "y.tab.h"
	#include <stdlib.h>
	#include <string.h>
	
	#define NODE_VAR 0
	#define NODE_NUM 1

	#define inttype 100
	#define strtype 101
	#define booltype 102

	int intval;
	char *strval;
	
%}

%%

[0-9]+ 	{
		intval=atoi(yytext);
		yylval=createTree(intval, 0, NULL, NODE_NUM, NULL, NULL);
		return NUM;
	}
"begin"	{return START;}
"end"	{return END;}
"read"	{return READ;}
"write"	{return WRITE;}
"if" 	{return IF;}
"then"	{return THEN;}
"else"	{return ELSE;}
"endif"	{return ENDIF;}
"while"	{return WHILE;}
"do"	{return DO;}
"break"	{return BREAK;}
"continue"	{return CONTINUE;}
"endwhile"	{return ENDWHILE;}
[a-z]	{
		strval=strdup(yytext);
		yylval=createTree(0, inttype, strval, NODE_VAR, NULL, NULL);
		return ID;
	}
"="	{return ASSIGN;}
"+" 	{return PLUS;}
"-" 	{return MINUS;}
"*" 	{return MUL;}
"/"	{return DIV;}
"<"	{return LT;}
">"	{return GT;}
"<="	{return LE;}
">="	{return GE;}
"!="	{return NE;}
"=="	{return EQ;}
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
