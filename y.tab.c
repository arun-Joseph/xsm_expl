/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "exprtree.y" /* yacc.c:339  */


	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	
	#define YYSTYPE tnode*

	#include "exprtree.h"
	#include "exprtree.c"

	int yylex(void);
	void yyerror(char const *s);
	extern FILE *yyin;
	

#line 83 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 242 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1000

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  389

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,     2,
      58,    59,     2,     2,    60,     2,    63,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    57,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    33,    36,    37,    40,    41,    44,    50,
      51,    54,    57,    58,    59,    66,    91,    94,    95,    98,
     126,   130,   158,   159,   162,   174,   175,   178,   187,   197,
     198,   201,   205,   211,   212,   215,   218,   219,   220,   230,
     231,   234,   235,   236,   237,   238,   242,   246,   247,   250,
     251,   254,   255,   256,   265,   380,   465,   523,   569,   570,
     573,   582,   593,   594,   595,   604,   605,   608,   609,   612,
     615,   616,   617,   618,   621,   664,   665,   668,   669,   672,
     672,   672,   672,   672,   673,   674,   675,   678,   682,   687,
     692,   696,   702,   705,   710,   716,   723,   728,   732,   738,
     743,   748,   752,   756,   761,   766,   770,   776,   777,   780,
     781,   782,   785,   799,   807,   827,   842,   857,   870,   883,
     902,   923,   927,   931,   935,   939,   943,   947,   951,   955,
     959,   963,   967,   971,   975,   979,   983,   984,   985,   986,
     987,   988,   989,   993,   998,  1003,  1007,  1008,  1013,  1018,
    1024,  1036,  1037,  1040
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "STRVAL", "START", "END",
  "READ", "WRITE", "ASSIGN", "INIT", "ALLOC", "FREE", "TYPE", "ENDTYPE",
  "DECL", "ENDDECL", "INT", "STR", "BRKP", "MAIN", "RETURN", "CLASS",
  "ENDCLASS", "EXTENDS", "NEW", "DELETE", "SELF", "IF", "THEN", "ELSE",
  "ENDIF", "WHILE", "DO", "ENDWHILE", "BREAK", "CONTINUE", "REPEAT",
  "UNTIL", "PLUS", "MINUS", "MUL", "DIV", "MOD", "LT", "GT", "LE", "GE",
  "NE", "EQ", "AND", "OR", "NOT", "NIL", "'{'", "'}'", "';'", "'('", "')'",
  "','", "'['", "']'", "'.'", "'&'", "$accept", "program", "TypeDefBlock",
  "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl", "TypeName",
  "ClassDefBlock", "ClassDefList", "ClassDef", "Cname", "Fieldlists",
  "Fld", "MethodDecl", "MDecl", "MethodDefns", "GDeclBlock", "GDeclList",
  "GDecl", "Type", "GidList", "Gid", "FDefBlock", "FuncType", "FDef",
  "ParamList", "Param", "PType", "LDeclBlock", "LDeclList", "LDecl",
  "IdList", "MainBlock", "Body", "Slist", "Stmt", "InputStmt",
  "OutputStmt", "AsgStmt", "IfStmt", "WhileStmt", "Field", "FieldFunction",
  "Expr", "ArgList", "RetStmt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   123,   125,    59,    40,    41,
      44,    91,    93,    46,    38
};
# endif

