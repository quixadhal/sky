
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "grammar.y"


extern char *outp;
#include "std.h"
#include "compiler.h"
#include "lex.h"
#include "scratchpad.h"

#include "lpc_incl.h"
#include "simul_efun.h"
#include "generate.h"
#include "master.h"

/* gross. Necessary? - Beek */
#ifdef WIN32
#define MSDOS
#endif
#define YYSTACK_USE_ALLOCA 0
#line 20 "grammar.y.pre"
/*
 * This is the grammar definition of LPC, and its parse tree generator.
 */

/* down to one global :) 
   bits:
      SWITCH_CONTEXT     - we're inside a switch
      LOOP_CONTEXT       - we're inside a loop
      SWITCH_STRINGS     - a string case has been found
      SWITCH_NUMBERS     - a non-zero numeric case has been found
      SWITCH_RANGES      - a range has been found
      SWITCH_DEFAULT     - a default has been found
 */
int context;
int num_refs;
int func_present;
/*
 * bison & yacc don't prototype this in y.tab.h
 */
int yyparse (void);



/* Line 189 of yacc.c  */
#line 116 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     L_STRING = 258,
     L_NUMBER = 259,
     L_REAL = 260,
     L_BASIC_TYPE = 261,
     L_TYPE_MODIFIER = 262,
     L_DEFINED_NAME = 263,
     L_IDENTIFIER = 264,
     L_EFUN = 265,
     L_INC = 266,
     L_DEC = 267,
     L_ASSIGN = 268,
     L_LAND = 269,
     L_LOR = 270,
     L_LSH = 271,
     L_RSH = 272,
     L_ORDER = 273,
     L_NOT = 274,
     L_IF = 275,
     L_ELSE = 276,
     L_SWITCH = 277,
     L_CASE = 278,
     L_DEFAULT = 279,
     L_RANGE = 280,
     L_DOT_DOT_DOT = 281,
     L_WHILE = 282,
     L_DO = 283,
     L_FOR = 284,
     L_FOREACH = 285,
     L_IN = 286,
     L_BREAK = 287,
     L_CONTINUE = 288,
     L_RETURN = 289,
     L_ARROW = 290,
     L_INHERIT = 291,
     L_COLON_COLON = 292,
     L_ARRAY_OPEN = 293,
     L_MAPPING_OPEN = 294,
     L_FUNCTION_OPEN = 295,
     L_NEW_FUNCTION_OPEN = 296,
     L_SSCANF = 297,
     L_CATCH = 298,
     L_REF = 299,
     L_PARSE_COMMAND = 300,
     L_TIME_EXPRESSION = 301,
     L_CLASS = 302,
     L_NEW = 303,
     L_PARAMETER = 304,
     LOWER_THAN_ELSE = 305,
     L_NE = 306,
     L_EQ = 307
   };
#endif
/* Tokens.  */
#define L_STRING 258
#define L_NUMBER 259
#define L_REAL 260
#define L_BASIC_TYPE 261
#define L_TYPE_MODIFIER 262
#define L_DEFINED_NAME 263
#define L_IDENTIFIER 264
#define L_EFUN 265
#define L_INC 266
#define L_DEC 267
#define L_ASSIGN 268
#define L_LAND 269
#define L_LOR 270
#define L_LSH 271
#define L_RSH 272
#define L_ORDER 273
#define L_NOT 274
#define L_IF 275
#define L_ELSE 276
#define L_SWITCH 277
#define L_CASE 278
#define L_DEFAULT 279
#define L_RANGE 280
#define L_DOT_DOT_DOT 281
#define L_WHILE 282
#define L_DO 283
#define L_FOR 284
#define L_FOREACH 285
#define L_IN 286
#define L_BREAK 287
#define L_CONTINUE 288
#define L_RETURN 289
#define L_ARROW 290
#define L_INHERIT 291
#define L_COLON_COLON 292
#define L_ARRAY_OPEN 293
#define L_MAPPING_OPEN 294
#define L_FUNCTION_OPEN 295
#define L_NEW_FUNCTION_OPEN 296
#define L_SSCANF 297
#define L_CATCH 298
#define L_REF 299
#define L_PARSE_COMMAND 300
#define L_TIME_EXPRESSION 301
#define L_CLASS 302
#define L_NEW 303
#define L_PARAMETER 304
#define LOWER_THAN_ELSE 305
#define L_NE 306
#define L_EQ 307




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 123 "grammar.y"

    POINTER_INT pointer_int;
    long number;
    float real;
    char *string;
    struct { short num_arg; char flags; } argument;
    ident_hash_elem_t *ihe;
    parse_node_t *node;
    function_context_t *contextp;
    struct {
	parse_node_t *node;
        char num;
    } decl; /* 5 */
    struct {
	char num_local;
	char max_num_locals; 
	short context; 
	short save_current_type; 
	short save_exact_types;
    } func_block; /* 8 */



