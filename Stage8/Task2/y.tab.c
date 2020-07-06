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
    int i =0;
    int j;
    int b = 0;
    int ma = 0;
    int emp = 0;

#line 79 "y.tab.c" /* yacc.c:339  */

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
    AID3 = 299,
    ID4 = 300,
    TYPE = 301,
    ENDTYPE = 302,
    ID5 = 303,
    NUL = 304,
    INITIALIZE = 305,
    CLASS = 306,
    ENDCLASS = 307,
    SELF = 308,
    ID6 = 309,
    NEW = 310,
    EXTENDS = 311
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
#define ID4 300
#define TYPE 301
#define ENDTYPE 302
#define ID5 303
#define NUL 304
#define INITIALIZE 305
#define CLASS 306
#define ENDCLASS 307
#define SELF 308
#define ID6 309
#define NEW 310
#define EXTENDS 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "decl.y" /* yacc.c:355  */

	struct Gsymbol *no;
	struct Paramstruct *n1;
    struct ASTNode *n2;
    struct Lsymbol *n3;
    struct ArgStruct *n4;
    struct TypeTable *n5;
    struct FieldList *n6;
    struct ClassTable *n7;
    struct MemberFuncList *n8;

#line 243 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 260 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   802

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  194
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  421

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

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
      59,    60,     2,     2,    61,     2,    62,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    63,    66,
      67,    70,    73,    76,    77,    80,    92,   104,   105,   117,
     118,   121,   122,   123,   124,   128,   129,   132,   133,   136,
     137,   138,   142,   143,   146,   147,   149,   150,   151,   154,
     155,   158,   159,   162,   163,   166,   167,   170,   171,   180,
     181,   184,   185,   188,   189,   192,   193,   196,   197,   198,
     199,   203,   204,   207,   241,   268,   302,   330,   364,   389,
     423,   451,   479,   505,   536,   572,   573,   576,   582,   586,
     586,   586,   586,   586,   586,   586,   586,   586,   586,   588,
     589,   592,   596,   599,   600,   601,   604,   605,   606,   607,
     610,   613,   616,   619,   622,   626,   627,   628,   629,   630,
     633,   634,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   704,   707,   708,
     711,   712,   713,   717,   737
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
  "ID4", "TYPE", "ENDTYPE", "ID5", "NUL", "INITIALIZE", "CLASS",
  "ENDCLASS", "SELF", "ID6", "NEW", "EXTENDS", "'{'", "'}'", "'('", "')'",
  "','", "'.'", "'['", "']'", "$accept", "Program", "TypeDefBlock",
  "TypeDefList", "TypeDef", "ClassDefBlock", "ClassDefList", "ClassDef",
  "Cname", "MethodDecl", "MDecl", "MethodDefns", "FieldDeclList",
  "FieldDecl", "GDeclBlock", "GDeclList", "GDecl", "GidList", "Gid",
  "ParamList", "Plist", "Param", "Type", "LDeclBlock", "LDeclList",
  "LDecl", "IDList", "FDefBlock", "FDefList", "Slist", "Retstmt", "Stmt",
  "Ifstmt", "Whilestmt", "InputStmt", "OutputStmt", "AsgStmt", "BreakStmt",
  "ContinueStmt", "AllocStmt", "FreeStmt", "InitializeStmt", "var",
  "string", "expr", "ArgList", "Arg", "MainBlock", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   123,   125,    40,
      41,    44,    46,    91,    93
};
# endif