#define YYPACT_NINF -308

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-308)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,    46,    56,    43,    21,    70,  -308,  -308,   135,   130,
     114,  -308,  -308,   138,    59,  -308,    63,   163,   175,  -308,
    -308,  -308,    28,  -308,   173,   222,  -308,  -308,   215,  -308,
    -308,  -308,  -308,   168,  -308,   107,  -308,  -308,  -308,   175,
     101,  -308,  -308,  -308,  -308,   177,  -308,  -308,  -308,  -308,
      93,   236,   115,  -308,  -308,  -308,   196,   199,   268,  -308,
     198,     5,   258,   226,  -308,   107,    16,   238,   250,  -308,
     218,  -308,   302,  -308,  -308,  -308,  -308,   129,  -308,   110,
     275,    18,  -308,   257,   242,   276,    60,   175,  -308,   321,
     139,  -308,   249,  -308,   332,   277,  -308,   247,   323,   285,
     323,   289,   251,   102,   113,  -308,   295,  -308,    71,  -308,
    -308,   353,  -308,  -308,   352,   323,   352,   323,   312,  -308,
    -308,   313,   256,   307,   262,   346,   316,   352,   320,   352,
     323,  -308,   328,  -308,  -308,   120,  -308,     7,   319,   331,
     341,   333,   272,   342,   308,   343,   344,   478,   351,   364,
     478,   375,   346,  -308,  -308,  -308,  -308,  -308,  -308,    -4,
     396,  -308,   348,  -308,   354,   352,  -308,  -308,   406,   117,
     103,   272,   419,   106,   272,    11,  -308,   137,  -308,  -308,
     361,   272,   422,   272,  -308,   272,   423,   365,  -308,   817,
     125,   424,   272,   272,   510,  -308,  -308,   378,   421,  -308,
     425,   187,   426,  -308,  -308,  -308,   377,  -308,  -308,   123,
     376,   382,   383,   835,   513,  -308,   211,   432,    76,   697,
     105,   155,    83,   272,   433,   439,   246,  -308,   315,   717,
     389,   448,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,  -308,   160,   219,  -308,   737,
     757,   395,   398,   272,  -308,   399,   400,   853,  -308,  -308,
    -308,   457,   402,   403,   460,  -308,     0,   407,   272,   408,
     411,   412,   413,   414,  -308,   925,   259,   536,   418,   427,
    -308,   272,   431,   246,   246,   315,   315,   315,   347,   347,
     347,   347,   347,   347,   950,   938,   415,   420,   435,   456,
     272,   272,   871,   434,   489,  -308,  -308,   437,   438,   440,
     272,   272,  -308,   559,   443,  -308,  -308,  -308,  -308,  -308,
     272,   436,   202,   205,   582,   245,  -308,  -308,   478,   478,
     777,   797,  -308,   444,   445,  -308,  -308,   451,   889,   605,
     224,  -308,   925,   272,  -308,   261,  -308,   269,   441,  -308,
     273,   314,   410,   116,   452,  -308,   453,  -308,  -308,   486,
     464,   272,   628,  -308,  -308,   272,  -308,   478,   465,   467,
    -308,  -308,  -308,   272,  -308,   651,  -308,   674,   446,  -308,
    -308,   907,   458,  -308,   468,  -308,   469,  -308,  -308
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,    16,     0,     0,     7,     1,     0,     0,
       0,     4,     6,    20,     0,    18,     0,     0,     0,    14,
      12,    13,     0,    10,     0,     0,    15,    17,     0,    38,
      32,    36,    37,     0,    34,     0,    53,    51,    52,     0,
       0,    50,     3,     8,     9,     0,    21,    23,    31,    33,
      41,     0,     0,    40,    49,     2,     0,     0,     0,    11,
       0,     0,     0,    44,    35,     0,     0,     0,     0,    22,
       0,    26,     0,    64,    62,    63,    47,     0,    59,     0,
       0,     0,    39,     0,     0,     0,     0,     0,    25,     0,
       0,    45,     0,    60,     0,    42,    48,     0,    66,     0,
      66,     0,     0,     0,     0,    30,     0,    24,     0,    58,
      61,     0,    46,    68,     0,    66,     0,    66,     0,    19,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,    28,     0,    43,    65,     0,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,     0,
       0,    55,     0,    74,     0,     0,    27,    72,     0,     0,
       0,     0,     0,     0,     0,     0,    86,   142,   137,   138,
       0,     0,     0,     0,   139,     0,     0,   140,   141,     0,
       0,     0,     0,     0,     0,    84,    85,     0,     0,    77,
       0,     0,     0,    76,    54,    57,     0,    73,    69,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   145,   134,     0,
     146,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   153,     0,     0,   114,     0,
       0,     0,     0,     0,    75,     0,     0,     0,   112,    56,
      70,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,   150,   152,     0,     0,   113,   114,
     136,     0,   112,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,    71,     0,     0,     0,
       0,     0,    87,     0,     0,    91,    92,   101,   102,   149,
       0,   143,     0,     0,     0,     0,   105,   106,     0,     0,
       0,     0,    96,     0,     0,    98,    99,     0,     0,     0,
       0,    90,   151,     0,   116,     0,   118,     0,   147,   120,
       0,     0,     0,     0,     0,   100,     0,   103,    94,     0,
       0,     0,     0,   115,   117,     0,   119,     0,     0,     0,
     110,   111,   104,     0,    88,     0,   144,     0,     0,   108,
     109,     0,     0,   148,     0,    95,     0,   107,    89
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -308,  -308,  -308,  -308,   498,  -308,   505,  -308,  -308,  -308,
     514,  -308,  -308,  -308,  -308,   459,  -308,  -308,  -308,   499,
     -57,  -308,   466,  -308,   -83,   -32,   -28,   442,  -308,   -89,
    -308,  -308,  -308,   494,   -84,  -145,  -140,  -308,  -308,  -308,
    -308,  -308,  -125,  -308,  -141,  -307,   384
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,    22,    23,    24,     9,    14,
      15,    16,    60,    69,    70,    71,   103,    18,    33,    34,
      35,    52,    53,    39,    40,    41,    77,    78,    79,   114,
     124,   136,   169,    42,   126,   152,   153,   154,   155,   156,
     157,   158,   187,   188,   275,   276,   160
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     159,   189,   194,    72,   104,   197,   201,    54,    73,     1,
     310,   116,   199,    89,   220,   345,   347,   170,   350,    73,
     104,    73,   159,    74,    75,   159,   127,   159,   129,   213,
     214,    19,   128,   219,    74,    75,    74,    75,    84,   144,
     226,   165,   228,   162,   229,   164,    20,    21,   218,     4,
     221,   249,   250,    97,   199,   105,     7,   199,   102,   202,
     257,   311,    13,    73,    76,   247,     8,   135,   171,   159,
     172,   120,   159,     4,    73,    83,    10,    96,    74,    75,
     122,   206,   277,    26,    43,    11,   177,   178,   179,    74,
      75,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,    56,    36,   177,   178,   179,   216,
      50,   180,   302,    93,   210,   211,    56,    19,    28,   101,
      37,    38,    57,   167,   181,   182,   260,   313,   246,   212,
     121,   180,    20,    21,   144,   270,   183,   184,    13,   202,
     324,   185,   274,    58,   181,   182,    17,   186,   217,    51,
     329,    61,    94,   144,    62,    58,   183,   184,   119,   330,
     331,   185,   168,    25,   272,   261,    29,   186,   172,   338,
     339,    29,    64,   370,   208,    65,    45,   209,    36,   342,
      30,    31,    32,   351,   352,    48,    31,    32,    91,    92,
     177,   178,   179,    37,    38,   222,   107,   108,   223,   255,
     224,    29,   362,   159,   159,   177,   178,   179,   177,   178,
     179,   199,   199,   256,   273,   180,    31,    32,   202,   296,
     375,    29,   378,   172,   377,    46,   159,   159,   181,   182,
     180,    47,   381,   180,    59,    87,    31,    32,   199,    63,
     183,   184,   159,   181,   182,   185,   181,   182,   177,   178,
     179,   186,    73,   159,    66,   183,   184,    67,   183,   184,
     185,   344,    80,   185,   346,    29,   186,    74,    75,   186,
     267,    68,   268,   180,   172,   177,   178,   179,   297,   134,
      31,    32,   202,   360,    81,   361,   181,   182,   234,   235,
     236,   237,   238,   239,   240,   241,   242,    85,   183,   184,
     180,    99,    92,   185,   349,    90,   112,    92,    86,   186,
     118,    92,    98,   181,   182,   132,    92,   137,   319,   320,
     363,   320,   138,   139,   106,   183,   184,   140,   364,   320,
     185,   100,   366,   320,   141,   110,   186,    95,   111,   113,
     115,   143,   144,   145,   117,   367,   368,   146,   147,   137,
     148,   149,   150,   108,   138,   139,   151,   123,   125,   140,
     237,   238,   239,   240,   241,   242,   141,   130,   142,   133,
     131,   191,   161,   143,   144,   145,   163,   173,   198,   146,
     147,   137,   148,   149,   150,   166,   138,   139,   151,   174,
     176,   140,    -1,    -1,    -1,    -1,    -1,    -1,   141,   175,
     190,   192,   193,   203,   204,   143,   144,   145,   195,   207,
     205,   146,   147,   137,   148,   149,   150,   252,   138,   139,
     151,   196,   215,   140,   225,   227,   230,   248,   231,   258,
     141,   253,   254,   259,   262,   269,   278,   143,   144,   145,
     263,   264,   279,   146,   147,   369,   148,   149,   150,   137,
     281,   282,   151,   300,   138,   139,   301,   303,   304,   140,
     306,   307,   308,   309,   312,   328,   141,   314,   315,   316,
     317,   318,   326,   143,   144,   145,   322,   327,   384,   146,
     147,   137,   148,   149,   150,   323,   138,   139,   151,   325,
     329,   140,   334,   333,   335,   336,   373,   343,   141,   337,
     341,   355,   365,    12,   356,   143,   144,   145,   357,   371,
     372,   146,   147,   137,   148,   149,   150,   386,   138,   139,
     151,   374,   379,   140,   380,   387,   388,    44,    27,    88,
     141,    82,    49,    55,   109,     0,   200,   143,   144,   145,
       0,     0,     0,   251,   147,     0,   148,   149,   150,     0,
       0,     0,   151,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   266,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   321,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   340,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   348,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   359,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     376,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   382,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   383,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
       0,     0,     0,     0,     0,     0,   271,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
       0,     0,     0,     0,     0,     0,   280,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
       0,     0,     0,     0,     0,     0,   298,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
       0,     0,     0,     0,     0,     0,   299,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
       0,     0,     0,     0,     0,     0,   353,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
       0,     0,     0,     0,     0,     0,   354,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
       0,     0,     0,     0,   245,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,     0,     0,
       0,     0,   265,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,     0,     0,     0,     0,
     305,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,     0,     0,     0,     0,   332,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,     0,     0,     0,     0,   358,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
       0,     0,     0,     0,   385,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242
};

