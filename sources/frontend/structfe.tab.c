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
#line 1 "structfe.y" /* yacc.c:339  */

#include "structfe.h"


#line 71 "structfe.tab.c" /* yacc.c:339  */

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
   by #include "structfe.tab.h".  */
#ifndef YY_YY_STRUCTFE_TAB_H_INCLUDED
# define YY_YY_STRUCTFE_TAB_H_INCLUDED
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
    SIZEOF = 258,
    PTR_OP = 259,
    LE_OP = 260,
    GE_OP = 261,
    EQ_OP = 262,
    NE_OP = 263,
    AND_OP = 264,
    OR_OP = 265,
    EXTERN = 266,
    INT = 267,
    VOID = 268,
    STRUCT = 269,
    IF = 270,
    ELSE = 271,
    WHILE = 272,
    FOR = 273,
    RETURN = 274,
    IDENTIFIER = 275,
    CONSTANT = 276
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "structfe.y" /* yacc.c:355  */

    char *number;
    attributs_t attributs;
    symbole_t *symbol;
    

#line 140 "structfe.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_STRUCTFE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 157 "structfe.tab.c" /* yacc.c:358  */

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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   299

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   277

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    25,     2,
      20,    21,    26,    30,    28,    27,    29,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    24,
      32,    33,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    22,     2,    23,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    34,    35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    34,    34,    41,    47,    52,    54,    59,    67,    69,
      81,    83,    97,    98,   108,   113,   122,   123,   124,   128,
     130,   141,   150,   151,   156,   163,   164,   168,   172,   176,
     183,   184,   188,   195,   197,   218,   219,   241,   242,   249,
     255,   263,   269,   274,   275,   276,   281,   282,   283,   287,
     288,   292,   296,   301,   305,   307,   309,   312,   317,   319,
     327,   331,   332,   333,   334,   335,   339,   343,   348,   353,
     360,   363,   370,   371,   377,   380,   388,   401,   418,   436,
     456,   458,   462,   465,   469,   477,   481,   488
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SIZEOF", "PTR_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "EXTERN", "INT", "VOID", "STRUCT",
  "IF", "ELSE", "WHILE", "FOR", "RETURN", "'('", "')'", "'{'", "'}'",
  "';'", "'&'", "'*'", "'-'", "','", "'.'", "'+'", "'>'", "'<'", "'='",
  "IDENTIFIER", "CONSTANT", "\"then\"", "'/'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression", "expression",
  "declaration", "declaration_specifiers", "type_specifier",
  "struct_specifier", "struct_declaration_list", "struct_declaration",
  "declarator", "direct_declarator", "parameter_list",
  "parameter_declaration", "statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "program_start", "program", "external_declaration",
  "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
      40,    41,   123,   125,    59,    38,    42,    45,    44,    46,
      43,    62,    60,    61,   275,   276,   277,    47
};
# endif

