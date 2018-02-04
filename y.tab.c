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

/* Copy the second part of user declarations.  */

#line 230 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   850

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  313

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,     2,
      55,    56,     2,     2,    52,     2,    57,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    32,    35,    36,    39,    40,    43,    49,
      50,    53,    56,    57,    58,    65,    69,    75,    76,    79,
      82,    83,    84,    93,    94,    97,    98,    99,   100,   101,
     105,   109,   110,   113,   114,   117,   118,   119,   128,   187,
     231,   288,   333,   334,   337,   346,   357,   358,   359,   368,
     369,   372,   373,   376,   379,   380,   381,   382,   385,   427,
     428,   431,   432,   435,   435,   435,   435,   435,   436,   437,
     438,   441,   445,   450,   455,   461,   464,   469,   475,   482,
     487,   491,   497,   502,   507,   511,   517,   518,   521,   522,
     523,   526,   539,   549,   553,   557,   561,   565,   569,   573,
     577,   581,   585,   589,   593,   597,   601,   605,   609,   610,
     611,   612,   613,   614,   618,   623,   628,   632,   633,   638,
     643,   649,   661,   662,   665
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "STRVAL", "START", "END",
  "READ", "WRITE", "ASSIGN", "INIT", "ALLOC", "FREE", "TYPE", "ENDTYPE",
  "DECL", "ENDDECL", "INT", "STR", "BRKP", "MAIN", "RETURN", "IF", "THEN",
  "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "BREAK", "CONTINUE",
  "REPEAT", "UNTIL", "PLUS", "MINUS", "MUL", "DIV", "MOD", "LT", "GT",
  "LE", "GE", "NE", "EQ", "AND", "OR", "NOT", "NIL", "'{'", "'}'", "';'",
  "','", "'['", "']'", "'('", "')'", "'.'", "'&'", "$accept", "program",
  "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl",
  "TypeName", "GDeclBlock", "GDeclList", "GDecl", "Type", "GidList", "Gid",
  "FDefBlock", "FuncType", "FDef", "ParamList", "Param", "PType",
  "LDeclBlock", "LDeclList", "LDecl", "IdList", "MainBlock", "Body",
  "Slist", "Stmt", "InputStmt", "OutputStmt", "AsgStmt", "IfStmt",
  "WhileStmt", "Field", "Expr", "ArgList", "RetStmt", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   123,
     125,    59,    44,    91,    93,    40,    41,    46,    38
};
# endif