static const yytype_int16 yycheck[] =
{
     125,   142,   147,    60,    87,   150,    10,    39,     3,    14,
      10,   100,   152,    70,     3,   322,   323,    10,   325,     3,
     103,     3,   147,    18,    19,   150,   115,   152,   117,   170,
     171,     3,   116,   174,    18,    19,    18,    19,    66,    28,
     181,   130,   183,   127,   185,   129,    18,    19,   173,     3,
     175,   192,   193,    81,   194,    87,     0,   197,    86,    63,
     201,    61,     3,     3,    59,   190,    23,   124,    61,   194,
      63,   103,   197,     3,     3,    59,    55,    59,    18,    19,
     108,   165,   223,    24,    56,    15,     3,     4,     5,    18,
      19,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,     3,     3,     3,     4,     5,     3,
       3,    28,   253,     3,    11,    12,     3,     3,    55,    59,
      18,    19,    21,     3,    41,    42,     3,   268,     3,    26,
      59,    28,    18,    19,    28,    59,    53,    54,     3,    63,
     281,    58,    59,    42,    41,    42,    16,    64,    42,    42,
      34,    58,    42,    28,    61,    42,    53,    54,    56,   300,
     301,    58,    42,    25,    59,    42,     3,    64,    63,   310,
     311,     3,    57,    57,    57,    60,     3,    60,     3,   320,
      17,    18,    19,   328,   329,    17,    18,    19,    59,    60,
       3,     4,     5,    18,    19,    58,    57,    58,    61,    12,
      63,     3,   343,   328,   329,     3,     4,     5,     3,     4,
       5,   351,   352,    26,    59,    28,    18,    19,    63,    59,
     361,     3,   367,    63,   365,     3,   351,   352,    41,    42,
      28,    16,   373,    28,    57,    17,    18,    19,   378,     3,
      53,    54,   367,    41,    42,    58,    41,    42,     3,     4,
       5,    64,     3,   378,    58,    53,    54,    58,    53,    54,
      58,    59,     4,    58,    59,     3,    64,    18,    19,    64,
      59,     3,    61,    28,    63,     3,     4,     5,    59,    17,
      18,    19,    63,    59,    58,    61,    41,    42,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    59,    53,    54,
      28,    59,    60,    58,    59,     3,    59,    60,    58,    64,
      59,    60,    55,    41,    42,    59,    60,     3,    59,    60,
      59,    60,     8,     9,     3,    53,    54,    13,    59,    60,
      58,    55,    59,    60,    20,     3,    64,    62,    61,    16,
      55,    27,    28,    29,    55,    31,    32,    33,    34,     3,
      36,    37,    38,    58,     8,     9,    42,     4,     6,    13,
      45,    46,    47,    48,    49,    50,    20,    55,    22,    62,
      57,    63,    56,    27,    28,    29,    56,    58,     3,    33,
      34,     3,    36,    37,    38,    57,     8,     9,    42,    58,
      57,    13,    45,    46,    47,    48,    49,    50,    20,    58,
      58,    58,    58,     7,    56,    27,    28,    29,    57,     3,
      56,    33,    34,     3,    36,    37,    38,    39,     8,     9,
      42,    57,     3,    13,    63,     3,     3,     3,    63,     3,
      20,    10,     7,    56,    58,     3,     3,    27,    28,    29,
      58,    58,     3,    33,    34,    35,    36,    37,    38,     3,
      61,     3,    42,    58,     8,     9,    58,    58,    58,    13,
       3,    59,    59,     3,    57,    30,    20,    59,    57,    57,
      57,    57,    57,    27,    28,    29,    58,    57,    32,    33,
      34,     3,    36,    37,    38,    58,     8,     9,    42,    58,
      34,    13,     3,    59,    57,    57,    10,    61,    20,    59,
      57,    57,    61,     5,    59,    27,    28,    29,    57,    57,
      57,    33,    34,     3,    36,    37,    38,    59,     8,     9,
      42,    57,    57,    13,    57,    57,    57,    22,    14,    70,
      20,    65,    33,    39,    92,    -1,   152,    27,    28,    29,
      -1,    -1,    -1,    33,    34,    -1,    36,    37,    38,    -1,
      -1,    -1,    42,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    57,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      57,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    57,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    57,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    66,    67,     3,    68,    69,     0,    23,    73,
      55,    15,    69,     3,    74,    75,    76,    16,    82,     3,
      18,    19,    70,    71,    72,    25,    24,    75,    55,     3,
      17,    18,    19,    83,    84,    85,     3,    18,    19,    88,
      89,    90,    98,    56,    71,     3,     3,    16,    17,    84,
       3,    42,    86,    87,    90,    98,     3,    21,    42,    57,
      77,    58,    61,     3,    57,    60,    58,    58,     3,    78,
      79,    80,    85,     3,    18,    19,    59,    91,    92,    93,
       4,    58,    87,    59,    91,    59,    58,    17,    80,    85,
       3,    59,    60,     3,    42,    62,    59,    91,    55,    59,
      55,    59,    91,    81,    89,    90,     3,    57,    58,    92,
       3,    61,    59,    16,    94,    55,    94,    55,    59,    56,
      90,    59,    91,     4,    95,     6,    99,    94,    99,    94,
      55,    57,    59,    62,    17,    85,    96,     3,     8,     9,
      13,    20,    22,    27,    28,    29,    33,    34,    36,    37,
      38,    42,   100,   101,   102,   103,   104,   105,   106,   107,
     111,    56,    99,    56,    99,    94,    57,     3,    42,    97,
      10,    61,    63,    58,    58,    58,    57,     3,     4,     5,
      28,    41,    42,    53,    54,    58,    64,   107,   108,   109,
      58,    63,    58,    58,   100,    57,    57,   100,     3,   101,
     111,    10,    63,     7,    56,    56,    99,     3,    57,    60,
      11,    12,    26,   109,   109,     3,     3,    42,   107,   109,
       3,   107,    58,    61,    63,    63,   109,     3,   109,   109,
       3,    63,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    57,     3,   107,     3,   109,
     109,    33,    39,    10,     7,    12,    26,   109,     3,    56,
       3,    42,    58,    58,    58,    57,    62,    59,    61,     3,
      59,    59,    59,    59,    59,   109,   110,   109,     3,     3,
      59,    61,     3,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,    59,    59,    59,    59,
      58,    58,   109,    58,    58,    57,     3,    59,    59,     3,
      10,    61,    57,   109,    59,    57,    57,    57,    57,    59,
      60,    62,    58,    58,   109,    58,    57,    57,    30,    34,
     109,   109,    57,    59,     3,    57,    57,    59,   109,   109,
      62,    57,   109,    61,    59,   110,    59,   110,    62,    59,
     110,   100,   100,    59,    59,    57,    59,    57,    57,    62,
      59,    61,   109,    59,    59,    61,    59,    31,    32,    35,
      57,    57,    57,    10,    57,   109,    62,   109,   100,    57,
      57,   109,    62,    62,    32,    57,    59,    57,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    67,    67,    68,    68,    69,    70,
      70,    71,    72,    72,    72,    73,    73,    74,    74,    75,
      76,    76,    77,    77,    78,    79,    79,    80,    80,    81,
      81,    82,    82,    83,    83,    84,    85,    85,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    89,    89,    89,    90,    90,    90,    90,    91,    91,
      92,    92,    93,    93,    93,    94,    94,    95,    95,    96,
      97,    97,    97,    97,    98,    99,    99,   100,   100,   101,
     101,   101,   101,   101,   101,   101,   101,   102,   102,   102,
     102,   102,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   106,
     106,   106,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   110,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     3,     0,     2,     1,     4,     2,
       1,     3,     1,     1,     1,     3,     0,     2,     1,     8,
       1,     3,     2,     0,     3,     2,     1,     6,     5,     2,
       1,     3,     2,     2,     1,     3,     1,     1,     1,     3,
       1,     1,     4,     7,     2,     4,     5,     3,     4,     2,
       1,     1,     1,     1,     9,     8,    10,     9,     3,     1,
       2,     3,     1,     1,     1,     3,     0,     2,     0,     3,
       3,     4,     1,     2,     8,     4,     3,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     5,     8,    11,
       6,     5,     5,     4,     7,    10,     5,     4,     6,     6,
       6,     5,     5,     7,     7,     5,     5,    10,     8,     8,
       7,     7,     3,     3,     3,     6,     5,     6,     5,     6,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     4,     7,     2,     2,     5,     8,     4,
       3,     3,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
#line 44 "exprtree.y" /* yacc.c:1646  */
    {
			TInstall((yyvsp[-3])->name, 0, Fhead);
			Fhead=Ftail=NULL;
		}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "exprtree.y" /* yacc.c:1646  */
    {FInstall(declType, (yyvsp[-1])->name);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 57 "exprtree.y" /* yacc.c:1646  */
    {declType=TLookup("integer");}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 58 "exprtree.y" /* yacc.c:1646  */
    {declType=TLookup("string");}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 59 "exprtree.y" /* yacc.c:1646  */
    {
		declType=TLookup((yyvsp[0])->name);
		if(declType==NULL)
			declType=TLookup("type");
	}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 66 "exprtree.y" /* yacc.c:1646  */
    {
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
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 91 "exprtree.y" /* yacc.c:1646  */
    {fprintf(target_file, "L%d:\n", start);}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 98 "exprtree.y" /* yacc.c:1646  */
    {
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
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 126 "exprtree.y" /* yacc.c:1646  */
    {
		CInstall((yyvsp[0])->name, NULL);
		classType=CLookup((yyvsp[0])->name);
	}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 130 "exprtree.y" /* yacc.c:1646  */
    {
		struct Fieldlist *Ftemp;
		struct Memberfunclist *Mtemp;

		CInstall((yyvsp[-2])->name, (yyvsp[0])->name);
		classType=CLookup((yyvsp[0])->name);

		Ftemp=classType->Memberfield;
		while(Ftemp!=NULL){
			if(Ftemp->type!=NULL)
				Class_FInstall(CLookup((yyvsp[-2])->name), Ftemp->type->name, Ftemp->name);
			else
				Class_FInstall(CLookup((yyvsp[-2])->name), Ftemp->Ctype->name, Ftemp->name);
			Ftemp=Ftemp->next;
		}

		Mtemp=classType->Vfuncptr;
		while(Mtemp!=NULL){
			Class_MInstall(CLookup((yyvsp[-2])->name), Mtemp->name, Mtemp->type, Mtemp->paramlist);
			Mtail->flabel=Mtemp->flabel;
			flabel--;
			Mtemp=Mtemp->next;
		}

		classType=CLookup((yyvsp[-2])->name);
	}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 162 "exprtree.y" /* yacc.c:1646  */
    {
		if(declType!=NULL)
			Class_FInstall(classType, declType->name, (yyvsp[-1])->name);
		else if(declClass!=NULL)
			Class_FInstall(classType, declClass->name, (yyvsp[-1])->name);
		else{
			printf("Unknown type\n");
			exit(1);
		}
	}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 178 "exprtree.y" /* yacc.c:1646  */
    {
		if(declType!=NULL)
			Class_MInstall(classType, (yyvsp[-4])->name, declType, Phead);
		else{
			printf("Unknown type\n");
			exit(1);
		}
		Phead=Ptail=NULL;
	}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 187 "exprtree.y" /* yacc.c:1646  */
    {
		if(declType!=NULL)
			Class_MInstall(classType, (yyvsp[-3])->name, declType, NULL);
		else{
			printf("Unknown type\n");
			exit(1);
		}
	}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 201 "exprtree.y" /* yacc.c:1646  */
    {
			evaluate();
			binding=1;
		}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 205 "exprtree.y" /* yacc.c:1646  */
    {
			evaluate();
			binding=1;
		}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 218 "exprtree.y" /* yacc.c:1646  */
    {declType=TLookup("integer");}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 219 "exprtree.y" /* yacc.c:1646  */
    {declType=TLookup("string");}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 220 "exprtree.y" /* yacc.c:1646  */
    {
			declType=TLookup((yyvsp[0])->name);
			declClass=CLookup((yyvsp[0])->name);
			if(declType==NULL && declClass==NULL){
				printf("Unknown type: %s\n", (yyvsp[0])->name);
				exit(1);
			}
		}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 234 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[0])->name, declType, declClass, 1, 1, NODE_ID, NULL);}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 235 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-3])->name, declType, NULL, (yyvsp[-1])->value.intval, 1, NODE_ARRAY, NULL);}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 236 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-6])->name, declType, NULL, (yyvsp[-4])->value.intval, (yyvsp[-1])->value.intval, NODE_MATRIX, NULL);}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 237 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[0])->name, declType, NULL, 1, 1, NODE_PTR, NULL);}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 238 "exprtree.y" /* yacc.c:1646  */
    {
						GInstall((yyvsp[-3])->name, declType, NULL, 0, 0, NODE_FUNC, Phead);
						Phead=Ptail=NULL;
					}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 242 "exprtree.y" /* yacc.c:1646  */
    {
						GInstall((yyvsp[-3])->name, declType, NULL, 0, 0, NODE_FUNC, Phead);	
						Phead=Ptail=NULL;
					}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 246 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-2])->name, declType, NULL, 0, 0, NODE_FUNC, NULL);}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 247 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-2])->name, declType, NULL, 0, 0, NODE_FUNC, NULL);}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 254 "exprtree.y" /* yacc.c:1646  */
    {functype=TLookup("integer");}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 255 "exprtree.y" /* yacc.c:1646  */
    {functype=TLookup("string");}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 256 "exprtree.y" /* yacc.c:1646  */
    {
			functype=TLookup((yyvsp[0])->name);
			if(functype==NULL){
				printf("Unknown type: %s\n", (yyvsp[0])->name);
				exit(1);
			}
		}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 265 "exprtree.y" /* yacc.c:1646  */
    {
		struct Lsymbol *Ltemp;
		struct Gsymbol *Gtemp;
		struct Memberfunclist *Mtemp;
		struct Paramstruct *Ptemp1, *Ptemp2;

		if(classType==NULL){
			binding=1;

			Gtemp=GLookup((yyvsp[-7])->name);
			if(Gtemp==NULL || Gtemp->nodetype!=NODE_FUNC){
				printf("Function not declared: %s\n", (yyvsp[-7])->name);
				exit(1);
			}
			if(Gtemp->size1!=0){
				printf("Multiple Function Declaration: %s\n", (yyvsp[-7])->name);
				exit(1);
			}
			Gtemp->size1--;
			(yyvsp[-7])->Lentry=Lhead;

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

			codeGen((yyvsp[-1]));

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");
		}
		else{
			Mtemp=Mhead;
			while(Mtemp!=NULL){
				if(!strcmp((yyvsp[-7])->name, Mtemp->name))
					break;
				Mtemp=Mtemp->next;
			}

			if(Mtemp==NULL){
				printf("Method not declared: %s\n", (yyvsp[-7])->name);
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

			codeGen((yyvsp[-1]));

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");
		}

		lbind=1;
		Lhead=Ltail=NULL;
		Phead=Ptail=NULL;
	}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 380 "exprtree.y" /* yacc.c:1646  */
    {
		struct Lsymbol *Ltemp;
		struct Gsymbol *Gtemp;
		struct Memberfunclist *Mtemp;

		if(classType==NULL){
			binding=1;
			Gtemp=GLookup((yyvsp[-6])->name);
			if(Gtemp==NULL || Gtemp->nodetype!=NODE_FUNC){
				printf("Function not declared: %s\n", (yyvsp[-6])->name);
				exit(1);
			}
			if(Gtemp->size1!=0){
				printf("Multiple Function Declaration: %s\n", (yyvsp[-6])->name);
				exit(1);
			}
			Gtemp->size1--;
			(yyvsp[-6])->Lentry=Lhead;

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

			codeGen((yyvsp[-1]));

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");
		}
		else{
			Mtemp=Mhead;
			while(Mtemp!=NULL){
				if(!strcmp((yyvsp[-6])->name, Mtemp->name))
					break;
				Mtemp=Mtemp->next;
			}

			if(Mtemp==NULL){
				printf("Method not declared: %s\n", (yyvsp[-6])->name);
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

			codeGen((yyvsp[-1]));

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");
		}

		lbind=1;
		Lhead=Ltail=NULL;
		Phead=Ptail=NULL;
	}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 465 "exprtree.y" /* yacc.c:1646  */
    {
			struct Lsymbol *Ltemp;
			struct Gsymbol *Gtemp;
			struct Paramstruct *Ptemp1, *Ptemp2;
			binding=1;

			Gtemp=GLookup((yyvsp[-7])->name);
			if(Gtemp==NULL || Gtemp->nodetype!=NODE_FUNC){
				printf("Function not declared: %s\n", (yyvsp[-7])->name);
				exit(1);
			}
			if(Gtemp->size1!=0){
				printf("Multiple Function Declaration: %s\n", (yyvsp[-7])->name);
				exit(1);
			}
			Gtemp->size1--;
			(yyvsp[-7])->Lentry=Lhead;

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

			codeGen((yyvsp[-1]));

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");

			lbind=1;
			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 523 "exprtree.y" /* yacc.c:1646  */
    {
			struct Lsymbol *Ltemp;
			struct Gsymbol *Gtemp;
			binding=1;

			Gtemp=GLookup((yyvsp[-6])->name);
			if(Gtemp==NULL || Gtemp->nodetype!=NODE_FUNC){
				printf("Function not declared: %s\n", (yyvsp[-6])->name);
				exit(1);
			}
			if(Gtemp->size1!=0){
				printf("Multiple Function Declaration: %s\n", (yyvsp[-6])->name);
				exit(1);
			}
			Gtemp->size1--;
			(yyvsp[-6])->Lentry=Lhead;

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

			codeGen((yyvsp[-1]));

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");

			lbind=1;
			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 573 "exprtree.y" /* yacc.c:1646  */
    {
			struct Paramstruct *Ptemp;
			Ptemp=PLookup((yyvsp[0])->name);
			if(Ptemp!=NULL){
				printf("Multiple variable declaration: %s\n", (yyvsp[0])->name);
				exit(1);
			}
			PInstall((yyvsp[0])->name, PdeclType, NODE_ID);
		}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 582 "exprtree.y" /* yacc.c:1646  */
    {
			struct Paramstruct *Ptemp;
			Ptemp=PLookup((yyvsp[0])->name);
			if(Ptemp!=NULL){
				printf("Multiple variable declaration: %s\n", (yyvsp[0])->name);
				exit(1);
			}
			PInstall((yyvsp[0])->name, PdeclType, NODE_PTR);
		}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 593 "exprtree.y" /* yacc.c:1646  */
    {PdeclType=TLookup("integer");}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 594 "exprtree.y" /* yacc.c:1646  */
    {PdeclType=TLookup("string");}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 595 "exprtree.y" /* yacc.c:1646  */
    {
			PdeclType=TLookup((yyvsp[0])->name);
			if(PdeclType==NULL){
				printf("Unknown type: %s", (yyvsp[0])->name);
				exit(1);
			}
		}
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 615 "exprtree.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0])->name, declType, NODE_ID);}
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 616 "exprtree.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0])->name, declType, NODE_PTR);}
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 617 "exprtree.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0])->name, declType, NODE_ID);}
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 618 "exprtree.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0])->name, declType, NODE_PTR);}
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 621 "exprtree.y" /* yacc.c:1646  */
    {
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

			codeGen((yyvsp[-1]));

			fprintf(target_file, "SUB SP, %d\n", lcount);
			fprintf(target_file, "MOV BP, [SP]\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "RET\n");

			lbind=1;
			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 664 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_CONN, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[-1]), NULL);}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 665 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_CONN, NULL, NULL, NULL, (yyvsp[-1]), NULL, NULL);}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 668 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_CONN, NULL, NULL, NULL, (yyvsp[-1]), (yyvsp[0]), NULL);}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 669 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 672 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 673 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_BREAK, NULL, NULL, NULL, NULL, NULL, NULL);}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 674 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_CONTINUE, NULL, NULL, NULL, NULL, NULL, NULL);}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 675 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_BRKP, NULL, NULL, NULL, NULL, NULL, NULL);}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 678 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-2]), NODE_ID);
				(yyval)=createTree(TLookup("void"), NODE_READ, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);
			}
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 682 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-5]), NODE_ARRAY);
				typeCheck((yyvsp[-3])->type, TLookup("integer"), NODE_ARRAY);
				(yyval)=createTree(TLookup("void"), NODE_READ_ARRAY, NULL, NULL, NULL, (yyvsp[-5]), (yyvsp[-3]), NULL);
			}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 687 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-8]), NODE_MATRIX);
				typeCheck((yyvsp[-6])->type, (yyvsp[-3])->type, NODE_MATRIX);
				(yyval)=createTree(TLookup("void"), NODE_READ_MATRIX, NULL, NULL, NULL, (yyvsp[-8]), (yyvsp[-6]), (yyvsp[-3]));
			}
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 692 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-2]), NODE_PTR);
				(yyval)=createTree(TLookup("void"), NODE_READ_PTR, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);
			}
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 696 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, TLookup("type"), NODE_FIELD);
				(yyval)=createTree(TLookup("void"), NODE_READ_TYPE, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);
			}
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 702 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_WRITE, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);}
#line 2546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 705 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-3]), NODE_ID);
				typeCheck((yyvsp[-3])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN, NULL, NULL, NULL, (yyvsp[-3]), (yyvsp[-1]), NULL); 
			}
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 710 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-6]), NODE_ARRAY);
				typeCheck((yyvsp[-4])->type, TLookup("void"), NODE_ARRAY);
				typeCheck((yyvsp[-6])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN_ARRAY, NULL, NULL, NULL, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1]));
			}
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 716 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-9]), NODE_MATRIX);
				typeCheck((yyvsp[-7])->type, (yyvsp[-4])->type, NODE_MATRIX);
				typeCheck((yyvsp[-9])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN_MATRIX, NULL, NULL, NULL, (yyvsp[-9]),
					createTree(TLookup("void"), NODE_CONN, NULL, NULL, NULL, (yyvsp[-7]), (yyvsp[-4]), NULL), (yyvsp[-1]));
			}
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 723 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-3]), NODE_PTR);
				typeCheck((yyvsp[-3])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN_PTR, NULL, NULL, NULL, (yyvsp[-3]), (yyvsp[-1]), NULL);
			}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 728 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-3])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN_FIELD, NULL, NULL, NULL, (yyvsp[-3]), (yyvsp[-1]), NULL);
			}
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 732 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-5]), NODE_ID);
				typeCheck((yyvsp[-5])->type, TLookup("integer"), NODE_ASSIGN);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN, NULL, NULL, NULL, (yyvsp[-5]),
					createTree(TLookup("integer"), NODE_INIT, NULL, NULL, NULL, NULL, NULL, NULL), NULL);
			}
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 738 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-5])->type, TLookup("type"), NODE_ALLOC);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN, NULL, NULL, NULL, (yyvsp[-5]),
					createTree(TLookup("type"), NODE_ALLOC, NULL, NULL, NULL, NULL, NULL, NULL), NULL);
			}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 743 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-5])->type, TLookup("type"), NODE_ALLOC);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN_FIELD, NULL, NULL, NULL, (yyvsp[-5]),
					createTree(TLookup("type"), NODE_ALLOC, NULL, NULL, NULL, NULL, NULL, NULL), NULL);
			}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 748 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, TLookup("type"), NODE_FREE);
				(yyval)=createTree(TLookup("void"), NODE_FREE, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);
			}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 752 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, TLookup("type"), NODE_FREE);
				(yyval)=createTree(TLookup("void"), NODE_FREE, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);
			}
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 756 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-6])->type, NULL, NODE_NEW);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN, NULL, NULL, NULL, (yyvsp[-6]),
					createTree(NULL, NODE_ALLOC, NULL, NULL, NULL, NULL, NULL, NULL), (yyvsp[-2]));
			}
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 761 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-6])->type, NULL, NODE_NEW);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN_FIELD, NULL, NULL, NULL, (yyvsp[-6]),
					createTree(NULL, NODE_ALLOC, NULL, NULL, NULL, NULL, NULL, NULL), (yyvsp[-2]));
			}
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 766 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, NULL, NODE_FREE);
				(yyval)=createTree(TLookup("void"), NODE_FREE, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);
			}
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 770 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, NULL, NODE_FREE);
				(yyval)=createTree(TLookup("void"), NODE_FREE, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);
			}
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 776 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_ELIF, NULL, NULL, NULL, (yyvsp[-7]), (yyvsp[-4]), (yyvsp[-2]));}
#line 2691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 777 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_IF, NULL, NULL, NULL, (yyvsp[-5]), (yyvsp[-2]), NULL);}
#line 2697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 780 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_WHILE, NULL, NULL, NULL, (yyvsp[-5]), (yyvsp[-2]), NULL);}
#line 2703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 781 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_DO_WHILE, NULL, NULL, NULL, (yyvsp[-5]), (yyvsp[-2]), NULL);}
#line 2709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 782 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_REPEAT, NULL, NULL, NULL, (yyvsp[-5]), (yyvsp[-2]), NULL);}
#line 2715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 785 "exprtree.y" /* yacc.c:1646  */
    {
				struct Fieldlist *Ftemp=FLookup((yyvsp[-2])->type, (yyvsp[0])->name);
				if(Ftemp==NULL){
					printf("Unknown identifier in FIELD: %s\n", (yyvsp[0])->name);
					exit(1);
				}
				tptr=createTree(TLookup("void"), NODE_FIELD, NULL, NULL, NULL, NULL, (yyvsp[0]), NULL);
				tptr1=(yyvsp[-2]);
				while(tptr1->ptr3!=NULL)
					tptr1=tptr1->ptr3;
				tptr1->ptr3=tptr;
				(yyval)=(yyvsp[-2]);
				(yyval)->type=Ftemp->type;
			}