#define YYPACT_NINF -75

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-75)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      40,   110,   -75,   -75,   -14,   -75,    -7,   -75,    -9,    32,
      40,   -75,   -75,   -75,   -75,   110,    53,    -7,    -8,   -75,
       7,    70,   -75,   -75,   -75,    -7,    66,   -75,   110,    73,
      70,    93,   -75,   -75,   136,    71,   -75,   -75,    79,   -75,
     252,    89,    94,   114,   223,   264,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,    14,   106,   264,    -2,   -16,    17,
      48,   142,   144,   131,   -75,    -7,   -75,   -75,   118,   143,
     -75,   -75,   -75,   -75,   -75,    -7,    29,   -75,   -75,   -75,
     211,   -75,   264,   264,   236,   -75,   132,   138,   130,   248,
     139,   264,   -75,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   -75,   148,   -75,   -75,   168,
     -75,   -75,   -75,   -75,    40,   153,   154,   155,   236,   -75,
     -75,   -75,   -75,    60,   -75,   -75,   -75,   -75,   -75,   -75,
      -2,    -2,   -16,   -16,   -16,   -16,    17,    17,    48,   142,
     -75,   -75,   -75,   193,   193,   264,   -75,   264,   163,   -75,
     159,   -75,   193,   193,   -75,   -75
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    44,    43,     0,    86,     0,    42,    45,     0,
      82,    83,    85,    41,    45,     0,    48,     0,     0,    55,
       0,    53,    40,     1,    84,     0,     0,    49,     0,     0,
      52,     0,    39,    87,     0,     0,    47,    50,     0,    54,
       0,     0,     0,     0,     0,     0,    66,    74,    16,    17,
      18,     4,     3,     5,    12,    19,     0,    22,    25,    30,
      33,    35,    37,     0,    70,     0,    72,    61,     0,     0,
      62,    63,    64,    65,    57,     0,     0,    58,    51,    46,
       0,    15,     0,     0,     0,    80,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,    68,    71,     0,
      67,    73,    60,    56,     0,     0,     0,     0,     0,    81,
       2,     9,     6,     0,    10,     8,    38,    20,    21,    19,
      24,    23,    28,    29,    27,    26,    31,    32,    34,    36,
      69,    59,    14,     0,     0,     0,     7,     0,    76,    78,
       0,    11,     0,     0,    77,    79
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -75,   -75,   -75,   -75,   -35,   -75,   -25,     0,    24,    78,
      80,   -75,   -44,   -22,   -27,     2,     6,   161,    46,     8,
     164,   -75,    83,   -67,   178,   -75,   133,   -74,   -75,   -75,
     -75,   -75,   -75,   189,   -75
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    53,    54,   123,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     5,     6,     7,    14,    26,    27,    20,
      21,    76,    77,    66,    67,    68,    69,    70,    71,    72,
      73,     9,    10,    11,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      86,    87,   111,    13,    65,    81,     8,    75,    15,    64,
     118,    95,    17,    17,    96,    22,     8,    25,    88,    18,
      16,    92,    97,    98,    93,    29,    19,    19,    25,    31,
      25,    32,    23,    35,    89,    94,    87,     8,   116,   117,
      25,    65,   111,    90,   145,   124,   108,   126,    99,   100,
     113,     1,     2,     3,     4,   101,   102,   114,   127,   128,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     130,   131,    37,   106,     8,    28,   148,   149,     2,     3,
       4,   146,   115,   112,    37,   154,   155,    75,   147,    36,
      34,     2,     3,     4,    39,    78,    40,   132,   133,   134,
     135,   150,    79,   151,     1,     2,     3,     4,    41,    82,
      42,    43,    44,    45,    83,    31,    46,    47,    48,    49,
      50,    40,     2,     3,     4,   136,   137,    51,    52,     1,
       2,     3,     4,    41,    84,    42,    43,    44,    45,    91,
      31,   107,    47,    48,    49,    50,    40,     1,     2,     3,
       4,   103,    51,    52,   104,   105,   119,    74,    41,   120,
      42,    43,    44,    45,   121,    31,   110,    47,    48,    49,
      50,    40,    32,   125,   142,   143,   144,    51,    52,   152,
     153,   138,    30,    41,   139,    42,    43,    44,    45,    38,
      31,   140,    47,    48,    49,    50,    40,   141,    33,    24,
       0,   109,    51,    52,     0,     0,     0,     0,    41,     0,
      42,    43,    44,    45,    40,    31,     0,    47,    48,    49,
      50,     0,     0,     2,     3,     4,    40,    51,    52,     0,
       0,    45,     0,     0,     0,     0,    48,    49,    50,    40,
       0,     0,     0,    45,     0,    51,    52,    85,    48,    49,
      50,    40,     0,     0,     0,    40,    45,    51,    52,     0,
      47,    48,    49,    50,     0,     0,     0,    40,    45,   122,
      51,    52,    80,    48,    49,    50,     0,    48,    49,    50,
       0,     0,    51,    52,    45,     0,    51,    52,     0,    48,
      49,    50,     0,     0,     0,     0,     0,     0,    51,    52
};