#define YYPACT_NINF -275

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-275)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     183,   304,    -4,  -275,    21,   -16,   -11,    47,   357,   208,
     248,    74,   248,  -275,  -275,  -275,  -275,    87,    87,   486,
    -275,    87,    59,    82,   136,    61,  -275,    88,   159,  -275,
     139,  -275,   208,   248,   248,  -275,   248,   248,  -275,   248,
    -275,   138,  -275,  -275,   145,   144,  -275,   144,  -275,  -275,
     144,   167,     3,    -3,  -275,  -275,   185,  -275,  -275,   206,
     248,   248,  -275,   248,  -275,  -275,   248,  -275,  -275,  -275,
       8,   258,    87,   209,   232,   213,    19,   184,  -275,   278,
     250,   273,   268,  -275,   286,  -275,    11,   248,  -275,  -275,
    -275,  -275,   231,    29,    79,  -275,    62,  -275,    96,   239,
     184,   258,  -275,  -275,  -275,  -275,  -275,  -275,   288,    16,
    -275,    11,   290,  -275,   106,   262,  -275,   271,   492,   306,
     432,   307,   109,  -275,   281,   321,   297,  -275,   298,   285,
     289,   432,   311,   113,  -275,   229,   229,   413,  -275,  -275,
     296,   300,  -275,  -275,   301,   323,   341,   294,   432,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
      25,   492,    66,   432,   320,   432,   492,   329,    90,   192,
    -275,   281,   289,   321,   141,   432,   367,   432,   492,   373,
    -275,  -275,   349,   349,  -275,  -275,    77,    30,    30,    66,
      66,   412,   380,  -275,   282,   421,    66,   432,   368,  -275,
    -275,   378,    66,   601,   749,   405,   393,   432,   410,   432,
     492,  -275,   147,  -275,  -275,   202,  -275,   188,   417,   398,
     432,   423,   432,   492,   240,  -275,   280,   578,   401,   649,
     -23,   156,   601,   674,   697,  -275,   407,   404,   416,   418,
     601,  -275,   749,  -275,   529,   551,   446,   182,   484,   720,
      66,    66,    77,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,   491,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,   431,
    -275,   464,   452,   474,   432,  -275,  -275,  -275,   454,  -275,
     476,   457,   477,   432,  -275,  -275,   458,  -275,  -275,  -275,
    -275,  -275,   483,   487,  -275,   459,   460,   469,  -275,  -275,
     467,  -275,   601,  -275,   749,   470,   466,   473,  -275,   702,
     325,   702,   325,   627,  -275,   764,   702,   325,   702,   325,
     702,   325,   627,   764,   627,   764,    71,  -275,    71,  -275,
      71,  -275,   411,   197,   411,   197,   702,   325,   475,   702,
     325,   702,   325,   627,   764,   702,   325,   702,   325,   702,
     325,   627,   764,   627,   764,    71,  -275,    71,  -275,    71,
    -275,   411,   197,   411,   197,   702,   325,  -275,   471,  -275,
     478,   496,  -275,   479,  -275,   480,   498,  -275,   492,   492,
    -275,  -275,   481,  -275,  -275,    77,   203,   246,  -275,  -275,
     485,  -275,  -275,   501,   400,   456,  -275,  -275,  -275,   482,
    -275,   500,  -275,  -275,   492,  -275,  -275,  -275,  -275,   468,
    -275
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     6,    43,    59,     0,     0,     0,
      45,     0,     0,     0,     0,     0,    20,    27,     0,    24,
       0,     1,     0,     0,     0,    12,     0,     0,     7,     0,
       4,     0,    71,    14,    51,    47,    50,    48,    42,    44,
      46,     0,     0,     0,    18,    19,     0,    22,    23,     0,
       0,     0,    13,     0,    10,    16,     0,     5,    15,     2,
       0,     0,     0,     0,     0,     0,     0,    54,    56,     0,
       0,     0,     0,    38,     0,    28,     0,     0,    11,    17,
       8,     3,     0,     0,     0,    49,     0,    58,     0,     0,
      53,     0,    57,    40,    41,    21,    37,    39,     0,     0,
      30,     0,     0,     9,     0,     0,    52,     0,     0,     0,
       0,     0,     0,    55,    40,     0,     0,    29,     0,     0,
      39,     0,     0,     0,    62,     0,     0,     0,    64,   115,
       0,     0,   110,   111,     0,     0,     0,     0,     0,    86,
      92,    93,    89,    90,    91,    94,    95,    96,    97,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,    70,    66,    65,    61,    63,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,     0,     0,   115,   129,
     183,     0,     0,    87,    88,     0,     0,     0,     0,     0,
       0,    34,     0,    26,    35,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,     0,     0,     0,     0,
     108,   107,   106,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,     0,     0,    32,    25,    31,     0,    82,
       0,     0,     0,     0,    67,    69,     0,   104,   105,   103,
     102,   113,     0,     0,   194,     0,     0,     0,   119,   118,
       0,   181,   191,   192,   190,     0,   189,   116,   128,   172,
     157,   173,   158,   171,   180,   165,   174,   159,   177,   162,
     178,   163,   176,   161,   175,   160,   169,   155,   168,   154,
     170,   156,   166,   152,   167,   153,   179,   164,   117,   143,
     130,   144,   131,   150,   127,   145,   132,   146,   133,   149,
     136,   148,   135,   147,   134,   141,   126,   140,   124,   142,
     125,   138,   122,   139,   123,   151,   137,    80,     0,    84,
       0,     0,    78,     0,    83,     0,     0,   121,     0,     0,
     112,   114,     0,   193,   182,     0,     0,     0,    79,    76,
       0,    77,    74,     0,     0,     0,   109,   188,   185,     0,
     187,     0,    75,    73,     0,   100,   101,   184,   186,     0,
      99
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -275,  -275,  -275,  -275,   503,   531,  -275,   516,  -275,   450,
     -97,   390,   495,   -52,   490,  -275,   543,    13,   493,   -63,
     -74,   463,   150,   364,  -275,   429,   447,   397,    15,  -120,
     -93,  -147,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,   -95,  -181,   118,  -274,  -275,   389
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,    25,    26,     9,    28,    29,    30,   109,
     110,   169,    82,    83,    10,    19,    20,    45,    46,    76,
      77,    78,    11,   119,   137,   138,   182,    12,    13,   148,
     164,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   313,   314,   315,   316,    14
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     163,   193,   100,    16,     3,   228,    22,    93,    94,    16,
       3,   175,   127,   241,    16,     3,   193,    16,     3,   100,
     100,   125,    16,     3,    23,    16,     3,    42,   193,    24,
     106,    47,   127,   139,    50,    16,     3,   300,   176,   195,
     196,   197,    80,    27,   194,   207,   209,    31,    74,    42,
     193,    81,    42,    74,    42,   192,   108,   220,   222,   106,
     193,   126,   193,    75,    74,    81,   117,   203,    92,   198,
     205,   324,   208,   193,    74,   193,    42,    41,    42,    99,
     198,    42,   218,   147,   221,    16,     3,   195,   196,   115,
     284,   227,   230,   231,   232,   232,    16,     3,   118,   240,
     117,   244,    42,   293,   246,   212,    24,   232,    54,   199,
     117,   217,   225,   117,   281,   200,   283,   117,    51,   201,
     199,   407,   409,   411,    74,   202,   200,   290,    44,   292,
     201,   232,   120,   264,   196,    74,   226,   193,   100,   116,
     170,    52,   131,   100,    56,   166,   193,    16,     3,   178,
     211,    21,   312,    16,     3,   319,   321,   323,   326,   328,
     330,   332,   334,   336,   338,   340,   342,   344,   346,    21,
     349,   351,   353,   355,   357,   359,   361,   363,   365,   367,
     369,   371,   373,   375,   214,   198,    74,     1,   170,     2,
       3,   381,    74,    53,    16,     3,    59,    70,    16,     3,
     386,   216,    79,    84,    71,    72,   198,   285,    16,     3,
      86,    57,     1,    27,     2,     3,   301,   225,   195,   196,
      79,    79,   273,   274,   275,   199,    79,    73,     4,     5,
     214,   200,    84,    74,     6,   201,   112,     4,   225,    85,
      97,   226,   311,    79,    79,   101,   199,     4,   287,   198,
     213,    79,   200,     4,     2,     3,   201,   193,   193,   128,
     286,   112,   226,   408,    16,     3,    96,   136,   404,   405,
      98,   180,   193,   181,    16,     3,   134,    16,     3,   128,
     204,   225,   294,   198,   295,   198,   102,   136,   114,   199,
     173,    16,     3,     4,   419,   200,   122,   237,   103,   201,
     312,   312,   312,    74,   229,   226,   410,   233,   234,    15,
      16,     3,   242,    80,   245,   296,   135,   225,    79,   133,
     249,   104,    81,   199,    79,   199,   105,    16,     3,   200,
     126,   200,   238,   201,   107,   201,   124,   239,   130,   202,
     168,   226,   161,   165,   249,   171,   172,   177,   174,    17,
     273,   274,   275,   276,   277,   186,   191,   206,    18,   187,
     188,     1,    79,     2,     3,   210,     4,    79,   320,   322,
     325,   327,   329,   331,   333,   335,   337,   339,   341,   343,
     345,   347,   189,   350,   352,   354,   356,   358,   360,   362,
     364,   366,   368,   370,   372,   374,   376,    35,    38,    40,
     190,    43,     4,   139,   219,    34,    37,    39,     6,   223,
     224,   140,   141,   142,   143,   235,   144,   236,   184,    16,
       3,    62,    64,    65,   243,    67,    68,   247,    69,    61,
      63,   414,   145,    66,   146,   139,   258,   259,   260,   415,
     248,   162,   279,   140,   141,   142,   143,   282,   144,    88,
      89,   280,    90,   147,   288,    91,   289,    87,   135,   139,
     291,   298,   121,   305,   145,   304,   146,   140,   141,   142,
     143,   139,   144,   264,   196,   306,   113,   307,   132,   140,
     141,   142,   143,   310,   144,   147,   167,   317,   145,   377,
     146,    48,    16,     3,   348,   139,   416,   179,    33,    36,
     145,   378,   146,   140,   141,   142,   143,   420,   144,   147,
     379,   380,   382,   383,   385,   384,   388,   389,   387,   390,
     391,   147,    60,   392,   145,   393,   146,   395,    55,   398,
     394,    17,   396,   400,   397,   403,   399,   401,   402,    32,
      18,   406,   417,   412,    58,   147,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   413,
     418,   129,    49,   215,   123,    95,   185,   263,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   111,     0,   183,     0,     0,     0,     0,     0,   278,
       0,   264,   196,   308,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,     0,     0,
       0,     0,     0,     0,     0,   309,   263,     0,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,     0,     0,     0,     0,     0,     0,     0,   297,   263,
     264,   196,     0,     0,   250,   251,     0,   253,   254,   255,
       0,     0,   258,   259,   260,   261,   262,     0,     0,     0,
       0,     0,     0,   264,   196,   263,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,     0,
       0,     0,     0,     0,     0,     0,     0,   278,     0,   264,
     196,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,     0,     0,     0,     0,     0,   299,
       0,     0,   278,     0,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   258,   259,   260,
     261,   262,     0,     0,   302,   278,     0,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
       0,     0,     0,     0,     0,     0,     0,   303,   278,     0,
       0,     0,     0,     0,   264,   196,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,     0,
     318,   265,   266,     0,   268,   269,   270,   278,     0,   273,
     274,   275,   276,   277,     0,     0,     0,     0,     0,     0,
       0,     0,   278
};

