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
    DECL = 266,
    ENDDECL = 267,
    INT = 268,
    STR = 269,
    BRKP = 270,
    MAIN = 271,
    RETURN = 272,
    IF = 273,
    THEN = 274,
    ELSE = 275,
    ENDIF = 276,
    WHILE = 277,
    DO = 278,
    ENDWHILE = 279,
    BREAK = 280,
    CONTINUE = 281,
    REPEAT = 282,
    UNTIL = 283,
    PLUS = 284,
    MINUS = 285,
    MUL = 286,
    DIV = 287,
    MOD = 288,
    LT = 289,
    GT = 290,
    LE = 291,
    GE = 292,
    NE = 293,
    EQ = 294,
    AND = 295,
    OR = 296,
    NOT = 297
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
#define DECL 266
#define ENDDECL 267
#define INT 268
#define STR 269
#define BRKP 270
#define MAIN 271
#define RETURN 272
#define IF 273
#define THEN 274
#define ELSE 275
#define ENDIF 276
#define WHILE 277
#define DO 278
#define ENDWHILE 279
#define BREAK 280
#define CONTINUE 281
#define REPEAT 282
#define UNTIL 283
#define PLUS 284
#define MINUS 285
#define MUL 286
#define DIV 287
#define MOD 288
#define LT 289
#define GT 290
#define LE 291
#define GE 292
#define NE 293
#define EQ 294
#define AND 295
#define OR 296
#define NOT 297

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

#line 218 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   679

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  261

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,     2,
      47,    48,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    32,    35,    39,    45,    46,    49,    52,
      53,    56,    57,    60,    61,    62,    63,    64,    68,    72,
      73,    76,    77,    80,   138,   183,   241,   287,   288,   291,
     300,   311,   312,   315,   316,   319,   320,   323,   326,   327,
     328,   329,   332,   371,   372,   375,   376,   379,   379,   379,
     379,   379,   380,   381,   382,   385,   389,   394,   399,   405,
     408,   413,   419,   425,   432,   433,   436,   437,   438,   441,
     445,   449,   453,   457,   461,   465,   469,   473,   477,   481,
     485,   489,   493,   497,   501,   502,   503,   504,   508,   513,
     518,   522,   523,   528,   533,   540,   553,   554,   557
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "STRVAL", "START", "END",
  "READ", "WRITE", "ASSIGN", "DECL", "ENDDECL", "INT", "STR", "BRKP",
  "MAIN", "RETURN", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO",
  "ENDWHILE", "BREAK", "CONTINUE", "REPEAT", "UNTIL", "PLUS", "MINUS",
  "MUL", "DIV", "MOD", "LT", "GT", "LE", "GE", "NE", "EQ", "AND", "OR",
  "NOT", "';'", "','", "'['", "']'", "'('", "')'", "'{'", "'}'", "'&'",
  "$accept", "program", "GDeclBlock", "GDeclList", "GDecl", "Type",
  "GidList", "Gid", "FDefBlock", "FDef", "ParamList", "Param", "PType",
  "LDeclBlock", "LDeclList", "LDecl", "IdList", "MainBlock", "Body",
  "Slist", "Stmt", "InputStmt", "OutputStmt", "AsgStmt", "IfStmt",
  "WhileStmt", "Expr", "ArgList", "RetStmt", YY_NULLPTR
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
     295,   296,   297,    59,    44,    91,    93,    40,    41,   123,
     125,    38
};
# endif