static const yytype_int16 yycheck[] =
{
      44,    45,    69,     1,    31,    40,     0,    34,    22,    31,
      84,    27,    20,    20,    30,    24,    10,    15,     4,    26,
      34,    56,     5,     6,    26,    17,    34,    34,    26,    22,
      28,    24,     0,    25,    20,    37,    80,    31,    82,    83,
      38,    68,   109,    29,   118,    89,    68,    91,    31,    32,
      21,    11,    12,    13,    14,     7,     8,    28,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      95,    96,    26,    65,    68,    22,   143,   144,    12,    13,
      14,    21,    80,    75,    38,   152,   153,   114,    28,    23,
      20,    12,    13,    14,    21,    24,     3,    97,    98,    99,
     100,   145,    23,   147,    11,    12,    13,    14,    15,    20,
      17,    18,    19,    20,    20,    22,    23,    24,    25,    26,
      27,     3,    12,    13,    14,   101,   102,    34,    35,    11,
      12,    13,    14,    15,    20,    17,    18,    19,    20,    33,
      22,    23,    24,    25,    26,    27,     3,    11,    12,    13,
      14,     9,    34,    35,    10,    24,    24,    21,    15,    21,
      17,    18,    19,    20,    34,    22,    23,    24,    25,    26,
      27,     3,    24,    34,    21,    21,    21,    34,    35,    16,
      21,   103,    18,    15,   104,    17,    18,    19,    20,    28,
      22,    23,    24,    25,    26,    27,     3,   114,    20,    10,
      -1,    68,    34,    35,    -1,    -1,    -1,    -1,    15,    -1,
      17,    18,    19,    20,     3,    22,    -1,    24,    25,    26,
      27,    -1,    -1,    12,    13,    14,     3,    34,    35,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,     3,
      -1,    -1,    -1,    20,    -1,    34,    35,    24,    25,    26,
      27,     3,    -1,    -1,    -1,     3,    20,    34,    35,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,     3,    20,    21,
      34,    35,    20,    25,    26,    27,    -1,    25,    26,    27,
      -1,    -1,    34,    35,    20,    -1,    34,    35,    -1,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    12,    13,    14,    51,    52,    53,    54,    69,
      70,    71,    72,    53,    54,    22,    34,    20,    26,    34,
      57,    58,    24,     0,    71,    53,    55,    56,    22,    57,
      58,    22,    24,    62,    20,    57,    23,    56,    55,    21,
       3,    15,    17,    18,    19,    20,    23,    24,    25,    26,
      27,    34,    35,    39,    40,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    61,    62,    63,    64,
      65,    66,    67,    68,    21,    52,    59,    60,    24,    23,
      20,    42,    20,    20,    20,    24,    50,    50,     4,    20,
      29,    33,    42,    26,    37,    27,    30,     5,     6,    31,
      32,     7,     8,     9,    10,    24,    57,    23,    51,    64,
      23,    61,    57,    21,    28,    53,    50,    50,    65,    24,
      21,    34,    21,    41,    50,    34,    50,    42,    42,    42,
      44,    44,    45,    45,    45,    45,    46,    46,    47,    48,
      23,    60,    21,    21,    21,    65,    21,    28,    61,    61,
      50,    50,    16,    21,    61,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    39,    39,    40,    40,    40,    40,    40,
      41,    41,    42,    42,    42,    42,    43,    43,    43,    44,
      44,    44,    45,    45,    45,    46,    46,    46,    46,    46,
      47,    47,    47,    48,    48,    49,    49,    50,    50,    51,
      51,    52,    52,    53,    53,    53,    54,    54,    54,    55,
      55,    56,    57,    57,    58,    58,    58,    58,    59,    59,
      60,    61,    61,    61,    61,    61,    62,    62,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    69,    70,    70,    71,    71,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     1,     1,     3,     4,     3,     3,
       1,     3,     1,     2,     4,     2,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     3,
       2,     2,     1,     1,     1,     1,     5,     4,     2,     1,
       2,     3,     2,     1,     3,     1,     4,     3,     1,     3,
       2,     1,     1,     1,     1,     1,     2,     3,     3,     4,
       1,     2,     1,     2,     1,     2,     5,     7,     5,     7,
       2,     3,     1,     1,     2,     1,     1,     3
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
        case 2:
#line 34 "structfe.y" /* yacc.c:1646  */
    { (yyval.attributs).code = init_code((yyval.attributs).code);
     (yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-1].attributs).code, NULL);