static const yytype_int16 yycheck[] =
{
     120,   148,    76,     6,     7,   186,    10,    70,    71,     6,
       7,   131,   109,   194,     6,     7,   163,     6,     7,    93,
      94,     5,     6,     7,     3,     6,     7,    12,   175,    45,
      82,    18,   129,     3,    21,     6,     7,    60,   131,    62,
      63,   161,    45,    54,    19,   165,   166,     0,    45,    34,
     197,    54,    37,    45,    39,   148,    45,   177,   178,   111,
     207,    45,   209,    60,    45,    54,     4,   162,    60,     3,
     163,   252,   165,   220,    45,   222,    61,     3,    63,    60,
       3,    66,   175,    53,   177,     6,     7,    62,    63,    60,
     210,   186,   187,   188,   189,   190,     6,     7,    36,   194,
       4,   196,    87,   223,   197,   168,    45,   202,    47,    43,
       4,   174,    35,     4,   207,    49,   209,     4,    59,    53,
      43,   395,   396,   397,    45,    59,    49,   220,    41,   222,
      53,   226,    36,    62,    63,    45,    59,   284,   212,    60,
     125,    59,    36,   217,    56,    36,   293,     6,     7,    36,
      60,     1,   247,     6,     7,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,    19,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   169,     3,    45,     4,   173,     6,
       7,   284,    45,    57,     6,     7,    57,    59,     6,     7,
     293,    60,    52,    53,    59,    61,     3,    60,     6,     7,
       4,    52,     4,    54,     6,     7,    60,    35,    62,    63,
      70,    71,    25,    26,    27,    43,    76,    60,    45,    46,
     215,    49,    82,    45,    51,    53,    86,    45,    35,    54,
       8,    59,    60,    93,    94,    61,    43,    45,    60,     3,
      58,   101,    49,    45,     6,     7,    53,   404,   405,   109,
      58,   111,    59,    60,     6,     7,    57,   117,   388,   389,
      57,    42,   419,    44,     6,     7,     5,     6,     7,   129,
     162,    35,    42,     3,    44,     3,     8,   137,    57,    43,
       5,     6,     7,    45,   414,    49,    57,    15,    48,    53,
     395,   396,   397,    45,   186,    59,    60,   189,   190,     5,
       6,     7,   194,    45,   196,    35,    45,    35,   168,    57,
     202,    48,    54,    43,   174,    43,    58,     6,     7,    49,
      45,    49,    50,    53,    48,    53,    48,    55,    48,    59,
      59,    59,    36,    36,   226,    48,    48,    36,    59,    45,
      25,    26,    27,    28,    29,    59,    62,    37,    54,    59,
      59,     4,   212,     6,     7,    36,    45,   217,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,    59,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     8,     9,    10,
      59,    12,    45,     3,    37,     8,     9,    10,    51,    36,
      61,    11,    12,    13,    14,     3,    16,    37,     5,     6,
       7,    32,    33,    34,     3,    36,    37,    59,    39,    32,
      33,    31,    32,    36,    34,     3,    25,    26,    27,    39,
      62,     9,    37,    11,    12,    13,    14,    37,    16,    60,
      61,    58,    63,    53,    37,    66,    58,    60,    45,     3,
      37,    60,    98,    59,    32,    58,    34,    11,    12,    13,
      14,     3,    16,    62,    63,    59,    87,    59,   114,    11,
      12,    13,    14,    37,    16,    53,   122,     3,    32,    58,
      34,     5,     6,     7,     3,     3,    40,   133,     8,     9,
      32,    37,    34,    11,    12,    13,    14,    39,    16,    53,
      58,    37,    58,    37,    37,    58,    33,    30,    60,    60,
      60,    53,    32,    54,    32,    58,    34,    61,    25,    58,
      60,    45,    59,    37,    59,    37,    58,    58,    58,     8,
      54,    60,    60,    58,    28,    53,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    58,
      60,   111,    19,   173,   101,    72,   137,    38,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    86,    -1,   136,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    62,    63,    64,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    38,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    38,
      62,    63,    -1,    -1,    17,    18,    -1,    20,    21,    22,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    38,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    62,
      63,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    38,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    25,    26,    27,
      28,    29,    -1,    -1,    60,    38,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    38,    -1,
      -1,    -1,    -1,    -1,    62,    63,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      60,    17,    18,    -1,    20,    21,    22,    38,    -1,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     6,     7,    45,    46,    51,    66,    67,    70,
      79,    87,    92,    93,   112,     5,     6,    45,    54,    80,
      81,    87,    10,     3,    45,    68,    69,    54,    71,    72,
      73,     0,    70,    79,    92,   112,    79,    92,   112,    92,
     112,     3,    93,   112,    41,    82,    83,    82,     5,    81,
      82,    59,    59,    57,    47,    69,    56,    52,    72,    57,
      79,    92,   112,    92,   112,   112,    92,   112,   112,   112,
      59,    59,    61,    60,    45,    60,    84,    85,    86,    87,
      45,    54,    77,    78,    87,    54,     4,    92,   112,   112,
     112,   112,    60,    84,    84,    83,    57,     8,    57,    60,
      85,    61,     8,    48,    48,    58,    78,    48,    45,    74,
      75,    77,    87,   112,    57,    60,    60,     4,    36,    88,
      36,    88,    57,    86,    48,     5,    45,    75,    87,    74,
      48,    36,    88,    57,     5,    45,    87,    89,    90,     3,
      11,    12,    13,    14,    16,    32,    34,    53,    94,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    36,     9,    94,    95,    36,    36,    88,    59,    76,
      93,    48,    48,     5,    59,    94,    95,    36,    36,    88,
      42,    44,    91,    91,     5,    90,    59,    59,    59,    59,
      59,    62,    95,    96,    19,    62,    63,    94,     3,    43,
      49,    53,    59,   107,   109,    95,    37,    94,    95,    94,
      36,    60,    84,    58,    93,    76,    60,    84,    95,    37,
      94,    95,    94,    36,    61,    35,    59,   107,   108,   109,
     107,   107,   107,   109,   109,     3,    37,    15,    50,    55,
     107,   108,   109,     3,   107,   109,    95,    59,    62,   109,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    38,    62,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    38,    37,
      58,    95,    37,    95,    94,    60,    58,    60,    37,    58,
      95,    37,    95,    94,    42,    44,    35,    60,    60,    60,
      60,    60,    60,    60,    58,    59,    59,    59,    64,    64,
      37,    60,   107,   108,   109,   110,   111,     3,    60,   107,
     109,   107,   109,   107,   108,   109,   107,   109,   107,   109,
     107,   109,   107,   109,   107,   109,   107,   109,   107,   109,
     107,   109,   107,   109,   107,   109,   107,   109,     3,   107,
     109,   107,   109,   107,   109,   107,   109,   107,   109,   107,
     109,   107,   109,   107,   109,   107,   109,   107,   109,   107,
     109,   107,   109,   107,   109,   107,   109,    58,    37,    58,
      37,    95,    58,    37,    58,    37,    95,    60,    33,    30,
      60,    60,    54,    58,    60,    61,    59,    59,    58,    58,
      37,    58,    58,    37,    94,    94,    60,   110,    60,   110,
      60,   110,    58,    58,    31,    39,    40,    60,    60,    94,
      39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    67,    68,
      68,    69,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    75,    75,    76,    76,    77,    77,    78,
      78,    78,    79,    79,    80,    80,    81,    81,    81,    82,
      82,    83,    83,    84,    84,    85,    85,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    98,    99,   100,   100,   100,   101,   101,   101,   101,
     102,   103,   104,   105,   106,   107,   107,   107,   107,   107,
     108,   108,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     111,   111,   111,   112,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     4,     2,     3,     1,     2,     4,     5,
       3,     4,     2,     3,     2,     3,     3,     4,     3,     2,
       1,     4,     3,     2,     1,     8,     7,     1,     3,     2,
       1,     5,     5,     4,     4,     2,     1,     2,     1,     2,
       2,     2,     3,     2,     2,     1,     2,     2,     2,     3,
       1,     1,     4,     2,     1,     3,     1,     2,     2,     1,
       1,     3,     2,     2,     1,     2,     2,     3,     1,     3,
       1,     2,     1,    12,    11,    12,    11,    11,    10,    11,
      10,     9,     9,    10,    10,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     9,
       7,     7,     4,     4,     4,     4,     3,     3,     3,     6,
       1,     1,     5,     4,     5,     1,     3,     3,     4,     4,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     1,     6,     5,     6,     5,     3,     1,
       1,     1,     1,    11,    10
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
#line 45 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 48 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 49 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 50 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 52 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 53 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 55 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 56 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 58 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 59 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 60 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 63 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[-1].n5);DisplayT1();}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 66 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) =(yyvsp[-1].n5);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 67 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[0].n5);}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 70 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[-3].n5); (yyvsp[-3].n5)->fields = (yyvsp[-1].n6);makeFNull();(yyvsp[-3].n5)->size = sz;sz =0;fi =1;}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 73 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) =(yyvsp[-1].n7);ma = 1;DisplayC();}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 76 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) = (yyvsp[0].n7);}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 77 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) = (yyvsp[0].n7);}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 80 "decl.y" /* yacc.c:1646  */
    {
                                                                                  (yyval.n7) = (yyvsp[-7].n7);
                                                                                  (yyval.n7)->Vfuncptr = (yyvsp[-3].n8);
                                                                                  (yyval.n7)->Fieldcount = fi;
                                                                                  (yyval.n7)->Methodcount = fjj;
                                                                                  fjk[(yyvsp[-7].n7)->Class_index] = fjj;
                                                                                  (yyval.n7)->Memberfield  = (yyvsp[-4].n6);
                                                                                  f15 =0;
                                                                                  makeFNull();
                                                                                  checkCou();
                                                                                  makeMNull();
                                                                                  }
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 92 "decl.y" /* yacc.c:1646  */
    {             (yyval.n7) = (yyvsp[-6].n7);
                                                                                  (yyval.n7)->Vfuncptr = (yyvsp[-3].n8);
                                                                                  (yyval.n7)->Fieldcount = fi;
                                                                                  (yyval.n7)->Methodcount = fjj;
                                                                                  f15 =0;
                                                                                  fjk[(yyvsp[-6].n7)->Class_index] = fjj;
                                                                                  makeFNull();
                                                                                  checkCou();
                                                                                  makeMNull();
                                                                                  }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 104 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) = (yyvsp[0].n7);}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 105 "decl.y" /* yacc.c:1646  */
    { (yyval.n7) = (yyvsp[-2].n7);(yyval.n7)->Parentptr = (yyvsp[0].n7); 
                                  fjj = fjk[(yyvsp[0].n7)->Class_index];
                                  (yyval.n7)->Memberfield = makeCopy((yyvsp[0].n7)->Memberfield); 
                                  makeAdrrCopy((yyvsp[-2].n7)->Class_index, (yyvsp[0].n7)->Class_index);
                                  fi = (yyvsp[0].n7)->Fieldcount;
                                  (yyval.n7)->Vfuncptr = makeCopyM((yyvsp[0].n7)->Vfuncptr);
                                  head6 = (yyval.n7)->Vfuncptr;
                                  head5 = (yyval.n7)->Memberfield;
                                }
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 117 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = (yyvsp[-1].n8);}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 118 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = (yyvsp[0].n8);}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 121 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-3].n6), (yyvsp[-1].n1));}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 122 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-3].n6), (yyvsp[-1].n1));}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 123 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-2].n6), NULL);}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 124 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-2].n6), NULL);}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 128 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 129 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 132 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[-1].n6);}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 133 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[0].n6);}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 136 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) =(yyvsp[0].n6);}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 137 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) =(yyvsp[0].n6);}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 138 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[0].n6); (yyval.n6)->Ctype = (yyvsp[-1].n7);fi++;}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 142 "decl.y" /* yacc.c:1646  */
    {   (yyval.no) =(yyvsp[-1].no);Display((yyvsp[-1].no)); }
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 143 "decl.y" /* yacc.c:1646  */
    {}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 146 "decl.y" /* yacc.c:1646  */
    {(yyval.no) =(yyvsp[-1].no);}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 147 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 149 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 150 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 151 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 154 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-2].no);}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 155 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 158 "decl.y" /* yacc.c:1646  */
    {(yyval.no) =(yyvsp[0].no);}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 159 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-3].no); (yyvsp[-3].no)->paramlist = (yyvsp[-1].n1);adrs--;}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 166 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[-2].n1);}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 167 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 170 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 171 "decl.y" /* yacc.c:1646  */
    {  (yyval.n1) = (yyvsp[0].n1);
                              struct Paramstruct *temp = (yyvsp[0].n1);
                              while(temp->next != NULL){
                              temp = temp->next;
                              }
                              temp->typet = (yyvsp[-1].n5);
                            }
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 180 "decl.y" /* yacc.c:1646  */
    {}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 181 "decl.y" /* yacc.c:1646  */
    {}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 184 "decl.y" /* yacc.c:1646  */
    {(yyval.n3)= (yyvsp[-1].n3);}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 185 "decl.y" /* yacc.c:1646  */
    {emp = 1;}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 188 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 189 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 192 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 193 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 196 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 197 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 198 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 199 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 203 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[-1].n2);}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 204 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[0].n2);}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 207 "decl.y" /* yacc.c:1646  */
    {

                                                                (yyval.n2) = (yyvsp[-10].n2);
                                                                if(emp == 0){
                                                                  (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                }
                                                                else{
                                                                  (yyval.n2)->Lentry = head2;
                                                                  emp  = 0;
                                                                }
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fj;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,ADRC\n");
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                adr = adr + 4;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fj);
                                                                fj++;
                                                                adrc = adr;
                                                                i = CodeGen((yyvsp[-10].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 241 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fj;
                                                                }
                                                                (yyval.n2)->Lentry = head2;
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,ADRC\n");
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                adr = adr + 4;
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fj);
                                                                fj++;
                                                                adrc = adr;
                                                                i = CodeGen((yyvsp[-9].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 268 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-10].n2);
                                                                (yyval.n2)->typet = (yyvsp[-11].n5);
                                                                if(emp == 0){
                                                                  (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                }
                                                                else{
                                                                (yyval.n2)->Lentry = head2;
                                                                  emp  = 0;
                                                                }
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fj;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,ADRC\n");
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                adr = adr + 4;
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fj);
                                                                fj++;
                                                                adrc = adr;
                                                                i = CodeGen((yyvsp[-10].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 302 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->typet = (yyvsp[-10].n5);
                                                                (yyval.n2)->Lentry = head2;
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fj;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,ADRC\n");
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                adr = adr + 4;
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fj);
                                                                fj++;
                                                                adrc = adr;
                                                                i = CodeGen((yyvsp[-9].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 330 "decl.y" /* yacc.c:1646  */
    {

                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                if(emp == 0){
                                                                  (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                }
                                                                else{
                                                                  emp  = 0;
                                                                  (yyval.n2)->Lentry = head2;
                                                                }
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fj;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,ADRC\n");
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                adr = adr + 4;
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fj);
                                                                fj++;
                                                                adrc = adr;
                                                                i = CodeGen((yyvsp[-9].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 364 "decl.y" /* yacc.c:1646  */
    {    (yyval.n2) = (yyvsp[-8].n2);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->Lentry = head2;
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fj;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,ADRC\n");
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                adr = adr + 4;
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fj);
                                                                adrc = adr;
                                                                fj++;
                                                                i = CodeGen((yyvsp[-8].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                }
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 389 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->typet = (yyvsp[-10].n5);
                                                                if(emp == 0){
                                                                  (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                }
                                                                else{
                                                                  emp  = 0;
                                                                  (yyval.n2)->Lentry = head2;
                                                                }
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fj;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,ADRC\n");
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                adr = adr + 4;
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fj);
                                                                adrc = adr;
                                                                fj++;
                                                                i = CodeGen((yyvsp[-9].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 423 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-8].n2);
                                                                (yyval.n2)->typet = (yyvsp[-9].n5);
                                                                (yyval.n2)->Lentry = head2;
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fj;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,ADRC\n");
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                adr = adr + 4;
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fj);
                                                                adrc = adr;
                                                                fj++;
                                                                i = CodeGen((yyvsp[-8].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                }
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 451 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-7].n2);
                                                                (yyval.n2)->typet = (yyvsp[-8].n5);
                                                                (yyval.n2)->Lentry = head2;
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->left  = NULL;
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fj;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,ADRC\n");
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                adr = adr + 4;
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fj);
                                                                adrc = adr;
                                                                fj++;
                                                                i = CodeGen((yyvsp[-7].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 479 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-7].n2);
                                                                (yyval.n2)->Lentry = head2;
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->left = NULL;
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fj;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,ADRC\n");
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                adr = adr + 4;
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fj);
                                                                adrc = adr;
                                                                fj++;
                                                                i = CodeGen((yyvsp[-7].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                }
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 505 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-8].n2);
                                                                if(emp == 0){
                                                                }
                                                                else{
                                                                  (yyval.n2)->Lentry = head2;
                                                                  emp = 0;
                                                                }
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->left = NULL;
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fj;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,ADRC\n");
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                adr = adr + 4;
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fj);
                                                                adrc = adr;
                                                                fj++;
                                                                i = CodeGen((yyvsp[-8].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                }
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 536 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-8].n2);
                                                                (yyval.n2)->typet = (yyvsp[-9].n5);
                                                                if(emp == 0){
                                                                }
                                                                else{
                                                                  (yyval.n2)->Lentry = head2;
                                                                  emp = 0;
                                                                }
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->left = NULL;
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fj;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,ADRC\n");
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                adr = adr + 4;
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fj);
                                                                adrc = adr;
                                                                fj++;
                                                                i = CodeGen((yyvsp[-8].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                }
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 572 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeConnectorNode((yyvsp[-1].n2), (yyvsp[0].n2), 0);}
#line 2570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 573 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 576 "decl.y" /* yacc.c:1646  */
    {        if((yyvsp[0].n2)->nodetype != rettype){
                                                      printf("Unmatching type error");
                                                      exit(-1);
                                                  }
                                                  (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);
                                          }
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 582 "decl.y" /* yacc.c:1646  */
    {if((yyvsp[0].n2)->nodetype != rettype){printf("Unmatching type error");exit(-1);}
                                            (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);}
