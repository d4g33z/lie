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
#line 3 "parser.y" /* yacc.c:339  */

#include "lie.h"

#line 70 "parser.c" /* yacc.c:339  */

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
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    IF = 1,
    THEN = 2,
    ELSE = 3,
    FI = 4,
    FOR = 5,
    TO = 6,
    DOWNTO = 7,
    IN = 8,
    ROW = 9,
    WHILE = 10,
    DO = 11,
    OD = 12,
    LOC = 13,
    RETURN = 14,
    BREAK = 15,
    MAKE = 16,
    APPLY = 17,
    ON = 20,
    OFF = 21,
    SETDEFAULT = 22,
    SAVESTATE = 23,
    RESTORESTATE = 24,
    TYPEID = 25,
    HELP = 31,
    WHATTYPE = 32,
    EDIT = 33,
    READ = 34,
    WRITE = 35,
    MONFIL = 36,
    LEARN = 37,
    EXEC = 38,
    QUIT = 39,
    LISTCOMMAND = 41,
    MAXNODES = 44,
    MAXOBJECTS = 45,
    WRITEHELP = 18,
    APPENDHELP = 19,
    INT = 26,
    NUMBER = 27,
    GROUPID = 28,
    IDENT = 29,
    DOLLAR = 30,
    TEXT = 40,
    ANY_STRING = 42,
    ENTER = 43,
    SEMICOLON = 46,
    COMMA = 47,
    BAR = 48,
    COLON = 49,
    LPAR = 50,
    RPAR = 51,
    LBRACE = 52,
    RBRACE = 53,
    LBRACK = 54,
    RBRACK = 55,
    OR = 56,
    AND = 57,
    NOT = 58,
    TIMES = 59,
    POWER = 60,
    X = 61,
    BECOMES = 62,
    PLUSAB = 63,
    RELOP = 64,
    ADDOP = 65,
    DIVOP = 66
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "parser.y" /* yacc.c:355  */

	  short sub;
	  long val;
	  bigint* num;
	  symblst sym;
	  char* text;
	

#line 188 "parser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 50 "parser.y" /* yacc.c:358  */

#include "parseaux.c"

#line 208 "parser.c" /* yacc.c:358  */

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
#define YYFINAL  114
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   508

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  252

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   257

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    38,    39,
      20,    21,    22,    23,    24,    25,    40,    41,    42,    43,
      44,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      45,    35,    46,    47,    36,    37,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    57,    65,    66,    77,    85,    89,    95,
      97,    99,   101,   103,   107,   111,   115,   119,   124,   126,
     130,   136,   154,   155,   161,   164,   165,   166,   167,   171,
     172,   173,   175,   177,   179,   181,   183,   185,   188,   191,
     193,   195,   197,   201,   202,   207,   211,   213,   215,   219,
     232,   245,   245,   249,   251,   253,   256,   258,   260,   262,
     264,   267,   269,   271,   274,   278,   283,   285,   288,   290,
     292,   295,   297,   300,   302,   306,   308,   310,   312,   316,
     316,   319,   329,   333,   334,   335,   336,   337,   339,   341,
     345,   349,   353,   355,   357,   358,   361,   363,   365,   367,
     369,   371,   375,   376,   379,   380,   385,   393,   395,   397,
     399,   403,   404,   409,   413,   414,   419,   420,   424,   430,
     435,   436
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "THEN", "ELSE", "FI", "FOR", "TO",
  "DOWNTO", "IN", "ROW", "WHILE", "DO", "OD", "LOC", "RETURN", "BREAK",
  "MAKE", "APPLY", "ON", "OFF", "SETDEFAULT", "SAVESTATE", "RESTORESTATE",
  "TYPEID", "HELP", "WHATTYPE", "EDIT", "READ", "WRITE", "MONFIL", "LEARN",
  "EXEC", "QUIT", "LISTCOMMAND", "MAXNODES", "MAXOBJECTS", "WRITEHELP",
  "APPENDHELP", "INT", "NUMBER", "GROUPID", "IDENT", "DOLLAR", "TEXT",
  "ANY_STRING", "ENTER", "SEMICOLON", "COMMA", "BAR", "COLON", "LPAR",
  "RPAR", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "OR", "AND", "NOT",
  "TIMES", "POWER", "X", "BECOMES", "PLUSAB", "RELOP", "ADDOP", "DIVOP",
  "$accept", "command", "block", "series", "statlist", "statement", "on",
  "assignment", "expression", "logical_expr", "op1", "op2", "op3",
  "arithmetic_expr", "op6", "op7", "op8", "monadic_expr", "secondary",
  "selection", "primary", "var", "group", "simple_group",
  "function_definition", "formals", "joined_formals", "varlist",
  "list_option", "list", "string_opt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      20,    21,    22,    23,    24,    25,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    41,    44,    45,    18,    19,
      26,    27,    28,    29,    30,    40,    42,    43,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66
};
# endif

