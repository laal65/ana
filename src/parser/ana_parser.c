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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */


#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "ana_ast.h"
#include "ana_parser.h"
#include "ana_lexer.h"

int yyerror(YYLTYPE *loc, 
  ana_parser_state *state, 
  yyscan_t scanner, 
  const char* msg)
{
  (void)scanner;
  (void)loc;

  char *truncated = strstr(msg, "syntax error, ");

  if(!truncated) 
    truncated = (char *)msg;
  else
    truncated = truncated + (sizeof("syntax error, ") - 1);

  snprintf(state->error, COMO_PARSER_ERROR_BUFFER, "%s", truncated);

  return 1;
}



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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ana_parser.h".  */
#ifndef YY_YY_INCLUDE_ANA_PARSER_H_INCLUDED
# define YY_YY_INCLUDE_ANA_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */


#include "ana_ast.h"
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif



/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
    T_EQ = 258,
    T_INT = 259,
    T_DOUBLE = 260,
    T_ID = 261,
    T_STR_LIT = 262,
    T_FUNCTION = 263,
    T_CLASS = 264,
    T_NEW = 265,
    T_IMPORT = 266,
    T_AS = 267,
    T_LTE = 268,
    T_GTE = 269,
    T_NEQ = 270,
    T_INC = 271,
    T_DEC = 272,
    T_LA = 273,
    T_LO = 274,
    T_BT = 275,
    T_BF = 276,
    T_LS = 277,
    T_RS = 278,
    T_VARARG = 279,
    T_IF = 280,
    T_ELSE_IF = 281,
    T_ELSE = 282,
    T_FOR = 283,
    T_FOREACH = 284,
    T_WHILE = 285,
    T_CONTINUE = 286,
    T_BREAK = 287,
    T_RETURN = 288,
    T_IN = 289,
    T_THROW = 290,
    T_TRY = 291,
    T_CATCH = 292,
    UNDEFINED = 2
  };
#endif
/* Tokens.  */
#define END 0
#define T_EQ 258
#define T_INT 259
#define T_DOUBLE 260
#define T_ID 261
#define T_STR_LIT 262
#define T_FUNCTION 263
#define T_CLASS 264
#define T_NEW 265
#define T_IMPORT 266
#define T_AS 267
#define T_LTE 268
#define T_GTE 269
#define T_NEQ 270
#define T_INC 271
#define T_DEC 272
#define T_LA 273
#define T_LO 274
#define T_BT 275
#define T_BF 276
#define T_LS 277
#define T_RS 278
#define T_VARARG 279
#define T_IF 280
#define T_ELSE_IF 281
#define T_ELSE 282
#define T_FOR 283
#define T_FOREACH 284
#define T_WHILE 285
#define T_CONTINUE 286
#define T_BREAK 287
#define T_RETURN 288
#define T_IN 289
#define T_THROW 290
#define T_TRY 291
#define T_CATCH 292
#define UNDEFINED 2

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{


  long lval;
  double dval;
  char* id;
  char* stringliteral; 
  node *ast;


};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (ana_parser_state *pstate, yyscan_t scanner);

