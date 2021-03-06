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
#line 2 "compiler_hw2.y" /* yacc.c:339  */

extern int yylineno;
extern int yylex();
void yyerror(const char* message) {
    printf("Invaild format\n");
};
#define MAX_SYMBOL_NUM 100
/* Symbol table function - you can add new function if need. */
int lookup_symbol();
void create_symbol();
void insert_symbol();
void dump_symbol();
	int count = 1;
	int comment_count = 0;
	int comment_check = 0;
	int float_flag = 0;
	int OP_float_flag = 0;
	int temp = 0;
	int i;	
	int x, y;
	double value;
	int dec_flag = 0;
	char* TYPE = '\0';
	char* id;
	int index;
	
	char* new_symbol = '\0';
	struct symbol{
		char id[10];	
		char type[10];
		double value;
		int index;
	};
	struct symbol *symbol_table[MAX_SYMBOL_NUM];
	int num = 0;

#line 103 "y.tab.c" /* yacc.c:339  */

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
    PRINT = 258,
    PRINTLN = 259,
    IF = 260,
    ELSE = 261,
    FOR = 262,
    VAR = 263,
    NEWLINE = 264,
    INC = 265,
    DEC = 266,
    L = 267,
    S = 268,
    LE = 269,
    SE = 270,
    EE = 271,
    NE = 272,
    AA = 273,
    SA = 274,
    MA = 275,
    DA = 276,
    MOA = 277,
    OR = 278,
    NOT = 279,
    AND = 280,
    COMMENTBEGIN = 281,
    COMMENTEND = 282,
    COMMENTN = 283,
    I_CONST = 284,
    F_CONST = 285,
    STRING = 286,
    INT = 287,
    FLOAT = 288,
    VOID = 289,
    ID = 290,
    STRING_LIT = 291,
    INCOMMENT = 292,
    OLCOMMENT = 293,
    PT = 294
  };
#endif
/* Tokens.  */
#define PRINT 258
#define PRINTLN 259
#define IF 260
#define ELSE 261
#define FOR 262
#define VAR 263
#define NEWLINE 264
#define INC 265
#define DEC 266
#define L 267
#define S 268
#define LE 269
#define SE 270
#define EE 271
#define NE 272
#define AA 273
#define SA 274
#define MA 275
#define DA 276
#define MOA 277
#define OR 278
#define NOT 279
#define AND 280
#define COMMENTBEGIN 281
#define COMMENTEND 282
#define COMMENTN 283
#define I_CONST 284
#define F_CONST 285
#define STRING 286
#define INT 287
#define FLOAT 288
#define VOID 289
#define ID 290
#define STRING_LIT 291
#define INCOMMENT 292
#define OLCOMMENT 293
#define PT 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 40 "compiler_hw2.y" /* yacc.c:355  */

    int i_val;
    double f_val;
    char* string;

#line 227 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 244 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   172

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  80

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    46,    41,     2,
      47,    48,    44,    42,     2,    43,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    40,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    89,    93,    94,    97,   100,   103,   104,
     105,   106,   109,   113,   116,   121,   124,   132,   144,   153,
     167,   176,   179,   186,   187,   188,   191,   198,   205,   212,
     219,   226,   235,   240,   245,   250,   255,   260,   278,   281,
     285,   290,   294,   309,   318,   323,   328,   331
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "PRINTLN", "IF", "ELSE", "FOR",
  "VAR", "NEWLINE", "INC", "DEC", "L", "S", "LE", "SE", "EE", "NE", "AA",
  "SA", "MA", "DA", "MOA", "OR", "NOT", "AND", "COMMENTBEGIN",
  "COMMENTEND", "COMMENTN", "I_CONST", "F_CONST", "STRING", "INT", "FLOAT",
  "VOID", "ID", "STRING_LIT", "INCOMMENT", "OLCOMMENT", "PT", "'|'", "'&'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'", "'='", "$accept",
  "program", "stat", "commentstat", "printstat", "declaration", "const",
  "type", "relation", "assignstat", "expression", YY_NULLPTR
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
     124,    38,    43,    45,    42,    47,    37,    40,    41,    61
};
# endif