#define YYPACT_NINF -122

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-122)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,     8,    61,    51,    20,    11,  -122,  -122,   183,   114,
     131,  -122,  -122,  -122,  -122,  -122,  -122,   191,  -122,     9,
    -122,  -122,  -122,   114,     1,  -122,  -122,  -122,  -122,  -122,
     118,  -122,   105,  -122,  -122,    85,   112,    36,  -122,  -122,
    -122,    67,    80,   140,  -122,  -122,    79,   178,     0,    91,
    -122,     9,    12,   155,   132,  -122,   160,  -122,  -122,  -122,
    -122,   -46,  -122,    45,    14,  -122,   147,    72,   169,    86,
     166,   156,  -122,  -122,   222,  -122,   110,   212,   188,   212,
     192,   124,   238,  -122,  -122,  -122,   203,   245,   212,   245,
     212,   206,   200,  -122,    74,   253,  -122,   230,   213,   245,
     217,   245,   212,  -122,  -122,   265,   138,  -122,  -122,    -3,
     219,   223,   225,   231,   168,   226,   239,   338,   242,   252,
     338,   301,   230,  -122,  -122,  -122,  -122,  -122,  -122,    -2,
     299,  -122,   258,  -122,   266,   245,  -122,  -122,    75,    24,
     168,   304,    87,   168,   314,  -122,   220,  -122,  -122,   168,
     316,   168,  -122,   168,   319,   267,   673,   168,   168,   364,
    -122,  -122,   256,   313,  -122,   320,    71,   323,  -122,  -122,
    -122,   278,  -122,   326,   275,   276,   691,   505,  -122,   -40,
     330,   367,   136,   142,   168,   109,   378,  -122,   205,   390,
     281,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,  -122,   413,   436,   290,   294,   168,
    -122,   295,   709,  -122,  -122,  -122,   280,   296,  -122,    -1,
     168,   286,   297,   303,   305,   306,   526,  -122,   781,   127,
    -122,   168,   378,   378,   205,   205,   205,   257,   257,   257,
     257,   257,   257,   806,   794,   331,   332,   168,   168,   727,
     307,  -122,   308,   311,   168,   168,   547,  -122,   324,  -122,
    -122,  -122,   318,   168,  -122,   568,   338,   338,   459,   482,
    -122,   325,  -122,  -122,   745,   589,   -32,  -122,   168,   781,
     327,   204,   282,    35,   328,  -122,  -122,   354,   168,   334,
     610,   168,   338,   335,   337,  -122,  -122,   168,   631,  -122,
    -122,   652,   312,  -122,  -122,   763,   322,  -122,   339,  -122,
     342,  -122,  -122
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     0,     0,     0,     7,     1,     0,     0,
       0,     4,     6,    22,    16,    20,    21,     0,    18,     0,
      37,    35,    36,     0,     0,    34,     3,    14,    12,    13,
       0,    10,     0,    15,    17,    25,     0,     0,    24,    33,
       2,     0,     0,     0,     8,     9,     0,     0,     0,    28,
      19,     0,     0,     0,     0,    11,     0,    48,    46,    47,
      31,     0,    43,     0,     0,    23,     0,     0,     0,     0,
      26,     0,    29,    44,     0,    32,     0,     0,     0,     0,
       0,     0,     0,    42,    45,    30,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,    52,     0,     0,     0,
       0,     0,     0,    27,    56,     0,     0,    49,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,     0,
       0,    39,     0,    58,     0,     0,    57,    53,     0,     0,
       0,     0,     0,     0,     0,    70,   113,   109,   110,     0,
       0,     0,   111,     0,     0,   112,     0,     0,     0,     0,
      68,    69,     0,     0,    61,     0,     0,     0,    60,    38,
      41,     0,    54,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,   107,   116,   106,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,     0,     0,     0,
      59,     0,     0,    91,    40,    55,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   123,     0,
     108,     0,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     0,     0,     0,     0,     0,
       0,    80,     0,     0,     0,     0,     0,    71,     0,    75,
      84,    85,   114,     0,   120,     0,     0,     0,     0,     0,
      79,     0,    81,    82,     0,     0,     0,    74,     0,   122,
     118,     0,     0,     0,     0,    83,    77,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,    72,
     115,     0,     0,    87,    88,     0,     0,   119,     0,    78,
       0,    86,    73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,  -122,   376,  -122,   352,  -122,  -122,  -122,
     366,   -22,  -122,   346,  -122,  -122,   375,    89,   368,  -122,
      37,  -122,   343,  -122,   414,   -55,  -115,  -121,  -122,  -122,
    -122,  -122,  -122,   -97,  -100,  -122,   277
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,    30,    31,    32,     9,    17,
      18,    19,    37,    38,    23,    24,    25,    61,    62,    63,
      87,    95,    96,   106,    26,    98,   122,   123,   124,   125,
     126,   127,   128,   155,   156,   229,   130
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     129,   164,   159,    57,    41,   162,    71,   139,   166,   254,
      72,     4,    35,   220,     4,    57,   221,    57,    58,    59,
     129,   288,    42,   129,   289,   129,    11,   146,   147,   148,
      58,    59,    58,    59,   100,   174,   175,    43,   164,   176,
     177,   164,     1,   181,   132,    36,   134,   183,    73,   186,
     140,   188,   255,   189,   141,   167,    60,   205,   206,   149,
     150,     7,   129,   267,    94,   129,   212,     8,    66,    10,
      75,   151,   152,    94,   146,   147,   148,   104,   172,   153,
     171,    74,   154,   211,   226,   228,   295,    50,    51,    57,
     179,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,    58,    59,   149,   150,    46,   249,
     105,   173,   146,   147,   148,    49,    89,    20,   151,   152,
     256,    27,    52,   180,    71,    99,   153,   101,    78,   154,
      55,   265,    21,    22,    27,    53,    28,    29,    47,   135,
      48,    67,    80,    54,   149,   150,    64,   268,   269,    28,
      29,   281,   282,    76,   274,   275,   151,   152,    81,    57,
     164,   164,    71,   279,   153,   227,    85,   154,    44,   129,
     129,   146,   147,   148,    58,    59,    71,   302,   290,   263,
      91,   164,    56,   264,   129,   129,    13,    69,   298,   137,
     138,   301,   224,   141,    13,   129,    77,   305,   225,   167,
      14,    15,    16,   149,   150,   129,    13,   109,    33,    15,
      16,    68,   110,   111,    70,   151,   152,   112,    79,    82,
      93,    15,    16,   153,   113,    84,   154,   115,    86,   292,
     293,   116,   117,   109,   118,   119,   120,    88,   110,   111,
     121,    90,    92,   112,   196,   197,   198,   199,   200,   201,
     113,    97,   114,   115,   103,   102,    13,   116,   117,   109,
     118,   119,   120,   131,   110,   111,   121,   133,   136,   112,
     107,    15,    16,   184,   142,   185,   113,   141,   143,   115,
     144,   157,   145,   116,   117,   109,   118,   119,   120,   208,
     110,   111,   121,   160,   158,   112,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   161,   163,   115,   168,   178,   169,   116,
     117,   294,   118,   119,   120,   109,   170,   182,   121,   187,
     110,   111,   190,   209,   167,   112,   213,   210,   214,   215,
     216,   217,   113,   222,   231,   115,   252,   257,   308,   116,
     117,   109,   118,   119,   120,   247,   110,   111,   121,   248,
     250,   112,   253,   258,   259,   266,   260,   261,   113,   272,
     267,   115,   273,   271,   297,   116,   117,   109,   118,   119,
     120,   278,   110,   111,   121,   277,   285,   112,   310,   296,
     291,    12,    45,    34,   113,   299,   303,   115,   304,     0,
     311,   207,   117,   312,   118,   119,   120,    65,    39,   165,
     121,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   223,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,    40,   108,    83,
       0,     0,     0,     0,     0,     0,   230,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   245,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   283,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   284,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,     0,     0,     0,     0,     0,     0,     0,   219,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,     0,     0,     0,     0,     0,     0,     0,
     262,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,     0,     0,     0,     0,     0,     0,
       0,   276,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,     0,     0,     0,     0,     0,
       0,     0,   280,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,     0,     0,     0,
       0,     0,     0,   287,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,     0,     0,     0,
       0,     0,     0,     0,   300,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,     0,     0,
       0,     0,     0,     0,     0,   306,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,     0,
       0,     0,     0,     0,     0,     0,   307,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
       0,     0,     0,     0,   204,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,     0,     0,
       0,     0,   218,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,     0,     0,     0,
     251,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,     0,     0,     0,     0,   270,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,     0,     0,     0,     0,   286,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
       0,     0,     0,     0,   309,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201
};