(yyval.attributs).res = strdup((yyvsp[-1].attributs).res);

}
#line 1379 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 41 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = (yyvsp[0].number);
}
#line 1388 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup((yyvsp[0].symbol)->nom);}
#line 1396 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 52 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); (yyval.attributs).res = strdup((yyvsp[0].attributs).res);}
#line 1402 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 54 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[-2].attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-2].attributs).res, "()", ";\n", NULL);}
#line 1410 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 60 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = strdup((yyvsp[-3].attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-3].attributs).code, (yyvsp[-1].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-3].attributs).res,"(", (yyvsp[-1].attributs).res, ")", ";\n", NULL);
}
#line 1420 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 67 "structfe.y" /* yacc.c:1646  */
    {printf("NORMALEMENT ON PEUT PAS UTILISER CA"); (yyval.attributs).code=NULL; (yyval.attributs).res=NULL;}
#line 1426 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 70 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[-2].attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-2].attributs).res, "->", strdup((yyvsp[0].symbol)->nom), ";\n", NULL);
}
#line 1435 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 81 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); (yyval.attributs).res = strdup((yyvsp[0].attributs).res);}
#line 1441 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 84 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyvsp[0].attributs).code, NULL);
(yyval.attributs).res = init_code((yyval.attributs).res);
(yyval.attributs).res = concatener((yyval.attributs).res, (yyvsp[-2].attributs).res, ",", (yyvsp[0].attributs).res, NULL);
}
#line 1452 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 97 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); (yyval.attributs).res = strdup((yyvsp[0].attributs).res);}
#line 1458 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 99 "structfe.y" /* yacc.c:1646  */
    { (yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res)); /* stockage du resultat*/
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[0].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-1].attributs).code, (yyvsp[0].attributs).res,";\n", NULL); 
/* on ecrit le code deja généré*/
/*creer une nouvelle variable, stocke le resultat*/
/*on ecrit l'operateur*/
/*ecrit la variable ou est stockée le resultat calculé*/
}
#line 1471 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 109 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyval.attributs).res, " = sizeof(", (yyvsp[-1].attributs).code , ");\n", NULL);}
#line 1479 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 114 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyval.attributs).res, " = sizeof(",(yyvsp[0].attributs).res , ");\n", NULL);}
#line 1487 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 122 "structfe.y" /* yacc.c:1646  */
    { (yyval.attributs).code = init_code((yyval.attributs).code); (yyval.attributs).code = ajouter_code((yyval.attributs).code, "&");}
#line 1493 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 123 "structfe.y" /* yacc.c:1646  */
    { (yyval.attributs).code = init_code((yyval.attributs).code); (yyval.attributs).code = ajouter_code((yyval.attributs).code, "*");}
#line 1499 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 124 "structfe.y" /* yacc.c:1646  */
    { (yyval.attributs).code = init_code((yyval.attributs).code); (yyval.attributs).code = ajouter_code((yyval.attributs).code, "-");}
#line 1505 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 128 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); (yyval.attributs).res = strdup((yyvsp[0].attributs).res);}
#line 1511 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 131 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
 (yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyvsp[0].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-2].attributs).res, "*", (yyvsp[0].attributs).res, ";\n", NULL); 