/* Line 214 of yacc.c  */
#line 280 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 292 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1793

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  254
/* YYNRULES -- Number of states.  */
#define YYNSTATES  483

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    71,    61,    54,     2,
      65,    66,    60,    58,    68,    59,     2,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    67,    64,
      57,     2,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    52,    70,    63,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    10,    11,    13,    18,    20,
      22,    23,    25,    27,    29,    31,    33,    35,    36,    37,
      47,    51,    53,    55,    57,    60,    63,    65,    69,    70,
      71,    77,    78,    86,    88,    90,    92,    95,    98,   100,
     102,   105,   108,   112,   114,   115,   117,   120,   122,   126,
     127,   130,   133,   138,   140,   141,   143,   147,   150,   155,
     160,   162,   164,   166,   167,   168,   174,   177,   182,   186,
     190,   192,   196,   197,   200,   203,   206,   208,   210,   212,
     214,   216,   218,   220,   223,   226,   227,   234,   235,   244,
     245,   256,   258,   260,   262,   264,   268,   269,   278,   279,
     281,   283,   285,   286,   297,   300,   303,   304,   308,   314,
     319,   324,   327,   329,   331,   335,   339,   343,   347,   351,
     355,   359,   363,   367,   371,   375,   379,   383,   387,   391,
     393,   396,   399,   402,   404,   408,   410,   413,   417,   421,
     427,   431,   435,   439,   443,   447,   451,   455,   459,   463,
     467,   471,   475,   479,   483,   487,   491,   494,   497,   500,
     503,   506,   509,   512,   515,   517,   519,   521,   523,   525,
     527,   530,   534,   535,   537,   540,   542,   545,   547,   551,
     552,   554,   557,   559,   563,   567,   569,   571,   574,   576,
     578,   580,   582,   583,   589,   593,   600,   608,   617,   625,
     631,   638,   644,   649,   651,   655,   657,   658,   665,   669,
     675,   680,   685,   690,   692,   696,   697,   701,   709,   719,
     720,   724,   725,   729,   731,   733,   737,   741,   743,   746,
     750,   751,   755,   756,   762,   763,   769,   776,   783,   784,
     790,   791,   797,   798,   806,   807,   816,   820,   824,   826,
     829,   833,   837,   844,   845
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      75,     0,    -1,    76,    -1,    76,    84,    77,    -1,    -1,
      -1,    64,    -1,   101,    36,   159,    64,    -1,     5,    -1,
       4,    -1,    -1,    60,    -1,   107,    -1,    64,    -1,     1,
      -1,     8,    -1,     9,    -1,    -1,    -1,   102,    81,    83,
      85,    65,    99,    66,    86,    82,    -1,   102,   105,    64,
      -1,    78,    -1,    92,    -1,    87,    -1,   101,    67,    -1,
      81,    83,    -1,    88,    -1,    88,    68,    89,    -1,    -1,
      -1,    90,    96,    91,    89,    64,    -1,    -1,   101,    47,
      83,    69,    93,    90,    70,    -1,     9,    -1,     8,    -1,
       6,    -1,    47,     8,    -1,    47,     9,    -1,    95,    -1,
      96,    -1,    96,   136,    -1,    97,    81,    -1,    97,    81,
      94,    -1,    94,    -1,    -1,   100,    -1,   100,    26,    -1,
      98,    -1,   100,    68,    98,    -1,    -1,     7,   101,    -1,
     101,   104,    -1,    65,    96,    81,    66,    -1,    96,    -1,
      -1,   106,    -1,   106,    68,   105,    -1,    81,    83,    -1,
      81,    83,    13,   137,    -1,    69,   109,   115,    70,    -1,
     107,    -1,   121,    -1,   125,    -1,    -1,    -1,   109,    96,
     110,   114,    64,    -1,    81,    94,    -1,    81,    94,    13,
     137,    -1,    97,    81,    94,    -1,   112,    13,   137,    -1,
     111,    -1,   111,    68,   114,    -1,    -1,   116,   115,    -1,
       1,    64,    -1,   135,    64,    -1,   172,    -1,   117,    -1,
     119,    -1,   129,    -1,   138,    -1,   108,    -1,    64,    -1,
      32,    64,    -1,    33,    64,    -1,    -1,    27,    65,   135,
      66,   118,   116,    -1,    -1,    28,   120,   116,    27,    65,
     135,    66,    64,    -1,    -1,    29,    65,   128,    64,   127,
      64,   127,    66,   122,   116,    -1,     8,    -1,   112,    -1,
       9,    -1,   123,    -1,   123,    68,   123,    -1,    -1,    30,
      65,   124,    31,   137,    66,   126,   116,    -1,    -1,   135,
      -1,   127,    -1,   113,    -1,    -1,    22,    65,   135,    66,
     130,    69,   109,   132,   131,    70,    -1,   132,   131,    -1,
     116,   131,    -1,    -1,    23,   133,    67,    -1,    23,   133,
      25,   133,    67,    -1,    23,   133,    25,    67,    -1,    23,
      25,   133,    67,    -1,    24,    67,    -1,   134,    -1,   159,
      -1,   134,    52,   134,    -1,   134,    53,   134,    -1,   134,
      54,   134,    -1,   134,    56,   134,    -1,   134,    55,   134,
      -1,   134,    18,   134,    -1,   134,    57,   134,    -1,   134,
      16,   134,    -1,   134,    17,   134,    -1,   134,    58,   134,
      -1,   134,    59,   134,    -1,   134,    60,   134,    -1,   134,
      61,   134,    -1,   134,    62,   134,    -1,    65,   134,    66,
      -1,     4,    -1,    59,     4,    -1,    19,     4,    -1,    63,
       4,    -1,   137,    -1,   135,    68,   137,    -1,    44,    -1,
     136,   145,    -1,   145,    13,   137,    -1,     1,    13,   137,
      -1,   137,    51,   137,    67,   137,    -1,   137,    15,   137,
      -1,   137,    14,   137,    -1,   137,    52,   137,    -1,   137,
      53,   137,    -1,   137,    54,   137,    -1,   137,    56,   137,
      -1,   137,    55,   137,    -1,   137,    18,   137,    -1,   137,
      57,   137,    -1,   137,    16,   137,    -1,   137,    17,   137,
      -1,   137,    58,   137,    -1,   137,    59,   137,    -1,   137,
      60,   137,    -1,   137,    61,   137,    -1,   137,    62,   137,
      -1,   103,   137,    -1,    11,   145,    -1,    12,   145,    -1,
      19,   137,    -1,    63,   137,    -1,    59,   137,    -1,   145,
      11,    -1,   145,    12,    -1,   147,    -1,   153,    -1,   154,
      -1,   155,    -1,    80,    -1,    79,    -1,    34,    64,    -1,
      34,   135,    64,    -1,    -1,   141,    -1,   141,    68,    -1,
     137,    -1,   137,    26,    -1,   140,    -1,   141,    68,   140,
      -1,    -1,   143,    -1,   143,    68,    -1,   144,    -1,   143,
      68,   144,    -1,   137,    67,   137,    -1,   147,    -1,    41,
      -1,    40,   170,    -1,   163,    -1,     8,    -1,     9,    -1,
      49,    -1,    -1,    71,    65,   148,   135,    66,    -1,   147,
      35,    83,    -1,   147,    72,   135,    25,   135,    73,    -1,
     147,    72,    57,   135,    25,   135,    73,    -1,   147,    72,
      57,   135,    25,    57,   135,    73,    -1,   147,    72,   135,
      25,    57,   135,    73,    -1,   147,    72,   135,    25,    73,
      -1,   147,    72,    57,   135,    25,    73,    -1,   147,    72,
      57,   135,    73,    -1,   147,    72,   135,    73,    -1,   158,
      -1,    65,   135,    66,    -1,   151,    -1,    -1,     6,   149,
      65,    99,    66,   107,    -1,   146,    67,    66,    -1,   146,
      68,   141,    67,    66,    -1,    40,   135,    67,    66,    -1,
      39,   142,    73,    66,    -1,    38,   139,    70,    66,    -1,
     107,    -1,    65,   135,    66,    -1,    -1,    43,   152,   150,
      -1,    42,    65,   137,    68,   137,   157,    66,    -1,    45,
      65,   137,    68,   137,    68,   137,   157,    66,    -1,    -1,
      46,   156,   150,    -1,    -1,    68,   145,   157,    -1,   160,
      -1,   160,    -1,    65,   159,    66,    -1,   159,    58,   159,
      -1,     3,    -1,   160,     3,    -1,    83,    67,   137,    -1,
      -1,   162,    68,   161,    -1,    -1,   170,    65,   164,   139,
      66,    -1,    -1,    48,    65,   165,   139,    66,    -1,    48,
      65,    47,     8,   162,    66,    -1,    48,    65,    47,     9,
     162,    66,    -1,    -1,     8,    65,   166,   139,    66,    -1,
      -1,   171,    65,   167,   139,    66,    -1,    -1,   147,    35,
      83,    65,   168,   139,    66,    -1,    -1,    65,    60,   135,
      66,    65,   169,   139,    66,    -1,    10,    37,    83,    -1,
      10,    37,    48,    -1,     9,    -1,    37,    83,    -1,     6,
      37,    83,    -1,    83,    37,    83,    -1,    20,    65,   135,
      66,   116,   173,    -1,    -1,    21,   116,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   211,   211,   219,   225,   231,   233,   243,   339,   347,
     356,   360,   368,   376,   381,   389,   394,   399,   441,   398,
     499,   506,   507,   508,   511,   529,   543,   544,   547,   550,
     549,   559,   558,   639,   640,   658,   659,   676,   693,   697,
     698,   706,   713,   722,   736,   741,   742,   761,   773,   788,
     792,   815,   824,   832,   834,   841,   842,   846,   872,   928,
     938,   938,   938,   942,   948,   947,   969,   981,  1016,  1028,
    1061,  1067,  1079,  1083,  1090,  1098,  1111,  1112,  1113,  1114,
    1115,  1116,  1122,  1127,  1150,  1164,  1163,  1179,  1178,  1194,
    1193,  1219,  1241,  1252,  1270,  1276,  1288,  1287,  1309,  1313,
    1317,  1323,  1333,  1332,  1373,  1380,  1388,  1396,  1404,  1419,
    1434,  1448,  1465,  1480,  1497,  1502,  1507,  1512,  1517,  1522,
    1531,  1536,  1541,  1546,  1551,  1556,  1561,  1566,  1571,  1576,
    1581,  1586,  1591,  1599,  1604,  1612,  1616,  1645,  1671,  1677,
    1702,  1709,  1716,  1742,  1747,  1771,  1794,  1809,  1854,  1892,
    1897,  1902,  2073,  2168,  2249,  2254,  2350,  2372,  2394,  2417,
    2427,  2439,  2464,  2487,  2509,  2510,  2511,  2512,  2513,  2514,
    2518,  2525,  2547,  2551,  2556,  2564,  2569,  2577,  2584,  2598,
    2603,  2608,  2616,  2627,  2646,  2654,  2770,  2771,  2780,  2781,
    2824,  2841,  2847,  2846,  2878,  2903,  2908,  2913,  2921,  2929,
    2934,  2939,  2985,  3040,  3041,  3046,  3048,  3047,  3104,  3142,
    3237,  3260,  3269,  3281,  3286,  3295,  3294,  3310,  3320,  3332,
    3331,  3347,  3353,  3368,  3377,  3378,  3383,  3391,  3392,  3399,
    3411,  3415,  3426,  3425,  3441,  3440,  3473,  3509,  3529,  3528,
    3598,  3597,  3671,  3670,  3724,  3723,  3755,  3781,  3797,  3798,
    3813,  3829,  3845,  3880,  3885
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "L_STRING", "L_NUMBER", "L_REAL",
  "L_BASIC_TYPE", "L_TYPE_MODIFIER", "L_DEFINED_NAME", "L_IDENTIFIER",
  "L_EFUN", "L_INC", "L_DEC", "L_ASSIGN", "L_LAND", "L_LOR", "L_LSH",
  "L_RSH", "L_ORDER", "L_NOT", "L_IF", "L_ELSE", "L_SWITCH", "L_CASE",
  "L_DEFAULT", "L_RANGE", "L_DOT_DOT_DOT", "L_WHILE", "L_DO", "L_FOR",
  "L_FOREACH", "L_IN", "L_BREAK", "L_CONTINUE", "L_RETURN", "L_ARROW",
  "L_INHERIT", "L_COLON_COLON", "L_ARRAY_OPEN", "L_MAPPING_OPEN",
  "L_FUNCTION_OPEN", "L_NEW_FUNCTION_OPEN", "L_SSCANF", "L_CATCH", "L_REF",
  "L_PARSE_COMMAND", "L_TIME_EXPRESSION", "L_CLASS", "L_NEW",
  "L_PARAMETER", "LOWER_THAN_ELSE", "'?'", "'|'", "'^'", "'&'", "L_NE",
  "L_EQ", "'<'", "'+'", "'-'", "'*'", "'%'", "'/'", "'~'", "';'", "'('",
  "')'", "':'", "','", "'{'", "'}'", "'$'", "'['", "']'", "$accept", "all",
  "program", "possible_semi_colon", "inheritance", "real", "number",
  "optional_star", "block_or_semi", "identifier", "def", "$@1", "@2",
  "modifier_change", "member_name", "member_name_list", "member_list",
  "$@3", "type_decl", "@4", "new_local_name", "atomic_type", "basic_type",
  "arg_type", "new_arg", "argument", "argument_list", "type_modifier_list",
  "type", "cast", "opt_basic_type", "name_list", "new_name", "block",
  "decl_block", "local_declarations", "$@5", "new_local_def",
  "single_new_local_def", "single_new_local_def_with_init",
  "local_name_list", "statements", "statement", "while", "$@6", "do",
  "$@7", "for", "$@8", "foreach_var", "foreach_vars", "foreach", "$@9",
  "for_expr", "first_for_expr", "switch", "$@10", "switch_block", "case",
  "case_label", "constant", "comma_expr", "ref", "expr0", "return",
  "expr_list", "expr_list_node", "expr_list2", "expr_list3", "expr_list4",
  "assoc_pair", "lvalue", "l_new_function_open", "expr4", "@11", "@12",
  "expr_or_block", "catch", "@13", "sscanf", "parse_command",
  "time_expression", "@14", "lvalue_list", "string", "string_con1",
  "string_con2", "class_init", "opt_class_init", "function_call", "@15",
  "@16", "@17", "@18", "@19", "@20", "efun_override", "function_name",
  "cond", "optional_else_part", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    63,   124,    94,    38,   306,   307,    60,    43,    45,
      42,    37,    47,   126,    59,    40,    41,    58,    44,   123,
     125,    36,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    76,    77,    77,    78,    79,    80,
      81,    81,    82,    82,    82,    83,    83,    85,    86,    84,
      84,    84,    84,    84,    87,    88,    89,    89,    90,    91,
      90,    93,    92,    94,    94,    95,    95,    95,    96,    97,
      97,    98,    98,    98,    99,    99,    99,   100,   100,   101,
     101,   102,   103,   104,   104,   105,   105,   106,   106,   107,
     108,   108,   108,   109,   110,   109,   111,   111,   112,   113,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   118,   117,   120,   119,   122,
     121,   123,   123,   123,   124,   124,   126,   125,   127,   127,
     128,   128,   130,   129,   131,   131,   131,   132,   132,   132,
     132,   132,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   135,   135,   136,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   139,   139,   139,   140,   140,   141,   141,   142,
     142,   142,   143,   143,   144,   145,   146,   146,   147,   147,
     147,   147,   148,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   149,   147,   147,   147,
     147,   147,   147,   150,   150,   152,   151,   153,   154,   156,
     155,   157,   157,   158,   159,   159,   159,   160,   160,   161,
     162,   162,   164,   163,   165,   163,   163,   163,   166,   163,
     167,   163,   168,   163,   169,   163,   170,   170,   171,   171,
     171,   171,   172,   173,   173
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     0,     0,     1,     4,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     0,     0,     9,
       3,     1,     1,     1,     2,     2,     1,     3,     0,     0,
       5,     0,     7,     1,     1,     1,     2,     2,     1,     1,
       2,     2,     3,     1,     0,     1,     2,     1,     3,     0,
       2,     2,     4,     1,     0,     1,     3,     2,     4,     4,
       1,     1,     1,     0,     0,     5,     2,     4,     3,     3,
       1,     3,     0,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     0,     6,     0,     8,     0,
      10,     1,     1,     1,     1,     3,     0,     8,     0,     1,
       1,     1,     0,    10,     2,     2,     0,     3,     5,     4,
       4,     2,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       2,     2,     2,     1,     3,     1,     2,     3,     3,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       2,     3,     0,     1,     2,     1,     2,     1,     3,     0,
       1,     2,     1,     3,     3,     1,     1,     2,     1,     1,
       1,     1,     0,     5,     3,     6,     7,     8,     7,     5,
       6,     5,     4,     1,     3,     1,     0,     6,     3,     5,
       4,     4,     4,     1,     3,     0,     3,     7,     9,     0,
       3,     0,     3,     1,     1,     3,     3,     1,     2,     3,
       0,     3,     0,     5,     0,     5,     6,     6,     0,     5,
       0,     5,     0,     7,     0,     8,     3,     3,     1,     2,
       3,     3,     6,     0,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,    49,     1,    49,    21,     5,    23,    22,    54,
      10,    50,     6,     3,    35,     0,     0,    24,    38,    53,
      51,    11,     0,     0,    55,   227,     0,     0,   224,    36,
      37,     0,    15,    16,    57,    20,    10,     0,     0,     7,
     228,    31,     0,     0,     0,    56,   225,   226,    28,     0,
       9,     8,   206,   189,   190,     0,     0,     0,     0,     0,
       0,     0,     0,   186,     0,   215,   135,     0,   219,     0,
     191,     0,     0,     0,     0,   169,   168,     0,     0,     0,
      58,     0,     0,   164,   205,   165,   166,   167,   203,   223,
     188,     0,     0,    44,    57,     0,     0,     0,     0,   238,
       0,     0,   157,   185,   158,   159,   249,   175,     0,   177,
     173,     0,     0,   180,   182,     0,   133,   187,     0,     0,
       0,     0,   234,   161,   160,    35,     0,     0,    10,     0,
     192,     0,   156,   136,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   162,   163,     0,     0,     0,     0,     0,   232,   240,
      34,    33,    43,    39,    10,    47,     0,    45,    32,    29,
     138,   250,    44,     0,   247,   246,   176,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,   213,   216,     0,
     220,     0,     0,    36,    37,     0,     0,   204,     0,   251,
     141,   140,   149,   150,   147,     0,   142,   143,   144,   146,
     145,   148,   151,   152,   153,   154,   155,   137,   208,     0,
     194,     0,     0,     0,     0,    40,    41,    18,    46,     0,
      10,     0,     0,   212,   178,   184,   211,   183,   210,   134,
       0,     0,     0,     0,   230,   230,     0,     0,    52,     0,
       0,     0,     0,   242,     0,     0,   202,     0,     0,    42,
       0,    48,     0,    26,     0,     0,   239,   221,   214,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,    82,
      64,    60,    81,     0,     0,    77,    78,    61,    62,    79,
       0,    80,    76,     0,     0,     0,   235,   244,   193,   139,
     209,     0,     0,   201,     0,   199,     0,   233,   241,    14,
      13,    19,    12,    25,    10,    30,   207,     0,     0,    74,
       0,     0,     0,     0,     0,     0,    83,    84,   170,     0,
      10,    59,    73,    75,     0,   236,     0,   237,     0,     0,
       0,   200,     0,     0,   195,    27,   221,   217,     0,     0,
       0,     0,    10,     0,   101,   100,     0,    99,    91,    93,
      92,    94,     0,   171,     0,    70,     0,   221,     0,   231,
       0,   243,     0,   196,   198,   222,     0,   102,    85,     0,
       0,     0,     0,     0,     0,    66,    10,    65,     0,     0,
     245,   197,   253,     0,     0,     0,    68,    69,     0,    95,
       0,     0,    71,   218,   229,     0,   252,    63,    86,     0,
       0,    96,    67,   254,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    97,   129,     0,     0,     0,     0,     0,
       0,   112,   113,   111,     0,     0,     0,     0,   131,     0,
     130,   132,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     103,   104,    90,   110,   128,   109,     0,     0,   121,   122,
     119,   114,   115,   116,   118,   117,   120,   123,   124,   125,
     126,   127,   108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    13,     5,    75,    76,   262,   311,    77,
       6,    43,   260,     7,   263,   264,    95,   230,     8,    48,
     162,    18,   163,   164,   165,   166,   167,     9,    10,    78,
      20,    23,    24,   281,   282,   242,   330,   365,   360,   354,
     366,   283,   434,   285,   394,   286,   323,   287,   437,   361,
     362,   288,   417,   355,   356,   289,   393,   435,   436,   430,
     431,   290,    79,   116,   291,   108,   109,   110,   112,   113,
     114,    81,    82,    83,   198,    98,   188,    84,   119,    85,
      86,    87,   121,   318,    88,   432,    89,   369,   294,    90,
     223,   192,   173,   224,   301,   338,    91,    92,   292,   406
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -386
static const yytype_int16 yypact[] =
{
    -386,    60,   130,  -386,    64,  -386,    26,  -386,  -386,   120,
      97,  -386,  -386,  -386,  -386,    22,   142,  -386,  -386,  -386,
    -386,  -386,   198,   132,    56,  -386,    22,   -20,   177,   149,
     175,   189,  -386,  -386,     7,  -386,    97,   -18,    22,  -386,
    -386,  -386,  1570,   196,   198,  -386,  -386,  -386,  -386,   252,
    -386,  -386,   235,     9,   101,   238,   295,   295,  1570,   198,
    1085,   452,  1570,  -386,   232,  -386,  -386,   246,  -386,   266,
    -386,  1570,  1570,   876,   272,  -386,  -386,   248,  1570,   295,
     985,   229,   164,    51,  -386,  -386,  -386,  -386,  -386,   177,
    -386,   299,   304,    45,   280,    12,  1570,   198,   314,  -386,
      19,  1156,  -386,     1,  -386,  -386,  -386,  1056,   308,  -386,
     320,   492,   321,   327,  -386,   213,   985,   299,  1570,   -13,
    1570,   -13,   334,  -386,  -386,   125,   298,  1570,    97,   103,
    -386,   198,  -386,  -386,  1570,  1570,  1570,  1570,  1570,  1570,
    1570,  1570,  1570,  1570,  1570,  1570,  1570,  1570,  1570,  1570,
    1570,  -386,  -386,  1570,   330,  1570,   198,  1225,  -386,  -386,
    -386,  -386,  -386,   353,    97,  -386,   333,    23,  -386,  -386,
     985,  -386,    45,  1294,  -386,  -386,  -386,   335,   945,  1570,
     336,   523,   338,  1570,  1606,  1570,  -386,  -386,  -386,  1628,
    -386,   317,  1294,  -386,  -386,   170,   339,  -386,  1570,  -386,
    1124,   425,   293,   293,   166,   845,  1261,  1398,  1535,  1541,
    1541,   166,   279,   279,  -386,  -386,  -386,   985,  -386,   300,
     341,  1570,   121,  1294,  1294,  -386,   368,  -386,  -386,    45,
      97,   342,   343,  -386,  -386,   985,  -386,  -386,  -386,   985,
    1570,   179,   665,  1570,  -386,  -386,   344,   347,  -386,   205,
    1570,   350,  1570,  -386,   124,   211,  -386,   351,   370,  -386,
      14,  -386,   198,   345,   383,   376,  -386,  1655,  -386,     4,
     372,   384,   385,  -386,   386,   394,   401,   402,  1363,  -386,
    -386,  -386,  -386,   378,   736,  -386,  -386,  -386,  -386,  -386,
      68,  -386,  -386,  1677,   220,   223,  -386,  -386,  -386,   985,
    -386,  1294,   381,  -386,  1570,  -386,   -26,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,    97,  -386,  -386,   295,   403,  -386,
    1570,  1570,  1570,   807,  1016,   155,  -386,  -386,  -386,   135,
      97,  -386,  -386,  -386,  1570,  -386,   198,  -386,  1294,   404,
    1570,  -386,   127,   137,  -386,  -386,   399,  -386,   228,   234,
     290,   441,    97,   459,  -386,  -386,   409,   406,  -386,  -386,
    -386,   407,   445,  -386,   368,   420,   435,  1655,   436,  -386,
     438,  -386,   161,  -386,  -386,  -386,   807,  -386,  -386,   437,
     368,  1570,  1432,   155,  1570,   499,    97,  -386,   439,  1570,
    -386,  -386,   493,   444,   807,  1570,  -386,   985,   454,  -386,
     914,  1570,  -386,  -386,   985,   807,  -386,  -386,  -386,   297,
    1501,  -386,   985,  -386,   240,   455,   450,   807,   116,   453,
     594,  -386,  -386,  -386,  -386,   517,   109,   518,   526,   109,
      50,  1193,   478,  -386,   594,   467,   594,   807,  -386,   471,
    -386,  -386,   261,    66,  -386,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,   472,   174,   373,   373,
     313,  1330,  1467,  1702,  1708,  1708,   313,   287,   287,  -386,
    -386,  -386,  -386
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -386,  -386,  -386,  -386,  -386,  -386,  -386,    -6,  -386,    21,
    -386,  -386,  -386,  -386,  -386,   226,  -386,  -386,  -386,  -386,
    -221,  -386,    -7,  -290,   312,   398,  -386,   551,  -386,  -386,
    -386,   520,  -386,  -105,  -386,   150,  -386,  -386,   249,  -386,
     172,   291,  -229,  -386,  -386,  -386,  -386,  -386,  -386,   191,
    -386,  -386,  -386,  -212,  -386,  -386,  -386,   -75,   162,  -385,
    1326,   -12,   414,   -39,  -386,  -147,  -168,   423,  -386,  -386,
     400,   -50,  -386,   -48,  -386,  -386,   458,  -386,  -386,  -386,
    -386,  -386,  -386,  -219,  -386,   -14,   -15,  -386,   340,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,   521,  -386,  -386,  -386
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -249
static const yytype_int16 yytable[] =
{
      28,    27,    19,    80,    22,   259,   102,   104,   103,   103,
     234,    28,    37,   284,   187,   309,   187,    96,    14,   105,
      42,   107,   111,    28,    47,    25,   232,    32,    33,   133,
      44,   103,   123,   124,   352,   352,   156,    31,    38,   132,
      38,   439,   183,    34,    39,   246,   -15,   344,    46,   228,
     115,    14,   185,   160,   161,   284,   186,   170,   466,   126,
       3,   129,  -185,  -185,  -185,    94,   128,   174,   319,    25,
     424,     4,   -17,   157,    99,   443,   257,   258,   310,   184,
     106,   189,   168,   186,   234,   425,   156,    26,   169,   129,
      12,   229,   126,   352,   351,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,    25,   424,   217,   195,   107,   444,   171,    25,
     424,   175,   196,   157,    36,   427,    14,   375,   425,   428,
      -2,   429,   333,   465,   107,   425,   183,     4,   -16,   107,
     235,   426,   111,   385,   239,   222,   255,   392,   388,   302,
      29,    30,   199,   107,   339,   312,    15,    21,   226,   396,
     316,    14,    97,   358,   359,   408,  -248,    16,   427,   197,
     398,   183,   428,   241,   429,   427,   413,   220,   424,   428,
      40,   429,   136,   137,   107,   107,   249,    17,   423,   183,
    -206,   370,   183,   425,   256,   183,    35,   303,   416,   363,
     373,   267,   126,   183,   293,   183,    32,    33,   462,   254,
     374,   299,    49,   107,    25,    50,    51,    52,   -15,    53,
      54,    55,    56,    57,   146,   147,   148,   149,   150,   183,
      58,   154,   155,   427,   391,   280,   247,   428,   183,   467,
     151,   152,   153,   306,   -16,   268,    14,   183,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    41,    69,
      70,    93,   107,   418,   419,    96,   329,   346,   304,   103,
      71,   298,    97,   183,    72,   100,    73,   445,   446,   447,
     182,   183,    74,   313,   305,   131,   335,   126,   336,   337,
     342,   336,   343,    42,   376,   367,   183,   118,    25,   107,
     377,    52,   183,    53,    54,    55,   193,   194,   348,   349,
     350,   120,   357,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   364,   244,   245,   464,   372,   445,
     446,   122,    59,    60,    61,    62,    63,   130,    65,   148,
     149,   150,   397,    69,    70,   400,   380,   456,   457,   458,
     404,   146,   147,   148,   149,   150,   378,   368,   183,   459,
     101,   461,   412,   415,   158,   183,    74,   251,   252,   159,
     357,   454,   455,   456,   457,   458,   160,   161,   177,   172,
     364,   191,    49,   409,    25,    50,    51,    52,   178,    53,
      54,    55,    56,    57,   180,   181,   218,    66,   357,   227,
      58,   233,   236,    28,   238,   248,   253,   280,   265,   266,
     296,    28,   297,   314,    28,    37,   300,   307,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    28,    69,
      70,   454,   455,   456,   457,   458,   308,   320,   340,   134,
      71,   136,   137,   138,    72,   186,    73,   315,   331,   321,
     322,   324,    74,    49,   341,    25,    50,    51,    52,   325,
      53,    54,    55,    56,    57,   326,   327,   317,   379,   347,
     371,    58,   381,   382,   183,   383,   384,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   386,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   387,
      69,    70,   395,   389,   390,   403,   134,   135,   136,   137,
     138,    71,   401,   407,   405,    72,   422,    73,   410,   421,
     433,   438,   440,    74,    49,  -179,    25,    50,    51,    52,
     441,    53,    54,    55,    56,    57,    38,   460,   463,   482,
     345,   261,    58,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    11,    45,   414,   402,   179,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     231,    69,    70,   353,   399,   332,   420,   225,   219,   190,
       0,   237,    71,   117,     0,   295,    72,     0,    73,     0,
       0,     0,     0,     0,    74,    49,  -181,    25,    50,    51,
      52,     0,    53,    54,    55,    56,    57,     0,     0,     0,
       0,     0,     0,    58,   270,     0,   271,   418,   419,     0,
       0,   272,   273,   274,   275,     0,   276,   277,   278,     0,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,     0,    69,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,    72,   279,    73,
       0,     0,     0,   186,  -106,    74,   269,     0,    25,    50,
      51,   125,     0,    53,    54,    55,    56,    57,     0,     0,
       0,     0,     0,     0,    58,   270,     0,   271,     0,     0,
       0,     0,   272,   273,   274,   275,     0,   276,   277,   278,
       0,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   126,    69,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,    72,   279,
      73,     0,     0,     0,   186,   -72,    74,   269,     0,    25,
      50,    51,    52,     0,    53,    54,    55,    56,    57,     0,
       0,     0,     0,     0,     0,    58,   270,     0,   271,     0,
       0,     0,     0,   272,   273,   274,   275,     0,   276,   277,
     278,     0,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,     0,    69,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,    72,
     279,    73,     0,     0,     0,   186,   -72,    74,    49,     0,
      25,    50,    51,    52,     0,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,    58,   270,     0,   271,
       0,     0,     0,     0,   272,   273,   274,   275,     0,   276,
     277,   278,     0,     0,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     0,    69,    70,     0,     0,   134,
     135,   136,   137,   138,     0,     0,    71,     0,     0,     0,
      72,   279,    73,     0,     0,     0,   186,    49,    74,    25,
      50,    51,   125,     0,    53,    54,    55,    56,    57,     0,
       0,     0,     0,     0,     0,    58,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     0,     0,
       0,     0,   250,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   126,    69,    70,     0,     0,   134,   135,
     136,   137,   138,     0,     0,    71,   127,     0,     0,    72,
       0,    73,     0,     0,     0,     0,    49,    74,    25,    50,
      51,    52,     0,    53,    54,    55,    56,    57,     0,     0,
       0,     0,     0,     0,    58,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,     0,     0,     0,
     411,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     0,    69,    70,     0,     0,     0,     0,   134,
     135,   136,   137,   138,    71,     0,     0,     0,    72,     0,
      73,  -174,     0,     0,     0,  -174,    74,    49,     0,    25,
      50,    51,   125,     0,    53,    54,    55,    56,    57,     0,
       0,     0,     0,     0,     0,    58,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   126,    69,    70,     0,     0,     0,     0,
     134,   135,   136,   137,   138,    71,     0,     0,     0,    72,
     -98,    73,   176,     0,     0,     0,    49,    74,    25,    50,
      51,    52,     0,    53,    54,    55,    56,    57,     0,     0,
       0,     0,     0,     0,    58,     0,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,     0,
       0,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     0,    69,    70,     0,     0,     0,     0,     0,
     136,   137,   138,     0,    71,     0,     0,     0,    72,     0,
      73,     0,     0,     0,     0,  -172,    74,    49,     0,    25,
      50,    51,    52,     0,    53,    54,    55,    56,    57,     0,
       0,     0,     0,     0,     0,    58,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,     0,    69,    70,     0,     0,     0,   445,
     446,   447,     0,     0,     0,    71,   127,     0,     0,    72,
       0,    73,     0,     0,     0,     0,    49,    74,    25,    50,
      51,    52,     0,    53,    54,    55,    56,    57,     0,     0,
       0,     0,     0,     0,    58,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     0,    69,    70,     0,     0,   136,   137,   138,
       0,     0,   221,     0,    71,     0,     0,     0,    72,     0,
      73,     0,     0,     0,     0,    49,    74,    25,    50,    51,
      52,     0,    53,    54,    55,    56,    57,     0,     0,     0,
       0,     0,     0,    58,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,     0,    69,    70,     0,     0,   445,   446,   447,     0,
       0,     0,     0,    71,     0,     0,     0,    72,     0,    73,
    -172,     0,     0,     0,    49,    74,    25,    50,    51,    52,
       0,    53,    54,    55,    56,    57,     0,     0,     0,     0,
       0,     0,    58,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       0,    69,    70,     0,   136,   137,   138,     0,     0,     0,
       0,     0,    71,     0,     0,     0,    72,   328,    73,     0,
       0,     0,     0,    49,    74,    25,    50,    51,    52,     0,
      53,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,    58,   142,   143,   144,   145,   146,   147,   148,   149,
     150,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     0,
      69,    70,     0,   445,   446,   447,     0,     0,     0,     0,
       0,    71,     0,     0,     0,    72,   -98,    73,     0,     0,
       0,     0,    49,    74,    25,    50,    51,    52,     0,    53,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
      58,   450,   451,   452,   453,   454,   455,   456,   457,   458,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     0,    69,
      70,   136,   137,   138,     0,     0,     0,   136,   137,   138,
      71,     0,     0,     0,    72,     0,    73,   -98,     0,     0,
       0,    49,    74,    25,    50,    51,    52,     0,    53,    54,
      55,    56,    57,     0,     0,     0,     0,     0,     0,    58,
     143,   144,   145,   146,   147,   148,   149,   150,   145,   146,
     147,   148,   149,   150,     0,     0,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     0,    69,    70,
     134,   135,   136,   137,   138,     0,     0,     0,     0,    71,
       0,     0,     0,    72,     0,    73,     0,     0,     0,     0,
       0,    74,   134,   135,   136,   137,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   134,
     135,   136,   137,   138,   240,     0,     0,     0,     0,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   134,   135,   136,   137,   138,   243,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   445,   446,
     447,     0,     0,   317,   445,   446,   447,     0,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       0,     0,     0,     0,     0,   334,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   442,     0,   451,   452,   453,
     454,   455,   456,   457,   458,   453,   454,   455,   456,   457,
     458,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,     0,     0,     0,     0,     0,
       0,     0,     0,   442
};

static const yytype_int16 yycheck[] =
{
      15,    15,     9,    42,    10,   226,    56,    57,    56,    57,
     178,    26,    26,   242,   119,     1,   121,    13,     6,    58,
      13,    60,    61,    38,    38,     3,   173,     8,     9,    79,
      36,    79,    71,    72,   324,   325,    35,    16,    58,    78,
      58,   426,    68,    22,    64,   192,    37,    73,    66,    26,
      62,     6,    65,     8,     9,   284,    69,    96,   443,    47,
       0,    73,    11,    12,    13,    44,    73,    48,    64,     3,
       4,     7,    65,    72,    65,    25,   223,   224,    64,   118,
      59,   120,    70,    69,   252,    19,    35,    65,    95,   101,
      64,    68,    47,   383,   323,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,     4,   153,   127,   155,    67,    97,     3,
       4,   100,   128,    72,    68,    59,     6,   346,    19,    63,
       0,    65,    64,    67,   173,    19,    68,     7,    37,   178,
     179,    25,   181,   364,   183,   157,    25,   376,   367,    25,
       8,     9,   131,   192,   301,   260,    36,    60,   164,   380,
     265,     6,    37,     8,     9,   394,    65,    47,    59,    66,
     382,    68,    63,   185,    65,    59,   405,   156,     4,    63,
       3,    65,    16,    17,   223,   224,   198,    67,   417,    68,
      65,   338,    68,    19,    73,    68,    64,    73,   410,    64,
      73,   240,    47,    68,   243,    68,     8,     9,   437,   221,
      73,   250,     1,   252,     3,     4,     5,     6,    69,     8,
       9,    10,    11,    12,    58,    59,    60,    61,    62,    68,
      19,    67,    68,    59,    73,   242,    66,    63,    68,    65,
      11,    12,    13,   255,    69,    66,     6,    68,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    69,    48,
      49,    65,   301,    23,    24,    13,   278,   317,    57,   317,
      59,    66,    37,    68,    63,    37,    65,    16,    17,    18,
      67,    68,    71,   262,    73,    37,    66,    47,    68,    66,
     302,    68,   304,    13,    66,   334,    68,    65,     3,   338,
      66,     6,    68,     8,     9,    10,     8,     9,   320,   321,
     322,    65,   324,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,   330,     8,     9,    66,   340,    16,
      17,    65,    37,    38,    39,    40,    41,    65,    43,    60,
      61,    62,   381,    48,    49,   384,   352,    60,    61,    62,
     389,    58,    59,    60,    61,    62,    66,   336,    68,   434,
      65,   436,   401,    66,    65,    68,    71,    67,    68,    65,
     382,    58,    59,    60,    61,    62,     8,     9,    70,    65,
     386,    47,     1,   395,     3,     4,     5,     6,    68,     8,
       9,    10,    11,    12,    73,    68,    66,    44,   410,    66,
      19,    66,    66,   418,    66,    66,    65,   414,    66,    66,
      66,   426,    65,    68,   429,   429,    66,    66,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,   443,    48,
      49,    58,    59,    60,    61,    62,    66,    65,    57,    14,
      59,    16,    17,    18,    63,    69,    65,    64,    70,    65,
      65,    65,    71,     1,    73,     3,     4,     5,     6,    65,
       8,     9,    10,    11,    12,    64,    64,    68,    27,    66,
      66,    19,    13,    64,    68,    68,    31,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    68,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    64,
      48,    49,    65,    67,    66,    66,    14,    15,    16,    17,
      18,    59,    13,    69,    21,    63,    66,    65,    64,    64,
      67,     4,     4,    71,     1,    73,     3,     4,     5,     6,
       4,     8,     9,    10,    11,    12,    58,    70,    67,    67,
     314,   229,    19,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     4,    36,   407,   386,    67,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
     172,    48,    49,   324,   383,   284,   414,   163,   155,   121,
      -1,   181,    59,    62,    -1,   245,    63,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    71,     1,    73,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    -1,    22,    23,    24,    -1,
      -1,    27,    28,    29,    30,    -1,    32,    33,    34,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    -1,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    32,    33,    34,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    32,    33,
      34,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    32,
      33,    34,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    -1,    59,    -1,    -1,    -1,
      63,    64,    65,    -1,    -1,    -1,    69,     1,    71,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    67,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    -1,    59,    60,    -1,    -1,    63,
      -1,    65,    -1,    -1,    -1,    -1,     1,    71,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      66,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    59,    -1,    -1,    -1,    63,    -1,
      65,    66,    -1,    -1,    -1,    70,    71,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    59,    -1,    -1,    -1,    63,
      64,    65,    26,    -1,    -1,    -1,     1,    71,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    -1,    59,    -1,    -1,    -1,    63,    -1,
      65,    -1,    -1,    -1,    -1,    70,    71,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    -1,    -1,    -1,    16,
      17,    18,    -1,    -1,    -1,    59,    60,    -1,    -1,    63,
      -1,    65,    -1,    -1,    -1,    -1,     1,    71,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    -1,    -1,    16,    17,    18,
      -1,    -1,    57,    -1,    59,    -1,    -1,    -1,    63,    -1,
      65,    -1,    -1,    -1,    -1,     1,    71,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    -1,    -1,    16,    17,    18,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    -1,    65,
      66,    -1,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,    -1,
      -1,    -1,    -1,     1,    71,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    64,    65,    -1,    -1,
      -1,    -1,     1,    71,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    16,    17,    18,    -1,    -1,    -1,    16,    17,    18,
      59,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,    -1,
      -1,     1,    71,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      55,    56,    57,    58,    59,    60,    61,    62,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    71,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    14,
      15,    16,    17,    18,    68,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    14,    15,    16,    17,    18,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    16,    17,
      18,    -1,    -1,    68,    16,    17,    18,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   429,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    57,    58,    59,    60,    61,
      62,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   467
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    75,    76,     0,     7,    78,    84,    87,    92,   101,
     102,   101,    64,    77,     6,    36,    47,    67,    95,    96,
     104,    60,    81,   105,   106,     3,    65,   159,   160,     8,
       9,    83,     8,     9,    83,    64,    68,   159,    58,    64,
       3,    69,    13,    85,    81,   105,    66,   159,    93,     1,
       4,     5,     6,     8,     9,    10,    11,    12,    19,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    48,
      49,    59,    63,    65,    71,    79,    80,    83,   103,   136,
     137,   145,   146,   147,   151,   153,   154,   155,   158,   160,
     163,   170,   171,    65,    83,    90,    13,    37,   149,    65,
      37,    65,   145,   147,   145,   137,    83,   137,   139,   140,
     141,   137,   142,   143,   144,   135,   137,   170,    65,   152,
      65,   156,    65,   137,   137,     6,    47,    60,    96,   135,
      65,    37,   137,   145,    14,    15,    16,    17,    18,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    11,    12,    13,    67,    68,    35,    72,    65,    65,
       8,     9,    94,    96,    97,    98,    99,   100,    70,    96,
     137,    83,    65,   166,    48,    83,    26,    70,    68,    67,
      73,    68,    67,    68,   137,    65,    69,   107,   150,   137,
     150,    47,   165,     8,     9,   135,    81,    66,   148,    83,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,    66,   141,
      83,    57,   135,   164,   167,   136,    81,    66,    26,    68,
      91,    99,   139,    66,   140,   137,    66,   144,    66,   137,
      68,   135,   109,    68,     8,     9,   139,    66,    66,   135,
      67,    67,    68,    65,   135,    25,    73,   139,   139,    94,
      86,    98,    81,    88,    89,    66,    66,   137,    66,     1,
      20,    22,    27,    28,    29,    30,    32,    33,    34,    64,
      96,   107,   108,   115,   116,   117,   119,   121,   125,   129,
     135,   138,   172,   137,   162,   162,    66,    65,    66,   137,
      66,   168,    25,    73,    57,    73,   135,    66,    66,     1,
      64,    82,   107,    83,    68,    64,   107,    68,   157,    64,
      65,    65,    65,   120,    65,    65,    64,    64,    64,   135,
     110,    70,   115,    64,    68,    66,    68,    66,   169,   139,
      57,    73,   135,   135,    73,    89,   145,    66,   135,   135,
     135,   116,    97,   112,   113,   127,   128,   135,     8,     9,
     112,   123,   124,    64,    81,   111,   114,   137,    83,   161,
     139,    66,   135,    73,    73,   157,    66,    66,    66,    27,
      81,    13,    64,    68,    31,    94,    68,    64,   157,    67,
      66,    73,   116,   130,   118,    65,    94,   137,   127,   123,
     137,    13,   114,    66,   137,    21,   173,    69,   116,   135,
      64,    66,   137,   116,   109,    66,   127,   126,    23,    24,
     132,    64,    66,   116,     4,    19,    25,    59,    63,    65,
     133,   134,   159,    67,   116,   131,   132,   122,     4,   133,
       4,     4,   134,    25,    67,    16,    17,    18,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,   131,
      70,   131,   116,    67,    66,    67,   133,    65,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,    67
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 212 "grammar.y"
    {
#line 230 "grammar.y.pre"
	    comp_trees[TREE_MAIN] = (yyval.node);
	}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 220 "grammar.y"
    {
#line 237 "grammar.y.pre"
	    CREATE_TWO_VALUES((yyval.node), 0, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
	}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 225 "grammar.y"
    {
#line 241 "grammar.y.pre"
	    (yyval.node) = 0;
	}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 234 "grammar.y"
    {
#line 249 "grammar.y.pre"

		yywarn("Extra ';'. Ignored.");
	    }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 244 "grammar.y"
    {
#line 258 "grammar.y.pre"
		object_t *ob;
		inherit_t inherit;
		int initializer;
		int acc_mod;
		
		(yyvsp[(1) - (4)].number) |= global_modifiers;

                acc_mod = ((yyvsp[(1) - (4)].number) & DECL_ACCESS) & ~global_modifiers;
		if (acc_mod & (acc_mod - 1)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Multiple access modifiers (");
		    p = get_type_modifiers(p, end, (yyvsp[(1) - (4)].number));
		    p = strput(p, end, ") for inheritance");
		    yyerror(buf);
		}	       
		
		if (!((yyvsp[(1) - (4)].number) & DECL_ACCESS)) (yyvsp[(1) - (4)].number) |= DECL_PUBLIC;
#ifndef ALLOW_INHERIT_AFTER_FUNCTION
		if (func_present)
		    yyerror("Illegal to inherit after defining functions.");
#endif
		if (var_defined)
		    yyerror("Illegal to inherit after defining global variables.");
#ifndef ALLOW_INHERIT_AFTER_FUNCTION
		if (func_present || var_defined){
#else
		if (var_defined){
#endif
		  inherit_file = 0;
		  YYACCEPT;
		}
#ifdef NEVER
		} //stupid bison
#endif
		ob = find_object2((yyvsp[(3) - (4)].string));
		if (ob == 0) {
		    inherit_file = alloc_cstring((yyvsp[(3) - (4)].string), "inherit");
		    /* Return back to load_object() */
		    YYACCEPT;
		}
		scratch_free((yyvsp[(3) - (4)].string));
		inherit.prog = ob->prog;

		if (mem_block[A_INHERITS].current_size){
		    inherit_t *prev_inherit = INHERIT(NUM_INHERITS - 1);
		    
		    inherit.function_index_offset 
			= prev_inherit->function_index_offset
			+ prev_inherit->prog->num_functions_defined
			+ prev_inherit->prog->last_inherited;
		    if (prev_inherit->prog->num_functions_defined &&
			prev_inherit->prog->function_table[prev_inherit->prog->num_functions_defined - 1].funcname[0] == APPLY___INIT_SPECIAL_CHAR)
			inherit.function_index_offset--;
		} else inherit.function_index_offset = 0;
		
		inherit.variable_index_offset =
		    mem_block[A_VAR_TEMP].current_size /
		    sizeof (variable_t);
		inherit.type_mod = (yyvsp[(1) - (4)].number);
		add_to_mem_block(A_INHERITS, (char *)&inherit, sizeof inherit);

		/* The following has to come before copy_vars - Sym */
		copy_structures(ob->prog);
		copy_variables(ob->prog, (yyvsp[(1) - (4)].number));
		initializer = copy_functions(ob->prog, (yyvsp[(1) - (4)].number));
		if (initializer >= 0) {
		    parse_node_t *node, *newnode;
		    /* initializer is an index into the object we're
		       inheriting's function table; this finds the
		       appropriate entry in our table and generates
		       a call to it */
		    node = new_node_no_line();
		    node->kind = NODE_CALL_2;
		    node->r.expr = 0;
		    node->v.number = F_CALL_INHERITED;
		    node->l.number = initializer | ((NUM_INHERITS - 1) << 16);
		    node->type = TYPE_ANY;
		    
		    /* The following illustrates a distinction between */
		    /* macros and funcs...newnode is needed here - Sym */
		    newnode = comp_trees[TREE_INIT];
		    CREATE_TWO_VALUES(comp_trees[TREE_INIT],0, newnode, node);
		    comp_trees[TREE_INIT] = pop_value(comp_trees[TREE_INIT]);
		    
		} 
		(yyval.node) = 0;
	    }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 340 "grammar.y"
    {
#line 357 "grammar.y.pre"
		CREATE_REAL((yyval.node), (yyvsp[(1) - (1)].real));
	    }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 348 "grammar.y"
    {
#line 364 "grammar.y.pre"
		CREATE_NUMBER((yyval.node), (yyvsp[(1) - (1)].number));
	    }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 356 "grammar.y"
    {
#line 371 "grammar.y.pre"
		(yyval.number) = 0;
	    }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 361 "grammar.y"
    {
#line 375 "grammar.y.pre"
		(yyval.number) = TYPE_MOD_ARRAY;
	    }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 369 "grammar.y"
    {
#line 382 "grammar.y.pre"
		(yyval.node) = (yyvsp[(1) - (1)].decl).node;
		if (!(yyval.node)) {
		    CREATE_RETURN((yyval.node), 0);
		}
            }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 377 "grammar.y"
    {
#line 389 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 382 "grammar.y"
    {
#line 393 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 390 "grammar.y"
    {
#line 400 "grammar.y.pre"
		(yyval.string) = scratch_copy((yyvsp[(1) - (1)].ihe)->name);
	    }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 399 "grammar.y"
    {
#line 408 "grammar.y.pre"
		int flags;
                int acc_mod;
                func_present = 1;
		flags = ((yyvsp[(1) - (3)].number) >> 16);
		
		flags |= global_modifiers;

                acc_mod = (flags & DECL_ACCESS) & ~global_modifiers;
		if (acc_mod & (acc_mod - 1)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Multiple access modifiers (");
		    p = get_type_modifiers(p, end, flags);
		    p = strput(p, end, ") for function");
		    yyerror(buf);
		}	 

		if (!(flags & DECL_ACCESS)) flags |= DECL_PUBLIC;
		if (flags & DECL_NOSAVE) {
		    yywarn("Illegal to declare nosave function.");
		    flags &= ~DECL_NOSAVE;
		}
                (yyvsp[(1) - (3)].number) = (flags << 16) | ((yyvsp[(1) - (3)].number) & 0xffff);
		/* Handle type checking here so we know whether to typecheck
		   'argument' */
		if ((yyvsp[(1) - (3)].number) & 0xffff) {
		    exact_types = ((yyvsp[(1) - (3)].number)& 0xffff) | (yyvsp[(2) - (3)].number);
		} else {
		    if (pragmas & PRAGMA_STRICT_TYPES) {
			if (strcmp((yyvsp[(3) - (3)].string), "create") != 0)
			    yyerror("\"#pragma strict_types\" requires type of function");
			else
			    exact_types = TYPE_VOID; /* default for create() */
		    } else
			exact_types = 0;
		}
	    }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 441 "grammar.y"
    {
#line 459 "grammar.y.pre"
		char *p = (yyvsp[(3) - (7)].string);
		(yyvsp[(3) - (7)].string) = make_shared_string((yyvsp[(3) - (7)].string));
		scratch_free(p);

		/* If we had nested functions, we would need to check */
		/* here if we have enough space for locals */
		
		/*
		 * Define a prototype. If it is a real function, then the
		 * prototype will be replaced below.
		 */

		(yyval.number) = FUNC_PROTOTYPE;
		if ((yyvsp[(6) - (7)].argument).flags & ARG_IS_VARARGS) {
		    (yyval.number) |= (FUNC_TRUE_VARARGS | FUNC_VARARGS);
		}
		(yyval.number) |= ((yyvsp[(1) - (7)].number) >> 16);

		define_new_function((yyvsp[(3) - (7)].string), (yyvsp[(6) - (7)].argument).num_arg, 0, (yyval.number), ((yyvsp[(1) - (7)].number) & 0xffff)| (yyvsp[(2) - (7)].number));
		/* This is safe since it is guaranteed to be in the
		   function table, so it can't be dangling */
		free_string((yyvsp[(3) - (7)].string)); 
		context = 0;
	    }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 468 "grammar.y"
    {
#line 485 "grammar.y.pre"
		/* Either a prototype or a block */
		if ((yyvsp[(9) - (9)].node)) {
		    int fun;

		    (yyvsp[(8) - (9)].number) &= ~FUNC_PROTOTYPE;
		    if ((yyvsp[(9) - (9)].node)->kind != NODE_RETURN &&
			((yyvsp[(9) - (9)].node)->kind != NODE_TWO_VALUES
			 || (yyvsp[(9) - (9)].node)->r.expr->kind != NODE_RETURN)) {
			parse_node_t *replacement;
			CREATE_STATEMENTS(replacement, (yyvsp[(9) - (9)].node), 0);
			CREATE_RETURN(replacement->r.expr, 0);
			(yyvsp[(9) - (9)].node) = replacement;
		    }

		    fun = define_new_function((yyvsp[(3) - (9)].string), (yyvsp[(6) - (9)].argument).num_arg, 
					      max_num_locals - (yyvsp[(6) - (9)].argument).num_arg,
					      (yyvsp[(8) - (9)].number), ((yyvsp[(1) - (9)].number) & 0xffff) | (yyvsp[(2) - (9)].number));
		    if (fun != -1) {
			(yyval.node) = new_node_no_line();
			(yyval.node)->kind = NODE_FUNCTION;
			(yyval.node)->v.number = fun;
			(yyval.node)->l.number = max_num_locals;
			(yyval.node)->r.expr = (yyvsp[(9) - (9)].node);
		    } else 
			(yyval.node) = 0;
		} else
		    (yyval.node) = 0;
		free_all_local_names(!!(yyvsp[(9) - (9)].node));
	    }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 500 "grammar.y"
    {
#line 516 "grammar.y.pre"
		if (!((yyvsp[(1) - (3)].number) & ~(DECL_MODS)) && (pragmas & PRAGMA_STRICT_TYPES))
		    yyerror("Missing type for global variable declaration");
		(yyval.node) = 0;
	    }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 512 "grammar.y"
    {
#line 527 "grammar.y.pre"
		if (!(yyvsp[(1) - (2)].number)) 
		    yyerror("modifier list may not be empty.");
		
		if ((yyvsp[(1) - (2)].number) & FUNC_VARARGS) {
		    yyerror("Illegal modifier 'varargs' in global modifier list.");
		    (yyvsp[(1) - (2)].number) &= ~FUNC_VARARGS;
		}

		if (!((yyvsp[(1) - (2)].number) & DECL_ACCESS)) (yyvsp[(1) - (2)].number) |= DECL_PUBLIC;
		global_modifiers = (yyvsp[(1) - (2)].number);
		(yyval.node) = 0;
	    }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 530 "grammar.y"
    {
#line 544 "grammar.y.pre"
		/* At this point, the current_type here is only a basic_type */
		/* and cannot be unused yet - Sym */
		
		if (current_type == TYPE_VOID)
		    yyerror("Illegal to declare class member of type void.");
		add_local_name((yyvsp[(2) - (2)].string), current_type | (yyvsp[(1) - (2)].number));
		scratch_free((yyvsp[(2) - (2)].string));
	    }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 550 "grammar.y"
    {
#line 563 "grammar.y.pre"
	      current_type = (yyvsp[(2) - (2)].number);
	  }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 559 "grammar.y"
    {
#line 571 "grammar.y.pre"
		ident_hash_elem_t *ihe;

		ihe = find_or_add_ident(
			   PROG_STRING((yyval.number) = store_prog_string((yyvsp[(3) - (4)].string))),
			   FOA_GLOBAL_SCOPE);
		if (ihe->dn.class_num == -1) {
		    ihe->sem_value++;
		    ihe->dn.class_num = mem_block[A_CLASS_DEF].current_size / sizeof(class_def_t);
		    if (ihe->dn.class_num > CLASS_NUM_MASK){
			char buf[256];
			char *p;

			p = buf;
			sprintf(p, "Too many classes, max is %d.\n", CLASS_NUM_MASK + 1);
			yyerror(buf);
		    }

		    scratch_free((yyvsp[(3) - (4)].string));
		    (yyvsp[(2) - (4)].ihe) = 0;
		}
		else {
		    (yyvsp[(2) - (4)].ihe) = ihe;
		}
	    }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 586 "grammar.y"
    {
#line 597 "grammar.y.pre"
		class_def_t *sd;
		class_member_entry_t *sme;
		int i, raise_error = 0;
		
		/* check for a redefinition */
		if ((yyvsp[(2) - (7)].ihe) != 0) {
		    sd = CLASS((yyvsp[(2) - (7)].ihe)->dn.class_num);
		    if (sd->size != current_number_of_locals)
			raise_error = 1;
		    else {
			i = sd->size;
			sme = (class_member_entry_t *)mem_block[A_CLASS_MEMBER].block + sd->index;
			while (i--) {
			    /* check for matching names and types */
			    if (strcmp(PROG_STRING(sme[i].membername), locals_ptr[i].ihe->name) != 0 ||
				sme[i].type != (type_of_locals_ptr[i] & ~LOCAL_MODS)) {
				raise_error = 1;
				break;
			    }
			}
		    }
		}

		if (raise_error) {
		    char buf[512];
		    char *end = EndOf(buf);
		    char *p;

		    p = strput(buf, end, "Illegal to redefine class ");
		    p = strput(p, end, PROG_STRING((yyval.number)));
		    yyerror(buf);
		} else {
		    sd = (class_def_t *)allocate_in_mem_block(A_CLASS_DEF, sizeof(class_def_t));
		    i = sd->size = current_number_of_locals;
		    sd->index = mem_block[A_CLASS_MEMBER].current_size / sizeof(class_member_entry_t);
		    sd->classname = (yyvsp[(5) - (7)].number);

		    sme = (class_member_entry_t *)allocate_in_mem_block(A_CLASS_MEMBER, sizeof(class_member_entry_t) * current_number_of_locals);

		    while (i--) {
			sme[i].membername = store_prog_string(locals_ptr[i].ihe->name);
			sme[i].type = type_of_locals_ptr[i] & ~LOCAL_MODS;
		    }
		}

		free_all_local_names(0);
		(yyval.node) = 0;
	    }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 641 "grammar.y"
    {
#line 651 "grammar.y.pre"
		if ((yyvsp[(1) - (1)].ihe)->dn.local_num != -1) {
		    char buff[256];
		    char *end = EndOf(buff);
		    char *p;
		    
		    p = strput(buff, end, "Illegal to redeclare local name '");
		    p = strput(p, end, (yyvsp[(1) - (1)].ihe)->name);
		    p = strput(p, end, "'");
		    yyerror(buff);
		}
		(yyval.string) = scratch_copy((yyvsp[(1) - (1)].ihe)->name);
	    }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 660 "grammar.y"
    {
#line 669 "grammar.y.pre"
		if ((yyvsp[(2) - (2)].ihe)->dn.class_num == -1) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Undefined class '");
		    p = strput(p, end, (yyvsp[(2) - (2)].ihe)->name);
		    p = strput(p, end, "'");
		    yyerror(buf);
		    (yyval.number) = TYPE_ANY;
		} else {
		    (yyval.number) = (yyvsp[(2) - (2)].ihe)->dn.class_num | TYPE_MOD_CLASS;
		}
	    }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 677 "grammar.y"
    {
#line 685 "grammar.y.pre"
		char buf[256];
		char *end = EndOf(buf);
		char *p;

		p = strput(buf, end, "Undefined class '");
		p = strput(p, end, (yyvsp[(2) - (2)].string));
		p = strput(p, end, "'");
		yyerror(buf);
		(yyval.number) = TYPE_ANY;
	    }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 699 "grammar.y"
    {
#line 722 "grammar.y.pre"
		(yyval.number) = (yyvsp[(1) - (2)].number) | LOCAL_MOD_REF;
	    }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 707 "grammar.y"
    {
#line 730 "grammar.y.pre"
                (yyval.number) = (yyvsp[(1) - (2)].number) | (yyvsp[(2) - (2)].number);
		if ((yyvsp[(1) - (2)].number) != TYPE_VOID)
		    add_local_name("", (yyvsp[(1) - (2)].number) | (yyvsp[(2) - (2)].number));
            }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 714 "grammar.y"
    {
#line 736 "grammar.y.pre"
		if ((yyvsp[(1) - (3)].number) == TYPE_VOID)
		    yyerror("Illegal to declare argument of type void.");
                add_local_name((yyvsp[(3) - (3)].string), (yyvsp[(1) - (3)].number) | (yyvsp[(2) - (3)].number));
		scratch_free((yyvsp[(3) - (3)].string));
                (yyval.number) = (yyvsp[(1) - (3)].number) | (yyvsp[(2) - (3)].number);
	    }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 723 "grammar.y"
    {
#line 744 "grammar.y.pre"
		if (exact_types) {
		    yyerror("Missing type for argument");
		}
		add_local_name((yyvsp[(1) - (1)].string), TYPE_ANY);
		scratch_free((yyvsp[(1) - (1)].string));
		(yyval.number) = TYPE_ANY;
            }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 736 "grammar.y"
    {
#line 756 "grammar.y.pre"
		(yyval.argument).num_arg = 0;
                (yyval.argument).flags = 0;
	    }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 743 "grammar.y"
    {
#line 762 "grammar.y.pre"
		int x = type_of_locals_ptr[max_num_locals-1];
		int lt = x & ~LOCAL_MODS;
		
		(yyval.argument) = (yyvsp[(1) - (2)].argument);
		(yyval.argument).flags |= ARG_IS_VARARGS;

		if (x & LOCAL_MOD_REF) {
		    yyerror("Variable to hold remainder of args may not be a reference");
		    x &= ~LOCAL_MOD_REF;
		}
		if (lt != TYPE_ANY && !(lt & TYPE_MOD_ARRAY))
		    yywarn("Variable to hold remainder of arguments should be an array.");
	    }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 762 "grammar.y"
    {
#line 780 "grammar.y.pre"
		if (((yyvsp[(1) - (1)].number) & TYPE_MASK) == TYPE_VOID && !((yyvsp[(1) - (1)].number) & TYPE_MOD_CLASS)) {
		    if ((yyvsp[(1) - (1)].number) & ~TYPE_MASK)
			yyerror("Illegal to declare argument of type void.");
		    (yyval.argument).num_arg = 0;
		} else {
		    (yyval.argument).num_arg = 1;
		}
                (yyval.argument).flags = 0;
	    }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 774 "grammar.y"
    {
#line 791 "grammar.y.pre"
		if (!(yyval.argument).num_arg)    /* first arg was void w/no name */
		    yyerror("argument of type void must be the only argument.");
		if (((yyvsp[(3) - (3)].number) & TYPE_MASK) == TYPE_VOID && !((yyvsp[(3) - (3)].number) & TYPE_MOD_CLASS))
		    yyerror("Illegal to declare argument of type void.");

                (yyval.argument) = (yyvsp[(1) - (3)].argument);
		(yyval.argument).num_arg++;
	    }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 788 "grammar.y"
    {
#line 804 "grammar.y.pre"
		(yyval.number) = 0;
	    }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 793 "grammar.y"
    {
#line 808 "grammar.y.pre"
		int acc_mod;
		
		(yyval.number) = (yyvsp[(1) - (2)].number) | (yyvsp[(2) - (2)].number);
		
                acc_mod = ((yyval.number) & DECL_ACCESS) & ~global_modifiers;
		if (acc_mod & (acc_mod - 1)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Multiple access modifiers (");
		    p = get_type_modifiers(p, end, (yyval.number));
		    p = strput(p, end, ") ");
		    yyerror(buf);
		    (yyval.number) = DECL_PUBLIC;
		}
	    }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 816 "grammar.y"
    {
#line 834 "grammar.y.pre"
		(yyval.number) = ((yyvsp[(1) - (2)].number) << 16) | (yyvsp[(2) - (2)].number);
		current_type = (yyval.number);
	    }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 825 "grammar.y"
    {
#line 842 "grammar.y.pre"
		(yyval.number) = (yyvsp[(2) - (4)].number) | (yyvsp[(3) - (4)].number);
	    }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 834 "grammar.y"
    {
#line 850 "grammar.y.pre"
		(yyval.number) = TYPE_UNKNOWN;
	    }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 847 "grammar.y"
    {
#line 862 "grammar.y.pre"
		if (current_type & (FUNC_VARARGS << 16)){
		    yyerror("Illegal to declare varargs variable.");
		    current_type &= ~(FUNC_VARARGS << 16);
		}
		/* Now it is ok to merge the two
		 * remember that class_num and varargs was the reason for above
		 * Do the merging once only per row of decls
		 */

		if (current_type & 0xffff0000){
		    current_type = (current_type >> 16) | (current_type & 0xffff);
		}

		current_type |= global_modifiers;

		if (!(current_type & DECL_ACCESS)) current_type |= DECL_PUBLIC;

		if ((current_type & ~DECL_MODS) == TYPE_VOID)
		    yyerror("Illegal to declare global variable of type void.");

		define_new_variable((yyvsp[(2) - (2)].string), current_type | (yyvsp[(1) - (2)].number));
		scratch_free((yyvsp[(2) - (2)].string));
	    }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 873 "grammar.y"
    {
#line 887 "grammar.y.pre"
		parse_node_t *expr, *newnode;
		int type;

		if (current_type & (FUNC_VARARGS << 16)){
		    yyerror("Illegal to declare varargs variable.");
		    current_type &= ~(FUNC_VARARGS << 16);
		}
		
		if (current_type & 0xffff0000){
		    current_type = (current_type >> 16) | (current_type & 0xffff);
		}

		current_type |= global_modifiers;

		if (!(current_type & DECL_ACCESS)) current_type |= DECL_PUBLIC;

		if ((current_type & ~DECL_MODS) == TYPE_VOID)
		    yyerror("Illegal to declare global variable of type void.");

		if ((yyvsp[(3) - (4)].number) != F_ASSIGN)
		    yyerror("Only '=' is legal in initializers.");

		/* ignore current_type == 0, which gets a missing type error
		   later anyway */
		if (current_type) {
		    type = (current_type | (yyvsp[(1) - (4)].number)) & ~DECL_MODS;
		    if ((current_type & ~DECL_MODS) == TYPE_VOID)
			yyerror("Illegal to declare global variable of type void.");
		    if (!compatible_types(type, (yyvsp[(4) - (4)].node)->type)) {
			char buff[256];
			char *end = EndOf(buff);
			char *p;
			
			p = strput(buff, end, "Type mismatch ");
			p = get_two_types(p, end, type, (yyvsp[(4) - (4)].node)->type);
			p = strput(p, end, " when initializing ");
			p = strput(p, end, (yyvsp[(2) - (4)].string));
			yyerror(buff);
		    }
		} else type = 0;
		(yyvsp[(4) - (4)].node) = do_promotions((yyvsp[(4) - (4)].node), type);

		CREATE_BINARY_OP(expr, F_VOID_ASSIGN, 0, (yyvsp[(4) - (4)].node), 0);
		CREATE_OPCODE_1(expr->r.expr, F_GLOBAL_LVALUE, 0,
				define_new_variable((yyvsp[(2) - (4)].string), current_type | (yyvsp[(1) - (4)].number)));
		newnode = comp_trees[TREE_INIT];
		CREATE_TWO_VALUES(comp_trees[TREE_INIT], 0,
				  newnode, expr);
		scratch_free((yyvsp[(2) - (4)].string));
	    }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 929 "grammar.y"
    {
#line 942 "grammar.y.pre"
		if ((yyvsp[(2) - (4)].decl).node && (yyvsp[(3) - (4)].node)) {
		    CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(2) - (4)].decl).node, (yyvsp[(3) - (4)].node));
		} else (yyval.decl).node = ((yyvsp[(2) - (4)].decl).node ? (yyvsp[(2) - (4)].decl).node : (yyvsp[(3) - (4)].node));
                (yyval.decl).num = (yyvsp[(2) - (4)].decl).num;
            }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 942 "grammar.y"
    {
#line 954 "grammar.y.pre"
                (yyval.decl).node = 0;
                (yyval.decl).num = 0;
            }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 948 "grammar.y"
    {
#line 959 "grammar.y.pre"
		if ((yyvsp[(2) - (2)].number) == TYPE_VOID)
		    yyerror("Illegal to declare local variable of type void.");
                /* can't do this in basic_type b/c local_name_list contains
                 * expr0 which contains cast which contains basic_type
                 */
                current_type = (yyvsp[(2) - (2)].number);
            }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 958 "grammar.y"
    {
#line 968 "grammar.y.pre"
                if ((yyvsp[(1) - (5)].decl).node && (yyvsp[(4) - (5)].decl).node) {
		    CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(1) - (5)].decl).node, (yyvsp[(4) - (5)].decl).node);
                } else (yyval.decl).node = ((yyvsp[(1) - (5)].decl).node ? (yyvsp[(1) - (5)].decl).node : (yyvsp[(4) - (5)].decl).node);
                (yyval.decl).num = (yyvsp[(1) - (5)].decl).num + (yyvsp[(4) - (5)].decl).num;
            }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 970 "grammar.y"
    {
#line 979 "grammar.y.pre"
		if (current_type & LOCAL_MOD_REF) {
		    yyerror("Illegal to declare local variable as reference");
		    current_type &= ~LOCAL_MOD_REF;
		}
		add_local_name((yyvsp[(2) - (2)].string), current_type | (yyvsp[(1) - (2)].number) | LOCAL_MOD_UNUSED);

		scratch_free((yyvsp[(2) - (2)].string));
		(yyval.node) = 0;
	    }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 982 "grammar.y"
    {
#line 990 "grammar.y.pre"
		int type = (current_type | (yyvsp[(1) - (4)].number)) & ~DECL_MODS;

		if (current_type & LOCAL_MOD_REF) {
		    yyerror("Illegal to declare local variable as reference");
		    current_type &= ~LOCAL_MOD_REF;
		    type &= ~LOCAL_MOD_REF;
		}

		if ((yyvsp[(3) - (4)].number) != F_ASSIGN)
		    yyerror("Only '=' is allowed in initializers.");
		if (!compatible_types((yyvsp[(4) - (4)].node)->type, type)) {
		    char buff[256];
		    char *end = EndOf(buff);
		    char *p;
		    
		    p = strput(buff, end, "Type mismatch ");
		    p = get_two_types(p, end, type, (yyvsp[(4) - (4)].node)->type);
		    p = strput(p, end, " when initializing ");
		    p = strput(p, end, (yyvsp[(2) - (4)].string));

		    yyerror(buff);
		}
		
		(yyvsp[(4) - (4)].node) = do_promotions((yyvsp[(4) - (4)].node), type);

		CREATE_UNARY_OP_1((yyval.node), F_VOID_ASSIGN_LOCAL, 0, (yyvsp[(4) - (4)].node),
				  add_local_name((yyvsp[(2) - (4)].string), current_type | (yyvsp[(1) - (4)].number) | LOCAL_MOD_UNUSED));
		scratch_free((yyvsp[(2) - (4)].string));
	    }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1017 "grammar.y"
    {
#line 1024 "grammar.y.pre"
		if ((yyvsp[(1) - (3)].number) == TYPE_VOID)
		    yyerror("Illegal to declare local variable of type void.");

		(yyval.number) = add_local_name((yyvsp[(3) - (3)].string), (yyvsp[(1) - (3)].number) | (yyvsp[(2) - (3)].number));
		scratch_free((yyvsp[(3) - (3)].string));
	    }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1029 "grammar.y"
    {
#line 1035 "grammar.y.pre"
                int type = type_of_locals_ptr[(yyvsp[(1) - (3)].number)];

		if (type & LOCAL_MOD_REF) {
		    yyerror("Illegal to declare local variable as reference");
		    type_of_locals_ptr[(yyvsp[(1) - (3)].number)] &= ~LOCAL_MOD_REF;
		}
		type &= ~LOCAL_MODS;

		if ((yyvsp[(2) - (3)].number) != F_ASSIGN)
		    yyerror("Only '=' is allowed in initializers.");
		if (!compatible_types((yyvsp[(3) - (3)].node)->type, type)) {
		    char buff[256];
		    char *end = EndOf(buff);
		    char *p;
		    
		    p = strput(buff, end, "Type mismatch ");
		    p = get_two_types(p, end, type, (yyvsp[(3) - (3)].node)->type);
		    p = strput(p, end, " when initializing.");
		    yyerror(buff);
		}

		(yyvsp[(3) - (3)].node) = do_promotions((yyvsp[(3) - (3)].node), type);

		/* this is an expression */
		CREATE_BINARY_OP((yyval.node), F_ASSIGN, 0, (yyvsp[(3) - (3)].node), 0);
                CREATE_OPCODE_1((yyval.node)->r.expr, F_LOCAL_LVALUE, 0, (yyvsp[(1) - (3)].number));
	    }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1062 "grammar.y"
    {
#line 1067 "grammar.y.pre"
                (yyval.decl).node = (yyvsp[(1) - (1)].node);
                (yyval.decl).num = 1;
            }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1068 "grammar.y"
    {
#line 1072 "grammar.y.pre"
                if ((yyvsp[(1) - (3)].node) && (yyvsp[(3) - (3)].decl).node) {
		    CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].decl).node);
                } else (yyval.decl).node = ((yyvsp[(1) - (3)].node) ? (yyvsp[(1) - (3)].node) : (yyvsp[(3) - (3)].decl).node);
                (yyval.decl).num = 1 + (yyvsp[(3) - (3)].decl).num;
            }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1079 "grammar.y"
    {
#line 1082 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1084 "grammar.y"
    {
#line 1086 "grammar.y.pre"
		if ((yyvsp[(1) - (2)].node) && (yyvsp[(2) - (2)].node)) {
		    CREATE_STATEMENTS((yyval.node), (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		} else (yyval.node) = ((yyvsp[(1) - (2)].node) ? (yyvsp[(1) - (2)].node) : (yyvsp[(2) - (2)].node));
            }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1091 "grammar.y"
    {
#line 1092 "grammar.y.pre"
		(yyval.node) = 0;
            }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1099 "grammar.y"
    {
#line 1099 "grammar.y.pre"
		(yyval.node) = pop_value((yyvsp[(1) - (2)].node));
#ifdef DEBUG
		{
		    parse_node_t *replacement;
		    CREATE_STATEMENTS(replacement, (yyval.node), 0);
		    CREATE_OPCODE(replacement->r.expr, F_BREAK_POINT, 0);
		    (yyval.node) = replacement;
		}
#endif
	    }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1117 "grammar.y"
    {
#line 1116 "grammar.y.pre"
                (yyval.node) = (yyvsp[(1) - (1)].decl).node;
                pop_n_locals((yyvsp[(1) - (1)].decl).num);
            }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1123 "grammar.y"
    {
#line 1121 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1128 "grammar.y"
    {
#line 1125 "grammar.y.pre"
		if (context & SPECIAL_CONTEXT) {
		    yyerror("Cannot break out of catch { } or time_expression { }");
		    (yyval.node) = 0;
		} else
		if (context & SWITCH_CONTEXT) {
		    CREATE_CONTROL_JUMP((yyval.node), CJ_BREAK_SWITCH);
		} else
		if (context & LOOP_CONTEXT) {
		    CREATE_CONTROL_JUMP((yyval.node), CJ_BREAK);
		    if (context & LOOP_FOREACH) {
			parse_node_t *replace;
			CREATE_STATEMENTS(replace, 0, (yyval.node));
			CREATE_OPCODE(replace->l.expr, F_EXIT_FOREACH, 0);
			(yyval.node) = replace;
		    }
		} else {
		    yyerror("break statement outside loop");
		    (yyval.node) = 0;
		}
	    }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1151 "grammar.y"
    {
#line 1147 "grammar.y.pre"
		if (context & SPECIAL_CONTEXT)
		    yyerror("Cannot continue out of catch { } or time_expression { }");
		else
		if (!(context & LOOP_CONTEXT))
		    yyerror("continue statement outside loop");
		CREATE_CONTROL_JUMP((yyval.node), CJ_CONTINUE);
	    }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1164 "grammar.y"
    {
#line 1159 "grammar.y.pre"
		(yyvsp[(1) - (4)].number) = context;
		context = LOOP_CONTEXT;
	    }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1170 "grammar.y"
    {
#line 1164 "grammar.y.pre"
		CREATE_LOOP((yyval.node), 1, (yyvsp[(6) - (6)].node), 0, optimize_loop_test((yyvsp[(3) - (6)].node)));
		context = (yyvsp[(1) - (6)].number);
	    }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1179 "grammar.y"
    {
#line 1172 "grammar.y.pre"
		(yyvsp[(1) - (1)].number) = context;
		context = LOOP_CONTEXT;
	    }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1185 "grammar.y"
    {
#line 1177 "grammar.y.pre"
		CREATE_LOOP((yyval.node), 0, (yyvsp[(3) - (8)].node), 0, optimize_loop_test((yyvsp[(6) - (8)].node)));
		context = (yyvsp[(1) - (8)].number);
	    }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1194 "grammar.y"
    {
#line 1185 "grammar.y.pre"
		(yyvsp[(3) - (8)].decl).node = pop_value((yyvsp[(3) - (8)].decl).node);
		(yyvsp[(1) - (8)].number) = context;
		context = LOOP_CONTEXT;
	    }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1201 "grammar.y"
    {
#line 1191 "grammar.y.pre"
		(yyval.decl).num = (yyvsp[(3) - (10)].decl).num; /* number of declarations (0/1) */
		
		(yyvsp[(7) - (10)].node) = pop_value((yyvsp[(7) - (10)].node));
		if ((yyvsp[(7) - (10)].node) && IS_NODE((yyvsp[(7) - (10)].node), NODE_UNARY_OP, F_INC)
		    && IS_NODE((yyvsp[(7) - (10)].node)->r.expr, NODE_OPCODE_1, F_LOCAL_LVALUE)) {
		    long lvar = (yyvsp[(7) - (10)].node)->r.expr->l.number;
		    CREATE_OPCODE_1((yyvsp[(7) - (10)].node), F_LOOP_INCR, 0, lvar);
		}

		CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(3) - (10)].decl).node, 0);
		CREATE_LOOP((yyval.decl).node->r.expr, 1, (yyvsp[(10) - (10)].node), (yyvsp[(7) - (10)].node), optimize_loop_test((yyvsp[(5) - (10)].node)));

		context = (yyvsp[(1) - (10)].number);
	      }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1220 "grammar.y"
    {
#line 1209 "grammar.y.pre"
		if ((yyvsp[(1) - (1)].ihe)->dn.local_num != -1) {
		    CREATE_OPCODE_1((yyval.decl).node, F_LOCAL_LVALUE, 0, (yyvsp[(1) - (1)].ihe)->dn.local_num);
		    type_of_locals_ptr[(yyvsp[(1) - (1)].ihe)->dn.local_num] &= ~LOCAL_MOD_UNUSED;
		} else
		if ((yyvsp[(1) - (1)].ihe)->dn.global_num != -1) {
		    CREATE_OPCODE_1((yyval.decl).node, F_GLOBAL_LVALUE, 0, (yyvsp[(1) - (1)].ihe)->dn.global_num);
		} else {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;

		    p = strput(buf, end, "'");
		    p = strput(p, end, (yyvsp[(1) - (1)].ihe)->name);
		    p = strput(p, end, "' is not a local or a global variable.");
		    yyerror(buf);
		    CREATE_OPCODE_1((yyval.decl).node, F_GLOBAL_LVALUE, 0, 0);
		}
		(yyval.decl).num = 0;
	    }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1242 "grammar.y"
    {
#line 1230 "grammar.y.pre"
		if (type_of_locals_ptr[(yyvsp[(1) - (1)].number)] & LOCAL_MOD_REF) {
		    CREATE_OPCODE_1((yyval.decl).node, F_REF_LVALUE, 0, (yyvsp[(1) - (1)].number));
		} else {
		    CREATE_OPCODE_1((yyval.decl).node, F_LOCAL_LVALUE, 0, (yyvsp[(1) - (1)].number));
		    type_of_locals_ptr[(yyvsp[(1) - (1)].number)] &= ~LOCAL_MOD_UNUSED;
		}
		(yyval.decl).num = 1;
            }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1253 "grammar.y"
    {
#line 1240 "grammar.y.pre"
		char buf[256];
		char *end = EndOf(buf);
		char *p;
		
		p = strput(buf, end, "'");
		p = strput(p, end, (yyvsp[(1) - (1)].string));
		p = strput(p, end, "' is not a local or a global variable.");
		yyerror(buf);
		CREATE_OPCODE_1((yyval.decl).node, F_GLOBAL_LVALUE, 0, 0);
		scratch_free((yyvsp[(1) - (1)].string));
		(yyval.decl).num = 0;
	    }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1271 "grammar.y"
    {
#line 1257 "grammar.y.pre"
		CREATE_FOREACH((yyval.decl).node, (yyvsp[(1) - (1)].decl).node, 0);
		(yyval.decl).num = (yyvsp[(1) - (1)].decl).num;
            }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1277 "grammar.y"
    {
#line 1262 "grammar.y.pre"
		CREATE_FOREACH((yyval.decl).node, (yyvsp[(1) - (3)].decl).node, (yyvsp[(3) - (3)].decl).node);
		(yyval.decl).num = (yyvsp[(1) - (3)].decl).num + (yyvsp[(3) - (3)].decl).num;
		if ((yyvsp[(1) - (3)].decl).node->v.number == F_REF_LVALUE)
		    yyerror("Mapping key may not be a reference in foreach()");
            }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1288 "grammar.y"
    {
#line 1272 "grammar.y.pre"
		(yyvsp[(3) - (6)].decl).node->v.expr = (yyvsp[(5) - (6)].node);
		(yyvsp[(1) - (6)].number) = context;
		context = LOOP_CONTEXT | LOOP_FOREACH;
            }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1295 "grammar.y"
    {
#line 1278 "grammar.y.pre"
		(yyval.decl).num = (yyvsp[(3) - (8)].decl).num;

		CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(3) - (8)].decl).node, 0);
		CREATE_LOOP((yyval.decl).node->r.expr, 2, (yyvsp[(8) - (8)].node), 0, 0);
		CREATE_OPCODE((yyval.decl).node->r.expr->r.expr, F_NEXT_FOREACH, 0);
		
		context = (yyvsp[(1) - (8)].number);
	    }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1309 "grammar.y"
    {
#line 1291 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1318 "grammar.y"
    {
#line 1299 "grammar.y.pre"
	 	(yyval.decl).node = (yyvsp[(1) - (1)].node);
		(yyval.decl).num = 0;
	    }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1324 "grammar.y"
    {
#line 1304 "grammar.y.pre"
		(yyval.decl).node = (yyvsp[(1) - (1)].node);
		(yyval.decl).num = 1;
	    }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1333 "grammar.y"
    {
#line 1312 "grammar.y.pre"
                (yyvsp[(1) - (4)].number) = context;
                context &= LOOP_CONTEXT;
                context |= SWITCH_CONTEXT;
                (yyvsp[(2) - (4)].number) = mem_block[A_CASES].current_size;
            }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1341 "grammar.y"
    {
#line 1319 "grammar.y.pre"
                parse_node_t *node1, *node2;

                if ((yyvsp[(9) - (10)].node)) {
		    CREATE_STATEMENTS(node1, (yyvsp[(8) - (10)].node), (yyvsp[(9) - (10)].node));
                } else node1 = (yyvsp[(8) - (10)].node);

                if (context & SWITCH_STRINGS) {
                    NODE_NO_LINE(node2, NODE_SWITCH_STRINGS);
                } else if (context & SWITCH_RANGES) {
		    NODE_NO_LINE(node2, NODE_SWITCH_RANGES);
		} else if ((context & SWITCH_NUMBERS) ||
			   (context & SWITCH_NOT_EMPTY)) {
                    NODE_NO_LINE(node2, NODE_SWITCH_NUMBERS);
                } else {
		    // to prevent crashing during the remaining parsing bits
		    NODE_NO_LINE(node2, NODE_SWITCH_NUMBERS);

		    yyerror("need case statements in switch/case, not just default:"); //just a default case present
		}

                node2->l.expr = (yyvsp[(3) - (10)].node);
                node2->r.expr = node1;
                prepare_cases(node2, (yyvsp[(2) - (10)].number));
                context = (yyvsp[(1) - (10)].number);
		(yyval.node) = node2;
		pop_n_locals((yyvsp[(7) - (10)].decl).num);
            }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1374 "grammar.y"
    {
#line 1351 "grammar.y.pre"
               if ((yyvsp[(2) - (2)].node)){
		   CREATE_STATEMENTS((yyval.node), (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
               } else (yyval.node) = (yyvsp[(1) - (2)].node);
           }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1381 "grammar.y"
    {
#line 1357 "grammar.y.pre"
               if ((yyvsp[(2) - (2)].node)){
		   CREATE_STATEMENTS((yyval.node), (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
               } else (yyval.node) = (yyvsp[(1) - (2)].node);
           }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1388 "grammar.y"
    {
#line 1363 "grammar.y.pre"
               (yyval.node) = 0;
           }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1397 "grammar.y"
    {
#line 1371 "grammar.y.pre"
                (yyval.node) = (yyvsp[(2) - (3)].node);
                (yyval.node)->v.expr = 0;

                add_to_mem_block(A_CASES, (char *)&((yyvsp[(2) - (3)].node)), sizeof((yyvsp[(2) - (3)].node)));
            }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1405 "grammar.y"
    {
#line 1378 "grammar.y.pre"
                if ( (yyvsp[(2) - (5)].node)->kind != NODE_CASE_NUMBER
                    || (yyvsp[(4) - (5)].node)->kind != NODE_CASE_NUMBER )
                    yyerror("String case labels not allowed as range bounds");
                if ((yyvsp[(2) - (5)].node)->r.number > (yyvsp[(4) - (5)].node)->r.number) break;

		context |= SWITCH_RANGES;

                (yyval.node) = (yyvsp[(2) - (5)].node);
                (yyval.node)->v.expr = (yyvsp[(4) - (5)].node);

                add_to_mem_block(A_CASES, (char *)&((yyvsp[(2) - (5)].node)), sizeof((yyvsp[(2) - (5)].node)));
            }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1420 "grammar.y"
    {
#line 1392 "grammar.y.pre"
	        if ( (yyvsp[(2) - (4)].node)->kind != NODE_CASE_NUMBER )
                    yyerror("String case labels not allowed as range bounds");

		context |= SWITCH_RANGES;

                (yyval.node) = (yyvsp[(2) - (4)].node);
                (yyval.node)->v.expr = new_node();
		(yyval.node)->v.expr->kind = NODE_CASE_NUMBER;
		(yyval.node)->v.expr->r.number = ((unsigned long)-1)/2; //maxint

                add_to_mem_block(A_CASES, (char *)&((yyvsp[(2) - (4)].node)), sizeof((yyvsp[(2) - (4)].node)));
            }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1435 "grammar.y"
    {
#line 1406 "grammar.y.pre"
	      if ( (yyvsp[(3) - (4)].node)->kind != NODE_CASE_NUMBER )
                    yyerror("String case labels not allowed as range bounds");

		context |= SWITCH_RANGES;
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_CASE_NUMBER;
                (yyval.node)->r.number = (long) 1+ ((unsigned long)-1)/2; //maxint +1 wraps to min_int, on all computers i know, just not in the C standard iirc 
                (yyval.node)->v.expr = (yyvsp[(3) - (4)].node);

                add_to_mem_block(A_CASES, (char *)&((yyval.node)), sizeof((yyval.node)));
            }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1449 "grammar.y"
    {
#line 1419 "grammar.y.pre"
                if (context & SWITCH_DEFAULT) {
                    yyerror("Duplicate default");
                    (yyval.node) = 0;
                    break;
                }
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_DEFAULT;
                (yyval.node)->v.expr = 0;
                add_to_mem_block(A_CASES, (char *)&((yyval.node)), sizeof((yyval.node)));
                context |= SWITCH_DEFAULT;
            }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1466 "grammar.y"
    {
#line 1435 "grammar.y.pre"
                if ((context & SWITCH_STRINGS) && (yyvsp[(1) - (1)].pointer_int))
                    yyerror("Mixed case label list not allowed");

                if ((yyvsp[(1) - (1)].pointer_int))
		  context |= SWITCH_NUMBERS;
		else
		  context |= SWITCH_NOT_EMPTY;

		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_CASE_NUMBER;
                (yyval.node)->r.expr = (parse_node_t *)(yyvsp[(1) - (1)].pointer_int);
            }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1481 "grammar.y"
    {
#line 1449 "grammar.y.pre"
		int str;
		
		str = store_prog_string((yyvsp[(1) - (1)].string));
                scratch_free((yyvsp[(1) - (1)].string));
                if (context & SWITCH_NUMBERS)
                    yyerror("Mixed case label list not allowed");
                context |= SWITCH_STRINGS;
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_CASE_STRING;
                (yyval.node)->r.number = str;
            }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1498 "grammar.y"
    {
#line 1465 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) | (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1503 "grammar.y"
    {
#line 1469 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) ^ (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1508 "grammar.y"
    {
#line 1473 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) & (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1513 "grammar.y"
    {
#line 1477 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) == (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1518 "grammar.y"
    {
#line 1481 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) != (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1523 "grammar.y"
    {
#line 1485 "grammar.y.pre"
                switch((yyvsp[(2) - (3)].number)){
                    case F_GE: (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) >= (yyvsp[(3) - (3)].pointer_int); break;
                    case F_LE: (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) <= (yyvsp[(3) - (3)].pointer_int); break;
                    case F_GT: (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) >  (yyvsp[(3) - (3)].pointer_int); break;
                }
            }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1532 "grammar.y"
    {
#line 1493 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) < (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1537 "grammar.y"
    {
#line 1497 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) << (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1542 "grammar.y"
    {
#line 1501 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) >> (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1547 "grammar.y"
    {
#line 1505 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) + (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1552 "grammar.y"
    {
#line 1509 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) - (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1557 "grammar.y"
    {
#line 1513 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) * (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1562 "grammar.y"
    {
#line 1517 "grammar.y.pre"
                if ((yyvsp[(3) - (3)].pointer_int)) (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) % (yyvsp[(3) - (3)].pointer_int); else yyerror("Modulo by zero");
            }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1567 "grammar.y"
    {
#line 1521 "grammar.y.pre"
                if ((yyvsp[(3) - (3)].pointer_int)) (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) / (yyvsp[(3) - (3)].pointer_int); else yyerror("Division by zero");
            }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1572 "grammar.y"
    {
#line 1525 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(2) - (3)].pointer_int);
            }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1577 "grammar.y"
    {
#line 1529 "grammar.y.pre"
		(yyval.pointer_int) = (yyvsp[(1) - (1)].number);
	    }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1582 "grammar.y"
    {
#line 1533 "grammar.y.pre"
                (yyval.pointer_int) = -(yyvsp[(2) - (2)].number);
            }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1587 "grammar.y"
    {
#line 1537 "grammar.y.pre"
                (yyval.pointer_int) = !(yyvsp[(2) - (2)].number);
            }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1592 "grammar.y"
    {
#line 1541 "grammar.y.pre"
                (yyval.pointer_int) = ~(yyvsp[(2) - (2)].number);
            }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1600 "grammar.y"
    {
#line 1548 "grammar.y.pre"
		(yyval.node) = (yyvsp[(1) - (1)].node);
	    }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1605 "grammar.y"
    {
#line 1552 "grammar.y.pre"
		CREATE_TWO_VALUES((yyval.node), (yyvsp[(3) - (3)].node)->type, pop_value((yyvsp[(1) - (3)].node)), (yyvsp[(3) - (3)].node));
	    }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1617 "grammar.y"
    {
#line 1569 "grammar.y.pre"
		int op;

		if (!(context & ARG_LIST))
		    yyerror("ref illegal outside function argument list");
		else
		    num_refs++;
		
		switch ((yyvsp[(2) - (2)].node)->kind) {
		case NODE_PARAMETER_LVALUE:
		    op = F_LOCAL_LVALUE;
		    break;
		case NODE_TERNARY_OP:
		case NODE_OPCODE_1:
		case NODE_UNARY_OP_1:
		case NODE_BINARY_OP:
		    op = (yyvsp[(2) - (2)].node)->v.number;
		    if (op > F_RINDEX_LVALUE) 
			yyerror("Illegal to make reference to range");
		    break;
		default:
		    op=0; //0 is harmless, i hope
		    yyerror("unknown lvalue kind");
		}
		CREATE_UNARY_OP_1((yyval.node), F_MAKE_REF, TYPE_ANY, (yyvsp[(2) - (2)].node), op);
	    }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1646 "grammar.y"
    {
#line 1598 "grammar.y.pre"
	        parse_node_t *l = (yyvsp[(1) - (3)].node), *r = (yyvsp[(3) - (3)].node);
		/* set this up here so we can change it below */
		/* assignments are backwards; rhs is evaluated before
		   lhs, so put the RIGHT hand side on the LEFT hand
		   side of the tree node. */
		CREATE_BINARY_OP((yyval.node), (yyvsp[(2) - (3)].number), r->type, r, l);

		if (exact_types && !compatible_types(r->type, l->type) &&
		    !((yyvsp[(2) - (3)].number) == F_ADD_EQ
		      && l->type == TYPE_STRING && 
		      (COMP_TYPE(r->type, TYPE_NUMBER))||r->type == TYPE_OBJECT)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    p = strput(buf, end, "Bad assignment ");
		    p = get_two_types(p, end, l->type, r->type);
		    p = strput(p, end, ".");
		    yyerror(buf);
		}
		
		if ((yyvsp[(2) - (3)].number) == F_ASSIGN)
		    (yyval.node)->l.expr = do_promotions(r, l->type);
	    }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1672 "grammar.y"
    {
#line 1623 "grammar.y.pre"
		yyerror("Illegal LHS");
		CREATE_ERROR((yyval.node));
	    }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1678 "grammar.y"
    {
#line 1628 "grammar.y.pre"
		parse_node_t *p1 = (yyvsp[(3) - (5)].node), *p2 = (yyvsp[(5) - (5)].node);

		if (exact_types && !compatible_types2(p1->type, p2->type)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Types in ?: do not match ");
		    p = get_two_types(p, end, p1->type, p2->type);
		    p = strput(p, end, ".");
		    yywarn(buf);
		}

		/* optimize if last expression did F_NOT */
		if (IS_NODE((yyvsp[(1) - (5)].node), NODE_UNARY_OP, F_NOT)) {
		    /* !a ? b : c  --> a ? c : b */
		    CREATE_IF((yyval.node), (yyvsp[(1) - (5)].node)->r.expr, p2, p1);
		} else {
		    CREATE_IF((yyval.node), (yyvsp[(1) - (5)].node), p1, p2);
		}
		(yyval.node)->type = ((p1->type == p2->type) ? p1->type : TYPE_ANY);
	    }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1703 "grammar.y"
    {
#line 1652 "grammar.y.pre"
		CREATE_LAND_LOR((yyval.node), F_LOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		if (IS_NODE((yyvsp[(1) - (3)].node), NODE_LAND_LOR, F_LOR))
		    (yyvsp[(1) - (3)].node)->kind = NODE_BRANCH_LINK;
	    }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1710 "grammar.y"
    {
#line 1658 "grammar.y.pre"
		CREATE_LAND_LOR((yyval.node), F_LAND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		if (IS_NODE((yyvsp[(1) - (3)].node), NODE_LAND_LOR, F_LAND))
		    (yyvsp[(1) - (3)].node)->kind = NODE_BRANCH_LINK;
	    }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1717 "grammar.y"
    {
#line 1664 "grammar.y.pre"
		int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;
		
		if (is_boolean((yyvsp[(1) - (3)].node)) && is_boolean((yyvsp[(3) - (3)].node)))
		    yywarn("bitwise operation on boolean values.");
		if ((t1 & TYPE_MOD_ARRAY) || (t3 & TYPE_MOD_ARRAY)) {
		    if (t1 != t3) {
			if ((t1 != TYPE_ANY) && (t3 != TYPE_ANY) &&
			    !(t1 & t3 & TYPE_MOD_ARRAY)) {
			    char buf[256];
			    char *end = EndOf(buf);
			    char *p;

			    p = strput(buf, end, "Incompatible types for | ");
			    p = get_two_types(p, end, t1, t3);
			    p = strput(p, end, ".");
			    yyerror(buf);
			}
			t1 = TYPE_ANY | TYPE_MOD_ARRAY;
		    }
		    CREATE_BINARY_OP((yyval.node), F_OR, t1, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
		else (yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_OR, "|");		
	    }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1743 "grammar.y"
    {
#line 1689 "grammar.y.pre"
		(yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_XOR, "^");
	    }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1748 "grammar.y"
    {
#line 1693 "grammar.y.pre"
		int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;
		if (is_boolean((yyvsp[(1) - (3)].node)) && is_boolean((yyvsp[(3) - (3)].node)))
		    yywarn("bitwise operation on boolean values.");
		if ((t1 & TYPE_MOD_ARRAY) || (t3 & TYPE_MOD_ARRAY)) {
		    if (t1 != t3) {
			if ((t1 != TYPE_ANY) && (t3 != TYPE_ANY) &&
			    !(t1 & t3 & TYPE_MOD_ARRAY)) {
			    char buf[256];
			    char *end = EndOf(buf);
			    char *p;
			    
			    p = strput(buf, end, "Incompatible types for & ");
			    p = get_two_types(p, end, t1, t3);
			    p = strput(p, end, ".");
			    yyerror(buf);
			}
			t1 = TYPE_ANY | TYPE_MOD_ARRAY;
		    } 
		    CREATE_BINARY_OP((yyval.node), F_AND, t1, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		} else (yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_AND, "&");
	    }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1772 "grammar.y"
    {
#line 1716 "grammar.y.pre"
		if (exact_types && !compatible_types2((yyvsp[(1) - (3)].node)->type, (yyvsp[(3) - (3)].node)->type)){
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "== always false because of incompatible types ");
		    p = get_two_types(p, end, (yyvsp[(1) - (3)].node)->type, (yyvsp[(3) - (3)].node)->type);
		    p = strput(p, end, ".");
		    yyerror(buf);
		}
		/* x == 0 -> !x */
		if (IS_NODE((yyvsp[(1) - (3)].node), NODE_NUMBER, 0)) {
		    CREATE_UNARY_OP((yyval.node), F_NOT, TYPE_NUMBER, (yyvsp[(3) - (3)].node));
		} else
		if (IS_NODE((yyvsp[(3) - (3)].node), NODE_NUMBER, 0)) {
		    CREATE_UNARY_OP((yyval.node), F_NOT, TYPE_NUMBER, (yyvsp[(1) - (3)].node));
		} else {
		    CREATE_BINARY_OP((yyval.node), F_EQ, TYPE_NUMBER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
	    }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1795 "grammar.y"
    {
#line 1738 "grammar.y.pre"
		if (exact_types && !compatible_types2((yyvsp[(1) - (3)].node)->type, (yyvsp[(3) - (3)].node)->type)){
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;

		    p = strput(buf, end, "!= always true because of incompatible types ");
		    p = get_two_types(p, end, (yyvsp[(1) - (3)].node)->type, (yyvsp[(3) - (3)].node)->type);
		    p = strput(p, end, ".");
		    yyerror(buf);
		}
                CREATE_BINARY_OP((yyval.node), F_NE, TYPE_NUMBER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	    }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1810 "grammar.y"
    {
#line 1752 "grammar.y.pre"
		if (exact_types) {
		    int t1 = (yyvsp[(1) - (3)].node)->type;
		    int t3 = (yyvsp[(3) - (3)].node)->type;

		    if (!COMP_TYPE(t1, TYPE_NUMBER) 
			&& !COMP_TYPE(t1, TYPE_STRING)) {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Bad left argument to '");
			p = strput(p, end, query_instr_name((yyvsp[(2) - (3)].number)));
			p = strput(p, end, "' : \"");
			p = get_type_name(p, end, t1);
			p = strput(p, end, "\"");
			yyerror(buf);
		    } else if (!COMP_TYPE(t3, TYPE_NUMBER) 
			       && !COMP_TYPE(t3, TYPE_STRING)) {
                        char buf[256];
			char *end = EndOf(buf);
			char *p;
			
                        p = strput(buf, end, "Bad right argument to '");
                        p = strput(p, end, query_instr_name((yyvsp[(2) - (3)].number)));
                        p = strput(p, end, "' : \"");
                        p = get_type_name(p, end, t3);
			p = strput(p, end, "\"");
			yyerror(buf);
		    } else if (!compatible_types2(t1,t3)) {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Arguments to ");
			p = strput(p, end, query_instr_name((yyvsp[(2) - (3)].number)));
			p = strput(p, end, " do not have compatible types : ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
		    }
		}
                CREATE_BINARY_OP((yyval.node), (yyvsp[(2) - (3)].number), TYPE_NUMBER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	    }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1855 "grammar.y"
    {
#line 1796 "grammar.y.pre"
                if (exact_types) {
                    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

                    if (!COMP_TYPE(t1, TYPE_NUMBER) 
			&& !COMP_TYPE(t1, TYPE_STRING)) {
                        char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Bad left argument to '<' : \"");
                        p = get_type_name(p, end, t1);
			p = strput(p, end, "\"");
                        yyerror(buf);
                    } else if (!COMP_TYPE(t3, TYPE_NUMBER)
			       && !COMP_TYPE(t3, TYPE_STRING)) {
                        char buf[200];
			char *end = EndOf(buf);
			char *p;
			
                        p = strput(buf, end, "Bad right argument to '<' : \"");
                        p = get_type_name(p, end, t3);
                        p = strput(p, end, "\"");
                        yyerror(buf);
                    } else if (!compatible_types2(t1,t3)) {
                        char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Arguments to < do not have compatible types : ");
			p = get_two_types(p, end, t1, t3);
                        yyerror(buf);
                    }
                }
                CREATE_BINARY_OP((yyval.node), F_LT, TYPE_NUMBER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
            }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1893 "grammar.y"
    {
#line 1833 "grammar.y.pre"
		(yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_LSH, "<<");
	    }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1898 "grammar.y"
    {
#line 1837 "grammar.y.pre"
		(yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_RSH, ">>");
	    }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1903 "grammar.y"
    {
#line 1841 "grammar.y.pre"
		int result_type;

		if (exact_types) {
		    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

		    if (t1 == t3){
#ifdef CAST_CALL_OTHERS
			if (t1 == TYPE_UNKNOWN){
			    yyerror("Bad arguments to '+' (unknown vs unknown)");
			    result_type = TYPE_ANY;
			} else
#endif
			    result_type = t1;
		    }
		    else if (t1 == TYPE_ANY) {
			if (t3 == TYPE_FUNCTION) {
			    yyerror("Bad right argument to '+' (function)");
			    result_type = TYPE_ANY;
			} else result_type = t3;
		    } else if (t3 == TYPE_ANY) {
			if (t1 == TYPE_FUNCTION) {
			    yyerror("Bad left argument to '+' (function)");
			    result_type = TYPE_ANY;
			} else result_type = t1;
		    } else {
			switch(t1) {
			case TYPE_OBJECT:
			  if(t3 == TYPE_STRING){
			    result_type = TYPE_STRING;
			  } else goto add_error;
			  break;
			case TYPE_STRING:
			  {
			    if (t3 == TYPE_REAL || t3 == TYPE_NUMBER || t3 == TYPE_OBJECT){
			      result_type = TYPE_STRING;
			    } else goto add_error;
			    break;
			  }
			case TYPE_NUMBER:
			  {
			    if (t3 == TYPE_REAL || t3 == TYPE_STRING)
			      result_type = t3;
			    else goto add_error;
			    break;
			  }
			case TYPE_REAL:
			  {
			    if (t3 == TYPE_NUMBER) result_type = TYPE_REAL;
			    else if (t3 == TYPE_STRING) result_type = TYPE_STRING;
			    else goto add_error;
			    break;
			  }
			default:
			  {
			    if (t1 & t3 & TYPE_MOD_ARRAY) {
			      result_type = TYPE_ANY|TYPE_MOD_ARRAY;
			      break;
			    }
			  add_error:
			    {
			      char buf[256];
			      char *end = EndOf(buf);
			      char *p;
			      
			      p = strput(buf, end, "Invalid argument types to '+' ");
			      p = get_two_types(p, end, t1, t3);
			      yyerror(buf);
			      result_type = TYPE_ANY;
			    }
			  }
			}
		    }
		} else 
		    result_type = TYPE_ANY;

		/* TODO: perhaps we should do (string)+(number) and
		 * (number)+(string) constant folding as well.
		 *
		 * codefor string x = "foo" + 1;
		 *
		 * 0000: push string 13, number 1
		 * 0004: +
		 * 0005: (void)assign_local LV0
		 */
		switch ((yyvsp[(1) - (3)].node)->kind) {
		case NODE_NUMBER:
		    /* 0 + X */
		    if ((yyvsp[(1) - (3)].node)->v.number == 0 &&
			((yyvsp[(3) - (3)].node)->type == TYPE_NUMBER || (yyvsp[(3) - (3)].node)->type == TYPE_REAL)) {
			(yyval.node) = (yyvsp[(3) - (3)].node);
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.number += (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(3) - (3)].node);
			(yyvsp[(3) - (3)].node)->v.real += (yyvsp[(1) - (3)].node)->v.number;
			break;
		    }
		    /* swapping the nodes may help later constant folding */
		    if ((yyvsp[(3) - (3)].node)->type != TYPE_STRING && (yyvsp[(3) - (3)].node)->type != TYPE_ANY)
			CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
		    else
			CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		case NODE_REAL:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real += (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real += (yyvsp[(3) - (3)].node)->v.real;
			break;
		    }
		    /* swapping the nodes may help later constant folding */
		    if ((yyvsp[(3) - (3)].node)->type != TYPE_STRING && (yyvsp[(3) - (3)].node)->type != TYPE_ANY)
			CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
		    else
			CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		case NODE_STRING:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_STRING) {
			/* Combine strings */
			long n1, n2;
			const char *s1, *s2;
			char *news;
			int l;

			n1 = (yyvsp[(1) - (3)].node)->v.number;
			n2 = (yyvsp[(3) - (3)].node)->v.number;
			s1 = PROG_STRING(n1);
			s2 = PROG_STRING(n2);
			news = (char *)DXALLOC( (l = strlen(s1))+strlen(s2)+1, TAG_COMPILER, "combine string" );
			strcpy(news, s1);
			strcat(news + l, s2);
			/* free old strings (ordering may help shrink table) */
			if (n1 > n2) {
			    free_prog_string(n1); free_prog_string(n2);
			} else {
			    free_prog_string(n2); free_prog_string(n1);
			}
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyval.node)->v.number = store_prog_string(news);
			FREE(news);
			break;
		    }
		    /* Yes, this can actually happen for absurd code like:
		     * (int)"foo" + 0
		     * for which I guess we ought to generate (int)"foo"
		     * in order to be consistent.  Then shoot the coder.
		     */
		    /* FALLTHROUGH */
		default:
		    /* X + 0 */
		    if (IS_NODE((yyvsp[(3) - (3)].node), NODE_NUMBER, 0) &&
			((yyvsp[(1) - (3)].node)->type == TYPE_NUMBER || (yyvsp[(1) - (3)].node)->type == TYPE_REAL)) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		}
	    }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 2074 "grammar.y"
    {
#line 2011 "grammar.y.pre"
		int result_type;

		if (exact_types) {
		    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

		    if (t1 == t3){
			switch(t1){
			    case TYPE_ANY:
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			        result_type = t1;
				break;
			    default:
				if (!(t1 & TYPE_MOD_ARRAY)){
				    type_error("Bad argument number 1 to '-'", t1);
				    result_type = TYPE_ANY;
				} else result_type = t1;
			}
		    } else if (t1 == TYPE_ANY){
			switch(t3){
			    case TYPE_REAL:
			    case TYPE_NUMBER:
			        result_type = t3;
				break;
			    default:
				if (!(t3 & TYPE_MOD_ARRAY)){
				    type_error("Bad argument number 2 to '-'", t3);
				    result_type = TYPE_ANY;
				} else result_type = t3;
			}
		    } else if (t3 == TYPE_ANY){
			switch(t1){
			    case TYPE_REAL:
			    case TYPE_NUMBER:
			        result_type = t1;
				break;
			    default:
				if (!(t1 & TYPE_MOD_ARRAY)){
				    type_error("Bad argument number 1 to '-'", t1);
				    result_type = TYPE_ANY;
				} else result_type = t1;
			}
		    } else if ((t1 == TYPE_REAL && t3 == TYPE_NUMBER) ||
			       (t3 == TYPE_REAL && t1 == TYPE_NUMBER)){
			result_type = TYPE_REAL;
		    } else if (t1 & t3 & TYPE_MOD_ARRAY){
			result_type = TYPE_MOD_ARRAY|TYPE_ANY;
		    } else {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Invalid types to '-' ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
			result_type = TYPE_ANY;
		    }
		} else result_type = TYPE_ANY;
		
		switch ((yyvsp[(1) - (3)].node)->kind) {
		case NODE_NUMBER:
		    if ((yyvsp[(1) - (3)].node)->v.number == 0) {
			CREATE_UNARY_OP((yyval.node), F_NEGATE, (yyvsp[(3) - (3)].node)->type, (yyvsp[(3) - (3)].node));
		    } else if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.number -= (yyvsp[(3) - (3)].node)->v.number;
		    } else if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(3) - (3)].node);
			(yyvsp[(3) - (3)].node)->v.real = (yyvsp[(1) - (3)].node)->v.number - (yyvsp[(3) - (3)].node)->v.real;
		    } else {
			CREATE_BINARY_OP((yyval.node), F_SUBTRACT, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    }
		    break;
		case NODE_REAL:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real -= (yyvsp[(3) - (3)].node)->v.number;
		    } else if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real -= (yyvsp[(3) - (3)].node)->v.real;
		    } else {
			CREATE_BINARY_OP((yyval.node), F_SUBTRACT, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    }
		    break;
		default:
		    /* optimize X-0 */
		    if (IS_NODE((yyvsp[(3) - (3)].node), NODE_NUMBER, 0)) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
		    } 
		    CREATE_BINARY_OP((yyval.node), F_SUBTRACT, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
	    }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 2169 "grammar.y"
    {
#line 2105 "grammar.y.pre"
		int result_type;

		if (exact_types){
		    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

		    if (t1 == t3){
			switch(t1){
			    case TYPE_MAPPING:
			    case TYPE_ANY:
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			        result_type = t1;
				break;
			default:
				type_error("Bad argument number 1 to '*'", t1);
				result_type = TYPE_ANY;
			}
		    } else if (t1 == TYPE_ANY || t3 == TYPE_ANY){
			int t = (t1 == TYPE_ANY) ? t3 : t1;
			switch(t){
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			    case TYPE_MAPPING:
			        result_type = t;
				break;
			    default:
				type_error((t1 == TYPE_ANY) ?
					   "Bad argument number 2 to '*'" :
					   "Bad argument number 1 to '*'",
					   t);
				result_type = TYPE_ANY;
			}
		    } else if ((t1 == TYPE_NUMBER && t3 == TYPE_REAL) ||
			       (t1 == TYPE_REAL && t3 == TYPE_NUMBER)){
			result_type = TYPE_REAL;
		    } else {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Invalid types to '*' ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
			result_type = TYPE_ANY;
		    }
		} else result_type = TYPE_ANY;

		switch ((yyvsp[(1) - (3)].node)->kind) {
		case NODE_NUMBER:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyval.node)->v.number *= (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(3) - (3)].node);
			(yyvsp[(3) - (3)].node)->v.real *= (yyvsp[(1) - (3)].node)->v.number;
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_MULTIPLY, result_type, (yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
		    break;
		case NODE_REAL:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real *= (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real *= (yyvsp[(3) - (3)].node)->v.real;
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_MULTIPLY, result_type, (yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
		    break;
		default:
		    CREATE_BINARY_OP((yyval.node), F_MULTIPLY, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
	    }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 2250 "grammar.y"
    {
#line 2185 "grammar.y.pre"
		(yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_MOD, "%");
	    }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 2255 "grammar.y"
    {
#line 2189 "grammar.y.pre"
		int result_type;

		if (exact_types){
		    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

		    if (t1 == t3){
			switch(t1){
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			case TYPE_ANY:
			        result_type = t1;
				break;
			    default:
				type_error("Bad argument 1 to '/'", t1);
				result_type = TYPE_ANY;
			}
		    } else if (t1 == TYPE_ANY || t3 == TYPE_ANY){
			int t = (t1 == TYPE_ANY) ? t3 : t1;
			if (t == TYPE_REAL || t == TYPE_NUMBER)
			    result_type = t; 
			else {
			    type_error(t1 == TYPE_ANY ?
				       "Bad argument 2 to '/'" :
				       "Bad argument 1 to '/'", t);
			    result_type = TYPE_ANY;
			}
		    } else if ((t1 == TYPE_NUMBER && t3 == TYPE_REAL) ||
			       (t1 == TYPE_REAL && t3 == TYPE_NUMBER)) {
			result_type = TYPE_REAL;
		    } else {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Invalid types to '/' ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
			result_type = TYPE_ANY;
		    }
		} else result_type = TYPE_ANY;		    

		/* constant expressions */
		switch ((yyvsp[(1) - (3)].node)->kind) {
		case NODE_NUMBER:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			if ((yyvsp[(3) - (3)].node)->v.number == 0) {
			    yyerror("Divide by zero in constant");
			    (yyval.node) = (yyvsp[(1) - (3)].node);
			    break;
			}
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.number /= (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			if ((yyvsp[(3) - (3)].node)->v.real == 0.0) {
			    yyerror("Divide by zero in constant");
			    (yyval.node) = (yyvsp[(1) - (3)].node);
			    break;
			}
			(yyval.node) = (yyvsp[(3) - (3)].node);
			(yyvsp[(3) - (3)].node)->v.real = ((yyvsp[(1) - (3)].node)->v.number / (yyvsp[(3) - (3)].node)->v.real);
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_DIVIDE, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		case NODE_REAL:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			if ((yyvsp[(3) - (3)].node)->v.number == 0) {
			    yyerror("Divide by zero in constant");
			    (yyval.node) = (yyvsp[(1) - (3)].node);
			    break;
			}
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real /= (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			if ((yyvsp[(3) - (3)].node)->v.real == 0.0) {
			    yyerror("Divide by zero in constant");
			    (yyval.node) = (yyvsp[(1) - (3)].node);
			    break;
			}
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real /= (yyvsp[(3) - (3)].node)->v.real;
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_DIVIDE, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		default:
		    CREATE_BINARY_OP((yyval.node), F_DIVIDE, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
	    }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 2351 "grammar.y"
    {
#line 2284 "grammar.y.pre"
		(yyval.node) = (yyvsp[(2) - (2)].node);
		(yyval.node)->type = (yyvsp[(1) - (2)].number);

		if (exact_types &&
		    (yyvsp[(2) - (2)].node)->type != (yyvsp[(1) - (2)].number) &&
		    (yyvsp[(2) - (2)].node)->type != TYPE_ANY && 
		    (yyvsp[(2) - (2)].node)->type != TYPE_UNKNOWN &&
		    (yyvsp[(1) - (2)].number) != TYPE_VOID) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Cannot cast ");
		    p = get_type_name(p, end, (yyvsp[(2) - (2)].node)->type);
		    p = strput(p, end, "to ");
		    p = get_type_name(p, end, (yyvsp[(1) - (2)].number));
		    yyerror(buf);
		}
	    }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 2373 "grammar.y"
    {
#line 2305 "grammar.y.pre"
		CREATE_UNARY_OP((yyval.node), F_PRE_INC, 0, (yyvsp[(2) - (2)].node));
                if (exact_types){
                    switch((yyvsp[(2) - (2)].node)->type){
                        case TYPE_NUMBER:
                        case TYPE_ANY:
                        case TYPE_REAL:
                        {
                            (yyval.node)->type = (yyvsp[(2) - (2)].node)->type;
                            break;
                        }

                        default:
                        {
                            (yyval.node)->type = TYPE_ANY;
                            type_error("Bad argument 1 to ++x", (yyvsp[(2) - (2)].node)->type);
                        }
                    }
                } else (yyval.node)->type = TYPE_ANY;
	    }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 2395 "grammar.y"
    {
#line 2326 "grammar.y.pre"
		CREATE_UNARY_OP((yyval.node), F_PRE_DEC, 0, (yyvsp[(2) - (2)].node));
                if (exact_types){
                    switch((yyvsp[(2) - (2)].node)->type){
                        case TYPE_NUMBER:
                        case TYPE_ANY:
                        case TYPE_REAL:
                        {
                            (yyval.node)->type = (yyvsp[(2) - (2)].node)->type;
                            break;
                        }

                        default:
                        {
                            (yyval.node)->type = TYPE_ANY;
                            type_error("Bad argument 1 to --x", (yyvsp[(2) - (2)].node)->type);
                        }
                    }
                } else (yyval.node)->type = TYPE_ANY;

	    }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 2418 "grammar.y"
    {
#line 2348 "grammar.y.pre"
		if ((yyvsp[(2) - (2)].node)->kind == NODE_NUMBER) {
		    (yyval.node) = (yyvsp[(2) - (2)].node);
		    (yyval.node)->v.number = !((yyval.node)->v.number);
		} else {
		    CREATE_UNARY_OP((yyval.node), F_NOT, TYPE_NUMBER, (yyvsp[(2) - (2)].node));
		}
	    }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 2428 "grammar.y"
    {
#line 2357 "grammar.y.pre"
		if (exact_types && !IS_TYPE((yyvsp[(2) - (2)].node)->type, TYPE_NUMBER))
		    type_error("Bad argument to ~", (yyvsp[(2) - (2)].node)->type);
		if ((yyvsp[(2) - (2)].node)->kind == NODE_NUMBER) {
		    (yyval.node) = (yyvsp[(2) - (2)].node);
		    (yyval.node)->v.number = ~(yyval.node)->v.number;
		} else {
		    CREATE_UNARY_OP((yyval.node), F_COMPL, TYPE_NUMBER, (yyvsp[(2) - (2)].node));
		}
	    }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 2440 "grammar.y"
    {
#line 2368 "grammar.y.pre"
		int result_type;
                if (exact_types){
		    int t = (yyvsp[(2) - (2)].node)->type;
		    if (!COMP_TYPE(t, TYPE_NUMBER)){
			type_error("Bad argument to unary '-'", t);
			result_type = TYPE_ANY;
		    } else result_type = t;
		} else result_type = TYPE_ANY;

		switch ((yyvsp[(2) - (2)].node)->kind) {
		case NODE_NUMBER:
		    (yyval.node) = (yyvsp[(2) - (2)].node);
		    (yyval.node)->v.number = -(yyval.node)->v.number;
		    break;
		case NODE_REAL:
		    (yyval.node) = (yyvsp[(2) - (2)].node);
		    (yyval.node)->v.real = -(yyval.node)->v.real;
		    break;
		default:
		    CREATE_UNARY_OP((yyval.node), F_NEGATE, result_type, (yyvsp[(2) - (2)].node));
		}
	    }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 2465 "grammar.y"
    {
#line 2392 "grammar.y.pre"
		CREATE_UNARY_OP((yyval.node), F_POST_INC, 0, (yyvsp[(1) - (2)].node));
		(yyval.node)->v.number = F_POST_INC;
                if (exact_types){
                    switch((yyvsp[(1) - (2)].node)->type){
                        case TYPE_NUMBER:
		    case TYPE_ANY:
                        case TYPE_REAL:
                        {
                            (yyval.node)->type = (yyvsp[(1) - (2)].node)->type;
                            break;
                        }

                        default:
                        {
                            (yyval.node)->type = TYPE_ANY;
                            type_error("Bad argument 1 to x++", (yyvsp[(1) - (2)].node)->type);
                        }
                    }
                } else (yyval.node)->type = TYPE_ANY;
	    }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 2488 "grammar.y"
    {
#line 2414 "grammar.y.pre"
		CREATE_UNARY_OP((yyval.node), F_POST_DEC, 0, (yyvsp[(1) - (2)].node));
                if (exact_types){
                    switch((yyvsp[(1) - (2)].node)->type){
		    case TYPE_NUMBER:
		    case TYPE_ANY:
		    case TYPE_REAL:
		    {
			(yyval.node)->type = (yyvsp[(1) - (2)].node)->type;
			break;
		    }

		    default:
		    {
			(yyval.node)->type = TYPE_ANY;
			type_error("Bad argument 1 to x--", (yyvsp[(1) - (2)].node)->type);
		    }
                    }
                } else (yyval.node)->type = TYPE_ANY;
	    }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 2519 "grammar.y"
    {
#line 2444 "grammar.y.pre"
		if (exact_types && !IS_TYPE(exact_types, TYPE_VOID))
		    yywarn("Non-void functions must return a value.");
		CREATE_RETURN((yyval.node), 0);
	    }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 2526 "grammar.y"
    {
#line 2450 "grammar.y.pre"
		if (exact_types && !compatible_types((yyvsp[(2) - (3)].node)->type, exact_types)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Type of returned value doesn't match function return type ");
		    p = get_two_types(p, end, (yyvsp[(2) - (3)].node)->type, exact_types);
		    yyerror(buf);
		}
		if (IS_NODE((yyvsp[(2) - (3)].node), NODE_NUMBER, 0)) {
		    CREATE_RETURN((yyval.node), 0);
		} else {
		    CREATE_RETURN((yyval.node), (yyvsp[(2) - (3)].node));
		}
	    }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 2547 "grammar.y"
    {
#line 2470 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), 0);
	    }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 2552 "grammar.y"
    {
#line 2474 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), (yyvsp[(1) - (1)].node));
	    }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 2557 "grammar.y"
    {
#line 2478 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), (yyvsp[(1) - (2)].node));
	    }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 2565 "grammar.y"
    {
#line 2485 "grammar.y.pre"
		CREATE_EXPR_NODE((yyval.node), (yyvsp[(1) - (1)].node), 0);
	    }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 2570 "grammar.y"
    {
#line 2489 "grammar.y.pre"
		CREATE_EXPR_NODE((yyval.node), (yyvsp[(1) - (2)].node), 1);
	    }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 2578 "grammar.y"
    {
#line 2496 "grammar.y.pre"
		(yyvsp[(1) - (1)].node)->kind = 1;

		(yyval.node) = (yyvsp[(1) - (1)].node);
	    }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 2585 "grammar.y"
    {
#line 2502 "grammar.y.pre"
		(yyvsp[(3) - (3)].node)->kind = 0;

		(yyval.node) = (yyvsp[(1) - (3)].node);
		(yyval.node)->kind++;
		(yyval.node)->l.expr->r.expr = (yyvsp[(3) - (3)].node);
		(yyval.node)->l.expr = (yyvsp[(3) - (3)].node);
	    }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 2598 "grammar.y"
    {
#line 2514 "grammar.y.pre"
		/* this is a dummy node */
		CREATE_EXPR_LIST((yyval.node), 0);
	    }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 2604 "grammar.y"
    {
#line 2519 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), (yyvsp[(1) - (1)].node));
	    }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 2609 "grammar.y"
    {
#line 2523 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), (yyvsp[(1) - (2)].node));
	    }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 2617 "grammar.y"
    {
#line 2530 "grammar.y.pre"
		(yyval.node) = new_node_no_line();
		(yyval.node)->kind = 2;
		(yyval.node)->v.expr = (yyvsp[(1) - (1)].node);
		(yyval.node)->r.expr = 0;
		(yyval.node)->type = 0;
		/* we keep track of the end of the chain in the left nodes */
		(yyval.node)->l.expr = (yyval.node);
            }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 2628 "grammar.y"
    {
#line 2540 "grammar.y.pre"
		parse_node_t *expr;

		expr = new_node_no_line();
		expr->kind = 0;
		expr->v.expr = (yyvsp[(3) - (3)].node);
		expr->r.expr = 0;
		expr->type = 0;
		
		(yyvsp[(1) - (3)].node)->l.expr->r.expr = expr;
		(yyvsp[(1) - (3)].node)->l.expr = expr;
		(yyvsp[(1) - (3)].node)->kind += 2;
		(yyval.node) = (yyvsp[(1) - (3)].node);
	    }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 2647 "grammar.y"
    {
#line 2558 "grammar.y.pre"
		CREATE_TWO_VALUES((yyval.node), 0, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
            }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 2655 "grammar.y"
    {
#line 2565 "grammar.y.pre"
#define LV_ILLEGAL 1
#define LV_RANGE 2
#define LV_INDEX 4
                /* Restrictive lvalues, but I think they make more sense :) */
                (yyval.node) = (yyvsp[(1) - (1)].node);
		if((yyval.node)->kind == NODE_BINARY_OP && (yyval.node)->v.number == F_TYPE_CHECK) 
		    (yyval.node) = (yyval.node)->l.expr;
                switch((yyval.node)->kind) {
		default:
		    yyerror("Illegal lvalue");
		    break;
		case NODE_PARAMETER:
		    (yyval.node)->kind = NODE_PARAMETER_LVALUE;
		    break;
		case NODE_TERNARY_OP:
		    (yyval.node)->v.number = (yyval.node)->r.expr->v.number;
		case NODE_OPCODE_1:
		case NODE_UNARY_OP_1:
		case NODE_BINARY_OP:
		    if ((yyval.node)->v.number >= F_LOCAL && (yyval.node)->v.number <= F_MEMBER)
			(yyval.node)->v.number++; /* make it an lvalue */
		    else if ((yyval.node)->v.number >= F_INDEX 
			     && (yyval.node)->v.number <= F_RE_RANGE) {
                        parse_node_t *node = (yyval.node);
                        int flag = 0;
                        do {
                            switch(node->kind) {
			    case NODE_PARAMETER:
				node->kind = NODE_PARAMETER_LVALUE;
				flag |= LV_ILLEGAL;
				break;
			    case NODE_TERNARY_OP:
				node->v.number = node->r.expr->v.number;
			    case NODE_OPCODE_1:
			    case NODE_UNARY_OP_1:
			    case NODE_BINARY_OP:
			        if(node->kind == NODE_BINARY_OP && 
				   node->v.number == F_TYPE_CHECK) {
				    node = node->l.expr;
				    continue;
				}

				if (node->v.number >= F_LOCAL 
				    && node->v.number <= F_MEMBER) {
				    node->v.number++;
				    flag |= LV_ILLEGAL;
				    break;
				} else if (node->v.number == F_INDEX ||
					 node->v.number == F_RINDEX) {
				    node->v.number++;
				    flag |= LV_INDEX;
				    break;
				} else if (node->v.number >= F_ADD_EQ
					   && node->v.number <= F_ASSIGN) {
				    if (!(flag & LV_INDEX)) {
					yyerror("Illegal lvalue, a possible lvalue is (x <assign> y)[a]");
				    }
				    if (node->r.expr->kind == NODE_BINARY_OP||
					node->r.expr->kind == NODE_TERNARY_OP){
					if (node->r.expr->v.number >= F_NN_RANGE_LVALUE && node->r.expr->v.number <= F_NR_RANGE_LVALUE)
					    yyerror("Illegal to have (x[a..b] <assign> y) to be the beginning of an lvalue");
				    }
				    flag = LV_ILLEGAL;
				    break;
				} else if (node->v.number >= F_NN_RANGE
					 && node->v.number <= F_RE_RANGE) {
				    if (flag & LV_RANGE) {
					yyerror("Can't do range lvalue of range lvalue.");
					flag |= LV_ILLEGAL;
					break;
				    }
                                    if (flag & LV_INDEX){
					yyerror("Can't do indexed lvalue of range lvalue.");
					flag |= LV_ILLEGAL;
					break;
				    }
				    if (node->v.number == F_NE_RANGE) {
					/* x[foo..] -> x[foo..<1] */
					parse_node_t *rchild = node->r.expr;
					node->kind = NODE_TERNARY_OP;
					CREATE_BINARY_OP(node->r.expr,
							 F_NR_RANGE_LVALUE,
							 0, 0, rchild);
					CREATE_NUMBER(node->r.expr->l.expr, 1);
				    } else if (node->v.number == F_RE_RANGE) {
					/* x[<foo..] -> x[<foo..<1] */
					parse_node_t *rchild = node->r.expr;
					node->kind = NODE_TERNARY_OP;
					CREATE_BINARY_OP(node->r.expr,
							 F_RR_RANGE_LVALUE,
							 0, 0, rchild);
					CREATE_NUMBER(node->r.expr->l.expr, 1);
				    } else
					node->r.expr->v.number++;
				    flag |= LV_RANGE;
				    node = node->r.expr->r.expr;
				    continue;
				}
			    default:
				yyerror("Illegal lvalue");
				flag = LV_ILLEGAL;
				break;
			    }   
                            if ((flag & LV_ILLEGAL) || !(node = node->r.expr)) break;
                        } while (1);
                        break;
		    } else 
			yyerror("Illegal lvalue");
		    break;
                }
            }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 2772 "grammar.y"
    {
#line 2681 "grammar.y.pre"
		(yyval.number) = ((yyvsp[(2) - (2)].number) << 8) | FP_EFUN;
	    }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 2782 "grammar.y"
    {
#line 2713 "grammar.y.pre"
              int i;
              if ((i = (yyvsp[(1) - (1)].ihe)->dn.local_num) != -1) {
		  type_of_locals_ptr[i] &= ~LOCAL_MOD_UNUSED;
		  if (type_of_locals_ptr[i] & LOCAL_MOD_REF)
		      CREATE_OPCODE_1((yyval.node), F_REF, type_of_locals_ptr[i] & ~LOCAL_MOD_REF,i & 0xff);
		  else
		      CREATE_OPCODE_1((yyval.node), F_LOCAL, type_of_locals_ptr[i], i & 0xff);
		  if (current_function_context)
		      current_function_context->num_locals++;
              } else
		  if ((i = (yyvsp[(1) - (1)].ihe)->dn.global_num) != -1) {
		      if (current_function_context)
			  current_function_context->bindable = FP_NOT_BINDABLE;
                          CREATE_OPCODE_1((yyval.node), F_GLOBAL,
				      VAR_TEMP(i)->type & ~DECL_MODS, i);
		      if (VAR_TEMP(i)->type & DECL_HIDDEN) {
			  char buf[256];
			  char *end = EndOf(buf);
			  char *p;

			  p = strput(buf, end, "Illegal to use private variable '");
			  p = strput(p, end, (yyvsp[(1) - (1)].ihe)->name);
			  p = strput(p, end, "'");
			  yyerror(buf);
		      }
		  } else {
		      char buf[256];
		      char *end = EndOf(buf);
		      char *p;
		      
		      p = strput(buf, end, "Undefined variable '");
		      p = strput(p, end, (yyvsp[(1) - (1)].ihe)->name);
		      p = strput(p, end, "'");
		      if (current_number_of_locals < CFG_MAX_LOCAL_VARIABLES) {
			  add_local_name((yyvsp[(1) - (1)].ihe)->name, TYPE_ANY);
		      }
		      CREATE_ERROR((yyval.node));
		      yyerror(buf);
		  }
	    }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 2825 "grammar.y"
    {
#line 2755 "grammar.y.pre"
		char buf[256];
		char *end = EndOf(buf);
		char *p;
		
		p = strput(buf, end, "Undefined variable '");
		p = strput(p, end, (yyvsp[(1) - (1)].string));
		p = strput(p, end, "'");
                if (current_number_of_locals < CFG_MAX_LOCAL_VARIABLES) {
                    add_local_name((yyvsp[(1) - (1)].string), TYPE_ANY);
                }
                CREATE_ERROR((yyval.node));
                yyerror(buf);
                scratch_free((yyvsp[(1) - (1)].string));
            }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 2842 "grammar.y"
    {
#line 2771 "grammar.y.pre"
		CREATE_PARAMETER((yyval.node), TYPE_ANY, (yyvsp[(1) - (1)].number));
            }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 2847 "grammar.y"
    {
#line 2775 "grammar.y.pre"
		(yyval.contextp) = current_function_context;
		/* already flagged as an error */
		if (current_function_context)
		    current_function_context = current_function_context->parent;
            }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 2855 "grammar.y"
    {
#line 2782 "grammar.y.pre"
		parse_node_t *node;

		current_function_context = (yyvsp[(3) - (5)].contextp);

		if (!current_function_context || current_function_context->num_parameters == -2) {
		    /* This was illegal, and error'ed when the '$' token
		     * was returned.
		     */
		    CREATE_ERROR((yyval.node));
		} else {
		    CREATE_OPCODE_1((yyval.node), F_LOCAL, (yyvsp[(4) - (5)].node)->type,
				    current_function_context->values_list->kind++);

		    node = new_node_no_line();
		    node->type = 0;
		    current_function_context->values_list->l.expr->r.expr = node;
		    current_function_context->values_list->l.expr = node;
		    node->r.expr = 0;
		    node->v.expr = (yyvsp[(4) - (5)].node);
		}
	    }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 2879 "grammar.y"
    {
#line 2805 "grammar.y.pre"
		if ((yyvsp[(1) - (3)].node)->type == TYPE_ANY) {
		    int cmi;
		    unsigned char tp;
		    
		    if ((cmi = lookup_any_class_member((yyvsp[(3) - (3)].string), &tp)) != -1) {
			CREATE_UNARY_OP_1((yyval.node), F_MEMBER, tp, (yyvsp[(1) - (3)].node), 0);
			(yyval.node)->l.number = cmi;
		    } else {
			CREATE_ERROR((yyval.node));
		    }
		} else if (!IS_CLASS((yyvsp[(1) - (3)].node)->type)) {
		    yyerror("Left argument of -> is not a class");
		    CREATE_ERROR((yyval.node));
		} else {
		    CREATE_UNARY_OP_1((yyval.node), F_MEMBER, 0, (yyvsp[(1) - (3)].node), 0);
		    (yyval.node)->l.number = lookup_class_member(CLASS_IDX((yyvsp[(1) - (3)].node)->type),
						       (yyvsp[(3) - (3)].string),
						       &((yyval.node)->type));
		}
		    
		scratch_free((yyvsp[(3) - (3)].string));
            }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2904 "grammar.y"
    {
#line 2829 "grammar.y.pre"
                (yyval.node) = make_range_node(F_NN_RANGE, (yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
            }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2909 "grammar.y"
    {
#line 2840 "grammar.y.pre"
                (yyval.node) = make_range_node(F_RN_RANGE, (yyvsp[(1) - (7)].node), (yyvsp[(4) - (7)].node), (yyvsp[(6) - (7)].node));
            }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2914 "grammar.y"
    {
#line 2844 "grammar.y.pre"
		if ((yyvsp[(7) - (8)].node)->kind == NODE_NUMBER && (yyvsp[(7) - (8)].node)->v.number <= 1)
		    (yyval.node) = make_range_node(F_RE_RANGE, (yyvsp[(1) - (8)].node), (yyvsp[(4) - (8)].node), 0);
		else
		    (yyval.node) = make_range_node(F_RR_RANGE, (yyvsp[(1) - (8)].node), (yyvsp[(4) - (8)].node), (yyvsp[(7) - (8)].node));
            }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2922 "grammar.y"
    {
#line 2851 "grammar.y.pre"
		if ((yyvsp[(6) - (7)].node)->kind == NODE_NUMBER && (yyvsp[(6) - (7)].node)->v.number <= 1)
		    (yyval.node) = make_range_node(F_NE_RANGE, (yyvsp[(1) - (7)].node), (yyvsp[(3) - (7)].node), 0);
		else
		    (yyval.node) = make_range_node(F_NR_RANGE, (yyvsp[(1) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].node));
            }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2930 "grammar.y"
    {
#line 2858 "grammar.y.pre"
                (yyval.node) = make_range_node(F_NE_RANGE, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), 0);
            }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 2935 "grammar.y"
    {
#line 2862 "grammar.y.pre"
                (yyval.node) = make_range_node(F_RE_RANGE, (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), 0);
            }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2940 "grammar.y"
    {
#line 2866 "grammar.y.pre"
                if (IS_NODE((yyvsp[(1) - (5)].node), NODE_CALL, F_AGGREGATE)
		    && (yyvsp[(4) - (5)].node)->kind == NODE_NUMBER) {
                    int i = (yyvsp[(4) - (5)].node)->v.number;
                    if (i < 1 || i > (yyvsp[(1) - (5)].node)->l.number)
                        yyerror("Illegal index to array constant.");
                    else {
                        parse_node_t *node = (yyvsp[(1) - (5)].node)->r.expr;
                        i = (yyvsp[(1) - (5)].node)->l.number - i;
                        while (i--)
                            node = node->r.expr;
                        (yyval.node) = node->v.expr;
                        break;
                    }
                }
		CREATE_BINARY_OP((yyval.node), F_RINDEX, 0, (yyvsp[(4) - (5)].node), (yyvsp[(1) - (5)].node));
                if (exact_types) {
		    switch((yyvsp[(1) - (5)].node)->type) {
		    case TYPE_MAPPING:
			yyerror("Illegal index for mapping.");
		    case TYPE_ANY:
			(yyval.node)->type = TYPE_ANY;
			break;
		    case TYPE_STRING:
		    case TYPE_BUFFER:
			(yyval.node)->type = TYPE_NUMBER;
			if (!IS_TYPE((yyvsp[(4) - (5)].node)->type,TYPE_NUMBER))
			    type_error("Bad type of index", (yyvsp[(4) - (5)].node)->type);
			break;
			
		    default:
			if ((yyvsp[(1) - (5)].node)->type & TYPE_MOD_ARRAY) {
			    (yyval.node)->type = (yyvsp[(1) - (5)].node)->type & ~TYPE_MOD_ARRAY;
			    if ((yyval.node)->type != TYPE_ANY)
			        (yyval.node) = add_type_check((yyval.node), (yyval.node)->type); 
			    if (!IS_TYPE((yyvsp[(4) - (5)].node)->type,TYPE_NUMBER))
				type_error("Bad type of index", (yyvsp[(4) - (5)].node)->type);
			} else {
			    type_error("Value indexed has a bad type ", (yyvsp[(1) - (5)].node)->type);
			    (yyval.node)->type = TYPE_ANY;
			}
		    }
		} else (yyval.node)->type = TYPE_ANY;
            }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 2986 "grammar.y"
    {
#line 2911 "grammar.y.pre"
		/* Something stupid like ({ 1, 2, 3 })[1]; we take the
		 * time to optimize this because people who don't understand
		 * the preprocessor often write things like:
		 *
		 * #define MY_ARRAY ({ "foo", "bar", "bazz" })
		 * ...
		 * ... MY_ARRAY[1] ...
		 *
		 * which of course expands to the above.
		 */
                if (IS_NODE((yyvsp[(1) - (4)].node), NODE_CALL, F_AGGREGATE) && (yyvsp[(3) - (4)].node)->kind == NODE_NUMBER) {
                    int i = (yyvsp[(3) - (4)].node)->v.number;
                    if (i < 0 || i >= (yyvsp[(1) - (4)].node)->l.number)
                        yyerror("Illegal index to array constant.");
                    else {
                        parse_node_t *node = (yyvsp[(1) - (4)].node)->r.expr;
                        while (i--)
                            node = node->r.expr;
                        (yyval.node) = node->v.expr;
                        break;
                    }
                }
                if ((yyvsp[(3) - (4)].node)->kind == NODE_NUMBER && (yyvsp[(3) - (4)].node)->v.number < 0)
		    yywarn("A negative constant in arr[x] no longer means indexing from the end.  Use arr[<x]");
                CREATE_BINARY_OP((yyval.node), F_INDEX, 0, (yyvsp[(3) - (4)].node), (yyvsp[(1) - (4)].node));
                if (exact_types) {
		    switch((yyvsp[(1) - (4)].node)->type) {
		    case TYPE_MAPPING:
		    case TYPE_ANY:
			(yyval.node)->type = TYPE_ANY;
			break;
		    case TYPE_STRING:
		    case TYPE_BUFFER:
			(yyval.node)->type = TYPE_NUMBER;
			if (!IS_TYPE((yyvsp[(3) - (4)].node)->type,TYPE_NUMBER))
			    type_error("Bad type of index", (yyvsp[(3) - (4)].node)->type);
			break;
			
		    default:
			if ((yyvsp[(1) - (4)].node)->type & TYPE_MOD_ARRAY) {
			    (yyval.node)->type = (yyvsp[(1) - (4)].node)->type & ~TYPE_MOD_ARRAY;
			    if((yyval.node)->type != TYPE_ANY)
			        (yyval.node) = add_type_check((yyval.node), (yyval.node)->type);
			    if (!IS_TYPE((yyvsp[(3) - (4)].node)->type,TYPE_NUMBER))
				type_error("Bad type of index", (yyvsp[(3) - (4)].node)->type);
			} else {
			    type_error("Value indexed has a bad type ", (yyvsp[(1) - (4)].node)->type);
			    (yyval.node)->type = TYPE_ANY;
			}
                    }
                } else (yyval.node)->type = TYPE_ANY;
            }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 3042 "grammar.y"
    {
#line 2968 "grammar.y.pre"
		(yyval.node) = (yyvsp[(2) - (3)].node);
	    }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 3048 "grammar.y"
    {
#line 2976 "grammar.y.pre"
	        if ((yyvsp[(1) - (1)].number) != TYPE_FUNCTION) yyerror("Reserved type name unexpected.");
		(yyval.func_block).num_local = current_number_of_locals;
		(yyval.func_block).max_num_locals = max_num_locals;
		(yyval.func_block).context = context;
		(yyval.func_block).save_current_type = current_type;
		(yyval.func_block).save_exact_types = exact_types;
	        if (type_of_locals_ptr + max_num_locals + CFG_MAX_LOCAL_VARIABLES >= &type_of_locals[type_of_locals_size])
		    reallocate_locals();
		deactivate_current_locals();
		locals_ptr += current_number_of_locals;
		type_of_locals_ptr += max_num_locals;
		max_num_locals = current_number_of_locals = 0;
		push_function_context();
		current_function_context->num_parameters = -1;
		exact_types = TYPE_ANY;
		context = 0;
            }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 3068 "grammar.y"
    {
#line 2995 "grammar.y.pre"
		if ((yyvsp[(4) - (6)].argument).flags & ARG_IS_VARARGS) {
		    yyerror("Anonymous varargs functions aren't implemented");
		}
		if (!(yyvsp[(6) - (6)].decl).node) {
		    CREATE_RETURN((yyvsp[(6) - (6)].decl).node, 0);
		} else if ((yyvsp[(6) - (6)].decl).node->kind != NODE_RETURN &&
			   ((yyvsp[(6) - (6)].decl).node->kind != NODE_TWO_VALUES || (yyvsp[(6) - (6)].decl).node->r.expr->kind != NODE_RETURN)) {
		    parse_node_t *replacement;
		    CREATE_STATEMENTS(replacement, (yyvsp[(6) - (6)].decl).node, 0);
		    CREATE_RETURN(replacement->r.expr, 0);
		    (yyvsp[(6) - (6)].decl).node = replacement;
		}
		
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_ANON_FUNC;
		(yyval.node)->type = TYPE_FUNCTION;
		(yyval.node)->l.number = (max_num_locals - (yyvsp[(4) - (6)].argument).num_arg);
		(yyval.node)->r.expr = (yyvsp[(6) - (6)].decl).node;
		(yyval.node)->v.number = (yyvsp[(4) - (6)].argument).num_arg;
		if (current_function_context->bindable)
		    (yyval.node)->v.number |= 0x10000;
		free_all_local_names(1);
		
		current_number_of_locals = (yyvsp[(2) - (6)].func_block).num_local;
		max_num_locals = (yyvsp[(2) - (6)].func_block).max_num_locals;
		context = (yyvsp[(2) - (6)].func_block).context;
		current_type = (yyvsp[(2) - (6)].func_block).save_current_type;
		exact_types = (yyvsp[(2) - (6)].func_block).save_exact_types;
		pop_function_context();
		
		locals_ptr -= current_number_of_locals;
		type_of_locals_ptr -= max_num_locals;
		reactivate_current_locals();
	    }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 3105 "grammar.y"
    {
#line 3035 "grammar.y.pre"
#ifdef WOMBLES
	        if(*(outp-2) != ':')
		  yyerror("End of functional not found");
#endif
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_FUNCTION_CONSTRUCTOR;
		(yyval.node)->type = TYPE_FUNCTION;
		(yyval.node)->r.expr = 0;
		switch ((yyvsp[(1) - (3)].number) & 0xff) {
		case FP_L_VAR:
		    yyerror("Illegal to use local variable in a functional.");
		    CREATE_NUMBER((yyval.node)->l.expr, 0);
		    (yyval.node)->l.expr->r.expr = 0;
		    (yyval.node)->l.expr->l.expr = 0;
		    (yyval.node)->v.number = FP_FUNCTIONAL;
		    break;
		case FP_G_VAR:
		    CREATE_OPCODE_1((yyval.node)->l.expr, F_GLOBAL, 0, (yyvsp[(1) - (3)].number) >> 8);
		    (yyval.node)->v.number = FP_FUNCTIONAL | FP_NOT_BINDABLE;
		    if (VAR_TEMP((yyval.node)->l.expr->l.number)->type & DECL_HIDDEN) {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Illegal to use private variable '");
			p = strput(p, end, VAR_TEMP((yyval.node)->l.expr->l.number)->name);
			p = strput(p, end, "'");
			yyerror(buf);
		    }
		    break;
		default:
		    (yyval.node)->v.number = (yyvsp[(1) - (3)].number);
		    break;
		}
	    }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 3143 "grammar.y"
    {
#line 3072 "grammar.y.pre"
#ifdef WOMBLES
	        if(*(outp-2) != ':')
		  yyerror("End of functional not found");
#endif
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_FUNCTION_CONSTRUCTOR;
		(yyval.node)->type = TYPE_FUNCTION;
		(yyval.node)->v.number = (yyvsp[(1) - (5)].number);
		(yyval.node)->r.expr = (yyvsp[(3) - (5)].node);
		
		switch ((yyvsp[(1) - (5)].number) & 0xff) {
		case FP_EFUN: {
		    int *argp;
		    int f = (yyvsp[(1) - (5)].number) >>8;
		    int num = (yyvsp[(3) - (5)].node)->kind;
		    int max_arg = predefs[f].max_args;
		    if(f!=-1){
		      if (num > max_arg && max_arg != -1) {
			parse_node_t *pn = (yyvsp[(3) - (5)].node);
			
			while (pn) {
			    if (pn->type & 1) break;
			    pn = pn->r.expr;
			}
			
			if (!pn) {
			    char bff[256];
			    char *end = EndOf(bff);
			    char *p;
			    
			    p = strput(bff, end, "Too many arguments to ");
			    p = strput(p, end, predefs[f].word);
			    yyerror(bff);
			}
		      } else if (max_arg != -1 && exact_types) {
			/*
			 * Now check all types of arguments to efuns.
			 */
			int i, argn, tmp;
			parse_node_t *enode = (yyvsp[(3) - (5)].node);
			argp = &efun_arg_types[predefs[f].arg_index];
			
			for (argn = 0; argn < num; argn++) {
			    if (enode->type & 1) break;
			    
			    tmp = enode->v.expr->type;
			    for (i=0; !compatible_types(tmp, argp[i])
				 && argp[i] != 0; i++)
				;
			    if (argp[i] == 0) {
				char buf[256];
				char *end = EndOf(buf);
				char *p;

				p = strput(buf, end, "Bad argument ");
				p = strput_int(p, end, argn+1);
				p = strput(p, end, " to efun ");
				p = strput(p, end, predefs[f].word);
				p = strput(p, end, "()");
				yyerror(buf);
			    } else {
				/* this little section necessary b/c in the
				   case float | int we dont want to do
				   promoting. */
				if (tmp == TYPE_NUMBER && argp[i] == TYPE_REAL) {
				    for (i++; argp[i] && argp[i] != TYPE_NUMBER; i++)
					;
				    if (!argp[i])
					enode->v.expr = promote_to_float(enode->v.expr);
				}
				if (tmp == TYPE_REAL && argp[i] == TYPE_NUMBER) {
				    for (i++; argp[i] && argp[i] != TYPE_REAL; i++)
					;
				    if (!argp[i])
					enode->v.expr = promote_to_int(enode->v.expr);
				}
			    }
			    while (argp[i] != 0)
				i++;
			    argp += i + 1;
			    enode = enode->r.expr;
			}
		      }
		    }
		    break;
		}
		case FP_L_VAR:
		case FP_G_VAR:
		    yyerror("Can't give parameters to functional.");
		    break;
		}
	    }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 3238 "grammar.y"
    {
#line 3166 "grammar.y.pre"
#ifdef WOMBLES
	         if(*(outp-2) != ':')
		   yyerror("End of functional not found");
#endif
		 if (current_function_context->num_locals)
		     yyerror("Illegal to use local variable in functional.");
		 if (current_function_context->values_list->r.expr)
		     current_function_context->values_list->r.expr->kind = current_function_context->values_list->kind;
		 
		 (yyval.node) = new_node();
		 (yyval.node)->kind = NODE_FUNCTION_CONSTRUCTOR;
		 (yyval.node)->type = TYPE_FUNCTION;
		 (yyval.node)->l.expr = (yyvsp[(2) - (4)].node);
		 if ((yyvsp[(2) - (4)].node)->kind == NODE_STRING)
		     yywarn("Function pointer returning string constant is NOT a function call");
		 (yyval.node)->r.expr = current_function_context->values_list->r.expr;
		 (yyval.node)->v.number = FP_FUNCTIONAL + current_function_context->bindable
		     + (current_function_context->num_parameters << 8);
		 pop_function_context();
             }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 3261 "grammar.y"
    {
#line 3188 "grammar.y.pre"
#ifdef WOMBLES
	        if(*(outp-2) != ']')
		  yyerror("End of mapping not found");
#endif
		CREATE_CALL((yyval.node), F_AGGREGATE_ASSOC, TYPE_MAPPING, (yyvsp[(2) - (4)].node));
	    }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 3270 "grammar.y"
    {
#line 3196 "grammar.y.pre"
#ifdef WOMBLES
	        if(*(outp-2) != '}')
		  yyerror("End of array not found");
#endif  
		CREATE_CALL((yyval.node), F_AGGREGATE, TYPE_ANY | TYPE_MOD_ARRAY, (yyvsp[(2) - (4)].node));
	    }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 3282 "grammar.y"
    {
#line 3207 "grammar.y.pre"
		(yyval.node) = (yyvsp[(1) - (1)].decl).node;
	    }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 3287 "grammar.y"
    {
#line 3211 "grammar.y.pre"
		(yyval.node) = insert_pop_value((yyvsp[(2) - (3)].node));
	    }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 3295 "grammar.y"
    {
#line 3218 "grammar.y.pre"
		(yyval.number) = context;
		context = SPECIAL_CONTEXT;
	    }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 3301 "grammar.y"
    {
#line 3223 "grammar.y.pre"
		CREATE_CATCH((yyval.node), (yyvsp[(3) - (3)].node));
		context = (yyvsp[(2) - (3)].number);
	    }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 3311 "grammar.y"
    {
#line 3247 "grammar.y.pre"
		int p = (yyvsp[(6) - (7)].node)->v.number;
		CREATE_LVALUE_EFUN((yyval.node), TYPE_NUMBER, (yyvsp[(6) - (7)].node));
		CREATE_BINARY_OP_1((yyval.node)->l.expr, F_SSCANF, 0, (yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), p);
	    }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 3321 "grammar.y"
    {
#line 3256 "grammar.y.pre"
		int p = (yyvsp[(8) - (9)].node)->v.number;
		CREATE_LVALUE_EFUN((yyval.node), TYPE_NUMBER, (yyvsp[(8) - (9)].node));
		CREATE_TERNARY_OP_1((yyval.node)->l.expr, F_PARSE_COMMAND, 0, 
				    (yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(7) - (9)].node), p);
	    }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 3332 "grammar.y"
    {
#line 3266 "grammar.y.pre"
		(yyval.number) = context;
		context = SPECIAL_CONTEXT;
	    }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 3338 "grammar.y"
    {
#line 3271 "grammar.y.pre"
		CREATE_TIME_EXPRESSION((yyval.node), (yyvsp[(3) - (3)].node));
		context = (yyvsp[(2) - (3)].number);
	    }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 3347 "grammar.y"
    {
#line 3279 "grammar.y.pre"
	        (yyval.node) = new_node_no_line();
		(yyval.node)->r.expr = 0;
	        (yyval.node)->v.number = 0;
	    }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 3354 "grammar.y"
    {
#line 3285 "grammar.y.pre"
		parse_node_t *insert;
		
		(yyval.node) = (yyvsp[(3) - (3)].node);
		insert = new_node_no_line();
		insert->r.expr = (yyvsp[(3) - (3)].node)->r.expr;
		insert->l.expr = (yyvsp[(2) - (3)].node);
		(yyvsp[(3) - (3)].node)->r.expr = insert;
		(yyval.node)->v.number++;
	    }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 3369 "grammar.y"
    {
#line 3299 "grammar.y.pre"
		CREATE_STRING((yyval.node), (yyvsp[(1) - (1)].string));
		scratch_free((yyvsp[(1) - (1)].string));
	    }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 3379 "grammar.y"
    {
#line 3308 "grammar.y.pre"
		(yyval.string) = (yyvsp[(2) - (3)].string);
	    }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 3384 "grammar.y"
    {
#line 3312 "grammar.y.pre"
		(yyval.string) = scratch_join((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
	    }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 3393 "grammar.y"
    {
#line 3320 "grammar.y.pre"
		(yyval.string) = scratch_join((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string));
	    }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 3400 "grammar.y"
    {
#line 3326 "grammar.y.pre"
	(yyval.node) = new_node();
	(yyval.node)->l.expr = (parse_node_t *)(yyvsp[(1) - (3)].string);
	(yyval.node)->v.expr = (yyvsp[(3) - (3)].node);
	(yyval.node)->r.expr = 0;
    }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 3411 "grammar.y"
    {
#line 3336 "grammar.y.pre"
	(yyval.node) = 0;
    }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 3416 "grammar.y"
    {
#line 3340 "grammar.y.pre"
	(yyval.node) = (yyvsp[(3) - (3)].node);
	(yyval.node)->r.expr = (yyvsp[(1) - (3)].node);
    }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 3426 "grammar.y"
    {
#line 3349 "grammar.y.pre"
		(yyval.number) = context;
		(yyvsp[(2) - (2)].number) = num_refs;
		context |= ARG_LIST; 
	    }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 3433 "grammar.y"
    {
#line 3355 "grammar.y.pre"
		context = (yyvsp[(3) - (5)].number);
		(yyval.node) = validate_efun_call((yyvsp[(1) - (5)].number),(yyvsp[(4) - (5)].node));
		(yyval.node) = check_refs(num_refs - (yyvsp[(2) - (5)].number), (yyvsp[(4) - (5)].node), (yyval.node));
		num_refs = (yyvsp[(2) - (5)].number);
	    }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 3441 "grammar.y"
    {
#line 3362 "grammar.y.pre"
		(yyval.number) = context;
		(yyvsp[(2) - (2)].number) = num_refs;
		context |= ARG_LIST;
	    }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 3448 "grammar.y"
    {
#line 3368 "grammar.y.pre"
		ident_hash_elem_t *ihe;
		int f;

		context = (yyvsp[(3) - (5)].number);
		ihe = lookup_ident("clone_object");

		if ((f = ihe->dn.simul_num) != -1) {
		    (yyval.node) = (yyvsp[(4) - (5)].node);
		    (yyval.node)->kind = NODE_CALL_1;
		    (yyval.node)->v.number = F_SIMUL_EFUN;
		    (yyval.node)->l.number = f;
		    (yyval.node)->type = (SIMUL(f)->type) & ~DECL_MODS;
		} else {
		    (yyval.node) = validate_efun_call(lookup_predef("clone_object"), (yyvsp[(4) - (5)].node));
#ifdef CAST_CALL_OTHERS
		    (yyval.node)->type = TYPE_UNKNOWN;
#else
		    (yyval.node)->type = TYPE_ANY;
#endif		  
		}
		(yyval.node) = check_refs(num_refs - (yyvsp[(2) - (5)].number), (yyvsp[(4) - (5)].node), (yyval.node));
		num_refs = (yyvsp[(2) - (5)].number);
            }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 3474 "grammar.y"
    {
#line 3393 "grammar.y.pre"
		parse_node_t *node;
		
		if ((yyvsp[(4) - (6)].ihe)->dn.class_num == -1) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Undefined class '");
		    p = strput(p, end, (yyvsp[(4) - (6)].ihe)->name);
		    p = strput(p, end, "'");
		    yyerror(buf);
		    CREATE_ERROR((yyval.node));
		    node = (yyvsp[(5) - (6)].node);
		    while (node) {
			scratch_free((char *)node->l.expr);
			node = node->r.expr;
		    }
		} else {
		    int type = (yyvsp[(4) - (6)].ihe)->dn.class_num | TYPE_MOD_CLASS;
		    
		    if ((node = (yyvsp[(5) - (6)].node))) {
			CREATE_TWO_VALUES((yyval.node), type, 0, 0);
			(yyval.node)->l.expr = reorder_class_values((yyvsp[(4) - (6)].ihe)->dn.class_num,
							node);
			CREATE_OPCODE_1((yyval.node)->r.expr, F_NEW_CLASS,
					type, (yyvsp[(4) - (6)].ihe)->dn.class_num);
			
		    } else {
			CREATE_OPCODE_1((yyval.node), F_NEW_EMPTY_CLASS,
					type, (yyvsp[(4) - (6)].ihe)->dn.class_num);
		    }
		}
            }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 3510 "grammar.y"
    {
#line 3428 "grammar.y.pre"
		parse_node_t *node;
		char buf[256];
		char *end = EndOf(buf);
		char *p;

		p = strput(buf, end, "Undefined class '");
		p = strput(p, end, (yyvsp[(4) - (6)].string));
		p = strput(p, end, "'");
		yyerror(buf);
		CREATE_ERROR((yyval.node));
		node = (yyvsp[(5) - (6)].node);
		while (node) {
		    scratch_free((char *)node->l.expr);
		    node = node->r.expr;
		}
	    }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 3529 "grammar.y"
    {
#line 3446 "grammar.y.pre"
		(yyval.number) = context;
		(yyvsp[(2) - (2)].number) = num_refs;
		context |= ARG_LIST;
	    }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 3536 "grammar.y"
    {
#line 3452 "grammar.y.pre"
		int f;
		
		context = (yyvsp[(3) - (5)].number);
		(yyval.node) = (yyvsp[(4) - (5)].node);
		if ((f = (yyvsp[(1) - (5)].ihe)->dn.function_num) != -1) {
		    if (current_function_context)
			current_function_context->bindable = FP_NOT_BINDABLE;
		    
		    (yyval.node)->kind = NODE_CALL_1;
		    (yyval.node)->v.number = F_CALL_FUNCTION_BY_ADDRESS;
		    (yyval.node)->l.number = f;
		    (yyval.node)->type = validate_function_call(f, (yyvsp[(4) - (5)].node)->r.expr);
		} else if ((f=(yyvsp[(1) - (5)].ihe)->dn.simul_num) != -1) {
		    (yyval.node)->kind = NODE_CALL_1;
		    (yyval.node)->v.number = F_SIMUL_EFUN;
		    (yyval.node)->l.number = f;
		    (yyval.node)->type = (SIMUL(f)->type) & ~DECL_MODS;
		} else if ((f=(yyvsp[(1) - (5)].ihe)->dn.efun_num) != -1) {
		    (yyval.node) = validate_efun_call(f, (yyvsp[(4) - (5)].node));
		} else {
		    /* This here is a really nasty case that only occurs with
		     * exact_types off.  The user has done something gross like:
		     *
		     * func() { int f; f(); } // if f was prototyped we wouldn't
		     * f() { }                // need this case
		     *
		     * Don't complain, just grok it.
		     */
		    
		    if (current_function_context)
			current_function_context->bindable = FP_NOT_BINDABLE;
		    
		    f = define_new_function((yyvsp[(1) - (5)].ihe)->name, 0, 0, 
					    DECL_PUBLIC|FUNC_UNDEFINED, TYPE_ANY);
		    (yyval.node)->kind = NODE_CALL_1;
		    (yyval.node)->v.number = F_CALL_FUNCTION_BY_ADDRESS;
		    (yyval.node)->l.number = f;
		    (yyval.node)->type = TYPE_ANY; /* just a guess */
		    if (exact_types) {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			const char *n = (yyvsp[(1) - (5)].ihe)->name;
			if (*n == ':') n++;
			/* prevent some errors; by making it look like an
			 * inherited function we prevent redeclaration errors
			 * if it shows up later
			 */
			
			FUNCTION_FLAGS(f) &= ~FUNC_UNDEFINED;
			FUNCTION_FLAGS(f) |= (FUNC_INHERITED | FUNC_VARARGS);
			p = strput(buf, end, "Undefined function ");
			p = strput(p, end, n);
			yyerror(buf);
		    }
		}
		(yyval.node) = check_refs(num_refs - (yyvsp[(2) - (5)].number), (yyvsp[(4) - (5)].node), (yyval.node));
		num_refs = (yyvsp[(2) - (5)].number);
	    }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 3598 "grammar.y"
    {
#line 3513 "grammar.y.pre"
		(yyval.number) = context;
		(yyvsp[(2) - (2)].number) = num_refs;
		context |= ARG_LIST;
	    }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 3605 "grammar.y"
    {
#line 3519 "grammar.y.pre"
	      char *name = (yyvsp[(1) - (5)].string);

	      context = (yyvsp[(3) - (5)].number);
	      (yyval.node) = (yyvsp[(4) - (5)].node);
	      
	      if (current_function_context)
		  current_function_context->bindable = FP_NOT_BINDABLE;

	      if (*name == ':') {
		  int f;
		  
		  if ((f = arrange_call_inherited(name + 1, (yyval.node))) != -1)
		      /* Can't do this; f may not be the correct function
			 entry.  It might be overloaded.
			 
		      validate_function_call(f, $$->r.expr)
		      */
		      ;
	      } else {
		  int f;
		  ident_hash_elem_t *ihe;
		  
		  f = (ihe = lookup_ident(name)) ? ihe->dn.function_num : -1;
		  (yyval.node)->kind = NODE_CALL_1;
		  (yyval.node)->v.number = F_CALL_FUNCTION_BY_ADDRESS;
		  if (f!=-1) {
		      /* The only way this can happen is if function_name
		       * below made the function name.  The lexer would
		       * return L_DEFINED_NAME instead.
		       */
		      (yyval.node)->type = validate_function_call(f, (yyvsp[(4) - (5)].node)->r.expr);
		  } else {
		      f = define_new_function(name, 0, 0, 
					      DECL_PUBLIC|FUNC_UNDEFINED, TYPE_ANY);
		  }
		  (yyval.node)->l.number = f;
		  /*
		   * Check if this function has been defined.
		   * But, don't complain yet about functions defined
		   * by inheritance.
		   */
		  if (exact_types && (FUNCTION_FLAGS(f) & FUNC_UNDEFINED)) {
		      char buf[256];
		      char *end = EndOf(buf);
		      char *p;
		      char *n = (yyvsp[(1) - (5)].string);
		      if (*n == ':') n++;
		      /* prevent some errors */
		      FUNCTION_FLAGS(f) &= ~FUNC_UNDEFINED;
		      FUNCTION_FLAGS(f) |= (FUNC_INHERITED | FUNC_VARARGS);
		      p = strput(buf, end, "Undefined function ");
		      p = strput(p, end, n);
		      yyerror(buf);
		  }
		  if (!(FUNCTION_FLAGS(f) & FUNC_UNDEFINED))
		      (yyval.node)->type = FUNCTION_DEF(f)->type;
		  else
		      (yyval.node)->type = TYPE_ANY;  /* Just a guess */
	      }
	      (yyval.node) = check_refs(num_refs - (yyvsp[(2) - (5)].number), (yyvsp[(4) - (5)].node), (yyval.node));
	      num_refs = (yyvsp[(2) - (5)].number);
	      scratch_free(name);
	  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 3671 "grammar.y"
    {
#line 3584 "grammar.y.pre"
		(yyval.number) = context;
		(yyvsp[(4) - (4)].number) = num_refs;
		context |= ARG_LIST;
	    }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 3678 "grammar.y"
    {
#line 3590 "grammar.y.pre"
		ident_hash_elem_t *ihe;
		int f;
		parse_node_t *pn1, *pn2;
		
		(yyvsp[(6) - (7)].node)->v.number += 2;

		pn1 = new_node_no_line();
		pn1->type = 0;
		pn1->v.expr = (yyvsp[(1) - (7)].node);
		pn1->kind = (yyvsp[(6) - (7)].node)->v.number;
		
		pn2 = new_node_no_line();
		pn2->type = 0;
		CREATE_STRING(pn2->v.expr, (yyvsp[(3) - (7)].string));
		scratch_free((yyvsp[(3) - (7)].string));
		
		/* insert the two nodes */
		pn2->r.expr = (yyvsp[(6) - (7)].node)->r.expr;
		pn1->r.expr = pn2;
		(yyvsp[(6) - (7)].node)->r.expr = pn1;
		
		if (!(yyvsp[(6) - (7)].node)->l.expr) (yyvsp[(6) - (7)].node)->l.expr = pn2;
		    
		context = (yyvsp[(5) - (7)].number);
		ihe = lookup_ident("call_other");

		if ((f = ihe->dn.simul_num) != -1) {
		    (yyval.node) = (yyvsp[(6) - (7)].node);
		    (yyval.node)->kind = NODE_CALL_1;
		    (yyval.node)->v.number = F_SIMUL_EFUN;
		    (yyval.node)->l.number = f;
		    (yyval.node)->type = (SIMUL(f)->type) & ~DECL_MODS;
		} else {
		    (yyval.node) = validate_efun_call(arrow_efun, (yyvsp[(6) - (7)].node));
#ifdef CAST_CALL_OTHERS
		    (yyval.node)->type = TYPE_UNKNOWN;
#else
		    (yyval.node)->type = TYPE_ANY;
#endif		  
		}
		(yyval.node) = check_refs(num_refs - (yyvsp[(4) - (7)].number), (yyvsp[(6) - (7)].node), (yyval.node));
		num_refs = (yyvsp[(4) - (7)].number);
	    }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 3724 "grammar.y"
    {
#line 3635 "grammar.y.pre"
		(yyval.number) = context;
		(yyvsp[(5) - (5)].number) = num_refs;
		context |= ARG_LIST;
	    }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 3731 "grammar.y"
    {
#line 3641 "grammar.y.pre"
	        parse_node_t *expr;

		context = (yyvsp[(6) - (8)].number);
		(yyval.node) = (yyvsp[(7) - (8)].node);
		(yyval.node)->kind = NODE_EFUN;
		(yyval.node)->l.number = (yyval.node)->v.number + 1;
		(yyval.node)->v.number = predefs[evaluate_efun].token;
#ifdef CAST_CALL_OTHERS
		(yyval.node)->type = TYPE_UNKNOWN;
#else
		(yyval.node)->type = TYPE_ANY;
#endif
		expr = new_node_no_line();
		expr->type = 0;
		expr->v.expr = (yyvsp[(3) - (8)].node);
		expr->r.expr = (yyval.node)->r.expr;
		(yyval.node)->r.expr = expr;
		(yyval.node) = check_refs(num_refs - (yyvsp[(5) - (8)].number), (yyvsp[(7) - (8)].node), (yyval.node));
		num_refs = (yyvsp[(5) - (8)].number);
	    }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 3755 "grammar.y"
    {
#line 3664 "grammar.y.pre"
	svalue_t *res;
	ident_hash_elem_t *ihe;

	(yyval.number) = (ihe = lookup_ident((yyvsp[(3) - (3)].string))) ? ihe->dn.efun_num : -1;
	if ((yyval.number) == -1) {
	    char buf[256];
	    char *end = EndOf(buf);
	    char *p;
	    
	    p = strput(buf, end, "Unknown efun: ");
	    p = strput(p, end, (yyvsp[(3) - (3)].string));
	    yyerror(buf);
	} else {
	    push_malloced_string(the_file_name(current_file));
	    share_and_push_string((yyvsp[(3) - (3)].string));
	    push_malloced_string(add_slash(main_file_name()));
	    res = safe_apply_master_ob(APPLY_VALID_OVERRIDE, 3);
	    if (!MASTER_APPROVED(res)) {
		yyerror("Invalid simulated efunction override");
		(yyval.number) = -1;
	    }
	}
	scratch_free((yyvsp[(3) - (3)].string));
      }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 3781 "grammar.y"
    {
#line 3689 "grammar.y.pre"
	svalue_t *res;
	
	push_malloced_string(the_file_name(current_file));
	push_constant_string("new");
	push_malloced_string(add_slash(main_file_name()));
	res = safe_apply_master_ob(APPLY_VALID_OVERRIDE, 3);
	if (!MASTER_APPROVED(res)) {
	    yyerror("Invalid simulated efunction override");
	    (yyval.number) = -1;
	} else (yyval.number) = new_efun;
      }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 3799 "grammar.y"
    {
#line 3706 "grammar.y.pre"
		int l = strlen((yyvsp[(2) - (2)].string)) + 1;
		char *p;
		/* here we be a bit cute.  we put a : on the front so we
		 * don't have to strchr for it.  Here we do:
		 * "name" -> ":::name"
		 */
		(yyval.string) = scratch_realloc((yyvsp[(2) - (2)].string), l + 3);
		p = (yyval.string) + l;
		while (p--,l--)
		    *(p+3) = *p;
		strncpy((yyval.string), ":::", 3);
	    }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 3814 "grammar.y"
    {
#line 3720 "grammar.y.pre"
		int z, l = strlen((yyvsp[(3) - (3)].string)) + 1;
		char *p;
		/* <type> and "name" -> ":type::name" */
		z = strlen(compiler_type_names[(yyvsp[(1) - (3)].number)]) + 3; /* length of :type:: */
		(yyval.string) = scratch_realloc((yyvsp[(3) - (3)].string), l + z);
		p = (yyval.string) + l;
		while (p--,l--)
		    *(p+z) = *p;
		(yyval.string)[0] = ':';
		strncpy((yyval.string) + 1, compiler_type_names[(yyvsp[(1) - (3)].number)], z - 3);
		(yyval.string)[z-2] = ':';
		(yyval.string)[z-1] = ':';
	    }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 3830 "grammar.y"
    {
#line 3735 "grammar.y.pre"
		int l = strlen((yyvsp[(1) - (3)].string));
		/* "ob" and "name" -> ":ob::name" */
		(yyval.string) = scratch_alloc(l + strlen((yyvsp[(3) - (3)].string)) + 4);
		*((yyval.string)) = ':';
		strcpy((yyval.string) + 1, (yyvsp[(1) - (3)].string));
		strcpy((yyval.string) + l + 1, "::");
		strcpy((yyval.string) + l + 3, (yyvsp[(3) - (3)].string));
		scratch_free((yyvsp[(1) - (3)].string));
		scratch_free((yyvsp[(3) - (3)].string));
	    }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 3846 "grammar.y"
    {
#line 3750 "grammar.y.pre"
		/* x != 0 -> x */
		if (IS_NODE((yyvsp[(3) - (6)].node), NODE_BINARY_OP, F_NE)) {
		    if (IS_NODE((yyvsp[(3) - (6)].node)->r.expr, NODE_NUMBER, 0))
			(yyvsp[(3) - (6)].node) = (yyvsp[(3) - (6)].node)->l.expr;
		    else if (IS_NODE((yyvsp[(3) - (6)].node)->l.expr, NODE_NUMBER, 0))
			     (yyvsp[(3) - (6)].node) = (yyvsp[(3) - (6)].node)->r.expr;
		}

		/* TODO: should optimize if (0), if (1) here.  
		 * Also generalize this.
		 */

		if ((yyvsp[(5) - (6)].node) == 0) {
		    if ((yyvsp[(6) - (6)].node) == 0) {
			/* if (x) ; -> x; */
			(yyval.node) = pop_value((yyvsp[(3) - (6)].node));
			break;
		    } else {
			/* if (x) {} else y; -> if (!x) y; */
			parse_node_t *repl;
			
			CREATE_UNARY_OP(repl, F_NOT, TYPE_NUMBER, (yyvsp[(3) - (6)].node));
			(yyvsp[(3) - (6)].node) = repl;
			(yyvsp[(5) - (6)].node) = (yyvsp[(6) - (6)].node);
			(yyvsp[(6) - (6)].node) = 0;
		    }
		}
		CREATE_IF((yyval.node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
	    }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 3881 "grammar.y"
    {
#line 3784 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 3886 "grammar.y"
    {
#line 3788 "grammar.y.pre"
		(yyval.node) = (yyvsp[(2) - (2)].node);
            }
    break;



/* Line 1455 of yacc.c  */
#line 6687 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 3891 "grammar.y"



#line 3793 "grammar.y.pre"

