/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    NUM = 259,
    STRVAL = 260,
    START = 261,
    END = 262,
    READ = 263,
    WRITE = 264,
    ASSIGN = 265,
    INIT = 266,
    ALLOC = 267,
    FREE = 268,
    TYPE = 269,
    ENDTYPE = 270,
    DECL = 271,
    ENDDECL = 272,
    INT = 273,
    STR = 274,
    BRKP = 275,
    MAIN = 276,
    RETURN = 277,
    IF = 278,
    THEN = 279,
    ELSE = 280,
    ENDIF = 281,
    WHILE = 282,
    DO = 283,
    ENDWHILE = 284,
    BREAK = 285,
    CONTINUE = 286,
    REPEAT = 287,
    UNTIL = 288,
    PLUS = 289,
    MINUS = 290,
    MUL = 291,
    DIV = 292,
    MOD = 293,
    LT = 294,
    GT = 295,
    LE = 296,
    GE = 297,
    NE = 298,
    EQ = 299,
    AND = 300,
    OR = 301,
    NOT = 302,
    NIL = 303
  };
#endif
/* Tokens.  */
#define ID 258
#define NUM 259
#define STRVAL 260
#define START 261
#define END 262
#define READ 263
#define WRITE 264
#define ASSIGN 265
#define INIT 266
#define ALLOC 267
#define FREE 268
#define TYPE 269
#define ENDTYPE 270
#define DECL 271
#define ENDDECL 272
#define INT 273
#define STR 274
#define BRKP 275
#define MAIN 276
#define RETURN 277
#define IF 278
#define THEN 279
#define ELSE 280
#define ENDIF 281
#define WHILE 282
#define DO 283
#define ENDWHILE 284
#define BREAK 285
#define CONTINUE 286
#define REPEAT 287
#define UNTIL 288
#define PLUS 289
#define MINUS 290
#define MUL 291
#define DIV 292
#define MOD 293
#define LT 294
#define GT 295
#define LE 296
#define GE 297
#define NE 298
#define EQ 299
#define AND 300
#define OR 301
#define NOT 302
#define NIL 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