/*code de multiplicative expression*/
/*code de unary expression*/
/*creer une nouvelle variable, stocke le resultat*/
/*resultat de multiplicative*/
/*on ecrit l'operateur*/
/*resultat de unary*/
}
#line 1526 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 142 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyvsp[0].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-2].attributs).res, "/", (yyvsp[0].attributs).res, ";\n", NULL); 
}
#line 1535 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 150 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); (yyval.attributs).res = strdup((yyvsp[0].attributs).res);}
#line 1541 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 151 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyvsp[0].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-2].attributs).res, "+", (yyvsp[0].attributs).res, ";\n",  NULL); }
#line 1550 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 156 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyvsp[0].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-2].attributs).res, "-", (yyvsp[0].attributs).res, ";\n", NULL); }
#line 1559 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 163 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); (yyval.attributs).res = strdup((yyvsp[0].attributs).res);}
#line 1565 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 164 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyvsp[0].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-2].attributs).res, "<", (yyvsp[0].attributs).res, ";\n", NULL); }
#line 1574 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 168 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyvsp[0].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-2].attributs).res, ">", (yyvsp[0].attributs).res, ";\n", NULL); }
#line 1583 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 172 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyvsp[0].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-2].attributs).res, "<=", (yyvsp[0].attributs).res, ";\n", NULL); }
#line 1592 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 176 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyvsp[0].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-2].attributs).res, ">=", (yyvsp[0].attributs).res, ";\n", NULL); }
#line 1601 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 183 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); (yyval.attributs).res = strdup((yyvsp[0].attributs).res);}
#line 1607 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 184 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyvsp[0].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-2].attributs).res, "==", (yyvsp[0].attributs).res, ";\n", NULL); }
#line 1616 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 188 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyvsp[0].attributs).code, (yyval.attributs).res, " = ", (yyvsp[-2].attributs).res, "!=", (yyvsp[0].attributs).res, ";\n",  NULL); }
#line 1625 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 195 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); (yyval.attributs).res = strdup((yyvsp[0].attributs).res);}
#line 1631 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 197 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
char* label_suite;
char* label_falsee;
char* label_truee;
label_suite= strdup(new_label(label_suite));
label_falsee= strdup(new_label(label_falsee));
label_truee= strdup(new_label(label_truee));

(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, "if ", (yyvsp[-2].attributs).res, " goto ", label_suite,";\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code, "goto ", label_falsee, ";\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code,"\n",  label_suite, ":\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[0].attributs).code, "if ", (yyvsp[0].attributs).res, " goto ", label_truee,";\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code,"goto ", label_falsee, ";\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code,"\n",  label_truee,":\n", (yyval.attributs).res, "= 1;\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code,"\n", label_falsee,":\n", (yyval.attributs).res, "= 0;\n", NULL);
 }
#line 1654 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 218 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); (yyval.attributs).res = strdup((yyvsp[0].attributs).res);}
#line 1660 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 220 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup(new_var((yyval.attributs).res));
char* label_suite;
char* label_falsee;
char* label_truee;
label_suite= strdup(new_label(label_suite));
label_falsee= strdup(new_label(label_falsee));
label_truee= strdup(new_label(label_truee));
 
(yyval.attributs).code = concatener((yyval.attributs).code,"", (yyvsp[-2].attributs).code, "if ", (yyvsp[-2].attributs).res, "goto ", label_truee,";\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code,"", "goto ", label_suite, ";\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code,"", label_suite, ":\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code,"", (yyvsp[0].attributs).code, "if ", (yyvsp[0].attributs).res, "goto ", label_truee,";\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code,"", "goto ", label_falsee, ";\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code,"", label_truee,":\n", (yyval.attributs).res, "= 1;\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code,"", label_falsee,":\n", (yyval.attributs).res, "= 0;\n", NULL);
}
#line 1683 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 241 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); (yyval.attributs).res = strdup((yyvsp[0].attributs).res);}
#line 1689 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 242 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).res = strdup((yyvsp[-2].attributs).res);
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, (yyvsp[0].attributs).code, (yyvsp[-2].attributs).res, " = ", (yyvsp[0].attributs).res, ";\n", NULL);}
#line 1698 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 250 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code=init_code((yyval.attributs).code);
(yyval.attributs).code=concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, " ", (yyvsp[-1].attributs).code, ";\n", NULL);
}
#line 1707 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 256 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code=strdup("not yet implemented: struct specifier");
}
#line 1715 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 264 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code=init_code((yyval.attributs).code);
(yyval.attributs).code= concatener((yyval.attributs).code, "extern ", (yyvsp[0].attributs).code, NULL);
}
#line 1724 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 269 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code= strdup((yyvsp[0].attributs).code);}
#line 1730 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 274 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code= strdup("void");}
#line 1736 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 275 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code= strdup("int");}
#line 1742 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 276 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code= strdup("not yet implemented: struct_specifier");}
#line 1748 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 297 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code= init_code((yyval.attributs).code);
(yyval.attributs).code= concatener((yyval.attributs).code, "*", (yyvsp[0].attributs).code, NULL);
}
#line 1757 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 301 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code= strdup((yyvsp[0].attributs).code);}
#line 1763 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 305 "structfe.y" /* yacc.c:1646  */
    { (yyval.attributs).code = init_code((yyval.attributs).code); (yyval.attributs).code = concatener((yyval.attributs).code, "(", (yyvsp[-1].attributs).code, ")", NULL);}