#line 2594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 588 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-6].n2), (yyvsp[-3].n2), (yyvsp[-1].n2), 6);}
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 589 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 7);}
#line 2606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 592 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 8);}
#line 2612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 596 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("read", (yyvsp[-1].n2), 1);}
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 599 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 600 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 2630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 601 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 2636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 604 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 605 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 606 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 607 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNodeC("new", (yyvsp[-5].n2), (yyvsp[-1].n7), 24);}
#line 2660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 610 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("break", 9);}
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 613 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("continue", 10);}
#line 2672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 616 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("alloc", (yyvsp[-4].n2), 18);(yyvsp[-4].n2)->type = 19;}
#line 2678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 619 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("free", (yyvsp[-1].n2), 22);}
#line 2684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 622 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("initialize", (yyvsp[-4].n2), 21); }
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 626 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[0].n2);}
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 627 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 628 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);(yyval.n2)->left = (yyvsp[-2].n2);(yyvsp[-2].n2)->right = (yyval.n2);}
#line 2708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 629 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 630 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 2720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 633 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 634 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 2732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 637 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 638 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 639 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 640 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 641 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 642 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 643 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 2774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 644 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 645 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 646 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 647 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 648 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 649 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 650 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 651 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 652 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 653 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 654 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 655 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 656 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 657 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 658 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 659 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 660 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 661 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 662 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 663 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 664 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 665 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 666 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 667 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 668 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 669 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 670 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 671 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 672 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 673 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 674 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 675 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 676 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 677 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 678 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 679 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 680 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 681 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 3002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 682 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 3008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 683 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 3014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 684 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 3020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 685 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 3026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 686 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 3032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 687 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 3038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 688 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 3044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 689 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 3050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 690 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 3056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 691 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 3062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 692 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 3068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 693 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 3074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 694 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 3080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 695 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 3086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 696 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNode((yyvsp[-2].n2), NULL, 15);}
#line 3092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 697 "decl.y" /* yacc.c:1646  */
    {check((yyvsp[-3].n2)->Gentry->paramlist, (yyvsp[-1].n4));(yyval.n2) = makeFuncCallNode((yyvsp[-3].n2), (yyvsp[-1].n4), 15);makeANull();}
