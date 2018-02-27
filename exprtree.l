%{

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	#include "y.tab.h"

	#define NODE_ID 0
	#define NODE_NUM 1
	#define NODE_STR 2

	int yywrap(void);
	char *strval;

	union Constant{
		int intval;
		char *strval;
	}value;
	
%}

%%

[0-9]+ 	{
		value.intval=atoi(yytext);
		yylval=createTree(TLookup("integer"), NODE_NUM, NULL, &value, NULL, NULL, NULL, NULL);
		return NUM;
	}
"begin"	{return START;}
"end"	{return END;}
"type"	{return TYPE;}
"endtype"	{return ENDTYPE;}
"decl"	{return DECL;}
"enddecl"	{return ENDDECL;}
"class"	{return CLASS;}
"endclass"	{return ENDCLASS;}
"main"	{return MAIN;}
"return"	{return RETURN;}
"int"	{return INT;}
"str"	{return STR;}
"extends"	{return EXTENDS;}
"new"	{return NEW;}
"delete"	{return DELETE;}
"self"	{return SELF;}
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
"repeat"	{return REPEAT;}
"until"	{return UNTIL;}
"breakpoint"	{return BRKP;}
"initialize"	{return INIT;}
"alloc"	{return ALLOC;}
"free"	{return FREE;}
"null"	{return NIL;}
"AND"	{return AND;}
"OR"	{return OR;}
"NOT"	{return NOT;}
[a-zA-Z]([a-zA-Z0-9_]*)	{
		strval=strdup(yytext);
		yylval=createTree(TLookup("integer"), NODE_ID, strval, NULL, NULL, NULL, NULL, NULL);
		return ID;
	}
\"(\\.|[^\\\"])*\" {
		strval=malloc((yyleng-2)*sizeof(char));
		strcpy(strval, yytext+1);
		strval[yyleng-2]='\0';
		yylval=createTree(TLookup("string"), NODE_STR, strval, NULL, NULL, NULL, NULL, NULL);
		return STRVAL;
	}
"//"(.)*	{}
"/*"([^*]|\*+[^*/])*\*+"/"	{}
"="	{return ASSIGN;}
"+" 	{return PLUS;}
"-" 	{return MINUS;}
"*" 	{return MUL;}
"/"	{return DIV;}
"%"	{return MOD;}
"<"	{return LT;}
">"	{return GT;}
"<="	{return LE;}
">="	{return GE;}
"!="	{return NE;}
"=="	{return EQ;}
[\n \t] {}
"["	{return *yytext;}
"]"	{return *yytext;}
[{}()]	{return *yytext;}
[&.,;\"] {return *yytext;}
. 	{
		yyerror(strcat(yytext, " : unknown charcter"));
		exit(1);
	}

%%

int yywrap(void){
	return 1;
}