#endif /* !YY_YY_INCLUDE_ANA_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */



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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   783

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  264

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,     2,     2,     7,    56,     2,
      45,    46,     5,     3,    53,     4,    49,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    44,
      57,    59,    58,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,    55,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,    54,    48,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   134,   134,   138,   139,   143,   144,   145,   146,   147,
     148,   149,   153,   161,   165,   175,   193,   199,   207,   216,
     220,   227,   237,   244,   247,   252,   253,   254,   255,   256,
     257,   261,   267,   276,   279,   282,   283,   284,   285,   286,
     287,   291,   300,   304,   311,   318,   322,   328,   329,   330,
     331,   332,   333,   337,   340,   343,   349,   350,   354,   357,
     363,   366,   371,   377,   385,   389,   394,   400,   406,   409,
     412,   415,   418,   421,   425,   428,   434,   438,   445,   453,
     454,   458,   459,   463,   467,   474,   477,   483,   484,   485,
     486,   487,   491,   495,   496,   504,   505,   513,   514,   522,
     523,   531,   532,   540,   541,   546,   551,   559,   560,   565,
     570,   575,   583,   584,   589,   597,   598,   603,   611,   612,
     617,   622,   630,   631,   639,   643,   646,   649,   652,   655,
     661,   662,   666,   670,   677,   681,   684,   687,   690,   693,
     696
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"EOF\"", "error", "$undefined", "'+'", "'-'", "'*'", "'/'", "'%'",
  "\"==\"", "\"integer literal\"", "\"double literal\"", "\"identifier\"",
  "\"string literal\"", "\"keyword function\"", "\"keyword class\"",
  "\"keyword new\"", "\"keyword import\"", "\"keyword as\"", "\"<=\"",
  "\">=\"", "\"!=\"", "\"++\"", "\"--\"", "\"&&\"", "\"||\"",
  "\"true literal\"", "\"false literal\"", "\"<<\"", "\">>\"", "\"...\"",
  "\"keyword if\"", "\"keyword else if\"", "\"keyword else\"",
  "\"keyword for\"", "\"keyword foreach\"", "\"keyword while\"",
  "\"keyword continue\"", "\"keyword break\"", "\"keyword return\"",
  "\"keyword in\"", "\"keyword throw\"", "\"keyword try\"",
  "\"keyword catch\"", "\"character\"", "';'", "'('", "')'", "'{'", "'}'",
  "'.'", "':'", "'['", "']'", "','", "'|'", "'^'", "'&'", "'<'", "'>'",
  "'='", "'!'", "$accept", "program", "statements", "statement",
  "selection_stmt", "else_if_stmts", "elseif", "else_stmt",
  "if_statements", "if_statement", "throw_stmt", "trycatch_stmt",
  "stmt_group", "stmt", "import_stmt", "dotted_name", "import_name",
  "function_statements", "function_statement", "jump_statement",
  "optional_assignment_expression", "optional_as_modifier",
  "optional_extends", "function_def", "function_expression",
  "class_statements", "class_statement", "class_def", "primary_expression",
  "opt_key_vpairs", "key_vpairs", "keyvpair", "key",
  "optional_parameter_list", "function_params", "function_param",
  "constant", "basic_expression", "logical_or_expression",
  "logical_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "assignment_expression", "unary_expression",
  "optional_argument_list", "argument_list", "argument",
  "postfix_expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    43,    45,    42,    47,    37,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,     2,    59,    40,    41,   123,   125,    46,
      58,    91,    93,    44,   124,    94,    38,    60,    62,    61,
      33
};
# endif