#line 2734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 799 "exprtree.y" /* yacc.c:1646  */
    {
				struct Fieldlist *Ftemp=FLookup((yyvsp[-2])->type, (yyvsp[0])->name);
				if(Ftemp==NULL){
					printf("Unknown identifier in FIELD: %s\n", (yyvsp[0])->name);
					exit(1);
				}
				(yyval)=createTree(Ftemp->type, NODE_FIELD, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 807 "exprtree.y" /* yacc.c:1646  */
    {
				struct Fieldlist *Ftemp;
				if(classType==NULL){
					printf("self can be used only inside class\n");
					exit(1);
				}
				Ftemp=Fhead;
				while(Ftemp!=NULL){
					if(!strcmp(Ftemp->name, (yyvsp[0])->name))
						break;
					Ftemp=Ftemp->next;
				}
				if(Ftemp==NULL){
					printf("Unknown MemberField: %s\n", (yyvsp[0])->name);
					exit(1);
				}
				(yyval)=createTree(Ftemp->type, NODE_FIELD, NULL, NULL, NULL, NULL, (yyvsp[0]), NULL);
			}
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 827 "exprtree.y" /* yacc.c:1646  */
    {
			struct Gsymbol *Gtemp;
			struct Memberfunclist *Mtemp;
			Gtemp=GLookup((yyvsp[-5])->name);
			if(Gtemp==NULL){
				printf("Unknown identifier: %s\n", (yyvsp[-5])->name);
				exit(1);
			}
			Mtemp=Class_MLookup(Gtemp->cptr, (yyvsp[-3])->name);
			if(Mtemp==NULL){
				printf("Unknown Member Function: %s\n", (yyvsp[-3])->name);
				exit(1);
			}
			(yyval)=createTree(Mtemp->type, NODE_FUNC_CLASS, NULL, NULL, (yyvsp[-1]), (yyvsp[-5]), (yyvsp[-3]), NULL);
		}
#line 2790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 842 "exprtree.y" /* yacc.c:1646  */
    {
			struct Gsymbol *Gtemp;
			struct Memberfunclist *Mtemp;
			Gtemp=GLookup((yyvsp[-4])->name);
			if(Gtemp==NULL){
				printf("Unknown identifier: %s\n", (yyvsp[-4])->name);
				exit(1);
			}
			Mtemp=Class_MLookup(Gtemp->cptr, (yyvsp[-2])->name);
			if(Mtemp==NULL){
				printf("Unknown Member Function: %s\n", (yyvsp[-2])->name);
				exit(1);
			}
			(yyval)=createTree(Mtemp->type, NODE_FUNC_CLASS, NULL, NULL, NULL, (yyvsp[-4]), (yyvsp[-2]), NULL);
		}
#line 2810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 857 "exprtree.y" /* yacc.c:1646  */
    {
			struct Memberfunclist *Mtemp=Mhead;
			while(Mtemp!=NULL){
				if(!strcmp(Mtemp->name, (yyvsp[-3])->name))
					break;
				Mtemp=Mtemp->next;
			}
			if(Mtemp==NULL){
				printf("Unknown Member Function: %s\n", (yyvsp[-3])->name);
				exit(1);
			}
			(yyval)=createTree(Mtemp->type, NODE_FUNC_CLASS2, NULL, NULL, (yyvsp[-1]), NULL, (yyvsp[-3]), NULL);
		}
#line 2828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 870 "exprtree.y" /* yacc.c:1646  */
    {
			struct Memberfunclist *Mtemp=Mhead;
			while(Mtemp!=NULL){
				if(!strcmp(Mtemp->name, (yyvsp[-2])->name))
					break;
				Mtemp=Mtemp->next;
			}
			if(Mtemp==NULL){
				printf("Unknown Member Function: %s\n", (yyvsp[-2])->name);
				exit(1);
			}
			(yyval)=createTree(Mtemp->type, NODE_FUNC_CLASS2, NULL, NULL, NULL, NULL, (yyvsp[-2]), NULL);
		}
#line 2846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 883 "exprtree.y" /* yacc.c:1646  */
    {
			struct Fieldlist *Ftemp=Fhead;
			struct Memberfunclist *Mtemp;
			while(Ftemp!=NULL){
				if(!strcmp(Ftemp->name, (yyvsp[-5])->ptr2->name))
					break;
				Ftemp=Ftemp->next;
			}
			if(Ftemp==NULL){
				printf("Unknown Member Field: %s\n", (yyvsp[-5])->ptr2->name);
				exit(1);
			}
			Mtemp=Class_MLookup(Ftemp->Ctype, (yyvsp[-3])->name);
			if(Mtemp==NULL){
				printf("Unknown Member Function: %s\n", (yyvsp[-3])->name);
				exit(1);
			}
			(yyval)=createTree(Mtemp->type, NODE_FUNC_CLASS3, NULL, NULL, (yyvsp[-1]), NULL, (yyvsp[-5])->ptr2, (yyvsp[-3]));
		}
#line 2870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 902 "exprtree.y" /* yacc.c:1646  */
    {
			struct Fieldlist *Ftemp=Fhead;
			struct Memberfunclist *Mtemp;
			while(Ftemp!=NULL){
				if(!strcmp(Ftemp->name, (yyvsp[-4])->ptr2->name))
					break;
				Ftemp=Ftemp->next;
			}
			if(Ftemp==NULL){
				printf("Unknown Member Field: %s\n", (yyvsp[-4])->ptr2->name);
				exit(1);
			}
			Mtemp=Class_MLookup(Ftemp->Ctype, (yyvsp[-2])->name);
			if(Mtemp==NULL){
				printf("Unknown Member Function: %s\n", (yyvsp[-2])->name);
				exit(1);
			}
			(yyval)=createTree(Mtemp->type, NODE_FUNC_CLASS3, NULL, NULL, NULL, NULL, (yyvsp[-4])->ptr2, (yyvsp[-2]));
		}
#line 2894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 923 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_PLUS);
				(yyval)=createTree(TLookup("integer"), NODE_PLUS, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 927 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_MINUS);
				(yyval)=createTree(TLookup("integer"), NODE_MINUS, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 931 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_MUL);
				(yyval)=createTree(TLookup("integer"), NODE_MUL, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 935 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_DIV);
				(yyval)=createTree(TLookup("integer"), NODE_DIV, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 939 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_MOD);
				(yyval)=createTree(TLookup("integer"), NODE_MOD, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 943 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_LT);
				(yyval)=createTree(TLookup("boolean"), NODE_LT, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 947 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_GT);
				(yyval)=createTree(TLookup("boolean"), NODE_GT, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 951 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_LE);
				(yyval)=createTree(TLookup("boolean"), NODE_LE, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 955 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_GE);
				(yyval)=createTree(TLookup("boolean"), NODE_GE, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 959 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_NE);
				(yyval)=createTree(TLookup("boolean"), NODE_NE, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 963 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_EQ);
				(yyval)=createTree(TLookup("boolean"), NODE_EQ, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 967 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_AND);
				(yyval)=createTree(TLookup("boolean"), NODE_AND, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 3002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 971 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_OR);
				(yyval)=createTree(TLookup("boolean"), NODE_OR, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 3011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 975 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[0])->type, TLookup("integer"), NODE_NOT);
				(yyval)=createTree(TLookup("boolean"), NODE_NOT, NULL, NULL, NULL, (yyvsp[0]), NULL, NULL);
			}