static const yytype_int16 yycheck[] =
{
      97,   122,   117,     3,     3,   120,    52,    10,    10,    10,
      56,     3,     3,    53,     3,     3,    56,     3,    18,    19,
     117,    53,    21,   120,    56,   122,    15,     3,     4,     5,
      18,    19,    18,    19,    89,    11,    12,    36,   159,   139,
     140,   162,    14,   143,    99,    36,   101,   144,     3,   149,
      53,   151,    53,   153,    57,    57,    56,   157,   158,    35,
      36,     0,   159,    28,    86,   162,   166,    16,    56,    49,
      56,    47,    48,    95,     3,     4,     5,     3,     3,    55,
     135,    36,    58,    12,   184,   185,    51,    51,    52,     3,
       3,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,    18,    19,    35,    36,     3,   209,
      36,    36,     3,     4,     5,     3,    79,     3,    47,    48,
     220,     3,    55,    36,    52,    88,    55,    90,    56,    58,
      51,   231,    18,    19,     3,    55,    18,    19,    53,   102,
      55,    52,    56,     3,    35,    36,    55,   247,   248,    18,
      19,   266,   267,    64,   254,   255,    47,    48,    69,     3,
     281,   282,    52,   263,    55,    56,    56,    58,    50,   266,
     267,     3,     4,     5,    18,    19,    52,   292,   278,    52,
      56,   302,     4,    56,   281,   282,     3,    55,   288,    51,
      52,   291,    56,    57,     3,   292,    49,   297,    56,    57,
      17,    18,    19,    35,    36,   302,     3,     3,    17,    18,
      19,    56,     8,     9,    54,    47,    48,    13,    49,    53,
      17,    18,    19,    55,    20,     3,    58,    23,    16,    25,
      26,    27,    28,     3,    30,    31,    32,    49,     8,     9,
      36,    49,     4,    13,    39,    40,    41,    42,    43,    44,
      20,     6,    22,    23,    54,    49,     3,    27,    28,     3,
      30,    31,    32,    50,     8,     9,    36,    50,     3,    13,
      17,    18,    19,    53,    55,    55,    20,    57,    55,    23,
      55,    55,    51,    27,    28,     3,    30,    31,    32,    33,
       8,     9,    36,    51,    55,    13,    39,    40,    41,    42,
      43,    44,    20,    51,     3,    23,     7,     3,    50,    27,
      28,    29,    30,    31,    32,     3,    50,     3,    36,     3,
       8,     9,     3,    10,    57,    13,     3,     7,    50,     3,
      55,    55,    20,     3,    53,    23,    56,    51,    26,    27,
      28,     3,    30,    31,    32,    55,     8,     9,    36,    55,
      55,    13,    56,    56,    51,    24,    51,    51,    20,    51,
      28,    23,    51,    56,    10,    27,    28,     3,    30,    31,
      32,    53,     8,     9,    36,    51,    51,    13,    56,    51,
      53,     5,    30,    17,    20,    51,    51,    23,    51,    -1,
      51,    27,    28,    51,    30,    31,    32,    51,    23,   122,
      36,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    56,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    23,    95,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    51,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    51,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      51,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    51,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    51,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    51,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    60,    61,     3,    62,    63,     0,    16,    67,
      49,    15,    63,     3,    17,    18,    19,    68,    69,    70,
       3,    18,    19,    73,    74,    75,    83,     3,    18,    19,
      64,    65,    66,    17,    69,     3,    36,    71,    72,    75,
      83,     3,    21,    36,    50,    65,     3,    53,    55,     3,
      51,    52,    55,    55,     3,    51,     4,     3,    18,    19,
      56,    76,    77,    78,    55,    72,    56,    76,    56,    55,
      54,    52,    56,     3,    36,    56,    76,    49,    56,    49,
      56,    76,    53,    77,     3,    56,    16,    79,    49,    79,
      49,    56,     4,    17,    70,    80,    81,     6,    84,    79,
      84,    79,    49,    54,     3,    36,    82,    17,    81,     3,
       8,     9,    13,    20,    22,    23,    27,    28,    30,    31,
      32,    36,    85,    86,    87,    88,    89,    90,    91,    92,
      95,    50,    84,    50,    84,    79,     3,    51,    52,    10,
      53,    57,    55,    55,    55,    51,     3,     4,     5,    35,
      36,    47,    48,    55,    58,    92,    93,    55,    55,    85,
      51,    51,    85,     3,    86,    95,    10,    57,     7,    50,
      50,    84,     3,    36,    11,    12,    93,    93,     3,     3,
      36,    93,     3,    92,    53,    55,    93,     3,    93,    93,
       3,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    51,    93,    93,    27,    33,    10,
       7,    12,    93,     3,    50,     3,    55,    55,    51,    54,
      53,    56,     3,    56,    56,    56,    93,    56,    93,    94,
      56,    53,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    56,    56,    55,    55,    93,
      55,    51,    56,    56,    10,    53,    93,    51,    56,    51,
      51,    51,    54,    52,    56,    93,    24,    28,    93,    93,
      51,    56,    51,    51,    93,    93,    54,    51,    53,    93,
      54,    85,    85,    56,    56,    51,    51,    54,    53,    56,
      93,    53,    25,    26,    29,    51,    51,    10,    93,    51,
      54,    93,    85,    51,    51,    93,    54,    54,    26,    51,
      56,    51,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    61,    61,    62,    62,    63,    64,
      64,    65,    66,    66,    66,    67,    67,    68,    68,    69,
      70,    70,    70,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    74,    74,    74,    75,    75,
      75,    75,    76,    76,    77,    77,    78,    78,    78,    79,
      79,    80,    80,    81,    82,    82,    82,    82,    83,    84,
      84,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    87,    87,    87,    87,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    90,    90,    91,    91,
      91,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    94,    94,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     0,     2,     1,     4,     2,
       1,     3,     1,     1,     1,     3,     2,     2,     1,     3,
       1,     1,     1,     3,     1,     1,     4,     7,     2,     4,
       5,     3,     4,     2,     1,     1,     1,     1,     9,     8,
      10,     9,     3,     1,     2,     3,     1,     1,     1,     3,
       2,     2,     1,     3,     3,     4,     1,     2,     8,     4,
       3,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     5,     8,    11,     6,     5,     4,     7,    10,     5,
       4,     6,     6,     6,     5,     5,    10,     8,     8,     7,
       7,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     1,
       1,     1,     1,     1,     4,     7,     2,     2,     5,     8,
       4,     3,     3,     1,     3
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
#line 43 "exprtree.y" /* yacc.c:1646  */
    {
			TInstall((yyvsp[-3])->name, 0, Fhead);
			Fhead=Ftail=NULL;
		}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 53 "exprtree.y" /* yacc.c:1646  */
    {FInstall(declType, (yyvsp[-1])->name);}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "exprtree.y" /* yacc.c:1646  */
    {declType=TLookup("integer");}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 57 "exprtree.y" /* yacc.c:1646  */
    {declType=TLookup("string");}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 58 "exprtree.y" /* yacc.c:1646  */
    {
		declType=TLookup((yyvsp[0])->name);
		if(declType==NULL)
			declType=TLookup("type");
	}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "exprtree.y" /* yacc.c:1646  */
    {
			evaluate();
			binding=1;
		}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 69 "exprtree.y" /* yacc.c:1646  */
    {
			evaluate();
			binding=1;
		}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 82 "exprtree.y" /* yacc.c:1646  */
    {declType=TLookup("integer");}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 83 "exprtree.y" /* yacc.c:1646  */
    {declType=TLookup("string");}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 84 "exprtree.y" /* yacc.c:1646  */
    {
			declType=TLookup((yyvsp[0])->name);
			if(declType==NULL){
				printf("Unknown type: %s\n", (yyvsp[0])->name);
				exit(1);
			}
		}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 97 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[0])->name, declType, 1, 1, NODE_ID, NULL);}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 98 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-3])->name, declType, (yyvsp[-1])->value.intval, 1, NODE_ARRAY, NULL);}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 99 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-6])->name, declType, (yyvsp[-4])->value.intval, (yyvsp[-1])->value.intval, NODE_MATRIX, NULL);}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 100 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[0])->name, declType, 1, 1, NODE_PTR, NULL);}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 101 "exprtree.y" /* yacc.c:1646  */
    {
						GInstall((yyvsp[-3])->name, declType, 0, 0, NODE_FUNC, Phead);
						Phead=Ptail=NULL;
					}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 105 "exprtree.y" /* yacc.c:1646  */
    {
						GInstall((yyvsp[-3])->name, declType, 0, 0, NODE_FUNC, Phead);	
						Phead=Ptail=NULL;
					}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 109 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-2])->name, declType, 0, 0, NODE_FUNC, NULL);}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 110 "exprtree.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-2])->name, declType, 0, 0, NODE_FUNC, NULL);}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 117 "exprtree.y" /* yacc.c:1646  */
    {functype=TLookup("integer");}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 118 "exprtree.y" /* yacc.c:1646  */
    {functype=TLookup("string");}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 119 "exprtree.y" /* yacc.c:1646  */
    {
			functype=TLookup((yyvsp[0])->name);
			if(functype==NULL){
				printf("Unknown type: %s\n", (yyvsp[0])->name);
				exit(1);
			}
		}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 128 "exprtree.y" /* yacc.c:1646  */
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

			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 187 "exprtree.y" /* yacc.c:1646  */
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

			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 231 "exprtree.y" /* yacc.c:1646  */
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

			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 288 "exprtree.y" /* yacc.c:1646  */
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

			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 337 "exprtree.y" /* yacc.c:1646  */
    {
			struct Paramstruct *Ptemp;
			Ptemp=PLookup((yyvsp[0])->name);
			if(Ptemp!=NULL){
				printf("Multiple variable declaration: %s\n", (yyvsp[0])->name);
				exit(1);
			}
			PInstall((yyvsp[0])->name, PdeclType, NODE_ID);
		}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 346 "exprtree.y" /* yacc.c:1646  */
    {
			struct Paramstruct *Ptemp;
			Ptemp=PLookup((yyvsp[0])->name);
			if(Ptemp!=NULL){
				printf("Multiple variable declaration: %s\n", (yyvsp[0])->name);
				exit(1);
			}
			PInstall((yyvsp[0])->name, PdeclType, NODE_PTR);
		}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 357 "exprtree.y" /* yacc.c:1646  */
    {PdeclType=TLookup("integer");}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 358 "exprtree.y" /* yacc.c:1646  */
    {PdeclType=TLookup("string");}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 359 "exprtree.y" /* yacc.c:1646  */
    {
			PdeclType=TLookup((yyvsp[0])->name);
			if(PdeclType==NULL){
				printf("Unknown type: %s", (yyvsp[0])->name);
				exit(1);
			}
		}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 379 "exprtree.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0])->name, declType, NODE_ID);}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 380 "exprtree.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0])->name, declType, NODE_PTR);}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 381 "exprtree.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0])->name, declType, NODE_ID);}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 382 "exprtree.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0])->name, declType, NODE_PTR);}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 385 "exprtree.y" /* yacc.c:1646  */
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

			Lhead=Ltail=NULL;
			Phead=Ptail=NULL;
		}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 427 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_CONN, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[-1]), NULL);}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 428 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_CONN, NULL, NULL, NULL, (yyvsp[-1]), NULL, NULL);}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 431 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_CONN, NULL, NULL, NULL, (yyvsp[-1]), (yyvsp[0]), NULL);}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 432 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 435 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 436 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_BREAK, NULL, NULL, NULL, NULL, NULL, NULL);}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 437 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_CONTINUE, NULL, NULL, NULL, NULL, NULL, NULL);}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 438 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_BRKP, NULL, NULL, NULL, NULL, NULL, NULL);}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 441 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-2]), NODE_ID);
				(yyval)=createTree(TLookup("void"), NODE_READ, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);
			}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 445 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-5]), NODE_ARRAY);
				typeCheck((yyvsp[-3])->type, TLookup("integer"), NODE_ARRAY);
				(yyval)=createTree(TLookup("void"), NODE_READ_ARRAY, NULL, NULL, NULL, (yyvsp[-5]), (yyvsp[-3]), NULL);
			}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 450 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-8]), NODE_MATRIX);
				typeCheck((yyvsp[-6])->type, (yyvsp[-3])->type, NODE_MATRIX);
				(yyval)=createTree(TLookup("void"), NODE_READ_MATRIX, NULL, NULL, NULL, (yyvsp[-8]), (yyvsp[-6]), (yyvsp[-3]));
			}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 455 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-2]), NODE_PTR);
				(yyval)=createTree(TLookup("void"), NODE_READ_PTR, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);
			}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 461 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_WRITE, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 464 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-3]), NODE_ID);
				typeCheck((yyvsp[-3])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN, NULL, NULL, NULL, (yyvsp[-3]), (yyvsp[-1]), NULL); 
			}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 469 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-6]), NODE_ARRAY);
				typeCheck((yyvsp[-4])->type, TLookup("void"), NODE_ARRAY);
				typeCheck((yyvsp[-6])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN_ARRAY, NULL, NULL, NULL, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1]));
			}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 475 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-9]), NODE_MATRIX);
				typeCheck((yyvsp[-7])->type, (yyvsp[-4])->type, NODE_MATRIX);
				typeCheck((yyvsp[-9])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN_MATRIX, NULL, NULL, NULL, (yyvsp[-9]),
					createTree(TLookup("void"), NODE_CONN, NULL, NULL, NULL, (yyvsp[-7]), (yyvsp[-4]), NULL), (yyvsp[-1]));
			}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 482 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-3]), NODE_PTR);
				typeCheck((yyvsp[-3])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN_PTR, NULL, NULL, NULL, (yyvsp[-3]), (yyvsp[-1]), NULL);
			}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 487 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-3])->type, (yyvsp[-1])->type, NODE_ASSIGN);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN_FIELD, NULL, NULL, NULL, (yyvsp[-3]), (yyvsp[-1]), NULL);
			}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 491 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-5]), NODE_ID);
				typeCheck((yyvsp[-5])->type, TLookup("integer"), NODE_ASSIGN);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN, NULL, NULL, NULL, (yyvsp[-5]),
					createTree(TLookup("integer"), NODE_INIT, NULL, NULL, NULL, NULL, NULL, NULL), NULL);
			}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 497 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-5])->type, TLookup("type"), NODE_ALLOC);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN, NULL, NULL, NULL, (yyvsp[-5]),
					createTree(TLookup("type"), NODE_ALLOC, NULL, NULL, NULL, NULL, NULL, NULL), NULL);
			}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 502 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-5])->type, TLookup("type"), NODE_ALLOC);
				(yyval)=createTree(TLookup("void"), NODE_ASSIGN_FIELD, NULL, NULL, NULL, (yyvsp[-5]),
					createTree(TLookup("type"), NODE_ALLOC, NULL, NULL, NULL, NULL, NULL, NULL), NULL);
			}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 507 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, TLookup("type"), NODE_FREE);
				(yyval)=createTree(TLookup("void"), NODE_FREE, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);
			}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 511 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, TLookup("type"), NODE_FREE);
				(yyval)=createTree(TLookup("void"), NODE_FREE, NULL, NULL, NULL, (yyvsp[-2]), NULL, NULL);
			}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 517 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_ELIF, NULL, NULL, NULL, (yyvsp[-7]), (yyvsp[-4]), (yyvsp[-2]));}
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 518 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_IF, NULL, NULL, NULL, (yyvsp[-5]), (yyvsp[-2]), NULL);}
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 521 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_WHILE, NULL, NULL, NULL, (yyvsp[-5]), (yyvsp[-2]), NULL);}
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 522 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_DO_WHILE, NULL, NULL, NULL, (yyvsp[-5]), (yyvsp[-2]), NULL);}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 523 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("void"), NODE_REPEAT, NULL, NULL, NULL, (yyvsp[-5]), (yyvsp[-2]), NULL);}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 526 "exprtree.y" /* yacc.c:1646  */
    {
				if(FLookup((yyvsp[-2])->type, (yyvsp[0])->name)==NULL){
					printf("Unknown identifier in FIELD: %s\n", (yyvsp[0])->name);
					exit(1);
				}
				tptr=createTree(TLookup("void"), NODE_FIELD, NULL, NULL, NULL, NULL, (yyvsp[0]), NULL);
				tptr1=(yyvsp[-2]);
				while(tptr1->ptr3!=NULL)
					tptr1=tptr1->ptr3;
				tptr1->ptr3=tptr;
				(yyval)=(yyvsp[-2]);
				(yyval)->type=(yyvsp[0])->type;
			}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 539 "exprtree.y" /* yacc.c:1646  */
    {
				struct Fieldlist *Ftemp=FLookup((yyvsp[-2])->type, (yyvsp[0])->name);
				if(Ftemp==NULL){
					printf("Unknown identifier in FIELD: %s\n", (yyvsp[0])->name);
					exit(1);
				}
				(yyval)=createTree(Ftemp->type, NODE_FIELD, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 549 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_PLUS);
				(yyval)=createTree(TLookup("integer"), NODE_PLUS, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 553 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_MINUS);
				(yyval)=createTree(TLookup("integer"), NODE_MINUS, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 557 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_MUL);
				(yyval)=createTree(TLookup("integer"), NODE_MUL, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 561 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_DIV);
				(yyval)=createTree(TLookup("integer"), NODE_DIV, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 565 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_MOD);
				(yyval)=createTree(TLookup("integer"), NODE_MOD, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 569 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_LT);
				(yyval)=createTree(TLookup("boolean"), NODE_LT, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 573 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_GT);
				(yyval)=createTree(TLookup("boolean"), NODE_GT, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 577 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_LE);
				(yyval)=createTree(TLookup("boolean"), NODE_LE, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 581 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_GE);
				(yyval)=createTree(TLookup("boolean"), NODE_GE, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 585 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_NE);
				(yyval)=createTree(TLookup("boolean"), NODE_NE, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 589 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_EQ);
				(yyval)=createTree(TLookup("boolean"), NODE_EQ, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 593 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_AND);
				(yyval)=createTree(TLookup("boolean"), NODE_AND, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 597 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-2])->type, (yyvsp[0])->type, NODE_OR);
				(yyval)=createTree(TLookup("boolean"), NODE_OR, NULL, NULL, NULL, (yyvsp[-2]), (yyvsp[0]), NULL);
			}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 601 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[0])->type, TLookup("integer"), NODE_NOT);
				(yyval)=createTree(TLookup("boolean"), NODE_NOT, NULL, NULL, NULL, (yyvsp[0]), NULL, NULL);
			}
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 605 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck(TLookup("integer"), (yyvsp[0])->type, NODE_MINUS);
				(yyval)=createTree(TLookup("boolean"), NODE_NEG, NULL, NULL, NULL, (yyvsp[0]), NULL, NULL);
			}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 609 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 610 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 611 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 612 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("type"), NODE_NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 613 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 614 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[0]), NODE_ID);
				(yyval)=(yyvsp[0]);
			}
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 618 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-3]), NODE_ARRAY);
				typeCheck((yyvsp[-1])->type, 0, NODE_ARRAY);
				(yyval)=createTree((yyvsp[-3])->type, NODE_ARRAY, NULL, NULL, NULL, (yyvsp[-3]), (yyvsp[-1]), NULL);
			}