#define YYPACT_NINF -73

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-73)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     228,   395,    14,   395,    39,   395,   395,   -37,   -26,   -17,
      64,   395,   -73,   -73,    73,   441,    73,    73,    87,    73,
      73,    96,     1,    98,    45,    80,   -73,   111,    29,   -73,
     -73,   -73,   287,   106,   395,   287,   395,   395,   441,   441,
     441,   153,   -73,   107,   -73,   109,   112,   -73,   100,   -73,
     101,   -73,   -73,    51,    71,    97,   -73,    99,    65,    41,
     -73,   -73,   121,   -73,   117,   113,    10,   -73,     2,     9,
     102,   100,   100,    17,    17,   -73,   -73,   -73,   100,   -73,
      62,   441,   -27,   125,   126,   127,   128,   129,   131,   -73,
     -73,   134,   -73,   135,   -73,   -73,   315,   395,   395,    38,
     -73,   136,   100,   115,    -8,   130,   100,   132,   139,   -73,
      70,   -73,   -73,   -73,   -73,   -73,   287,   -73,   395,   395,
     395,   441,   441,   441,   441,   441,   441,    35,   395,   441,
     441,   -73,   -73,   367,   287,   441,   441,   441,   287,   395,
     -73,   141,   144,   138,   148,   -73,    -4,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,    17,   -18,   145,   147,
     -25,   100,   100,   -73,   -73,   -73,   149,   -73,   395,   -73,
     101,    51,   -73,    70,   -73,    70,   146,    71,    97,    97,
     -73,   -73,   -73,    -5,   146,   146,   -73,   142,     4,     5,
      -2,   183,   100,   441,   441,   155,   156,   157,   -73,   287,
     287,    32,   189,   -73,   395,   100,   -73,   287,   -73,   287,
     287,   441,   441,   -73,   -12,   -24,   -73,   -73,    17,   160,
     -73,   287,   287,   -73,    82,   202,   203,   204,     6,     8,
     441,   -73,   441,   -73,   -73,   161,   -73,   -73,   -73,   -73,
     -73,   287,   287,     3,    16,   -73,   205,   206,   -73,   -73,
     -73,   -73
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    33,    34,     0,     0,    43,
      40,    35,    41,    42,   120,     0,   120,   120,     0,   120,
     120,     0,     0,     0,     0,     0,    84,     0,   102,   103,
      85,     2,     0,     0,     0,     0,   116,     0,     0,     0,
       0,     0,    94,     0,    24,    25,    39,    29,    30,    51,
      55,    60,    63,    52,    67,    70,    72,    74,    78,    79,
      80,    83,    86,   104,     0,   102,     0,    79,     0,     0,
       0,    31,    32,     0,     0,    44,    45,    38,    36,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
      13,     0,    11,     0,     9,   106,     0,     0,     0,   102,
      28,     0,     0,    51,    52,     0,   118,     0,   117,    61,
      62,    76,    77,    75,     1,     3,    26,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,     4,     0,     0,     0,     0,     0,     0,     0,
     102,     0,     0,     0,     0,    16,     0,    20,     6,     5,
       7,     8,    17,    21,    12,    10,     0,    87,     0,   111,
       0,    46,    48,    18,    65,    93,    22,    92,     0,    27,
      53,    54,    56,    57,    58,    59,    64,    66,    68,    69,
      71,    73,    82,     0,    49,    50,    87,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,   114,   113,     0,
       0,     0,     0,    88,     0,   119,    81,     0,    96,     0,
       0,     0,     0,    97,     0,     0,    14,    15,     0,     0,
     108,     0,     0,   112,     0,     0,     0,     0,     0,     0,
       0,    89,     0,   115,   110,     0,   107,    23,    95,   100,
     101,     0,     0,     0,     0,   109,     0,     0,    90,    91,
      98,    99
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -73,   -73,   -73,   -30,   -28,   -73,   -73,   -73,    28,   190,
     108,   -21,   -73,    -7,   105,    26,   103,   -29,   -73,     0,
     110,   -72,   -73,   167,   -73,    31,   -73,    12,   -73,   -33,
     124
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    67,
      60,    61,    62,    63,    64,   158,   159,   198,   107,   160,
      80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      59,   141,   142,   108,   100,   105,   211,   212,    82,   111,
     112,   113,   135,   136,   134,    73,   109,   209,   210,   241,
     147,   242,   138,    75,   168,   232,    74,   104,   203,    66,
     110,    69,    59,    71,    72,    59,   199,   230,     1,    78,
     122,   231,     2,   122,   168,   165,   200,     3,    89,   165,
      76,   120,   206,     7,     8,   122,   248,    68,   121,   122,
     140,    29,   102,   122,   106,   122,   137,   118,   118,   249,
     122,   122,   122,   122,   146,   122,    26,    27,    65,    29,
      30,    96,    70,   122,   197,    91,   221,    81,   169,    35,
     133,    36,    92,    97,    98,   183,   222,   181,   172,   174,
     143,   144,    97,    98,   187,   129,   130,    77,   191,   145,
     120,   171,   173,   175,   176,   127,    59,   121,   122,    79,
      93,   128,   184,   185,   106,   161,   162,    94,   188,   189,
     190,   168,   123,    85,    59,   237,   121,   122,    59,   124,
      83,    84,    88,    86,    87,    90,   197,   207,   208,   178,
     179,    95,   101,   114,   115,   117,   106,   116,   118,   125,
     119,   106,   126,    27,   132,   133,   139,   192,   164,   219,
     220,   224,   148,   149,   150,   151,   152,   225,   153,   226,
     227,   154,   155,   163,   195,   166,   214,   215,   168,   167,
     193,   235,   236,   194,   196,   202,   205,   213,   201,    59,
      59,   204,   216,   217,   228,   229,   218,    59,   238,    59,
      59,   246,   247,   122,   156,   234,   245,   239,   240,   250,
     251,    59,    59,   243,   103,   244,   170,   177,   180,   131,
     233,     1,   106,   223,     0,     2,     0,   182,     0,     0,
       3,    59,    59,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,    26,
      27,    28,    29,    30,     0,    31,    32,     0,     0,    33,
      34,     0,    35,     0,    36,     0,     0,     0,    37,    38,
       1,    39,     0,     0,     2,    40,     0,     0,     0,     3,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     2,     0,     0,     0,     0,     3,    26,    27,
      99,    29,    30,     7,     8,    32,     0,     0,     0,    34,
     156,    35,     0,    36,     0,     0,     0,    37,    38,     0,
      39,     0,     0,     0,    40,     0,    26,    27,    65,    29,
      30,     0,     0,     0,     0,     0,     0,    34,   157,    35,
       1,    36,     0,     0,     2,    37,    38,     0,    39,     3,
       0,     0,    40,     0,     0,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     2,     0,     0,     0,     0,     3,    26,    27,
      65,    29,    30,     7,     8,     0,     0,     0,     0,    34,
     186,    35,     0,    36,     0,     0,     0,    37,    38,     0,
      39,     0,     0,     0,    40,     0,    26,    27,    65,    29,
      30,     0,     0,     0,     1,     0,     0,    34,     2,    35,
       0,    36,     0,     3,     0,    37,    38,     0,    39,     7,
       8,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    65,    29,    30,     0,     0,     0,
       0,     0,     0,    81,     0,    35,     0,    36,     0,     0,
       0,     0,    38,     0,    39,     0,     0,     0,    40
};

