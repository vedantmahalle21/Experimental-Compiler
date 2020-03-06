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
#line 2 "decl.y" /* yacc.c:339  */

	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "decl.h"
	int yylex(void);
    

#line 75 "y.tab.c" /* yacc.c:339  */

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
    DECL = 259,
    ENDDECL = 260,
    INT = 261,
    STR = 262,
    PARAM = 263,
    RETURN = 264,
    MAIN = 265,
    WRITE = 266,
    READ = 267,
    BREAK = 268,
    CONTINUE = 269,
    ALLOC = 270,
    FREE = 271,
    LT = 272,
    GT = 273,
    EQT = 274,
    LE = 275,
    GE = 276,
    NE = 277,
    AND = 278,
    OR = 279,
    MOD = 280,
    MUL = 281,
    DIV = 282,
    PLUS = 283,
    MINUS = 284,
    DO = 285,
    ELSE = 286,
    IF = 287,
    THEN = 288,
    WHILE = 289,
    STRING = 290,
    BEG = 291,
    END = 292,
    EQ = 293,
    ENDIF = 294,
    ENDWHILE = 295,
    ID1 = 296,
    ID3 = 297,
    E = 298,
    AID3 = 299
  };
#endif
/* Tokens.  */
#define ID 258
#define DECL 259
#define ENDDECL 260
#define INT 261
#define STR 262
#define PARAM 263
#define RETURN 264
#define MAIN 265
#define WRITE 266
#define READ 267
#define BREAK 268
#define CONTINUE 269
#define ALLOC 270
#define FREE 271
#define LT 272
#define GT 273
#define EQT 274
#define LE 275
#define GE 276
#define NE 277
#define AND 278
#define OR 279
#define MOD 280
#define MUL 281
#define DIV 282
#define PLUS 283
#define MINUS 284
#define DO 285
#define ELSE 286
#define IF 287
#define THEN 288
#define WHILE 289
#define STRING 290
#define BEG 291
#define END 292
#define EQ 293
#define ENDIF 294
#define ENDWHILE 295
#define ID1 296
#define ID3 297
#define E 298
#define AID3 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "decl.y" /* yacc.c:355  */

	struct Gsymbol *no;
	struct Paramstruct *n1;
    struct ASTNode *n2;
    struct Lsymbol *n3;
    struct ArgStruct *n4;

#line 211 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 228 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   564

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  250

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,    47,     2,     2,    45,     2,    50,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    32,    32,    33,    34,    37,    39,    42,    43,    45,
      48,    49,    52,    53,    56,    57,    60,    61,    64,    67,
      68,    71,    72,    75,    76,    79,    82,    83,    84,    85,
      89,    90,    93,   104,   105,   108,   110,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   116,   117,   120,   124,
     127,   128,   129,   132,   133,   134,   137,   140,   143,   144,
     147,   148,   151,   152,   155,   156,   157,   160,   161,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     227,   228,   231,   232,   236
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "DECL", "ENDDECL", "INT", "STR",
  "PARAM", "RETURN", "MAIN", "WRITE", "READ", "BREAK", "CONTINUE", "ALLOC",
  "FREE", "LT", "GT", "EQT", "LE", "GE", "NE", "AND", "OR", "MOD", "MUL",
  "DIV", "PLUS", "MINUS", "DO", "ELSE", "IF", "THEN", "WHILE", "STRING",
  "BEG", "END", "EQ", "ENDIF", "ENDWHILE", "ID1", "ID3", "E", "AID3",
  "','", "'('", "')'", "'{'", "'}'", "'.'", "'['", "']'", "$accept",
  "Program", "GDeclBlock", "GDeclList", "GDecl", "GidList", "Gid",
  "ParamList", "Plist", "Param", "Type", "LDeclBlock", "LDeclList",
  "LDecl", "IDList", "FDefBlock", "FDefList", "Slist", "Retstmt", "Stmt",
  "Ifstmt", "Whilestmt", "InputStmt", "OutputStmt", "AsgStmt", "BreakStmt",
  "ContinueStmt", "AllocStmt", "FreeStmt", "FIELD", "var", "string",
  "expr", "ArgList", "Arg", "MainBlock", YY_NULLPTR
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
     295,   296,   297,   298,   299,    44,    40,    41,   123,   125,
      46,    91,    93
};
# endif