#define YYPACT_NINF -32

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-32)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -32,    37,   -32,   -31,   -32,   -32,   -32,   -32,   -32,   -32,
      61,   -32,   -32,   -30,    26,   -32,    12,    12,    12,   -32,
      12,    12,    77,   -10,    26,    26,    26,    26,    26,    26,
     125,   -32,    85,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,   -32,   -32,   -32,   -32,   -24,   107,   107,   107,   107,
     107,   107,    -5,    98,   -32,   107,   107,   107,   107,   107,
     107,     8,     8,    -2,    -2,    -2,    26,   -32,   -32,   107
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,     7,    12,    15,    14,    21,    22,
      47,    13,    16,     0,     0,     2,    11,    11,    11,    46,
      11,    11,    11,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     9,     8,     4,     6,    10,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,    23,    24,    25,    20,    33,    34,    35,    36,
      37,    32,     0,     0,    38,    26,    27,    28,    29,    30,
      31,    39,    40,    41,    42,    43,     0,    17,    18,    19
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -32,   -32,   -15,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -14
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    15,    16,    17,    18,    19,    55,    20,    21,
      22
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      32,    33,    34,    35,    23,    36,    37,    51,    38,    39,
      56,    57,    58,    59,    60,    61,    63,    30,    38,    39,
       3,     4,    52,    53,    54,    76,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     2,     5,     6,
       7,     8,     9,    77,     0,     3,     4,    10,     0,    11,
      12,    13,    48,    49,    50,     8,     9,     0,     0,    14,
       0,    31,    79,     5,     6,     7,     8,     9,     0,     0,
       0,     0,    10,    14,    11,    12,    13,     0,     0,    24,
      25,    26,    27,    28,    14,     3,     4,    38,    39,    40,
      41,    42,    43,    44,    45,    38,    39,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     8,     9,    38,    39,
      29,     0,    10,     0,    11,    12,    13,    38,    39,    46,
      47,    48,    49,    50,    14,     0,     0,    46,    47,    48,
      49,    50,     0,    64,     0,     0,     0,     0,     0,     0,
      46,    47,    48,    49,    50,     0,    78,     0,     0,    46,
      47,    48,    49,    50,     8,     9,     0,     0,     0,     0,
      31,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14
};

static const yytype_int8 yycheck[] =
{
      14,    16,    17,    18,    35,    20,    21,    22,    10,    11,
      24,    25,    26,    27,    28,    29,    30,    47,    10,    11,
       8,     9,    32,    33,    34,    49,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     0,    26,    27,
      28,    29,    30,    48,    -1,     8,     9,    35,    -1,    37,
      38,    39,    44,    45,    46,    29,    30,    -1,    -1,    47,
      -1,    35,    76,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    47,    37,    38,    39,    -1,    -1,    18,
      19,    20,    21,    22,    47,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    10,    11,
      49,    -1,    35,    -1,    37,    38,    39,    10,    11,    42,
      43,    44,    45,    46,    47,    -1,    -1,    42,    43,    44,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    -1,    48,    -1,    -1,    42,
      43,    44,    45,    46,    29,    30,    -1,    -1,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,     0,     8,     9,    26,    27,    28,    29,    30,
      35,    37,    38,    39,    47,    52,    53,    54,    55,    56,
      58,    59,    60,    35,    18,    19,    20,    21,    22,    49,
      47,    35,    60,    52,    52,    52,    52,    52,    10,    11,
      12,    13,    14,    15,    16,    17,    42,    43,    44,    45,
      46,    52,    32,    33,    34,    57,    60,    60,    60,    60,
      60,    60,    36,    60,    48,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    49,    48,    48,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    53,    53,    53,    53,    53,    54,    54,    55,
      55,    56,    56,    57,    57,    57,    58,    58,    58,    58,
      58,    58,    59,    59,    59,    59,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     2,     2,     1,     2,     2,
       2,     0,     1,     1,     1,     1,     1,     4,     4,     5,
       3,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     1,     1
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
        case 5:
#line 94 "compiler_hw2.y" /* yacc.c:1646  */
    {
		//printf("%.2f\n", $1);
	}
#line 1394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 100 "compiler_hw2.y" /* yacc.c:1646  */
    {
		count++;
	}
#line 1402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 106 "compiler_hw2.y" /* yacc.c:1646  */
    {}
#line 1408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 109 "compiler_hw2.y" /* yacc.c:1646  */
    {
		comment_count++;
		printf("\nCOMMENT BEGIN\n");
	}
#line 1417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 113 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("%s", (yyvsp[0].string));
	}
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 116 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("\n");
		comment_count++;
		count++;
	}