static const yytype_int16 yycheck[] =
{
       0,    73,    74,    36,    32,    35,     8,     9,    15,    38,
      39,    40,    10,    11,     4,    52,    37,    13,    13,    13,
      47,    13,    13,    40,    49,    49,    52,    34,    53,     1,
      37,     3,    32,     5,     6,    35,    54,    49,     3,    11,
      67,    53,     7,    67,    49,    53,    64,    12,    47,    53,
      67,    59,    57,    18,    19,    67,    53,    43,    66,    67,
      43,    44,    34,    67,    36,    67,    64,    58,    58,    53,
      67,    67,    67,    67,    81,    67,    41,    42,    43,    44,
      45,    52,    43,    67,   156,    40,    54,    52,   116,    54,
      52,    56,    47,    64,    65,   128,    64,   126,   119,   120,
      38,    39,    64,    65,   134,    64,    65,    43,   138,    47,
      59,   118,   119,   120,   121,    50,   116,    66,    67,    46,
      40,    56,   129,   130,    96,    97,    98,    47,   135,   136,
     137,    49,    61,    46,   134,    53,    66,    67,   138,    68,
      16,    17,    46,    19,    20,    47,   218,     5,     6,   123,
     124,    40,    46,     0,    47,    43,   128,    48,    58,    62,
      59,   133,    63,    42,    47,    52,    64,   139,    53,   199,
     200,   204,    47,    47,    47,    47,    47,   207,    47,   209,
     210,    47,    47,    47,    46,    55,   193,   194,    49,    57,
      49,   221,   222,    49,    46,    48,   168,    14,    53,   199,
     200,    52,    47,    47,   211,   212,    49,   207,     6,   209,
     210,   241,   242,    67,    25,    55,    55,    14,    14,    14,
      14,   221,   222,   230,    34,   232,   118,   122,   125,    62,
     218,     3,   204,   202,    -1,     7,    -1,   127,    -1,    -1,
      12,   241,   242,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    43,    44,    45,    -1,    47,    48,    -1,    -1,    51,
      52,    -1,    54,    -1,    56,    -1,    -1,    -1,    60,    61,
       3,    63,    -1,    -1,     7,    67,    -1,    -1,    -1,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    41,    42,
      43,    44,    45,    18,    19,    48,    -1,    -1,    -1,    52,
      25,    54,    -1,    56,    -1,    -1,    -1,    60,    61,    -1,
      63,    -1,    -1,    -1,    67,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
       3,    56,    -1,    -1,     7,    60,    61,    -1,    63,    12,
      -1,    -1,    67,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    41,    42,
      43,    44,    45,    18,    19,    -1,    -1,    -1,    -1,    52,
      53,    54,    -1,    56,    -1,    -1,    -1,    60,    61,    -1,
      63,    -1,    -1,    -1,    67,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    -1,     3,    -1,    -1,    52,     7,    54,
      -1,    56,    -1,    12,    -1,    60,    61,    -1,    63,    18,
      19,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    56,    -1,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,    12,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    41,    42,    43,    44,
      45,    47,    48,    51,    52,    54,    56,    60,    61,    63,
      67,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    43,    77,    88,    43,    77,
      43,    77,    77,    52,    52,    40,    67,    43,    77,    46,
      99,    52,    82,    99,    99,    46,    99,    99,    46,    47,
      47,    40,    47,    40,    47,    40,    52,    64,    65,    43,
      73,    46,    77,    78,    82,    72,    77,    97,    98,    80,
      82,    86,    86,    86,     0,    47,    48,    43,    58,    59,
      59,    66,    67,    61,    68,    62,    63,    50,    56,    64,
      65,    92,    47,    52,     4,    10,    11,    64,    13,    64,
      43,    90,    90,    38,    39,    47,    82,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    25,    53,    94,    95,
      98,    77,    77,    47,    53,    53,    55,    57,    49,    73,
      79,    82,    80,    82,    80,    82,    82,    83,    84,    84,
      85,    86,    89,    98,    82,    82,    53,    72,    82,    82,
      82,    72,    77,    49,    49,    46,    46,    90,    96,    54,
      64,    53,    48,    53,    52,    77,    57,     5,     6,    13,
      13,     8,     9,    14,    82,    82,    47,    47,    49,    72,
      72,    54,    64,    94,    98,    72,    72,    72,    82,    82,
      49,    53,    49,    96,    55,    72,    72,    53,     6,    14,
      14,    13,    13,    82,    82,    55,    72,    72,    53,    53,
      14,    14
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    72,    73,    73,    73,    73,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    75,    75,    75,    76,    76,    76,    76,
      76,    77,    77,    78,    78,    78,    79,    79,    79,    79,
      79,    80,    80,    80,    81,    81,    82,    82,    83,    83,
      83,    84,    84,    85,    85,    86,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    91,    91,    92,    93,    93,    93,
      93,    94,    94,    95,    96,    96,    97,    97,    98,    98,
      99,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     3,     3,     3,     3,     2,
       3,     2,     3,     2,     5,     5,     3,     3,     3,     2,
       3,     3,     3,     6,     1,     1,     2,     3,     2,     1,
       1,     2,     2,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     2,     2,     3,     4,     3,     3,
       3,     1,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     2,     2,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     2,     2,     2,     1,     1,
       1,     4,     3,     1,     1,     1,     1,     3,     4,     6,
       8,     8,     3,     3,     1,     7,     5,     5,     9,     9,
       7,     7,     1,     1,     1,     2,     2,     6,     5,     7,
       6,     1,     3,     2,     1,     3,     0,     1,     1,     3,
       0,     1
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
        case 3:
#line 58 "parser.y" /* yacc.c:1646  */
    { parsing = false; eval_type((yyvsp[-1].sym)); /* global_pt=0; */
	    (yyvsp[-1].sym)->type=ARGTYPE; eval_value((yyvsp[-1].sym));
	    if ((yyvsp[-1].sym)->data.val)
	    { addsym(match("$",false),(symblst) NULL, (yyvsp[-1].sym), VALUE);
	      vid_print((yyvsp[-1].sym)->data.val);
	    }
	  }
#line 1515 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "parser.y" /* yacc.c:1646  */
    { char *filename = (yyvsp[-1].text)==NULL ? initfil : (yyvsp[-1].text);
	    boolean istty = !no_terminal(cur_in);
	      /* not already reading from a file */
	    parsing=false;
	    if (!enter_input_file(filename))
	    { Printf("Not possible to read file %s.\n",filename);
	      YYERROR;
	    }
	    if (istty) strcpy(initfil, filename);
	  }
#line 1530 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 78 "parser.y" /* yacc.c:1646  */
    { char *filename = (yyvsp[-1].text)==NULL ? initfil : (yyvsp[-1].text);
	    parsing=false;
	    invoke_prog(editor,filename);
	    if (!enter_input_file(filename))
              Printf("File %s could not be read after editing.\n",filename);
            else strcpy(initfil,filename); /* set default for further reads */
	  }
#line 1542 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 86 "parser.y" /* yacc.c:1646  */
    { parsing=false;
	    listvars(top_definitions,(yyvsp[-1].text)); listfuns(top_definitions,(yyvsp[-1].text));
	  }
#line 1550 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 90 "parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].text)==NULL) Printf("%s\n",monfil);
	    else if (strlen((yyvsp[-1].text))>=LABELLENGTH)
	      error("File name %s too long.\n",(yyvsp[-1].text));
	    else strcpy(monfil,(yyvsp[-1].text)); 
	  }