#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      81,   110,   108,    89,  -110,  -110,  -110,   121,  -110,     0,
    -110,   104,     2,    89,  -110,  -110,  -110,  -110,    68,   138,
      85,  -110,   101,   103,   150,  -110,  -110,   158,    -3,   124,
    -110,     0,   127,    16,   129,   128,  -110,  -110,  -110,   -25,
    -110,     5,    25,  -110,   139,   140,   -22,    61,   142,   153,
    -110,  -110,   180,  -110,    35,   179,   179,   143,   144,    40,
     191,  -110,  -110,  -110,   126,   190,   190,   179,   179,   148,
     162,  -110,    15,   132,  -110,   155,   159,   160,   190,   190,
     179,  -110,  -110,   208,   125,  -110,  -110,    66,   166,   167,
     173,    63,   170,   171,   243,   183,   184,   243,   226,   155,
    -110,  -110,  -110,  -110,  -110,  -110,   225,  -110,  -110,   185,
     186,   190,  -110,  -110,    31,    63,    63,    58,    63,  -110,
      72,  -110,  -110,    63,   230,    63,    63,   231,   531,    63,
      63,   264,  -110,  -110,   176,   228,  -110,   232,  -110,  -110,
    -110,   192,  -110,   238,   546,   387,    37,   247,   267,    63,
      39,   640,  -110,   275,   287,   209,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,  -110,
     307,   327,   210,   212,    63,  -110,  -110,  -110,  -110,    67,
      63,   213,   207,   217,   405,  -110,   606,    47,  -110,    63,
     640,   640,   275,   275,   275,   295,   295,   295,   295,   295,
     295,   631,   619,   244,   239,    63,    63,   561,    63,    63,
     423,  -110,   221,  -110,   233,    63,  -110,   441,   243,   243,
     347,   367,  -110,   576,   459,    56,  -110,    63,   606,   235,
     134,   197,    55,   234,  -110,   261,    63,   240,   477,    63,
     243,   241,   242,  -110,  -110,    63,   495,  -110,  -110,   513,
     222,  -110,  -110,   591,   227,  -110,   245,  -110,   249,  -110,
    -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     5,     9,    10,     0,     7,     0,
       1,     9,     0,     0,    22,     3,     4,     6,    13,     0,
       0,    12,     0,     0,     0,    21,     2,     0,     0,    16,
       8,     0,     0,     0,     0,     0,    31,    32,    19,     0,
      28,     0,     0,    11,     0,     0,     0,     0,    14,     0,
      17,    29,     0,    20,     0,     0,     0,     0,     0,     0,
       0,    27,    30,    18,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,    36,     0,     0,     0,     0,     0,
       0,    15,    40,     0,     0,    33,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    47,    48,    49,    50,    51,     0,    42,    24,     0,
       0,     0,    41,    37,     0,     0,     0,     0,     0,    54,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,     0,     0,    45,     0,    44,    23,
      26,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,    83,    90,    82,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,     0,     0,     0,    43,    25,    39,    60,     0,
       0,     0,     0,     0,     0,    95,    97,     0,    84,     0,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    59,    88,     0,    94,     0,     0,     0,
       0,     0,    63,     0,     0,     0,    58,     0,    96,    92,
       0,     0,     0,     0,    61,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,     0,     0,    56,    89,     0,
       0,    65,    66,     0,     0,    93,     0,    62,     0,    64,
      57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  -110,   269,    -1,  -110,   250,  -110,   280,
      74,   300,  -110,   -43,  -110,   277,  -110,   281,   -51,   -93,
     -99,  -110,  -110,  -110,  -110,  -110,  -109,  -110,   252
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     8,     9,    20,    21,    13,    14,
      39,    40,    41,    65,    73,    74,    84,    15,    76,    99,
     100,   101,   102,   103,   104,   105,   128,   187,   106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     136,   131,    12,    18,   134,    23,   144,   145,    51,   148,
      36,    37,    12,    66,   151,    77,   153,   154,    82,    49,
     170,   171,    49,    50,    78,    79,    57,   109,   110,    36,
      37,    19,   136,    24,   142,   136,    52,   111,    36,    37,
     184,   186,   120,   121,   122,    38,    83,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     141,   146,   143,    72,    45,   207,   120,   121,   122,   123,
     124,   210,    72,    53,    36,    37,   115,   208,   219,    49,
     217,   125,   180,    63,    49,   181,   126,   185,    69,   147,
     127,   215,     1,   123,   124,   216,   220,   221,   243,   223,
     224,   236,    11,     6,   237,   125,   228,    46,    10,    58,
     126,   116,   209,    27,   127,    28,    54,   149,   238,   150,
      22,    59,     4,     5,     6,   230,   231,   246,    30,    31,
     249,   136,   136,    16,     5,     6,   253,    87,    71,     5,
       6,    29,    88,    89,    85,     5,     6,   250,    32,    90,
      33,   136,    92,    34,   240,   241,    93,    94,    87,    95,
      96,    97,    35,    88,    89,    98,    36,    37,   113,   114,
      90,    42,    91,    92,    48,    44,    47,    93,    94,    87,
      95,    96,    97,    62,    88,    89,    98,    60,    55,    56,
      64,    90,    67,    68,    92,    70,    75,    80,    93,    94,
      87,    95,    96,    97,   173,    88,    89,    98,    81,   107,
     108,   112,    90,   117,   118,    92,   119,   129,   130,    93,
      94,   242,    95,    96,    97,    87,   132,   133,    98,   135,
      88,    89,   138,   152,   155,   139,   140,    90,   174,   175,
      92,   177,   176,   256,    93,    94,    87,    95,    96,    97,
     182,    88,    89,    98,   189,   212,   211,   205,    90,   206,
     213,    92,   219,   218,   226,    93,    94,    87,    95,    96,
      97,   245,    88,    89,    98,   258,    17,   244,   227,    90,
     239,    43,    92,   247,   251,   252,   172,    94,   259,    95,
      96,    97,   260,    25,    26,    98,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   161,
     162,   163,   164,   165,   166,   183,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,    -1,
      -1,    -1,    -1,    -1,    -1,   188,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,    61,
      86,   137,     0,     0,     0,   203,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,     0,     0,     0,     0,   204,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,     0,     0,     0,     0,   232,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,     0,     0,     0,     0,   233,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,     0,     0,   179,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,     0,     0,     0,
       0,   214,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,     0,     0,     0,     0,   225,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,     0,     0,     0,     0,   229,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,     0,     0,     0,     0,   235,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,     0,     0,   248,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,     0,     0,     0,
       0,   254,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,     0,     0,     0,     0,   255,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,     0,   169,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,   178,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,     0,   222,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,   234,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,     0,   257,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   158,   159,   160,   161,   162,   163,   164,   165,   166
};