#line 1435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 121 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("\nEND COMMENT\n\n");
	}
#line 1443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 124 "compiler_hw2.y" /* yacc.c:1646  */
    {
		char* com = malloc(strlen((yyvsp[0].string))-1);
		sscanf((yyvsp[0].string), "//%s",  com);
		printf("ONELINE COMMENT :\n%s\n", com);
		comment_count++;
	}
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 132 "compiler_hw2.y" /* yacc.c:1646  */
    {
		char* s = malloc(strlen((yyvsp[-1].string))+1);
		strcpy(s , (yyvsp[-1].string));
		int i = 0;
		if(strstr((yyvsp[-3].string), "l") != '\0')printf("Println : ");
		else printf("Print : ");
		while(s[i] != '\0'){
			if(s[i] != '"') printf("%c", s[i]);
			i++;
		}
		printf("\n");
	}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 144 "compiler_hw2.y" /* yacc.c:1646  */
    {
		if(strstr((yyvsp[-3].string), "l") != '\0')printf("Println : ");
		else printf("Print : ");
		if((int)(yyvsp[-1].f_val) == (yyvsp[-1].f_val))
			printf("%d\n", (int)(yyvsp[-1].f_val));
		else printf("%f\n", (yyvsp[-1].f_val));
	}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 153 "compiler_hw2.y" /* yacc.c:1646  */
    {
		dec_flag = 1;
	 	TYPE = (yyvsp[-2].string);
		
		if(float_flag == 1 && strcmp(TYPE,"int")==0){
			printf("<ERROR>Try to assign a float number to the int varible: %s (line: %d)\n", (yyvsp[-3].string), count);
		}
		
		value = (yyvsp[0].f_val);
		//printf("ASSIGN\n");
		insert_symbol((yyvsp[-3].string));
		float_flag = 0;
		dec_flag = 0;
	}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 167 "compiler_hw2.y" /* yacc.c:1646  */
    {
		dec_flag = 1;
		TYPE = (yyvsp[0].string);
		//printf("%s %s\n", $2, $3);
		insert_symbol((yyvsp[-1].string));
		dec_flag = 0;
	}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 176 "compiler_hw2.y" /* yacc.c:1646  */
    {
		(yyval.f_val) = (yyvsp[0].i_val);
	}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 179 "compiler_hw2.y" /* yacc.c:1646  */
    {
		(yyval.f_val) = (yyvsp[0].f_val);
		float_flag = 1;
		OP_float_flag = 1;
	}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 186 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 187 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 188 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 191 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("<Comparason>Greater than?: ");
		if((yyvsp[-2].f_val) > (yyvsp[0].f_val)){
			printf("True\n");
		}
		else printf("False\n");
	}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 198 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("<Comparason>Less than?: ");
		if((yyvsp[-2].f_val) < (yyvsp[0].f_val)){
			printf("True\n");
		}
		else printf("False\n");
	}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 205 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("<Comparason>Greater than or Equal?: ");
		if(((yyvsp[-2].f_val) > (yyvsp[0].f_val))|((yyvsp[-2].f_val) == (yyvsp[0].f_val)) ){
			printf("True\n");
		}
		else printf("False\n");
	}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 212 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("<Comparason>Less than or Equal?: ");
		if(((yyvsp[-2].f_val) < (yyvsp[0].f_val))|((yyvsp[-2].f_val) == (yyvsp[0].f_val)) ){
			printf("True\n");
		}
		else printf("False\n");
	}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 219 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("<Comparason>Equal?: ");
		if((yyvsp[-2].f_val) == (yyvsp[0].f_val) ){
			printf("True\n");
		}
		else printf("False\n");
	}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 226 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("<Comparason>Not Equal?: ");
		if((yyvsp[-2].f_val) != (yyvsp[0].f_val) ){
			printf("True\n");
		}
		else printf("False\n");
	}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 235 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("ASSIGN\n");
		if(type_check((yyvsp[-2].string)))
			symbol_table[index]->value = (yyvsp[0].f_val);;
	}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 240 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("ADD ASSIGN\n");
		if(type_check((yyvsp[-2].string)))
			symbol_table[index]->value += (yyvsp[0].f_val);
	}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 245 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("SUB ASSIGN\n");
		if(type_check((yyvsp[-2].string)))
			symbol_table[index]->value -= (yyvsp[0].f_val);
	}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 250 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("MUL ASSIGN\n");
		if(type_check((yyvsp[-2].string)))
		symbol_table[index]->value *= (yyvsp[0].f_val);
	}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 255 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("DIV ASSIGN\n");
		if(type_check((yyvsp[-2].string)))
		symbol_table[index]->value *= (yyvsp[0].f_val);
	}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 260 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("MOD ASSIGN\n");
		if((index = lookup_symbol((yyvsp[-2].string))) == -1){
			printf("<ERROR> can’t find variable %s (line %d)\n", (yyvsp[-2].string), count);
		}else{
		if(float_flag == 1 && strcmp(symbol_table[index]->type,"int")==0){
			printf("<ERROR>Try to assign a float number to a int varible: %s (line: %d)\n", (yyvsp[-2].string), count);
		}
		else if((OP_float_flag == 1)||strcmp(symbol_table[index]->type,"float32")==0){
			printf("<ERROR>MOD operation can't deal with type float (line %d)\n", count);
		}else
		symbol_table[index]->value =(int)symbol_table[index]->value%(int)(yyvsp[0].f_val);
		float_flag = 0;
		OP_float_flag = 0;
		}
	}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 278 "compiler_hw2.y" /* yacc.c:1646  */
    {
		(yyval.f_val) = (yyvsp[-1].f_val);
	}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 281 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("Add\n");
		(yyval.f_val)  =  (yyvsp[-2].f_val) + (yyvsp[0].f_val); 
	}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 285 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("Sub\n");
		(yyval.f_val)  =  (yyvsp[-2].f_val) - (yyvsp[0].f_val); 
		
	}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 290 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("Mul\n");
			(yyval.f_val)  =  (yyvsp[-2].f_val) * (yyvsp[0].f_val); 
	}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 294 "compiler_hw2.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].f_val) == 0) printf("<ERROR>The divisor can’t be 0 (line %d)\n", count);
		else{
			printf("Div\n");
			if( OP_float_flag == 1){ 
				//printf("float operation\n");
				(yyval.f_val)  =  (yyvsp[-2].f_val) / (yyvsp[0].f_val);
				OP_float_flag = 0;
		}
		
		else {
			(yyval.f_val) = (int)(yyvsp[-2].f_val) / (int)(yyvsp[0].f_val);
		}
		}
	}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 309 "compiler_hw2.y" /* yacc.c:1646  */
    {
		printf("Mod\n");
		if( OP_float_flag == 1){
			printf("<ERROR>MOD operation can't deal with type float (line %d)\n", count);
			OP_float_flag = 0;
		}
		int a = (yyvsp[-2].f_val); int b = (yyvsp[0].f_val); 
		(yyval.f_val)  =  a % b;
	}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 318 "compiler_hw2.y" /* yacc.c:1646  */
    {
		(yyval.f_val)  =  (yyvsp[-1].f_val);
		printf("INC\n");
		symbol_table[index]->value = (yyvsp[-1].f_val)+1;
	}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 323 "compiler_hw2.y" /* yacc.c:1646  */
    {
		(yyval.f_val)  =  (yyvsp[-1].f_val);
		printf("DEC\n");
		symbol_table[index]->value = (yyvsp[-1].f_val)-1;
	}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 328 "compiler_hw2.y" /* yacc.c:1646  */
    {
		(yyval.f_val) = (yyvsp[0].f_val);
	}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 331 "compiler_hw2.y" /* yacc.c:1646  */
    {
		if((index = lookup_symbol((yyvsp[0].string))) == -1){
			printf("<ERROR> can’t find variable %s (line %d)\n", (yyvsp[0].string), count);
		}
		else{
			if(strcmp(symbol_table[index]->type,"float32")==0)
				{ 
				  float_flag = 1; 
				  OP_float_flag = 1;
				  printf("a float variable\n");
				}
			(yyval.f_val) = symbol_table[index]->value;
		}	
	}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1814 "y.tab.c" /* yacc.c:1646  */
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
#line 346 "compiler_hw2.y" /* yacc.c:1906  */