#define YYPACT_NINF -182

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-182)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -182,    11,   723,  -182,    25,    25,  -182,  -182,  -182,  -182,
       7,     9,    19,    25,    25,  -182,  -182,   -23,    -5,    17,
      26,    25,    28,    25,    21,    25,    25,  -182,  -182,    34,
    -182,    38,  -182,  -182,  -182,  -182,  -182,  -182,    18,    61,
      41,   -11,    36,     4,    -9,    31,    64,    20,    52,    39,
      32,    54,  -182,  -182,    57,     2,    47,  -182,   -10,  -182,
    -182,  -182,    25,    25,    90,    25,  -182,  -182,    58,  -182,
    -182,    59,    53,  -182,    62,  -182,    63,    55,  -182,  -182,
    -182,  -182,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,  -182,    25,  -182,  -182,    25,    98,    25,     2,  -182,
      99,    65,    66,  -182,   102,    67,   105,    19,  -182,    71,
      74,    81,    82,   257,  -182,  -182,    21,    25,  -182,    25,
      61,  -182,    41,   -11,    36,     4,    -9,    -9,    -9,    31,
      31,    31,    31,    64,    64,    20,    20,  -182,  -182,  -182,
    -182,    83,  -182,    78,    85,  -182,    86,     2,  -182,  -182,
    -182,  -182,    87,    25,    25,    88,  -182,  -182,    25,    94,
    -182,    95,  -182,  -182,    96,    97,   119,  -182,  -182,  -182,
    -182,  -182,    91,  -182,  -182,    -7,  -182,   120,   121,  -182,
    -182,  -182,   123,  -182,  -182,  -182,  -182,  -182,   303,   154,
    -182,  -182,  -182,   349,    25,   122,   395,   159,   441,  -182,
    -182,   127,  -182,   128,  -182,   129,   130,    56,  -182,  -182,
     131,  -182,   132,   133,   134,   135,  -182,  -182,   136,  -182,
    -182,  -182,  -182,  -182,   138,   137,    56,  -182,  -182,  -182,
    -182,  -182,  -182,   139,   487,   140,    25,  -182,  -182,  -182,
    -182,  -182,  -182,   142,   533,   579,   625,   143,  -182,  -182,
    -182,  -182,   671,  -182
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,     0,     0,    87,    88,    68,    89,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,    75,   131,     0,     3,    10,     0,
       9,     0,     6,    73,     8,   135,    69,   122,    92,    93,
      95,    97,    99,   101,   103,   107,   112,   115,     0,   118,
     124,     0,   128,   127,     0,    82,    61,    44,    59,    42,
     126,   125,     0,     0,     0,     0,    31,    34,     0,    79,
      80,     0,    74,    76,     0,   134,     0,   130,   132,   129,
      11,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,   139,   140,   131,     0,     0,    82,    85,
       0,     0,    81,    83,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,    70,    71,     0,     0,    72,     0,
      94,   118,    96,    98,   100,   102,   104,   105,   106,   110,
     111,   108,   109,   113,   114,   116,   117,   119,   120,   121,
     123,     0,   138,     0,     0,    86,     0,     0,    60,    65,
      58,    43,     0,     0,     0,     0,    55,    54,    57,     0,
      38,     0,    37,    33,     0,     0,     0,    77,    78,   133,
     137,   136,     0,    46,    84,     0,    24,     0,     0,    24,
      53,    56,     0,    40,    36,    39,    35,    46,     0,     0,
      67,    66,    64,     0,     0,     0,     0,     0,     0,    63,
      50,     0,    49,     0,    45,     0,     0,    12,    28,    23,
       0,    27,     0,     0,     0,     0,    24,    16,     0,    62,
      52,    48,    51,    47,     0,     0,    13,    20,    14,    30,
      26,    29,    25,     0,     0,     0,     0,    24,    19,    15,
      24,    18,    34,     0,     0,     0,     0,     0,    22,    17,
      32,    24,     0,    21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,  -182,  -182,    -1,  -182,  -104,   -57,  -181,  -182,
       0,     1,   -72,  -182,     3,  -182,    68,    -8,  -182,  -119,
    -182,  -182,  -182,     6,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,    69,  -182,    84,  -182,    37,  -182,  -182,  -182,   111,
     117,   126,   118,   141,   -32,   -76,    -4,    -3,    -2,    60,
     100,  -182,    75,  -182
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    27,   218,   236,   237,   238,   203,   219,
     220,   221,   123,   173,   222,    58,    59,   198,   214,   223,
     190,   118,   115,    32,    33,   185,   202,    34,    35,    71,
      72,    73,    74,   111,   112,   113,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   224,    49,
      76,    77,    78,    50
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      48,    28,    29,    30,   175,    31,   199,   116,   206,    90,
      91,     3,    87,   109,   139,   140,   141,   142,    54,    66,
      56,    68,    62,    75,    88,    98,    99,   100,     4,     5,
      57,   110,    69,    70,     6,     7,     8,     9,    51,   117,
      63,   200,    82,    89,    85,   244,    13,    14,    92,    93,
      15,    16,    55,   103,   104,   136,   137,   138,    94,    95,
     119,   120,    64,   122,    52,    53,   254,    96,    97,   255,
      23,    65,    24,    60,    61,    67,    25,   105,    80,   215,
     262,   106,    81,   107,    83,    26,    79,   234,   235,   215,
     143,   144,    86,   145,   146,    84,   101,   114,   102,    55,
     150,   121,   108,    75,   124,   153,   126,   125,   129,   152,
     155,   156,   127,   158,   159,   128,   160,   162,   163,   157,
     164,   176,   170,   171,   172,   178,   174,    75,   165,   180,
     181,   182,   248,   183,   186,   189,   192,   175,   197,   193,
     194,   195,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   147,   148,
     149,   187,   188,   196,   204,    54,   191,   205,   207,   226,
     228,   230,   231,   232,   233,   239,   240,   241,   242,   249,
     256,   243,   245,   246,   247,   161,   250,   252,   257,   208,
     261,   201,   154,   130,   184,   177,   216,   210,   211,   212,
     132,   213,   225,   134,   179,   151,   216,   210,   211,   212,
     133,   213,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   253,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,   170,   171,   172,     0,   174,
       4,     5,     0,     0,     0,     0,     6,     7,     8,     9,
      51,     0,     0,    12,     0,     0,     0,     0,    13,    14,
       0,     0,    15,    16,     0,     0,     0,    17,     0,     0,
      18,    19,    20,   166,   167,   168,     0,    21,    22,     0,
       0,     0,    23,     0,    24,   169,     4,     5,    25,     0,
       0,     0,     6,     7,     8,     9,    51,    26,     0,    12,
       0,     0,     0,     0,    13,    14,     0,     0,    15,    16,
       0,     0,     0,    17,     0,     0,    18,    19,    20,   166,
     167,   168,     0,    21,    22,     0,     0,     0,    23,     0,
      24,   209,     4,     5,    25,     0,     0,     0,     6,     7,
       8,     9,    51,    26,     0,    12,     0,     0,     0,     0,
      13,    14,     0,     0,    15,    16,     0,     0,     0,    17,
       0,     0,    18,    19,    20,   166,   167,   168,     0,    21,
      22,     0,     0,     0,    23,     0,    24,   217,     4,     5,
      25,     0,     0,     0,     6,     7,     8,     9,    51,    26,
       0,    12,     0,     0,     0,     0,    13,    14,     0,     0,
      15,    16,     0,     0,     0,    17,     0,     0,    18,    19,
      20,   166,   167,   168,     0,    21,    22,     0,     0,     0,
      23,     0,    24,   227,     4,     5,    25,     0,     0,     0,
       6,     7,     8,     9,    51,    26,     0,    12,     0,     0,
       0,     0,    13,    14,     0,     0,    15,    16,     0,     0,
       0,    17,     0,     0,    18,    19,    20,   166,   167,   168,
       0,    21,    22,     0,     0,     0,    23,     0,    24,   229,
       4,     5,    25,     0,     0,     0,     6,     7,     8,     9,
      51,    26,     0,    12,     0,     0,     0,     0,    13,    14,
       0,     0,    15,    16,     0,     0,     0,    17,     0,     0,
      18,    19,    20,   166,   167,   168,     0,    21,    22,     0,
       0,     0,    23,     0,    24,   251,     4,     5,    25,     0,
       0,     0,     6,     7,     8,     9,    51,    26,     0,    12,
       0,     0,     0,     0,    13,    14,     0,     0,    15,    16,
       0,     0,     0,    17,     0,     0,    18,    19,    20,   166,
     167,   168,     0,    21,    22,     0,     0,     0,    23,     0,
      24,   258,     4,     5,    25,     0,     0,     0,     6,     7,
       8,     9,    51,    26,     0,    12,     0,     0,     0,     0,
      13,    14,     0,     0,    15,    16,     0,     0,     0,    17,
       0,     0,    18,    19,    20,   166,   167,   168,     0,    21,
      22,     0,     0,     0,    23,     0,    24,   259,     4,     5,
      25,     0,     0,     0,     6,     7,     8,     9,    51,    26,
       0,    12,     0,     0,     0,     0,    13,    14,     0,     0,
      15,    16,     0,     0,     0,    17,     0,     0,    18,    19,
      20,   166,   167,   168,     0,    21,    22,     0,     0,     0,
      23,     0,    24,   260,     4,     5,    25,     0,     0,     0,
       6,     7,     8,     9,    51,    26,     0,    12,     0,     0,
       0,     0,    13,    14,     0,     0,    15,    16,     0,     0,
       0,    17,     0,     0,    18,    19,    20,   166,   167,   168,
       0,    21,    22,     0,     0,     0,    23,     0,    24,   263,
       0,     0,    25,     0,     0,     0,     4,     5,     0,     0,
       0,    26,     6,     7,     8,     9,    10,    11,     0,    12,
       0,     0,     0,     0,    13,    14,     0,     0,    15,    16,
       0,     0,     0,    17,     0,     0,    18,    19,    20,     0,
       0,     0,     0,    21,    22,     0,     0,     0,    23,     0,
      24,     0,     0,     0,    25,     0,     0,     0,     0,     0,
       0,     0,     0,    26
};