#define YYPACT_NINF -94

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-94)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,    71,    -6,    34,    74,   -94,   -94,   -94,   -94,   130,
     -94,    14,     3,   -94,    -6,    57,    74,   -94,   -94,   -94,
     -94,    27,    70,   -94,    75,    77,   -94,   -94,    90,    14,
      80,    90,     0,    94,   -94,    62,   -94,   136,    24,   -94,
      94,    90,   -94,   143,   128,   121,   -94,   -94,   102,   153,
     -94,   384,   136,   -94,   -94,   135,   -94,   -94,   125,   131,
     141,   -94,   -94,   150,   166,   167,   154,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,    -8,   -10,   145,
     132,   179,    18,   186,   189,    13,    13,    13,   192,   -94,
     215,   228,    22,    13,   384,   -94,   -94,   -94,   -32,   -94,
     -94,    23,   182,   315,   188,   402,   -94,   -24,   -18,    25,
      13,   350,   433,   464,   350,   526,   184,   194,   -94,   200,
     350,   -94,   526,   254,   293,   154,     5,   201,   495,    13,
      13,    18,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,   -94,   -94,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,   -94,
     -94,   -94,   -94,   216,   220,   -94,   204,   205,   -94,   -94,
     217,   -94,   350,   526,   206,   210,   -94,   -94,    92,   105,
      92,   105,   364,   -94,   269,    92,   105,    92,   105,    92,
     105,   364,   269,   364,   269,   207,   -94,   207,   -94,   207,
     -94,    87,   146,    87,   146,    92,   105,    92,   105,    92,
     105,   269,    92,   105,    92,   105,    92,   105,   364,   269,
     364,   269,   207,   -94,   207,   -94,   207,   -94,    87,   146,
      87,   146,    92,   105,   384,   384,   -94,   -94,   211,   -94,
      13,   225,   113,   -94,   -94,   384,   -94,   -94,   231,   -94
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     6,    19,    20,     0,
       8,     0,     0,     1,    19,     0,     0,    31,     3,     5,
       7,    12,     9,    11,     0,     0,    30,     2,     0,     0,
       0,     0,     0,    15,    17,     0,    10,     0,     0,    13,
      14,     0,    18,     0,     0,     0,    16,    22,     0,     0,
      24,     0,     0,    27,    29,    25,    21,    23,    64,     0,
       0,    56,    57,     0,     0,     0,     0,    34,    40,    41,
      37,    38,    39,    42,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,    26,    28,    62,    64,    67,
      76,     0,   129,     0,     0,     0,    64,     0,     0,     0,
       0,     0,     0,     0,    35,    36,     0,     0,    63,     0,
      55,    54,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      49,    60,    61,     0,     0,   134,     0,     0,    66,    65,
       0,   127,   133,   132,     0,   131,    68,    75,   118,   103,
     119,   104,   117,   126,   111,   120,   105,   123,   108,   124,
     109,   122,   107,   121,   106,   115,   101,   114,   100,   116,
     102,   112,    98,   113,    99,   125,   110,    90,    77,    91,
      78,    74,    92,    79,    93,    80,    96,    83,    95,    82,
      94,    81,    88,    73,    87,    71,    89,    72,    85,    69,
      86,    70,    97,    84,     0,     0,    59,    58,     0,   128,
       0,     0,     0,    32,   130,     0,    47,    48,     0,    46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,   -94,   -94,   252,   -94,   233,   235,   -19,   226,
       1,   232,   -94,   219,   -94,   -94,   253,   -93,   160,   -63,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -51,
     -47,   -64,    69,    48,   -94,     8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     9,    10,    22,    23,    32,    33,    34,
      35,    44,    49,    50,    55,    16,    17,    66,    88,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,   102,
      78,   104,   128,   174,   175,     5
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      77,   125,    11,    89,    12,    15,     7,     8,    98,    92,
      11,    90,    18,    40,   126,    77,    98,    15,    81,    40,
       1,    98,     2,   160,    27,    98,    98,    93,   121,   161,
       7,     8,    81,   109,    13,   103,   107,   119,   111,   111,
     114,    93,    91,    77,    48,   120,   123,    39,   100,    24,
      48,   110,   171,    99,   111,    21,   100,    99,   127,   110,
      25,   100,    89,   111,   101,   100,   100,   183,   101,   110,
      42,    45,   162,    28,    77,    91,     6,     7,     8,   172,
      14,     8,   178,   180,   182,   185,   187,   189,   191,   193,
     195,   197,   199,   201,   203,   205,     7,     8,   207,   209,
     111,   212,   214,   216,   218,   220,   222,   224,   226,   228,
     230,   232,   137,   138,   139,    29,    58,   137,   138,   139,
     140,   141,    30,    31,    59,    60,    61,    62,    37,    63,
     153,   154,   155,   156,   157,    19,     7,     8,    93,    41,
      43,   241,   242,    93,    53,    64,    54,    65,    47,     7,
       8,   105,   248,   247,   112,   113,   115,    58,    56,     7,
       8,   122,   124,    87,    51,    59,    60,    61,    62,    52,
      63,   153,   154,   155,    95,    81,    96,    82,    89,    89,
      80,    94,    97,    77,    77,    89,    64,    83,    65,   106,
      77,    77,   108,   172,    77,   173,    84,    77,   179,   181,
     184,   186,   188,   190,   192,   194,   196,   198,   200,   202,
     204,   206,    85,    86,   208,   210,   211,   213,   215,   217,
     219,   221,   223,   225,   227,   229,   231,   233,    58,   116,
     117,   118,    91,   165,    58,   144,    59,    60,    61,    62,
     166,    63,    59,    60,    61,    62,   167,    63,   176,   234,
     235,   236,   237,   239,   238,   240,   245,    64,    93,    65,
     243,    20,    36,    64,   246,    65,    38,    46,    57,    26,
     249,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,    79,   170,   145,   146,   244,   148,
     149,   150,   142,     0,   153,   154,   155,   156,   157,     0,
       0,     0,     0,     0,     0,    93,   168,   158,     0,   173,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     0,     0,     0,     0,     0,     0,     0,
       0,   158,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   169,     0,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,    93,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,   129,   130,     0,   132,   133,   134,    58,   142,   137,
     138,   139,   140,   141,     0,    59,    60,    61,    62,     0,
      63,    93,   142,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    64,     0,    65,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     158,     0,     0,     0,     0,     0,     0,     0,     0,   159,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     0,     0,     0,     0,     0,     0,     0,
       0,   158,     0,     0,     0,     0,     0,     0,     0,     0,
     163,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     0,     0,     0,     0,     0,     0,
       0,     0,   158,     0,     0,     0,     0,     0,     0,     0,
       0,   164,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,     0,     0,     0,     0,     0,
       0,     0,     0,   158,     0,     0,     0,     0,     0,     0,
       0,     0,   177,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,     0,     0,     0,     0,
       0,     0,     0,     0,   158
};