#line 1560 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 96 "parser.y" /* yacc.c:1646  */
    { Printf("Maximum number of objects: %ld\n",(long)maxptrs); }
#line 1566 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 98 "parser.y" /* yacc.c:1646  */
    { parsing=false; newmem((yyvsp[-1].val)); }
#line 1572 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 100 "parser.y" /* yacc.c:1646  */
    { Printf("Maximum number of nodes: %ld\n",(long)maxnodes); }
#line 1578 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 102 "parser.y" /* yacc.c:1646  */
    { parsing=false; maxnodes = (yyvsp[-1].val); newtree(); }
#line 1584 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 104 "parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].sub)==2) listops(top_definitions,NULL,true);
	    else ((yyvsp[-1].sub)==0 ? listvars :listfuns)(top_definitions,NULL);
	  }
#line 1592 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 108 "parser.y" /* yacc.c:1646  */
    { char* s = (yyvsp[-3].text)!=NULL ? (yyvsp[-3].text) : (yyvsp[-4].sub) ? dir : help;
	    parsing=false; write_key(s,(yyvsp[-1].text),"w");
	  }
#line 1600 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 112 "parser.y" /* yacc.c:1646  */
    { char* s = (yyvsp[-3].text)!=NULL ? (yyvsp[-3].text) : (yyvsp[-4].sub) ? dir : help;
	    parsing=false; write_key(s,(yyvsp[-1].text),"a");
	  }