#line 3020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 979 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck(TLookup("integer"), (yyvsp[0])->type, NODE_MINUS);
				(yyval)=createTree(TLookup("boolean"), NODE_NEG, NULL, NULL, NULL, (yyvsp[0]), NULL, NULL);
			}
#line 3029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 983 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 3035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 984 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 3041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 985 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 986 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("type"), NODE_NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
#line 3053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 987 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 3059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 989 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[0]), NODE_ID);
				(yyval)=(yyvsp[0]);
			}
#line 3068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 993 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-3]), NODE_ARRAY);
				typeCheck((yyvsp[-1])->type, 0, NODE_ARRAY);
				(yyval)=createTree((yyvsp[-3])->type, NODE_ARRAY, NULL, NULL, NULL, (yyvsp[-3]), (yyvsp[-1]), NULL);
			}
#line 3078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 998 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-6]), NODE_MATRIX);
				typeCheck((yyvsp[-4])->type, (yyvsp[-1])->type, NODE_MATRIX);
				(yyval)=createTree((yyvsp[-6])->type, NODE_MATRIX, NULL, NULL, NULL, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1]));
			}
#line 3088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1003 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[0]), NODE_PTR);
				(yyval)=createTree((yyvsp[0])->type, NODE_PTR, NULL, NULL, NULL, (yyvsp[0]), NULL, NULL);
			}