static const yytype_int16 yycheck[] =
{
      99,    94,     3,     3,    97,     3,   115,   116,     3,   118,
      13,    14,    13,    56,   123,    66,   125,   126,     3,    44,
     129,   130,    44,    48,    67,    68,    48,    78,    79,    13,
      14,    31,   131,    31,     3,   134,    31,    80,    13,    14,
     149,   150,     3,     4,     5,    48,    31,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     111,     3,    31,    64,    48,   174,     3,     4,     5,    30,
      31,   180,    73,    48,    13,    14,    10,    10,    23,    44,
     189,    42,    45,    48,    44,    48,    47,    48,    48,    31,
      51,    44,    11,    30,    31,    48,   205,   206,    43,   208,
     209,    45,    13,    14,    48,    42,   215,    33,     0,    48,
      47,    45,    45,    45,    51,    47,    42,    45,   227,    47,
      16,    47,    12,    13,    14,   218,   219,   236,    43,    44,
     239,   230,   231,    12,    13,    14,   245,     3,    12,    13,
      14,     3,     8,     9,    12,    13,    14,   240,    47,    15,
      47,   250,    18,     3,    20,    21,    22,    23,     3,    25,
      26,    27,     4,     8,     9,    31,    13,    14,    43,    44,
      15,    47,    17,    18,    46,    48,    47,    22,    23,     3,
      25,    26,    27,     3,     8,     9,    31,    45,    49,    49,
      11,    15,    49,    49,    18,     4,     6,    49,    22,    23,
       3,    25,    26,    27,    28,     8,     9,    31,    46,    50,
      50,     3,    15,    47,    47,    18,    43,    47,    47,    22,
      23,    24,    25,    26,    27,     3,    43,    43,    31,     3,
       8,     9,     7,     3,     3,    50,    50,    15,    10,     7,
      18,     3,    50,    21,    22,    23,     3,    25,    26,    27,
       3,     8,     9,    31,    45,    48,    43,    47,    15,    47,
      43,    18,    23,    19,    43,    22,    23,     3,    25,    26,
      27,    10,     8,     9,    31,    48,     7,    43,    45,    15,
      45,    31,    18,    43,    43,    43,    22,    23,    43,    25,
      26,    27,    43,    13,    13,    31,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    34,
      35,    36,    37,    38,    39,    48,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    34,
      35,    36,    37,    38,    39,    48,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    49,
      73,    99,    -1,    -1,    -1,    48,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    46,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    46,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    46,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    46,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    31,    32,    33,    34,    35,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    53,    54,    12,    13,    14,    55,    56,    57,
       0,    13,    57,    60,    61,    69,    12,    56,     3,    31,
      58,    59,    16,     3,    31,    61,    69,    45,    47,     3,
      43,    44,    47,    47,     3,     4,    13,    14,    48,    62,
      63,    64,    47,    59,    48,    48,    62,    47,    46,    44,
      48,     3,    31,    48,    62,    49,    49,    48,    48,    62,
      45,    63,     3,    48,    11,    65,    65,    49,    49,    48,
       4,    12,    57,    66,    67,     6,    70,    70,    65,    65,
      49,    46,     3,    31,    68,    12,    67,     3,     8,     9,
      15,    17,    18,    22,    23,    25,    26,    27,    31,    71,
      72,    73,    74,    75,    76,    77,    80,    50,    50,    70,
      70,    65,     3,    43,    44,    10,    45,    47,    47,    43,
       3,     4,     5,    30,    31,    42,    47,    51,    78,    47,
      47,    71,    43,    43,    71,     3,    72,    80,     7,    50,
      50,    70,     3,    31,    78,    78,     3,    31,    78,    45,
      47,    78,     3,    78,    78,     3,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    43,
      78,    78,    22,    28,    10,     7,    50,     3,    43,    46,
      45,    48,     3,    48,    78,    48,    78,    79,    48,    45,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    48,    48,    47,    47,    78,    10,    45,
      78,    43,    48,    43,    46,    44,    48,    78,    19,    23,
      78,    78,    43,    78,    78,    46,    43,    45,    78,    46,
      71,    71,    48,    48,    43,    46,    45,    48,    78,    45,
      20,    21,    24,    43,    43,    10,    78,    43,    46,    78,
      71,    43,    43,    78,    46,    46,    21,    43,    48,    43,
      43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    55,    55,    56,    57,
      57,    58,    58,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    66,    66,    67,    68,    68,
      68,    68,    69,    70,    70,    71,    71,    72,    72,    72,
      72,    72,    72,    72,    72,    73,    73,    73,    73,    74,
      75,    75,    75,    75,    76,    76,    77,    77,    77,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    79,    79,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     3,     2,     2,     1,     3,     1,
       1,     3,     1,     1,     4,     7,     2,     4,     5,     3,
       4,     2,     1,     9,     8,    10,     9,     3,     1,     2,
       3,     1,     1,     3,     2,     2,     1,     3,     3,     4,
       1,     2,     8,     4,     3,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     5,     8,    11,     6,     5,
       4,     7,    10,     5,    10,     8,     8,     7,     7,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     1,     1,     1,     4,     7,
       2,     2,     5,     8,     4,     3,     3,     1,     3
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
        case 4:
#line 35 "exprtree.y" /* yacc.c:1646  */
    {
			evaluate();
			binding=1;
		}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 39 "exprtree.y" /* yacc.c:1646  */
    {
			evaluate();
			binding=1;
		}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 52 "exprtree.y" /* yacc.c:1646  */
    {declType=inttype;}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 53 "exprtree.y" /* yacc.c:1646  */
    {declType=strtype;}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[0])->varname, declType, 1, 1, NODE_ID, NULL);}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 61 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-3])->varname, declType, (yyvsp[-1])->val, 1, NODE_ARRAY, NULL);}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 62 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-6])->varname, declType, (yyvsp[-4])->val, (yyvsp[-1])->val, NODE_MATRIX, NULL);}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 63 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[0])->varname, declType, 1, 1, NODE_PTR, NULL);}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 64 "exprtree.y" /* yacc.c:1646  */
    {
						GInstall((yyvsp[-3])->varname, declType, 0, 0, NODE_FUNC, Phead);
						Phead=Ptail=NULL;
					}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 68 "exprtree.y" /* yacc.c:1646  */
    {
						GInstall((yyvsp[-3])->varname, declType, 0, 0, NODE_FUNC, Phead);	
						Phead=Ptail=NULL;
					}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 72 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-2])->varname, declType, 0, 0, NODE_FUNC, NULL);}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 73 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-2])->varname, declType, 0, 0, NODE_FUNC, NULL);}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 80 "exprtree.y" /* yacc.c:1646  */
    {
			struct Lsymbol *Ltemp;
			struct Gsymbol *Gtemp;
			struct Paramstruct *Ptemp1, *Ptemp2;
			functype=declType;
			binding=1;

			Gtemp=GLookup((yyvsp[-7])->varname);
			if(Gtemp==NULL || Gtemp->nodetype!=NODE_FUNC){
				printf("Function not declared: %s\n", (yyvsp[-7])->varname);
				exit(1);
			}
			if(Gtemp->size1!=0){
				printf("Multiple Function Declaration: %s\n", (yyvsp[-7])->varname);
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

			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 138 "exprtree.y" /* yacc.c:1646  */
    {
			struct Lsymbol *Ltemp;
			struct Gsymbol *Gtemp;
			functype=declType;
			binding=1;

			Gtemp=GLookup((yyvsp[-6])->varname);
			if(Gtemp==NULL || Gtemp->nodetype!=NODE_FUNC){
				printf("Function not declared: %s\n", (yyvsp[-6])->varname);
				exit(1);
			}
			if(Gtemp->size1!=0){
				printf("Multiple Function Declaration: %s\n", (yyvsp[-6])->varname);
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

			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 183 "exprtree.y" /* yacc.c:1646  */
    {
			struct Lsymbol *Ltemp;
			struct Gsymbol *Gtemp;
			struct Paramstruct *Ptemp1, *Ptemp2;
			functype=declType;
			binding=1;

			Gtemp=GLookup((yyvsp[-7])->varname);
			if(Gtemp==NULL || Gtemp->nodetype!=NODE_FUNC){
				printf("Function not declared: %s\n", (yyvsp[-7])->varname);
				exit(1);
			}
			if(Gtemp->size1!=0){
				printf("Multiple Function Declaration: %s\n", (yyvsp[-7])->varname);
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

			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 241 "exprtree.y" /* yacc.c:1646  */
    {
			struct Lsymbol *Ltemp;
			struct Gsymbol *Gtemp;
			functype=declType;
			binding=1;

			Gtemp=GLookup((yyvsp[-6])->varname);
			if(Gtemp==NULL || Gtemp->nodetype!=NODE_FUNC){
				printf("Function not declared: %s\n", (yyvsp[-6])->varname);
				exit(1);
			}
			if(Gtemp->size1!=0){
				printf("Multiple Function Declaration: %s\n", (yyvsp[-6])->varname);
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

			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 291 "exprtree.y" /* yacc.c:1646  */
    {
			struct Paramstruct *Ptemp;
			Ptemp=PLookup((yyvsp[0])->varname);
			if(Ptemp!=NULL){
				printf("Multiple variable declaration: %s\n", (yyvsp[0])->varname);
				exit(1);
			}
			PInstall((yyvsp[0])->varname, PdeclType, NODE_ID);
		}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 300 "exprtree.y" /* yacc.c:1646  */
    {
			struct Paramstruct *Ptemp;
			Ptemp=PLookup((yyvsp[0])->varname);
			if(Ptemp!=NULL){
				printf("Multiple variable declaration: %s\n", (yyvsp[0])->varname);
				exit(1);
			}
			PInstall((yyvsp[0])->varname, PdeclType, NODE_PTR);
		}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 311 "exprtree.y" /* yacc.c:1646  */
    {PdeclType=inttype;}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 312 "exprtree.y" /* yacc.c:1646  */
    {PdeclType=strtype;}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 326 "exprtree.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0])->varname, declType, NODE_ID);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 327 "exprtree.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0])->varname, declType, NODE_PTR);}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 328 "exprtree.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0])->varname, declType, NODE_ID);}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 329 "exprtree.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0])->varname, declType, NODE_PTR);}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 332 "exprtree.y" /* yacc.c:1646  */
    {
			struct Lsymbol *Ltemp;
			struct Gsymbol *Gtemp;
			functype=inttype;
			binding=1;

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

			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 371 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL, NODE_CONN, (yyvsp[-2]), (yyvsp[-1]), NULL);}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 372 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL, NODE_CONN, (yyvsp[-1]), NULL, NULL);}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 375 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL, NODE_CONN, (yyvsp[-1]), (yyvsp[0]), NULL);}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 376 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 379 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 380 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL, NODE_BREAK, NULL, NULL, NULL);}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 381 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL, NODE_CONTINUE, NULL, NULL, NULL);}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 382 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL, NODE_BRKP, NULL, NULL, NULL);}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 385 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-2]), NODE_ID);
				(yyval)=createTree(0, 0, NULL, NODE_READ, (yyvsp[-2]), NULL, NULL);
			}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 389 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-5]), NODE_ARRAY);
				typeCheck((yyvsp[-3])->type, 0, NODE_ARRAY);
				(yyval)=createTree(0, 0, NULL, NODE_READ_ARRAY, (yyvsp[-5]), (yyvsp[-3]), NULL);
			}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 394 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-8]), NODE_MATRIX);
				typeCheck((yyvsp[-6])->type, (yyvsp[-3])->type, NODE_MATRIX);
				(yyval)=createTree(0, 0, NULL, NODE_READ_MATRIX, (yyvsp[-8]), (yyvsp[-6]), (yyvsp[-3]));
			}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 399 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-2]), NODE_PTR);
				(yyval)=createTree(0, 0, NULL, NODE_READ_PTR, (yyvsp[-2]), NULL, NULL);
			}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 405 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL,  NODE_WRITE, (yyvsp[-2]), NULL, NULL);}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 408 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-3]), NODE_ID);
				typeCheck((yyvsp[-3])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(0, 0, NULL, NODE_ASSIGN, (yyvsp[-3]), (yyvsp[-1]), NULL); 
			}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 413 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-6]), NODE_ARRAY);
				typeCheck((yyvsp[-4])->type, 0, NODE_ARRAY);
				typeCheck((yyvsp[-6])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(0, 0, NULL, NODE_ASSIGN_ARRAY, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1]));
			}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 419 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-9]), NODE_MATRIX);
				typeCheck((yyvsp[-7])->type, (yyvsp[-4])->type, NODE_MATRIX);
				typeCheck((yyvsp[-9])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(0, 0, NULL, NODE_ASSIGN_MATRIX, (yyvsp[-9]), createTree(0, 0, NULL, NODE_CONN, (yyvsp[-7]), (yyvsp[-4]), NULL),(yyvsp[-1]));
			}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 425 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-3]), NODE_PTR);
				typeCheck((yyvsp[-3])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(0, 0, NULL, NODE_ASSIGN_PTR, (yyvsp[-3]), (yyvsp[-1]), NULL);
			}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 432 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL, NODE_ELIF, (yyvsp[-7]), (yyvsp[-4]), (yyvsp[-2]));}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 433 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL, NODE_IF, (yyvsp[-5]), (yyvsp[-2]), NULL);}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 436 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL, NODE_WHILE, (yyvsp[-5]), (yyvsp[-2]), NULL);}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 437 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL, NODE_DO_WHILE, (yyvsp[-5]), (yyvsp[-2]), NULL);}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 438 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL, NODE_REPEAT, (yyvsp[-5]), (yyvsp[-2]), NULL);}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 441 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_PLUS);
				(yyval)=createTree(0, inttype, NULL, NODE_PLUS, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 445 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_MINUS);
				(yyval)=createTree(0, inttype, NULL, NODE_MINUS, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 449 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_MUL);
				(yyval)=createTree(0, inttype, NULL, NODE_MUL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 453 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_DIV);
				(yyval)=createTree(0, inttype, NULL, NODE_DIV, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 457 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_MOD);
				(yyval)=createTree(0, inttype, NULL, NODE_MOD, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 461 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_LT);
				(yyval)=createTree(0, booltype, NULL, NODE_LT, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 465 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_GT);
				(yyval)=createTree(0, booltype, NULL, NODE_GT, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 469 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_LE);
				(yyval)=createTree(0, booltype, NULL, NODE_LE, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 473 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_GE);
				(yyval)=createTree(0, booltype, NULL, NODE_GE, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 477 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_NE);
				(yyval)=createTree(0, booltype, NULL, NODE_NE, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 481 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_EQ);
				(yyval)=createTree(0, booltype, NULL, NODE_EQ, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 485 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_AND);
				(yyval)=createTree(0, booltype, NULL, NODE_AND, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 489 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_OR);
				(yyval)=createTree(0, booltype, NULL, NODE_OR, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 493 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[0])->type, inttype, NODE_NOT);
				(yyval)=createTree(0, booltype, NULL, NODE_NOT, (yyvsp[0]), NULL, NULL);
			}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 497 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck(inttype, (yyvsp[0])->type, NODE_MINUS);
				(yyval)=createTree(0, inttype, NULL, NODE_NEG, (yyvsp[0]), NULL, NULL);
			}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 501 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 502 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 503 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 504 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[0]), NODE_ID);
				(yyval)=(yyvsp[0]);
			}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 508 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-3]), NODE_ARRAY);
				typeCheck((yyvsp[-1])->type, 0, NODE_ARRAY);
				(yyval)=createTree(0, (yyvsp[-3])->type, NULL, NODE_ARRAY, (yyvsp[-3]), (yyvsp[-1]), NULL);
			}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 513 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-6]), NODE_MATRIX);
				typeCheck((yyvsp[-4])->type, (yyvsp[-1])->type, NODE_MATRIX);
				(yyval)=createTree(0, (yyvsp[-6])->type, NULL, NODE_MATRIX, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1]));
			}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 518 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[0]), NODE_PTR);
				(yyval)=createTree(0, (yyvsp[0])->type, NULL, NODE_PTR, (yyvsp[0]), NULL, NULL);
			}
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 522 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, inttype, NULL, NODE_REF, (yyvsp[0]), NULL, NULL);}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 523 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-3]), NODE_REF_ARRAY);
				typeCheck((yyvsp[-1])->type, 0, NODE_ARRAY);
				(yyval)=createTree(0, inttype, NULL, NODE_REF_ARRAY, (yyvsp[-3]), (yyvsp[-1]), NULL);
			}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 528 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-6]), NODE_REF_MATRIX);
				typeCheck((yyvsp[-4])->type, (yyvsp[-1])->type, NODE_MATRIX);
				(yyval)=createTree(0, inttype, NULL, NODE_REF_MATRIX, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1]));
			}
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 533 "exprtree.y" /* yacc.c:1646  */
    {
				struct Gsymbol *Gtemp;
				idCheck((yyvsp[-3]), NODE_FUNC);
				Gtemp=GLookup((yyvsp[-3])->varname);
				(yyval)=createTree(0, (yyvsp[-3])->type, NULL, NODE_FUNC, (yyvsp[-3]), (yyvsp[-1]), NULL);
				(yyval)->arglist=(yyvsp[-1]);
			}
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 540 "exprtree.y" /* yacc.c:1646  */
    {
				struct Gsymbol *Gtemp;
				idCheck((yyvsp[-2]), NODE_FUNC);
				Gtemp=GLookup((yyvsp[-2])->varname);
				if(Gtemp->paramlist!=NULL){
					printf("Parameter List is not NULL: %s\n", (yyvsp[-2])->varname);
					exit(1);
				}
				(yyval)=createTree(0, (yyvsp[-2])->type, NULL, NODE_FUNC, (yyvsp[-2]), NULL, NULL);
				(yyval)->arglist=NULL;
			}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 553 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL, NODE_ARG, (yyvsp[0]), (yyvsp[-2]), NULL);}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 554 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(0, 0, NULL, NODE_ARG, (yyvsp[0]), NULL, NULL);}
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 557 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-1])->type, functype, NODE_ASSIGN);
				(yyval)=createTree(0, 0, NULL, NODE_RET, (yyvsp[-1]), NULL, NULL);
			}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2388 "y.tab.c" /* yacc.c:1646  */
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
#line 563 "exprtree.y" /* yacc.c:1906  */


void yyerror(char const *s){
	printf("yyerror %s\n",s);
}

int main(int argc, char* argv[]){
	if(argc>1){
		fp=fopen(argv[1], "r");
		if(fp)
			yyin=fp;
	}
	target_file=fopen("exprtree.xsm","w");
	yyparse();
	return 0;
}