#line 2555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 623 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-6]), NODE_MATRIX);
				typeCheck((yyvsp[-4])->type, (yyvsp[-1])->type, NODE_MATRIX);
				(yyval)=createTree((yyvsp[-6])->type, NODE_MATRIX, NULL, NULL, NULL, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1]));
			}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 628 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[0]), NODE_PTR);
				(yyval)=createTree((yyvsp[0])->type, NODE_PTR, NULL, NULL, NULL, (yyvsp[0]), NULL, NULL);
			}
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 632 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree(TLookup("integer"), NODE_REF, NULL, NULL, NULL, (yyvsp[0]), NULL, NULL);}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 633 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-3]), NODE_REF_ARRAY);
				typeCheck((yyvsp[-1])->type, TLookup("integer"), NODE_ARRAY);
				(yyval)=createTree(TLookup("integer"), NODE_REF_ARRAY, NULL, NULL, NULL, (yyvsp[-3]), (yyvsp[-1]), NULL);
			}
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 638 "exprtree.y" /* yacc.c:1646  */
    {
				idCheck((yyvsp[-6]), NODE_REF_MATRIX);
				typeCheck((yyvsp[-4])->type, (yyvsp[-1])->type, NODE_MATRIX);
				(yyval)=createTree(TLookup("integer"), NODE_REF_MATRIX, NULL, NULL, NULL, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1]));
			}
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 643 "exprtree.y" /* yacc.c:1646  */
    {
				struct Gsymbol *Gtemp;
				idCheck((yyvsp[-3]), NODE_FUNC);
				Gtemp=GLookup((yyvsp[-3])->name);
				(yyval)=createTree((yyvsp[-3])->type, NODE_FUNC, NULL, NULL, (yyvsp[-1]), (yyvsp[-3]), (yyvsp[-1]), NULL);
			}
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 649 "exprtree.y" /* yacc.c:1646  */
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
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 661 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree((yyvsp[0])->type, NODE_ARG, NULL, NULL, NULL, (yyvsp[0]), (yyvsp[-2]), NULL);}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 662 "exprtree.y" /* yacc.c:1646  */
    {(yyval)=createTree((yyvsp[0])->type, NODE_ARG, NULL, NULL, NULL, (yyvsp[0]), NULL, NULL);}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 665 "exprtree.y" /* yacc.c:1646  */
    {
				typeCheck((yyvsp[-1])->type, functype, NODE_ASSIGN);
				(yyval)=createTree((yyvsp[-1])->type, NODE_RET, NULL, NULL, NULL, (yyvsp[-1]), NULL, NULL);
			}
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2651 "y.tab.c" /* yacc.c:1646  */
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
#line 671 "exprtree.y" /* yacc.c:1906  */


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
	yyparse();
	return 0;
}