#line 1608 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 116 "parser.y" /* yacc.c:1646  */
    { char* s = (yyvsp[-1].text)!=NULL ? (yyvsp[-1].text) : (yyvsp[-2].sub) ? dir : help;
	    parsing=false; printexpr(s,TO_LOOK,true);
	  }
#line 1616 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 120 "parser.y" /* yacc.c:1646  */
    { parsing=false;
	    if (!Learn((yyvsp[-1].text)==NULL ? "index" : (yyvsp[-1].text)))
	      { Printf("Info about %s is not available.\n",(yyvsp[-1].text)); YYERROR; }
	  }
#line 1625 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 125 "parser.y" /* yacc.c:1646  */
    { parsing=false; invoke_prog((yyvsp[-1].text),""); }
#line 1631 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 127 "parser.y" /* yacc.c:1646  */
    { if (cur_in != stdin) {fclose(cur_in);cur_in=stdin; } 
	    stop = true;
	  }
#line 1639 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 131 "parser.y" /* yacc.c:1646  */
    { parsing=false;
	    eval_type((yyvsp[-1].sym));
	    Printf("%10s ",code_class((yyvsp[-1].sym)->class));
	    Printf("%10s \n",code_type((yyvsp[-1].sym)->type));
	  }
#line 1649 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 137 "parser.y" /* yacc.c:1646  */
    { entry pos = exec_learn((yyvsp[-1].text));
	    if (pos >= 0)
	    { cur_in=fopen(learnfil,"r");
	      if (!cur_in)
		{ Printf("%s not found.\n",learnfil); cur_in=stdin;YYERROR; }
	      if (fseek(cur_in,pos,0)<0)
	      { Printf("Unfortunate seek %s.\n",learnfil); cur_in=stdin;YYERROR;
	      }
	    }
	    else
	    { Printf("Info about %s is not available.\n",(yyvsp[-1].text));
	      cur_in = stdin; YYERROR;
	    }
	    lineno = 0;
	  }