static const yytype_int16 yycheck[] =
{
      51,    94,     1,    66,    10,     4,     6,     7,     3,    19,
       9,    19,     4,    32,    46,    66,     3,    16,    50,    38,
       4,     3,     6,    47,    16,     3,     3,    51,    92,    47,
       6,     7,    50,    84,     0,    82,    83,    15,    85,    86,
      87,    51,    50,    94,    43,    92,    93,    47,    43,    46,
      49,    46,    47,    35,   101,    41,    43,    35,    35,    46,
       3,    43,   125,   110,    46,    43,    43,   131,    46,    46,
       8,    47,    47,    46,   125,    50,     5,     6,     7,   126,
       6,     7,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,     6,     7,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,    25,    26,    27,    45,     3,    25,    26,    27,
      28,    29,    47,    46,    11,    12,    13,    14,    48,    16,
      25,    26,    27,    28,    29,     5,     6,     7,    51,    45,
       4,   234,   235,    51,    42,    32,    44,    34,     5,     6,
       7,    82,   245,    40,    85,    86,    87,     3,     5,     6,
       7,    92,    93,     9,    36,    11,    12,    13,    14,    48,
      16,    25,    26,    27,    42,    50,    44,    46,   241,   242,
      45,    36,     3,   234,   235,   248,    32,    46,    34,     3,
     241,   242,     3,   240,   245,   126,    46,   248,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,    46,    46,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     3,    37,
      15,     3,    50,    49,     3,    47,    11,    12,    13,    14,
      46,    16,    11,    12,    13,    14,    46,    16,    47,    33,
      30,    47,    47,    47,    37,    45,    31,    32,    51,    34,
      49,     9,    29,    32,    39,    34,    31,    41,    49,    16,
      39,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    52,   125,    17,    18,   240,    20,
      21,    22,    38,    -1,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    38,    -1,   240,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    17,    18,    -1,    20,    21,    22,     3,    38,    25,
      26,    27,    28,    29,    -1,    11,    12,    13,    14,    -1,
      16,    51,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    32,    -1,    34,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     6,    54,    55,    88,     5,     6,     7,    56,
      57,    63,    10,     0,     6,    63,    68,    69,    88,     5,
      57,    41,    58,    59,    46,     3,    69,    88,    46,    45,
      47,    46,    60,    61,    62,    63,    59,    48,    60,    47,
      61,    45,     8,     4,    64,    47,    62,     5,    63,    65,
      66,    36,    48,    42,    44,    67,     5,    66,     3,    11,
      12,    13,    14,    16,    32,    34,    70,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    64,
      45,    50,    46,    46,    46,    46,    46,     9,    71,    72,
      19,    50,    19,    51,    36,    42,    44,     3,     3,    35,
      43,    46,    82,    83,    84,    85,     3,    83,     3,    82,
      46,    83,    85,    85,    83,    85,    37,    15,     3,    15,
      83,    84,    85,    83,    85,    70,    46,    35,    85,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    38,    47,    47,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    38,    47,
      47,    47,    47,    47,    47,    49,    46,    46,    52,    52,
      71,    47,    83,    85,    86,    87,    47,    47,    83,    85,
      83,    85,    83,    84,    85,    83,    85,    83,    85,    83,
      85,    83,    85,    83,    85,    83,    85,    83,    85,    83,
      85,    83,    85,    83,    85,    83,    85,    83,    85,    83,
      85,    85,    83,    85,    83,    85,    83,    85,    83,    85,
      83,    85,    83,    85,    83,    85,    83,    85,    83,    85,
      83,    85,    83,    85,    33,    30,    47,    47,    37,    47,
      45,    70,    70,    49,    86,    31,    39,    40,    70,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    54,    55,    55,    56,    56,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    63,
      63,    64,    64,    65,    65,    66,    67,    67,    67,    67,
      68,    68,    69,    70,    70,    71,    71,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    73,    74,    75,
      76,    76,    76,    77,    77,    77,    78,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    83,    84,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    87,    87,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     3,     2,     2,     1,     2,
       3,     1,     1,     4,     2,     1,     3,     1,     2,     1,
       1,     3,     2,     2,     1,     2,     3,     1,     3,     1,
       2,     1,    12,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     9,     7,     7,     4,
       4,     4,     4,     3,     3,     3,     1,     1,     5,     5,
       4,     4,     3,     3,     1,     4,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     1,
       3,     1,     1,     1,    11
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
#line 32 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 33 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 34 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 37 "decl.y" /* yacc.c:1646  */
    {   (yyval.no) =(yyvsp[-1].no);Display((yyvsp[-1].no));
                                        }
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 39 "decl.y" /* yacc.c:1646  */
    {}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 42 "decl.y" /* yacc.c:1646  */
    {(yyval.no) =(yyvsp[-1].no);}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 43 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 45 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 48 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-2].no);}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 49 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 52 "decl.y" /* yacc.c:1646  */
    {}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 53 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-3].no); (yyvsp[-3].no)->paramlist = (yyvsp[-1].n1);}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 60 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[-2].n1);}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 61 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 64 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 67 "decl.y" /* yacc.c:1646  */
    {}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 68 "decl.y" /* yacc.c:1646  */
    {}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 71 "decl.y" /* yacc.c:1646  */
    {(yyval.n3)= (yyvsp[-1].n3);}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 72 "decl.y" /* yacc.c:1646  */
    {}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 75 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 76 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 79 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 82 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 83 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 84 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 85 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 89 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[-1].n2);}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 90 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[0].n2);}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 93 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-10].n2);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyvsp[-10].n2)->Lentry);
                                                                makeLNull();
                                                                }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 104 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeConnectorNode((yyvsp[-1].n2), (yyvsp[0].n2), 0);}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 105 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 108 "decl.y" /* yacc.c:1646  */
    {//printf("AQW\n");if($2->nodetype != rettype){printf("Unmatching type error");exit(-1);}
                                            (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 110 "decl.y" /* yacc.c:1646  */
    {//printf("AQW1\n"); if($2->nodetype != rettype){printf("Unmatching type error");exit(-1);}
                                            (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 116 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-6].n2), (yyvsp[-3].n2), (yyvsp[-1].n2), 6);}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 117 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 7);}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 120 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 8);}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 124 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("read", (yyvsp[-1].n2), 1);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 127 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 128 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 129 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 132 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 133 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 134 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 137 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("break", 9);}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 140 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("continue", 10);}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 143 "decl.y" /* yacc.c:1646  */
    {}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 144 "decl.y" /* yacc.c:1646  */
    {}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 147 "decl.y" /* yacc.c:1646  */
    {}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 148 "decl.y" /* yacc.c:1646  */
    {}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 151 "decl.y" /* yacc.c:1646  */
    {}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 152 "decl.y" /* yacc.c:1646  */
    {}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 155 "decl.y" /* yacc.c:1646  */
    {}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 156 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 157 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 160 "decl.y" /* yacc.c:1646  */
    {}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 161 "decl.y" /* yacc.c:1646  */
    {}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 164 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 165 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 166 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 167 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 168 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 169 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 170 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 171 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 172 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 173 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 174 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 175 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 176 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 177 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 178 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 179 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 180 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 181 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 182 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 183 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 184 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 185 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 186 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 187 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 188 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 189 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 190 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 191 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 192 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 193 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 194 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 195 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 196 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 197 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 198 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 199 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 200 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 201 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 202 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 203 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 204 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 205 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 206 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 207 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 208 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 209 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 210 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 211 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 212 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 213 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 214 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 215 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 216 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 217 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 218 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 219 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 220 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 6);}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 221 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 222 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNode((yyvsp[-2].n2), NULL, 15);}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 223 "decl.y" /* yacc.c:1646  */
    {check((yyvsp[-3].n2)->Gentry->paramlist, (yyvsp[-1].n4));(yyval.n2) = makeFuncCallNode((yyvsp[-3].n2), (yyvsp[-1].n4), 13);makeANull();}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 224 "decl.y" /* yacc.c:1646  */
    {}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 227 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[-2].n4);}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 228 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[0].n4);}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 231 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 232 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 236 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-9].n2); 
                                                                          (yyval.n2)->Lentry = (yyvsp[-5].n3); 
                                                                          (yyval.n2)->left = (yyvsp[-3].n2);
                                                                          (yyval.n2)->right = (yyvsp[-2].n2); 
                                                                          printf("Main Created\n");
                                                                          DisplayL((yyval.n2)->Lentry);}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2287 "y.tab.c" /* yacc.c:1646  */
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
#line 244 "decl.y" /* yacc.c:1906  */


yyerror(char const *s)
{
    printf("yyerror %s", s);
}

int main(void){
    extern FILE *yyin;
    yyin = fopen("input.txt", "r");
    yyparse();
    return 0;
}