#line 3098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 698 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 3104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 699 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNodeC((yyvsp[-3].n2), NULL, (yyvsp[-1].n4), 15);  makeANull();}
#line 3110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 700 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNodeC((yyvsp[-2].n2), NULL, NULL, 15); }
#line 3116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 701 "decl.y" /* yacc.c:1646  */
    { struct MemberFuncList *temp = LookupM((yyvsp[-3].n2)->varname, (yyvsp[-5].n2)->Ctype);
                                              check(temp->paramlist, (yyvsp[-1].n4));
                                              (yyval.n2) = makeFuncCallNodeC((yyvsp[-3].n2), (yyvsp[-5].n2), (yyvsp[-1].n4), 15);makeANull();}
#line 3124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 704 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNodeC((yyvsp[-2].n2), (yyvsp[-4].n2), NULL, 15);}
#line 3130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 707 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[-2].n4);}
#line 3136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 708 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[0].n4);}
#line 3142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 711 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 3148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 712 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 3154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 713 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 3160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 717 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-9].n2); 
                                                                          if(emp == 0){
                                                                          (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                          }
                                                                          else{
                                                                          emp = 0;
                                                                          }
                                                                          (yyval.n2)->left = (yyvsp[-3].n2);
                                                                          (yyval.n2)->right = (yyvsp[-2].n2);
                                                                          printf("Main Function With Local Decs\n");
                                                                          DisplayL((yyval.n2)->Lentry);
                                                                          FILE *fptr1 = fopen("tree1.xsm", "a+");
                                                                          fprintf(fptr1, "MAIN\n");
                                                                          i = CodeGen((yyvsp[-9].n2), fptr1);
                                                                          fclose(fptr1);
                                                                          FILE *fptr2 = fopen("a.c", "w");
                                                                          fprintf(fptr2,"int address = ");
                                                                          fprintf(fptr2,"%d;", adrs);
                                                                          fclose(fptr2);
                                                                          }
#line 3185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 737 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-8].n2); 
                                                                          (yyval.n2)->left = (yyvsp[-3].n2);
                                                                          (yyval.n2)->right = (yyvsp[-2].n2);
                                                                          printf("Main Function\n");
                                                                          FILE *fptr1 = fopen("tree1.xsm", "a+");
                                                                          fprintf(fptr1, "MAIN\n");
                                                                          i = CodeGen((yyvsp[-8].n2), fptr1);
                                                                          fclose(fptr1);
                                                                          FILE *fptr2 = fopen("a.c", "w");
                                                                          fprintf(fptr2,"int address = ");
                                                                          fprintf(fptr2,"%d;", adrs);
                                                                          fclose(fptr2);
                                                                          }
#line 3203 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3207 "y.tab.c" /* yacc.c:1646  */
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
#line 752 "decl.y" /* yacc.c:1906  */


yyerror(char const *s)
{
    printf("yyerror %s", s);
}

int main(void){
    extern FILE *yyin;
    yyin = fopen("input.txt", "r");
    TypeTableCreate();
    FILE *fptr = fopen("tree1.xsm", "w");
    fprintf(fptr, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
    fprintf(fptr, "BRKP\n");
    fclose(fptr);
    yyparse();
    return 0;
}