#line 3097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1007 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("integer"), NODE_REF, NULL, NULL, NULL, (yyvsp[0]), NULL, NULL);}
#line 3103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1008 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-3]), NODE_REF_ARRAY);
				typeCheck((yyvsp[-1])->type, TLookup("integer"), NODE_ARRAY);
				(yyval)=createTree(TLookup("integer"), NODE_REF_ARRAY, NULL, NULL, NULL, (yyvsp[-3]), (yyvsp[-1]), NULL);
			}
#line 3113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1013 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-6]), NODE_REF_MATRIX);
				typeCheck((yyvsp[-4])->type, (yyvsp[-1])->type, NODE_MATRIX);
				(yyval)=createTree(TLookup("integer"), NODE_REF_MATRIX, NULL, NULL, NULL, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1]));
			}
#line 3123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1018 "exprtree.y" /* yacc.c:1646  */
    {
				struct Gsymbol *Gtemp;
				idCheck((yyvsp[-3]), NODE_FUNC);
				Gtemp=GLookup((yyvsp[-3])->name);
				(yyval)=createTree((yyvsp[-3])->type, NODE_FUNC, NULL, NULL, (yyvsp[-1]), (yyvsp[-3]), (yyvsp[-1]), NULL);
			}
#line 3134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1024 "exprtree.y" /* yacc.c:1646  */
    {
				struct Gsymbol *Gtemp;
				idCheck((yyvsp[-2]), NODE_FUNC);
				Gtemp=GLookup((yyvsp[-2])->name);
				if(Gtemp->paramlist!=NULL){
					printf("Parameter List is not NULL: %s\n", (yyvsp[-2])->name);
					exit(1);
				}
				(yyval)=createTree((yyvsp[-2])->type, NODE_FUNC, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);
			}
#line 3149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1036 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree((yyvsp[0])->type, NODE_ARG, NULL, NULL, NULL, (yyvsp[0]), (yyvsp[-2]), NULL);}
#line 3155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1037 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree((yyvsp[0])->type, NODE_ARG, NULL, NULL, NULL, (yyvsp[0]), NULL, NULL);}
#line 3161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1040 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-1])->type, functype, NODE_ASSIGN);
				(yyval)=createTree((yyvsp[-1])->type, NODE_RET, NULL, NULL, NULL, (yyvsp[-1]), NULL, NULL);
			}
#line 3170 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3174 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1046 "exprtree.y" /* yacc.c:1906  */


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