#line 1669 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 154 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=B(block_name,(yyvsp[-1].sym)); }
#line 1675 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 156 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=B(block_name,(yyvsp[-4].sym)); (yyval.sym)->arglst = (yyvsp[-1].sym); add_dollar_names((yyvsp[-1].sym));
	    --tail_pt;
	  }
#line 1683 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 161 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)= addnode(1,seq_name,(yyvsp[0].sym)); }
#line 1689 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 166 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=(yyvsp[-2].sym); (yyval.sym)->next=(yyvsp[0].sym); }
#line 1695 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 167 "parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 1701 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 174 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(1,match("_return",false),(yyvsp[0].sym)); }
#line 1707 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 176 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(1,match("_break",false),(yyvsp[0].sym)); }
#line 1713 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 178 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(0,match("_return",false)); }
#line 1719 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 180 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(0,match("_break",false)); }
#line 1725 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 182 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(0,match("_setdefault",false)); }
#line 1731 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 184 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(1,match("_setdefault",false),(yyvsp[0].sym)); }
#line 1737 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match("_on",false)
		        ,addintnode((yyvsp[-1].sub)),addtekstnode(name_tab[(yyvsp[0].sub)])); }
#line 1744 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 189 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match("_off",false)
		        ,addintnode(OFFCODE),addtekstnode(name_tab[(yyvsp[0].sub)])); }
#line 1751 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 192 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(0,match("_on",false)); }
#line 1757 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 194 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(0,match("_off",false)); }
#line 1763 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 196 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(0,match("save_options",false)); }
#line 1769 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 198 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(0,match("restore_options",false)); }
#line 1775 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 201 "parser.y" /* yacc.c:1646  */
    { (yyval.sub) = ONCODE; }
#line 1781 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 203 "parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].val) < 0)
	      error("Argument %ld to 'on' is negative.\n",(long)((yyvsp[0].val)));
	    (yyval.sub) = (yyvsp[0].val);
	  }
#line 1790 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 207 "parser.y" /* yacc.c:1646  */
    { (yyval.sub) =  (yyvsp[0].sub)==0 ? PLUS : MINUS; }
#line 1796 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 212 "parser.y" /* yacc.c:1646  */
    { (yyval.sym) = addnode(2,match(".assign",false),addnamenode((yyvsp[-2].sub)),(yyvsp[0].sym)); }
#line 1802 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 214 "parser.y" /* yacc.c:1646  */
    { (yyval.sym) = addnode(2,match(".assign_loc",false),addnamenode((yyvsp[-2].sub)),(yyvsp[0].sym)); }
#line 1808 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 216 "parser.y" /* yacc.c:1646  */
    { (yyval.sym) = addnode(2,match(".+=",false),addnamenode((yyvsp[-2].sub)),(yyvsp[0].sym));
	    (yyval.sym)->arglst->type = UNKNOWN;
	  }
#line 1816 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 220 "parser.y" /* yacc.c:1646  */
    { /* a[i]=n	    = .update(a,n,i)) */
	    symblst lst = (yyvsp[-2].sym)->arglst;
	    check_variable((yyvsp[-2].sym)->arglst);
	    if ((yyvsp[-2].sym)->a.label->name == match(Select,false))
		(yyvsp[-2].sym)->a.label->name = match(update,false);
	    else 
		(yyvsp[-2].sym)->a.label->name = match(vecupdate,false);
	    /* insert n */
	    (yyvsp[0].sym)->next = lst->next; /* Points to indexes */
	    lst->next = (yyvsp[0].sym);
	    (yyval.sym) = (yyvsp[-2].sym);
	   }
#line 1833 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 233 "parser.y" /* yacc.c:1646  */
    { symblst lst = (yyvsp[-2].sym)->arglst;
	    check_variable((yyvsp[-2].sym)->arglst);
	    if ((yyvsp[-2].sym)->a.label->name == match(Select,false))
		(yyvsp[-2].sym)->a.label->name = match(plus_and_becomes,false);
	    else error("error with operator `+='.\n");
	    (yyvsp[0].sym)->next = lst->next; /* points to indexes */
	    lst->next = (yyvsp[0].sym);
	    (yyval.sym) = (yyvsp[-2].sym);
	   }