#line 1769 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 307 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].symbol)->nom);}
#line 1775 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 310 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code=init_code((yyval.attributs).code); (yyval.attributs).code= concatener((yyval.attributs).code, (yyvsp[-3].attributs).code, "(",(yyvsp[-1].attributs).code,")", NULL);}
#line 1781 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 313 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code=init_code((yyval.attributs).code); (yyval.attributs).code= concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, "()", NULL);}
#line 1787 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 318 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code);}
#line 1793 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 320 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, "," , (yyvsp[0].attributs).code, NULL);
}
#line 1802 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 327 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code=init_code((yyval.attributs).code); (yyval.attributs).code=concatener((yyval.attributs).code, (yyvsp[-1].attributs).code, " ", (yyvsp[0].attributs).code," ", NULL);}
#line 1808 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 331 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); }
#line 1814 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 332 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code);}
#line 1820 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 333 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); }
#line 1826 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 334 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); }
#line 1832 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 335 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = strdup((yyvsp[0].attributs).code); }
#line 1838 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 339 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = init_code((yyval.attributs).code); (yyval.attributs).code= ajouter_code((yyval.attributs).code, "{ }\n");
}
#line 1845 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 343 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = init_code((yyval.attributs).code);
     (yyval.attributs).code= concatener((yyval.attributs).code, "{\n", (yyvsp[-1].attributs).code ,"}\n", NULL);
}
#line 1853 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 348 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = init_code((yyval.attributs).code);
     (yyval.attributs).code= concatener((yyval.attributs).code, "{\n", (yyvsp[-1].attributs).code ,"}\n", NULL);
}
#line 1861 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 353 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code = init_code((yyval.attributs).code);

     (yyval.attributs).code= concatener((yyval.attributs).code, "{\n", (yyvsp[-2].attributs).code, (yyvsp[-1].attributs).code ,"}\n", NULL);
}
#line 1870 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 361 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code= strdup((yyvsp[0].attributs).code);}
#line 1876 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 363 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code= init_code((yyval.attributs).code);
(yyval.attributs).code= concatener((yyval.attributs).code, (yyvsp[-1].attributs).code, (yyvsp[0].attributs).code, NULL);
}
#line 1885 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 370 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code=strdup((yyvsp[0].attributs).code);}
#line 1891 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 371 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code=init_code((yyval.attributs).code);
(yyval.attributs).code=concatener((yyval.attributs).code, (yyvsp[-1].attributs).code, (yyvsp[0].attributs).code, NULL);}
#line 1899 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 377 "structfe.y" /* yacc.c:1646  */
    { (yyval.attributs).code = init_code((yyval.attributs).code);
     (yyval.attributs).code=ajouter_code((yyval.attributs).code, ";\n"); (yyval.attributs).res= NULL;}