/* C code section */
int main(int argc, char** argv)
{
    yylineno = 0;
	
    yyparse();
	printf("\nTotal line : %d Comment Line: %d\n", count,comment_count);
	dump_symbol();
    return 0;
}
int type_check(char * name){
		if((index = lookup_symbol(name)) == -1){
			printf("<ERROR> can’t find variable %s (line %d)\n", name, count);
			return 0;
		}else{
		if(float_flag == 1 && strcmp(symbol_table[index]->type,"int")==0){
			printf("<ERROR>Try to assign a float number to a int varible: %s (line: %d)\n", name, count);
			return 0;
		}
		float_flag = 0;
		OP_float_flag = 0;
		return 1;
		}
}
void insert_symbol(char* s) {
	//printf("%s \t%s TYPE VAR\n", s, TYPE);
	if(num == 0) create_symbol();
	if(lookup_symbol(s)>0){
			printf("re-declaration for variable %s (line %d)\n", s, count);
			return ;
		}
		strcpy(symbol_table[num]->id, s);
		strcpy(symbol_table[num]->type, TYPE);
		symbol_table[num]->index = num;
		symbol_table[num]->value = value;
		printf("Insert a symbol : %s\n", s);
		num++;
		value = 0;
		dec_flag = 0;
}
int lookup_symbol(char* s) {
	int i = 0;
	while(i!=num){
		if(strcmp(s , symbol_table[i]->id) == 0){
			//printf("The variable is already exist\n");
			return symbol_table[i]->index;
		}
		
		i++;
	}
	return -1;
}

void create_symbol() {
	num = 1;
	printf("Create a symbol table\n");
	int i;
	for(i = 0;i<MAX_SYMBOL_NUM; i++){
		symbol_table[i] = malloc(sizeof(struct symbol));
	}
	//printf("finish initialize\n");
	return ;
}

void dump_symbol() {
	int i;
	
	printf("\nThe symbol table :\n\n");
	printf("Index\tID\tType\tValue\n");
	for(i = 1; i < num; i++){
		if(strcmp(symbol_table[i]->type, "float32")==0)
			printf("%d\t%s\t%s\t%.2f\n", symbol_table[i]->index, symbol_table[i]->id, symbol_table[i]->type,symbol_table[i]->value);
		else
			printf("%d\t%s\t%s\t%d\n", symbol_table[i]->index, symbol_table[i]->id, symbol_table[i]->type,(int)symbol_table[i]->value);
	} 
}