#line 1847 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 250 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match("||",false),(yyvsp[-2].sym),(yyvsp[0].sym)); }
#line 1853 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match("||",false),(yyvsp[-2].sym),(yyvsp[0].sym)); }
#line 1859 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 257 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match("&&",false),(yyvsp[-2].sym),(yyvsp[0].sym)); }
#line 1865 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 259 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match("&&",false),(yyvsp[-2].sym),(yyvsp[0].sym)); }
#line 1871 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 261 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match("&&",false),(yyvsp[-2].sym),(yyvsp[0].sym)); }
#line 1877 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 263 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match("&&",false),(yyvsp[-2].sym),(yyvsp[0].sym)); }
#line 1883 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(1,match("!",false),(yyvsp[0].sym)); }
#line 1889 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 270 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(1,match("!",false),(yyvsp[0].sym)); }
#line 1895 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 275 "parser.y" /* yacc.c:1646  */
    { static char s[][3]={ "==", "!=", "<", ">", "<=", ">=" };
	    (yyval.sym)=addnode(2,match(s[(yyvsp[-1].sub)],false),(yyvsp[-2].sym),(yyvsp[0].sym));
	  }
#line 1903 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 279 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=(yyvsp[-1].sym); }
#line 1909 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 284 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match((yyvsp[-1].sub)==0 ? "+" : "-",false),(yyvsp[-2].sym),(yyvsp[0].sym)); }
#line 1915 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 289 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match("*",false),(yyvsp[-2].sym),(yyvsp[0].sym)); }
#line 1921 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 291 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match((yyvsp[-1].sub)==0 ? "/" : "%",false),(yyvsp[-2].sym),(yyvsp[0].sym)); }
#line 1927 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match("^",false),(yyvsp[-2].sym),(yyvsp[0].sym)); }
#line 1933 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match("X",false),(yyvsp[-2].sym),(yyvsp[0].sym)); }
#line 1939 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 307 "parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].sub)==1) (yyval.sym)=addnode(1,match("-",false),(yyvsp[0].sym)); else (yyval.sym)=(yyvsp[0].sym); }
#line 1945 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 309 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(1,match("*",false),(yyvsp[0].sym)); }
#line 1951 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 311 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(1,match("X",false),(yyvsp[0].sym)); }
#line 1957 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 320 "parser.y" /* yacc.c:1646  */
    { symblst  lst = (yyvsp[-1].sym); int i = 0;
	    while (lst!=NULL) { lst=lst->next; ++i; }
	    if (i>2)
	    { parsing=false;
	      error("Indexing with %d subscripts; at most 2 are allowed.\n",i);
	    }
	    (yyval.sym)=addnode(2,match(Select,false),(yyvsp[-3].sym),(yyvsp[-1].sym));
	    --tail_pt;
	  }
#line 1971 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 330 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match("|",false),(yyvsp[-2].sym),(yyvsp[0].sym)); }
#line 1977 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 334 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addbigintnode((yyvsp[0].num)); }
#line 1983 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 338 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(0,(yyvsp[-2].sub)); }
#line 1989 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 340 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(1,(yyvsp[-3].sub),(yyvsp[-1].sym)); --tail_pt; }
#line 1995 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 342 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match(".make",false),(yyvsp[-3].sym),(yyvsp[-1].sym));
	    (yyvsp[-3].sym)->arglst=addintnode(0); 
	  }
#line 2003 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 346 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(3,match(".make",false),(yyvsp[-5].sym),(yyvsp[-3].sym),(yyvsp[-1].sym));
	    (yyvsp[-5].sym)->arglst=addintnode(0); (yyvsp[-5].sym)->arglst->next=addintnode(0);
	  }
#line 2011 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 350 "parser.y" /* yacc.c:1646  */
    { char* s=(yyvsp[-7].sub)==0 ? ".iapply" : (yyvsp[-7].sub)==1 ? ".vapply" : ".mapply";
	    (yyval.sym)=addnode(3,match(s,false),(yyvsp[-5].sym),(yyvsp[-3].sym),(yyvsp[-1].sym)); (yyvsp[-5].sym)->arglst=copytree((yyvsp[-1].sym));
	  }