static const yytype_int16 yycheck[] =
{
       2,     2,     2,     2,   123,     2,    13,    17,   189,    18,
      19,     0,     8,    11,    90,    91,    92,    93,    11,    21,
      11,    23,    45,    25,    20,     5,     6,     7,     3,     4,
      11,    29,    11,    12,     9,    10,    11,    12,    13,    49,
      45,    48,    24,    39,    55,   226,    21,    22,    57,    58,
      25,    26,    45,    21,    22,    87,    88,    89,    27,    28,
      62,    63,    45,    65,     4,     5,   247,     3,     4,   250,
      45,    45,    47,    13,    14,    47,    51,    45,    44,   198,
     261,    49,    44,    51,    23,    60,    26,    31,    32,   208,
      94,    95,    56,    96,    97,    54,    44,    50,    59,    45,
     102,    11,    45,   105,    46,   107,    53,    48,    53,    11,
      11,    46,    50,    11,    47,    52,    11,    46,    44,    53,
      39,   123,   123,   123,   123,   127,   123,   129,    46,    46,
      52,    46,   236,    47,    47,    47,    42,   256,    47,    44,
      44,    44,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   163,   164,    44,    44,    11,   168,    46,    45,    47,
      11,    44,    44,    44,    44,    44,    44,    44,    44,   236,
     252,    46,    46,    45,    47,   117,    47,    47,    46,   197,
      47,   185,   108,    82,   157,   126,   198,   198,   198,   198,
      83,   198,   204,    85,   129,   105,   208,   208,   208,   208,
      84,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   256,   256,   256,   256,    -1,   256,
       3,     4,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,    22,
      -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    37,    38,    -1,    40,    41,    -1,
      -1,    -1,    45,    -1,    47,    48,     3,     4,    51,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    60,    -1,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    33,    34,    35,    36,
      37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,
      47,    48,     3,     4,    51,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    60,    -1,    16,    -1,    -1,    -1,    -1,
      21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,    45,    -1,    47,    48,     3,     4,
      51,    -1,    -1,    -1,     9,    10,    11,    12,    13,    60,
      -1,    16,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,    34,
      35,    36,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    48,     3,     4,    51,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    60,    -1,    16,    -1,    -1,
      -1,    -1,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,
       3,     4,    51,    -1,    -1,    -1,     9,    10,    11,    12,
      13,    60,    -1,    16,    -1,    -1,    -1,    -1,    21,    22,
      -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    37,    38,    -1,    40,    41,    -1,
      -1,    -1,    45,    -1,    47,    48,     3,     4,    51,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    60,    -1,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    33,    34,    35,    36,
      37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,
      47,    48,     3,     4,    51,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    60,    -1,    16,    -1,    -1,    -1,    -1,
      21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,    45,    -1,    47,    48,     3,     4,
      51,    -1,    -1,    -1,     9,    10,    11,    12,    13,    60,
      -1,    16,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,    34,
      35,    36,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    48,     3,     4,    51,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    60,    -1,    16,    -1,    -1,
      -1,    -1,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,
      -1,    -1,    51,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    60,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    33,    34,    35,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,
      47,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,    63,     0,     3,     4,     9,    10,    11,    12,
      13,    14,    16,    21,    22,    25,    26,    30,    33,    34,
      35,    40,    41,    45,    47,    51,    60,    64,    65,    71,
      72,    75,    84,    85,    88,    89,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     114,    13,   110,   110,    11,    45,    11,    11,    76,    77,
     110,   110,    45,    45,    45,    45,   109,    47,   109,    11,
      12,    90,    91,    92,    93,   109,   111,   112,   113,   110,
      44,    44,    24,    23,    54,    55,    56,     8,    20,    39,
      18,    19,    57,    58,    27,    28,     3,     4,     5,     6,
       7,    44,    59,    21,    22,    45,    49,    51,    45,    11,
      29,    94,    95,    96,    50,    83,    17,    49,    82,   109,
     109,    11,   109,    73,    46,    48,    53,    50,    52,    53,
     100,   110,   101,   102,   103,   104,   105,   105,   105,   106,
     106,   106,   106,   107,   107,   108,   108,   110,   110,   110,
     109,   111,    11,   109,    94,    11,    46,    53,    11,    47,
      11,    77,    46,    44,    39,    46,    36,    37,    38,    48,
      65,    71,    72,    74,    75,    80,   109,    92,   109,   113,
      46,    52,    46,    47,    96,    86,    47,   109,   109,    47,
      81,   109,    42,    44,    44,    44,    44,    47,    78,    13,
      48,    84,    87,    69,    44,    46,    69,    45,    78,    48,
      65,    71,    72,    75,    79,    80,   109,    48,    65,    70,
      71,    72,    75,    80,   109,   109,    47,    48,    11,    48,
      44,    44,    44,    44,    31,    32,    66,    67,    68,    44,
      44,    44,    44,    46,    69,    46,    45,    47,    67,    68,
      47,    48,    47,   109,    69,    69,    73,    46,    48,    48,
      48,    47,    69,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    67,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    71,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    75,    76,    76,    77,    78,    78,    79,    79,    79,
      79,    79,    79,    80,    80,    80,    81,    81,    82,    82,
      83,    83,    84,    85,    86,    86,    87,    88,    89,    89,
      89,    89,    89,    89,    90,    90,    91,    91,    92,    93,
      93,    94,    94,    95,    95,    96,    96,    97,    97,    97,
      97,    97,    98,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   105,   105,   105,
     105,   105,   106,   106,   106,   107,   107,   107,   108,   108,
     108,   108,   109,   109,   110,   110,   110,   110,   110,   110,
     111,   111,   112,   112,   113,   114,   114,   114,   114,   114,
     114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     2,     1,     1,
       1,     2,     7,     8,     8,     9,     7,    11,     9,     2,
       1,     7,     4,     2,     0,     2,     2,     1,     1,     2,
       2,     2,    11,     2,     0,     2,     2,     1,     1,     2,
       2,     3,     1,     3,     1,     2,     0,     2,     2,     1,
       1,     2,     2,     2,     1,     1,     1,     0,     2,     0,
       2,     0,     8,     7,     2,     0,     1,     6,     1,     1,
       3,     3,     3,     1,     1,     0,     1,     3,     3,     1,
       1,     1,     0,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     3,     1,     2,     2,     2,     2,     2,
       1,     0,     1,     3,     1,     1,     4,     4,     3,     2,
       2
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
      yyerror (&yylloc, pstate, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, pstate, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ana_parser_state *pstate, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (pstate);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ana_parser_state *pstate, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, pstate, scanner);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ana_parser_state *pstate, yyscan_t scanner)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , pstate, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, pstate, scanner); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ana_parser_state *pstate, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (pstate);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (ana_parser_state *pstate, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */

{
  /* To get rid of $undefined */
  /* Do stuff here for things to do before the parsing starts */
}


  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    { pstate->ast = (yyvsp[0].ast); }

    break;

  case 3:

    { (yyval.ast) = add_child(pstate, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 4:

    { (yyval.ast) = program_node(pstate);      }

    break;

  case 5:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 6:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 7:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 8:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 9:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 10:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 11:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 12:

    {
    (yyval.ast) = list_node(pstate, COMO_AST_IF);
    // assignment_expression
    add_child(pstate, (yyval.ast), (yyvsp[-4].ast));
    // if_statement suite
    add_child(pstate, (yyval.ast), (yyvsp[-1].ast));
  }

    break;

  case 13:

    {
    (yyval.ast) = compound_if_node(pstate, (yyvsp[-5].ast), (yyvsp[-2].ast), (yyvsp[0].ast), NULL);
  }

    break;

  case 14:

    { 
    (yyval.ast) = list_node(pstate, COMO_AST_IF);
    // assignment_expression
    add_child(pstate, (yyval.ast), (yyvsp[-5].ast));
    // statement_suite
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    // optional else_stmt
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 15:

    {
    //$$ = list_node(pstate, COMO_AST_COMPOUND_IF_STATEMENT);
    
    (yyval.ast) = compound_if_node(pstate, (yyvsp[-6].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast));

    // assignment_expression
    //add_child(pstate, $$, $3);

    //if_statements
    //add_child(pstate, $$, $6);  
  
    // else_if_stmts
    //add_child(pstate, $$, $8);

    // else_stmt
    //add_child(pstate, $$, $9);
  }

    break;

  case 16:

    {
    (yyval.ast) = list_node(pstate, COMO_AST_WHILE);
    add_child(pstate, (yyval.ast), (yyvsp[-4].ast));
    add_child(pstate, (yyval.ast), (yyvsp[-1].ast));     
  }

    break;

  case 17:

    {
    (yyval.ast) = list_node(pstate, COMO_AST_FOR);
    add_child(pstate, (yyval.ast), (yyvsp[-8].ast));
    add_child(pstate, (yyval.ast), (yyvsp[-6].ast));
    add_child(pstate, (yyval.ast), (yyvsp[-4].ast));     
    add_child(pstate, (yyval.ast), (yyvsp[-1].ast));
  }

    break;

  case 18:

    {
    (yyval.ast) = list_node(pstate, COMO_AST_FOREACH);
    add_child(pstate, (yyval.ast), id_node(pstate, (yyvsp[-6].id)));
    add_child(pstate, (yyval.ast), (yyvsp[-4].ast));
    add_child(pstate, (yyval.ast), (yyvsp[-1].ast));
  }

    break;

  case 19:

    { 
    (yyval.ast) = (yyvsp[-1].ast);
    add_child(pstate, (yyval.ast), (yyvsp[0].ast)); 
  }

    break;

  case 20:

    { 
    (yyval.ast) = list_node(pstate, COMO_AST_ELSE_IF_SUITE); 
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 21:

    {
    (yyval.ast) = list_node(pstate, COMO_AST_ELSE_IF);
    // assignment expression
    add_child(pstate, (yyval.ast), (yyvsp[-4].ast));
    // statements
    add_child(pstate, (yyval.ast), (yyvsp[-1].ast));
  }

    break;

  case 22:

    {
    (yyval.ast) = list_node(pstate, COMO_AST_ELSE_SUITE);
    add_child(pstate, (yyval.ast), (yyvsp[-1].ast));
  }

    break;

  case 23:

    {
    (yyval.ast) = add_child(pstate, (yyvsp[-1].ast), (yyvsp[0].ast)); 
  }

    break;

  case 24:

    { 
    (yyval.ast) = list_node(pstate, COMO_AST_LIST);
  }

    break;

  case 25:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 26:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 27:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 28:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 29:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 30:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 31:

    { 
    (yyval.ast) = throw_node(pstate, (yyvsp[0].ast)); 
  }

    break;

  case 32:

    {
    (yyval.ast) = list_node(pstate, COMO_AST_TRY);
    add_child(pstate, (yyval.ast), (yyvsp[-8].ast));
    add_child(pstate, (yyval.ast), id_node(pstate, (yyvsp[-4].id)));
    add_child(pstate, (yyval.ast), (yyvsp[-1].ast));
  }

    break;

  case 33:

    { (yyval.ast) = (yyvsp[-1].ast);
    add_child(pstate, (yyvsp[-1].ast), (yyvsp[0].ast));
  }

    break;

  case 34:

    { (yyval.ast) = list_node(pstate, COMO_AST_LIST); }

    break;

  case 35:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 36:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 37:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 38:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 39:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 40:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 41:

    {
    (yyval.ast) = import_node(pstate, (yyvsp[-1].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 42:

    { 
    (yyval.ast) = list_node(pstate, COMO_AST_LIST); 
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 43:

    { 
    (yyval.ast) = (yyvsp[-2].ast);
    add_child(pstate, (yyvsp[-2].ast), (yyvsp[0].ast));
  }

    break;

  case 44:

    { 
    (yyval.ast) = id_node(pstate, (yyvsp[0].id));
  }

    break;

  case 45:

    { 
    (yyval.ast) = (yyvsp[-1].ast); 
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 46:

    { 
    (yyval.ast) = list_node(pstate, COMO_AST_LIST); 
  }

    break;

  case 47:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 48:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 49:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 50:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 51:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 52:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 53:

    {
    (yyval.ast) = return_node(pstate, (yyvsp[0].ast));
  }

    break;

  case 54:

    {
    (yyval.ast) = break_node(pstate);
  }

    break;

  case 55:

    {
    (yyval.ast) = continue_node(pstate);
}

    break;

  case 56:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 57:

    { (yyval.ast) = NULL; }

    break;

  case 58:

    {
    (yyval.ast) = id_node(pstate, (yyvsp[0].id));
  }

    break;

  case 59:

    { 
    (yyval.ast) = NULL; 
  }

    break;

  case 60:

    {
    (yyval.ast) = id_node(pstate, (yyvsp[0].id));
  }

    break;

  case 61:

    {
  (yyval.ast) = NULL;
}

    break;

  case 62:

    { ;
    (yyval.ast) = function_node(pstate, (yyvsp[-6].id), (yyvsp[-4].ast), (yyvsp[-1].ast)); 
  }

    break;

  case 63:

    { 
    printf("function expression are not implemented yet\n");
    exit(1);
    (yyval.ast) = function_node(pstate, "<anonymous>", (yyvsp[-4].ast), (yyvsp[-1].ast));
  }

    break;

  case 64:

    { 
    (yyval.ast) = (yyvsp[-1].ast);  
    add_child(pstate, (yyval.ast), (yyvsp[0].ast)); 
  }

    break;

  case 65:

    { 
    (yyval.ast) = class_stmts_node(pstate); 
  }

    break;

  case 66:

    { 
    (yyval.ast) = class_method_node(pstate, 0, (yyvsp[0].ast));
  }

    break;

  case 67:

    { 
    (yyval.ast) = class_node(pstate, (yyvsp[-4].id), (yyvsp[-3].ast), (yyvsp[-1].ast)); 
  }

    break;

  case 68:

    {
    (yyval.ast) = id_node(pstate, (yyvsp[0].id)); 
  }

    break;

  case 69:

    { 
    (yyval.ast) = (yyvsp[0].ast);                                
  }

    break;

  case 70:

    {
    (yyval.ast) = (yyvsp[-1].ast);                      
   }

    break;

  case 71:

    { 
    (yyval.ast) = object_node(pstate, (yyvsp[-1].ast));                  
  }

    break;

  case 72:

    { 
    (yyval.ast) = array_node(pstate, (yyvsp[-1].ast)); 
  }

    break;

  case 73:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 74:

    { 
    (yyval.ast) = (yyvsp[0].ast); 
  }

    break;

  case 75:

    { 
    (yyval.ast) = list_node(pstate, COMO_AST_LIST); 
  }

    break;

  case 76:

    {     
    (yyval.ast) = list_node(pstate, COMO_AST_LIST);
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 77:

    { 
    add_child(pstate, (yyvsp[-2].ast), (yyvsp[0].ast));
    (yyval.ast) = (yyvsp[-2].ast); 
  }

    break;

  case 78:

    { 
    (yyval.ast) = list_node(pstate, COMO_AST_LIST);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 79:

    { (yyval.ast) = string_node(pstate, (yyvsp[0].id)); }

    break;

  case 80:

    { (yyval.ast) = string_node(pstate, (yyvsp[0].stringliteral)); }

    break;

  case 81:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 82:

    { (yyval.ast) = list_node(pstate, COMO_AST_LIST); }

    break;

  case 83:

    { 
    (yyval.ast) = list_node(pstate, COMO_AST_LIST);
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 84:

    { 
    add_child(pstate, (yyvsp[-2].ast), (yyvsp[0].ast));
    (yyval.ast) = (yyvsp[-2].ast);
 }

    break;

  case 85:

    { 
    (yyval.ast) = id_node(pstate, (yyvsp[0].id));
  }

    break;

  case 86:

    {
    (yyval.ast) = vararg_node(pstate, (yyvsp[0].id));
  }

    break;

  case 87:

    { (yyval.ast) = int_node(pstate, (yyvsp[0].lval));           }

    break;

  case 88:

    { (yyval.ast) = double_node(pstate, (yyvsp[0].dval));        }

    break;

  case 89:

    { (yyval.ast) = string_node(pstate, (yyvsp[0].stringliteral));        }

    break;

  case 90:

    { (yyval.ast) = bool_node(pstate, 1);           }

    break;

  case 91:

    { (yyval.ast) = bool_node(pstate, 0);           }

    break;

  case 92:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 93:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 94:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_OR);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 95:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 96:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_AND);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 97:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 98:

    { 
    printf("| operator is not implemented yet\n");
    exit(1);
    (yyval.ast) = (yyvsp[-2].ast); 
  }

    break;

  case 99:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 100:

    { 
    printf("binary ^ operator is not implemented yet\n");
    exit(1);
    (yyval.ast) = (yyvsp[-2].ast); 
  }

    break;

  case 101:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 102:

    { 
    printf("binary & operator is not implemented yet\n");
    exit(1);
    (yyval.ast) = (yyvsp[-2].ast); 
  }

    break;

  case 103:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 104:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_EQUAL);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 105:

    {
    (yyval.ast) = binary_op(pstate, COMO_AST_NOT_EQUAL);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 106:

    {
    (yyval.ast) = binary_op(pstate, COMO_AST_IN);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));   
  }

    break;

  case 107:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 108:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_LT);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 109:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_GT);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 110:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_LTE);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 111:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_GTE);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 112:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 113:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_LEFT_SHIFT);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast)); 
  }

    break;

  case 114:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_RIGHT_SHIFT);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast)); 
  }

    break;

  case 115:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 116:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_ADD);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 117:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_SUB);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast)); 
  }

    break;

  case 118:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 119:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_MUL);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 120:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_DIV);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 121:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_REM);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 122:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 123:

    { 
    (yyval.ast) = binary_op(pstate, COMO_AST_ASSIGN);
    add_child(pstate, (yyval.ast), (yyvsp[-2].ast));
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 124:

    { 
    (yyval.ast) = (yyvsp[0].ast); 
  }

    break;

  case 125:

    { 
    (yyval.ast) = unary_node(pstate, (yyvsp[0].ast), COMO_AST_PREFIXDEC);
  }

    break;

  case 126:

    { 
    (yyval.ast) = unary_node(pstate, (yyvsp[0].ast), COMO_AST_PREFIXINC);
  }

    break;

  case 127:

    { 
    (yyval.ast) = unary_node(pstate, (yyvsp[0].ast), COMO_AST_UNARY_MINUS);
  }

    break;

  case 128:

    { 
    (yyval.ast) = unary_node(pstate, (yyvsp[0].ast), COMO_AST_UNARY_PLUS); 
  }

    break;

  case 129:

    { 
    (yyval.ast) = unary_node(pstate, (yyvsp[0].ast), COMO_AST_UNARY_NOT); 
  }

    break;

  case 130:

    { (yyval.ast) = (yyvsp[0].ast);                               }

    break;

  case 131:

    { (yyval.ast) = list_node(pstate, COMO_AST_LIST); }

    break;

  case 132:

    { 
    (yyval.ast) = list_node(pstate, COMO_AST_LIST);
    add_child(pstate, (yyval.ast), (yyvsp[0].ast));
  }

    break;

  case 133:

    { 
    add_child(pstate, (yyvsp[-2].ast), (yyvsp[0].ast));
    (yyval.ast) = (yyvsp[-2].ast);
  }

    break;

  case 134:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 135:

    { 
    (yyval.ast) = (yyvsp[0].ast); 
  }

    break;

  case 136:

    { 
    (yyval.ast) = index_node(pstate, (yyvsp[-3].ast), (yyvsp[-1].ast));
  }

    break;

  case 137:

    { 
    (yyval.ast) = call_node(pstate, (yyvsp[-3].ast), (yyvsp[-1].ast));
  }

    break;

  case 138:

    { 
    (yyval.ast) = property_node(pstate, (yyvsp[-2].ast), (yyvsp[0].id));
  }

    break;

  case 139:

    { 
    (yyval.ast) = postfix_node(pstate, (yyvsp[-1].ast), COMO_AST_POSTFIXINC); 
  }

    break;

  case 140:

    { 
    (yyval.ast) = postfix_node(pstate, (yyvsp[-1].ast), COMO_AST_POSTFIXDEC); 
  }

    break;



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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, pstate, scanner, YY_("syntax error"));
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
        yyerror (&yylloc, pstate, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, pstate, scanner);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, pstate, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, pstate, scanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, pstate, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, pstate, scanner);
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