#line 1906 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 381 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code= strdup((yyvsp[-1].attributs).code);
(yyval.attributs).res= strdup((yyvsp[-1].attributs).res);
}
#line 1915 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 388 "structfe.y" /* yacc.c:1646  */
    {
char* label_falsee;
char* label_truee;
label_falsee= strdup(new_label(label_falsee));
label_truee= strdup(new_label(label_truee));
(yyval.attributs).code= init_code((yyval.attributs).code);
(yyval.attributs).code= concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, "if ", (yyvsp[-2].attributs).res, " goto ", label_truee, ";\n", NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, "goto ", label_falsee, ";\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code, label_truee, ":\n", (yyvsp[0].attributs).code, label_falsee, ":\n", NULL);
(yyval.attributs).res = NULL;
}
#line 1932 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 402 "structfe.y" /* yacc.c:1646  */
    {
char* label_falsee;
char* label_truee;
label_falsee= strdup(new_label(label_falsee));
label_truee= strdup(new_label(label_truee));
(yyval.attributs).code= init_code((yyval.attributs).code);
(yyval.attributs).code= concatener((yyval.attributs).code, (yyvsp[-4].attributs).code,"\n", NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, "if ", (yyvsp[-4].attributs).res, " goto ", label_truee, ";\n", NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, "goto ", label_falsee, ";\n", NULL);
(yyval.attributs).code = concatener((yyval.attributs).code, label_truee, ":\n", (yyvsp[-2].attributs).code, NULL);
(yyval.attributs).code = concatener((yyval.attributs).code, label_falsee, ":\n", (yyvsp[0].attributs).code,  NULL);
(yyval.attributs).res= NULL;
}
#line 1950 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 419 "structfe.y" /* yacc.c:1646  */
    {
char* label_loop;
char* label_end;
label_loop  = strdup(new_label(label_loop));
label_end= strdup(new_label(label_end));

(yyval.attributs).code=init_code((yyval.attributs).code);
(yyval.attributs).code= concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, "\n", NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, "if ", (yyvsp[-2].attributs).res , " goto ", label_loop, ";\n", NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, "goto ", label_end, ";\n", NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, label_loop, ":\n", (yyvsp[0].attributs).code, "\n", (yyvsp[-2].attributs).code, "\n", NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, "if ", (yyvsp[-2].attributs).res , " goto ", label_loop, ";\n", NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, "goto ", label_end, ";\n",label_end,":\n", NULL);
(yyval.attributs).res= NULL;
}
#line 1970 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 437 "structfe.y" /* yacc.c:1646  */
    {
char* label_loop;
char* label_end;
label_loop  = strdup(new_label(label_loop));
label_end= strdup(new_label(label_end));

(yyval.attributs).code= init_code((yyval.attributs).code);
(yyval.attributs).code= concatener((yyval.attributs).code, (yyvsp[-4].attributs).code, NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, (yyvsp[-3].attributs).code, NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, "if ", (yyvsp[-3].attributs).res , " goto ", label_loop, ";\n", NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, "goto ", label_end, ";\n", NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, label_loop, ":\n", (yyvsp[0].attributs).code, "\n", (yyvsp[-2].attributs).code, "\n", (yyvsp[-3].attributs).code, NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, "if ", (yyvsp[-3].attributs).res , " goto ", label_loop, ";\n", NULL);
(yyval.attributs).code= concatener((yyval.attributs).code, "goto ", label_end, ";\n",label_end,":\n", NULL);
(yyval.attributs).res= NULL;
}
#line 1991 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 456 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code= init_code((yyval.attributs).code); (yyval.attributs).code= ajouter_code((yyval.attributs).code, "return ;\n");}
#line 1997 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 458 "structfe.y" /* yacc.c:1646  */
    {(yyval.attributs).code= strdup((yyvsp[-1].attributs).code);
(yyval.attributs).code= concatener((yyval.attributs).code, "return ", (yyvsp[-1].attributs).res," ;\n", NULL);}
#line 2004 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 462 "structfe.y" /* yacc.c:1646  */
    {printf("%s",(yyvsp[0].attributs).code);}
#line 2010 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 466 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code= strdup((yyvsp[0].attributs).code);
}
#line 2018 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 470 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
(yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-1].attributs).code, (yyvsp[0].attributs).code, NULL);
}
#line 2027 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 478 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = strdup((yyvsp[0].attributs).code);
}
#line 2035 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 482 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = strdup((yyvsp[0].attributs).code);
}
#line 2043 "structfe.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 489 "structfe.y" /* yacc.c:1646  */
    {
(yyval.attributs).code = init_code((yyval.attributs).code);
 (yyval.attributs).code = concatener((yyval.attributs).code, (yyvsp[-2].attributs).code, " " ,(yyvsp[-1].attributs).code, (yyvsp[0].attributs).code, NULL);
}
#line 2052 "structfe.tab.c" /* yacc.c:1646  */
    break;


#line 2056 "structfe.tab.c" /* yacc.c:1646  */
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
#line 495 "structfe.y" /* yacc.c:1906  */

	 
int main()
{

    init_pile();
    init_cpt_var();
    init_cpt_label();

    int c = yyparse();
    while(c)
    {
	c=yyparse();
    }

    /*afficher_pile();*/
    printf("\n\n\nAccepted\n");
}

extern int yylineno;
int yyerror(char* s)
{
    printf("line %d: %s\n", yylineno, s);
  exit(1);

}