#line 2019 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 354 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(1,match(".strucval",false),(yyvsp[-1].sym)); }
#line 2025 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 356 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=(yyvsp[-1].sym); }
#line 2031 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 359 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(3,match(".if",false)
		        ,(yyvsp[-5].sym),B(block_name,(yyvsp[-3].sym)),B(block_name,(yyvsp[-1].sym))); }
#line 2038 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 362 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match(".if",false),(yyvsp[-3].sym),B(block_name,(yyvsp[-1].sym))); }
#line 2044 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 364 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addwhile(match(".whilefun",false),(yyvsp[-3].sym),(yyvsp[-1].sym)); }
#line 2050 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 366 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addfor((yyvsp[-7].sub), (yyvsp[-5].sym), (yyvsp[-3].sym), (yyvsp[-1].sym), match(".forint",false)); }
#line 2056 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 368 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addfor((yyvsp[-7].sub), (yyvsp[-5].sym), (yyvsp[-3].sym), (yyvsp[-1].sym), match(".downforint",false)); }
#line 2062 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 370 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addfor((yyvsp[-5].sub), addintnode(0), (yyvsp[-3].sym), (yyvsp[-1].sym), match(".forvec",false)); }
#line 2068 "parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 372 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addfor((yyvsp[-5].sub), addvecnode(0), (yyvsp[-3].sym), (yyvsp[-1].sym), match(".format",false)); }
#line 2074 "parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 375 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(0,(yyvsp[0].sub)); }
#line 2080 "parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(0,(yyvsp[0].sub)); }
#line 2086 "parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 381 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=addnode(2,match("*",false),(yyvsp[-1].sym),(yyvsp[0].sym)); }
#line 2092 "parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 386 "parser.y" /* yacc.c:1646  */
    { if (wronggroup((yyvsp[-1].sub),(yyvsp[0].val)))
	      { Printf("Non-existent Lie group requested.\n"); YYERROR; }
	    (yyval.sym)=addgroupnode((yyvsp[-1].sub),(_index)(yyvsp[0].val));
	  }
#line 2101 "parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 394 "parser.y" /* yacc.c:1646  */
    { addsym((yyvsp[-5].sub),(yyvsp[-3].sym), (yyvsp[0].sym),FUNCTION); }
#line 2107 "parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 396 "parser.y" /* yacc.c:1646  */
    { addsym((yyvsp[-4].sub),NULL, (yyvsp[0].sym),FUNCTION ); }
#line 2113 "parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 398 "parser.y" /* yacc.c:1646  */
    { addsym((yyvsp[-6].sub),(yyvsp[-4].sym), (yyvsp[-1].sym),FUNCTION); }
#line 2119 "parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 400 "parser.y" /* yacc.c:1646  */
    { addsym((yyvsp[-5].sub),NULL,(yyvsp[-1].sym),FUNCTION ); }
#line 2125 "parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 405 "parser.y" /* yacc.c:1646  */
    { symblst* p=&(yyvsp[-2].sym); while (*p!=NULL) p=&(*p)->next; *p=(yyvsp[0].sym); (yyval.sym)=(yyvsp[-2].sym); }
#line 2131 "parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 410 "parser.y" /* yacc.c:1646  */
    { assigntype(type_code(keyword[TYPEID+(yyvsp[-1].sub)]),(yyvsp[0].sym)); (yyval.sym)=(yyvsp[0].sym); }
#line 2137 "parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 413 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=(yyvsp[0].sym); (yyval.sym)->next=NULL; }
#line 2143 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 414 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=(yyvsp[-2].sym); (yyvsp[-2].sym)->next=(yyvsp[0].sym); }
#line 2149 "parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 419 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=NULL; }
#line 2155 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 421 "parser.y" /* yacc.c:1646  */
    { --tail_pt; }
#line 2161 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 425 "parser.y" /* yacc.c:1646  */
    { ++tail_pt;
	    if (tail_pt >= TAIL_LEN) 
	      error ("Nestings of lists too deep: %d.\n",tail_pt);
	    (yyval.sym)=(yyvsp[0].sym); (yyval.sym)->next=NULL; tail[tail_pt]=(yyval.sym);
	   }
#line 2171 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 431 "parser.y" /* yacc.c:1646  */
    { (yyval.sym)=(yyvsp[-2].sym); tail[tail_pt]->next=(yyvsp[0].sym); tail[tail_pt]=(yyvsp[0].sym); }
#line 2177 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 435 "parser.y" /* yacc.c:1646  */
    { (yyval.text)=NULL; }
#line 2183 "parser.c" /* yacc.c:1646  */
    break;


#line 2187 "parser.c" /* yacc.c:1646  */
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
