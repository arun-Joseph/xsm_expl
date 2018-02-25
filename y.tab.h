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
    CLASS = 278,
    ENDCLASS = 279,
    EXTENDS = 280,
    NEW = 281,
    DELETE = 282,
    SELF = 283,
    IF = 284,
    THEN = 285,
    ELSE = 286,
    ENDIF = 287,
    WHILE = 288,
    DO = 289,
    ENDWHILE = 290,
    BREAK = 291,
    CONTINUE = 292,
    REPEAT = 293,
    UNTIL = 294,
    PLUS = 295,
    MINUS = 296,
    MUL = 297,
    DIV = 298,
    MOD = 299,
    LT = 300,
    GT = 301,
    LE = 302,
    GE = 303,
    NE = 304,
    EQ = 305,
    AND = 306,
    OR = 307,
    NOT = 308,
    NIL = 309
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
#define CLASS 278
#define ENDCLASS 279
#define EXTENDS 280
#define NEW 281
#define DELETE 282
#define SELF 283
#define IF 284
#define THEN 285
#define ELSE 286
#define ENDIF 287
#define WHILE 288
#define DO 289
#define ENDWHILE 290
#define BREAK 291
#define CONTINUE 292
#define REPEAT 293
#define UNTIL 294
#define PLUS 295
#define MINUS 296
#define MUL 297
#define DIV 298
#define MOD 299
#define LT 300
#define GT 301
#define LE 302
#define GE 303
#define NE 304
#define EQ 305
#define AND 306
#define OR 307
#define NOT 308
#define NIL 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
