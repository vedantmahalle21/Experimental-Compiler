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
    int fl = 0;
    int i =0;
    int j;
    int b = 0;
    int ma = 0;

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
    NEW = 310
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

#line 241 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 258 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   791

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  189
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  408

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

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
      58,    59,     2,     2,    60,     2,    61,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    63,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    63,    66,
      67,    70,    73,    76,    77,    80,    92,    96,    97,   100,
     101,   102,   103,   107,   108,   111,   112,   115,   116,   117,
     121,   122,   125,   126,   128,   129,   130,   133,   134,   137,
     138,   141,   142,   145,   146,   149,   150,   159,   160,   163,
     164,   167,   168,   171,   172,   175,   176,   177,   178,   182,
     183,   186,   212,   237,   263,   289,   315,   338,   364,   390,
     416,   445,   446,   449,   455,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   461,   462,   465,   469,   472,
     473,   474,   477,   478,   479,   480,   483,   486,   489,   492,
     495,   499,   500,   501,   502,   503,   506,   507,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,   574,   577,   580,   581,   584,   585,   589,   600
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
  "ENDCLASS", "SELF", "ID6", "NEW", "'{'", "'}'", "'('", "')'", "','",
  "'.'", "'['", "']'", "$accept", "Program", "TypeDefBlock", "TypeDefList",
  "TypeDef", "ClassDefBlock", "ClassDefList", "ClassDef", "Cname",
  "MethodDecl", "MDecl", "MethodDefns", "FieldDeclList", "FieldDecl",
  "GDeclBlock", "GDeclList", "GDecl", "GidList", "Gid", "ParamList",
  "Plist", "Param", "Type", "LDeclBlock", "LDeclList", "LDecl", "IDList",
  "FDefBlock", "FDefList", "Slist", "Retstmt", "Stmt", "Ifstmt",
  "Whilestmt", "InputStmt", "OutputStmt", "AsgStmt", "BreakStmt",
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
     305,   306,   307,   308,   309,   310,   123,   125,    40,    41,
      44,    46,    91,    93
};
# endif

#define YYPACT_NINF -344

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-344)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     476,   352,    34,  -344,    10,    20,    56,   115,   497,   310,
     249,   121,   249,  -344,  -344,  -344,  -344,    77,    77,   393,
    -344,    77,    70,    79,    83,   -24,  -344,  -344,    69,  -344,
      90,  -344,   310,   249,   249,  -344,   249,   249,  -344,   249,
    -344,   127,  -344,  -344,   132,    73,  -344,    73,  -344,  -344,
      73,   122,    18,   266,  -344,  -344,  -344,  -344,   189,   249,
     249,  -344,   249,  -344,  -344,   249,  -344,  -344,  -344,    24,
     422,    77,   138,   190,   146,    29,   147,  -344,   205,   183,
     195,   276,  -344,   197,   266,   249,  -344,  -344,  -344,  -344,
     170,    41,   173,  -344,    94,  -344,   102,   185,   147,   422,
    -344,  -344,  -344,  -344,  -344,  -344,   284,  -344,   104,   194,
    -344,    75,   483,   216,   423,   221,   108,  -344,   217,   299,
    -344,   219,   423,   228,   109,  -344,   177,   177,   403,  -344,
    -344,   211,   223,  -344,  -344,   227,   230,   235,   240,   423,
    -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,
    -344,    14,   483,   139,   423,   271,   483,   483,   277,   261,
     445,   274,  -344,   279,   270,   423,   294,   483,   483,   298,
    -344,  -344,   275,   275,  -344,  -344,   193,    11,    11,   139,
     139,   334,   302,  -344,   180,   337,   139,   423,   283,  -344,
    -344,   281,   139,   602,   739,   308,   289,   423,   423,   483,
     199,   142,  -344,   261,   270,   218,   312,   293,   423,   423,
     483,   178,  -344,   231,   580,   295,   649,   -44,   -33,   602,
     673,   695,  -344,   335,   338,   343,   353,   602,  -344,   739,
    -344,   532,   554,   319,     9,   349,   717,   139,   139,   193,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   392,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   355,  -344,   379,   382,
     423,  -344,   233,  -344,  -344,  -344,   241,   364,  -344,   387,
     390,   423,  -344,  -344,   372,  -344,  -344,  -344,  -344,  -344,
     400,   412,  -344,   386,   394,   395,  -344,  -344,   397,  -344,
     602,   739,   405,   396,   407,  -344,   482,   503,   482,   503,
     627,  -344,   753,   482,   503,   482,   503,   482,   503,   627,
     753,   627,   753,   -11,  -344,   -11,  -344,   -11,  -344,   -16,
     184,   -16,   184,   482,   503,   410,   482,   503,   482,   503,
     627,   753,   482,   503,   482,   503,   482,   503,   627,   753,
     627,   753,   -11,  -344,   -11,  -344,   -11,  -344,   -16,   184,
     -16,   184,   482,   503,  -344,   417,   420,   432,  -344,  -344,
    -344,   421,   427,   448,  -344,   483,   483,  -344,  -344,   429,
    -344,  -344,   139,    58,    76,  -344,  -344,   435,  -344,  -344,
     449,   391,   447,  -344,  -344,  -344,   430,  -344,   443,  -344,
    -344,   483,  -344,  -344,  -344,  -344,   459,  -344
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    57,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,     6,    41,    57,     0,     0,     0,
      43,     0,     0,     0,     0,     0,    20,    26,     0,    24,
       0,     1,     0,     0,     0,    12,     0,     0,     7,     0,
       4,     0,    69,    14,    49,    45,    48,    46,    40,    42,
      44,     0,     0,     0,    18,    19,    22,    23,     0,     0,
       0,    13,     0,    10,    16,     0,     5,    15,     2,     0,
       0,     0,     0,     0,     0,     0,    52,    54,     0,     0,
       0,     0,    36,     0,     0,     0,    11,    17,     8,     3,
       0,     0,     0,    47,     0,    56,     0,     0,    51,     0,
      55,    38,    39,    21,    35,    37,     0,     9,     0,     0,
      50,     0,     0,     0,     0,     0,     0,    53,     0,     0,
      28,     0,     0,     0,     0,    60,     0,     0,     0,    62,
     111,     0,     0,   106,   107,     0,     0,     0,     0,     0,
      82,    88,    89,    85,    86,    87,    90,    91,    92,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,    27,     0,    37,     0,     0,     0,     0,     0,
      66,    68,    64,    63,    59,    61,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,     0,     0,   111,   125,
     179,     0,     0,    83,    84,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,   104,   103,   102,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,    32,     0,    25,    33,    31,     0,     0,    80,     0,
       0,     0,    65,    67,     0,   100,   101,    99,    98,   109,
       0,     0,   189,     0,     0,     0,   115,   114,     0,   177,
     187,   186,     0,   185,   112,   124,   168,   153,   169,   154,
     167,   176,   161,   170,   155,   173,   158,   174,   159,   172,
     157,   171,   156,   165,   151,   164,   150,   166,   152,   162,
     148,   163,   149,   175,   160,   113,   139,   126,   140,   127,
     146,   123,   141,   128,   142,   129,   145,   132,   144,   131,
     143,   130,   137,   122,   136,   120,   138,   121,   134,   118,
     135,   119,   147,   133,    78,     0,     0,     0,    30,    29,
      76,     0,     0,     0,   117,     0,     0,   108,   110,     0,
     188,   178,     0,     0,     0,    77,    74,     0,    75,    72,
       0,     0,     0,   105,   184,   181,     0,   183,     0,    73,
      71,     0,    96,    97,   180,   182,     0,    95
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -344,  -344,  -344,  -344,   480,   505,  -344,   486,  -344,  -344,
     399,  -344,   436,   -74,    95,  -344,   500,    16,   452,   -64,
     -72,   425,     3,   202,  -344,   388,   398,   315,   152,  -114,
      62,  -138,  -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,
    -344,  -344,   -87,  -182,   123,  -343,  -344,   381
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,    25,    26,     9,    28,    29,    30,   119,
     120,   201,    81,    82,    10,    19,    20,    45,    46,    75,
      76,    77,    11,   113,   128,   129,   172,    12,    13,   139,
     155,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   215,   301,   302,   303,    14
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     154,   183,   228,    98,    21,    91,    92,   104,   165,   245,
     246,   247,   188,    23,   130,   288,   183,   185,   186,    98,
      98,    24,    21,    54,    16,     3,   289,   183,   185,   186,
      16,     3,   104,   184,    47,    16,     3,    50,   187,   394,
     396,   398,   197,   198,    22,   251,   186,    16,     3,   183,
     251,   186,   189,   208,   209,    78,    83,   311,   190,   183,
     183,   188,   191,    73,   138,    24,   193,   192,   299,    73,
     183,   183,    78,    78,    73,   185,   186,    74,    78,   188,
     125,    16,     3,    90,    83,   270,    73,    83,    97,   214,
     217,   218,   219,   219,    78,    78,   281,   227,   111,   231,
     109,   189,    78,    33,    36,   219,   111,   190,   111,   121,
      27,   191,   111,   111,   127,    31,   192,   395,    44,   189,
     126,    56,   163,    27,    41,   190,   219,    59,    51,   191,
     112,   127,   183,    71,   192,   397,   272,    52,   114,    53,
     122,   276,   188,   183,   157,   168,    58,   300,    16,     3,
     306,   308,   310,   313,   315,   317,   319,   321,   323,   325,
     327,   329,   331,   333,    42,   336,   338,   340,   342,   344,
     346,   348,   350,   352,   354,   356,   358,   360,   362,    16,
       3,    72,   189,   188,   166,    69,    42,     4,   190,    42,
      70,    42,   191,    84,    94,   224,   188,   192,    95,   273,
      98,   182,    96,    78,    98,    16,     3,    99,    78,   260,
     261,   262,    42,   100,    42,   212,   195,    42,    73,   170,
     282,   171,   283,   189,    16,     3,   108,   206,   212,   190,
     225,   101,   110,   191,   188,   226,   189,    42,   213,    16,
       3,   116,   190,   102,    73,   105,   191,    16,     3,   233,
     124,   213,   152,   183,   183,     2,     3,   156,   271,   268,
     269,   391,   392,    73,   167,   159,   284,   164,   183,   176,
     279,   280,    16,     3,   189,    78,   194,   275,    73,    78,
     190,   177,    16,     3,   191,   178,    73,   406,   179,   192,
      16,     3,   368,   180,     4,   300,   300,   300,   115,   216,
     369,   181,   220,   221,   160,    16,     3,   229,   196,   232,
     123,    79,   202,   199,     1,   236,     2,     3,   158,   200,
      80,    79,   203,    34,    37,    39,   169,   204,   205,   118,
      80,   207,   367,   103,   210,   211,   236,   222,    80,   223,
     230,   234,   235,   373,   161,   266,   267,    60,    62,   277,
     278,    65,   304,   274,   286,     4,   298,    15,    16,     3,
     307,   309,   312,   314,   316,   318,   320,   322,   324,   326,
     328,   330,   332,   334,    85,   337,   339,   341,   343,   345,
     347,   349,   351,   353,   355,   357,   359,   361,   363,    35,
      38,    40,   292,    43,   130,   335,   293,    17,    48,    16,
       3,   294,   131,   132,   133,   134,    18,   135,   174,    16,
       3,   295,   364,    61,    63,    64,   365,    66,    67,   366,
      68,   370,   401,   136,   371,   137,   130,   372,    16,     3,
     402,   374,   153,   375,   131,   132,   133,   134,    17,   135,
      86,    87,   376,    88,   138,   377,    89,    18,   126,   379,
     130,    16,     3,   378,   380,   136,   382,   137,   131,   132,
     133,   134,   130,   135,   381,   383,   107,    73,   384,   387,
     131,   132,   133,   134,   385,   135,   138,   386,   388,   136,
       1,   137,     2,     3,   389,   390,   130,   403,   393,   404,
       4,   136,   399,   137,   131,   132,   133,   134,   407,   135,
     138,     1,   405,     2,     3,    55,   400,   245,   246,   247,
     248,   249,   138,    32,    57,   136,   175,   137,   162,    49,
     106,     4,     5,    93,   117,   173,     0,     6,   260,   261,
     262,   263,   264,     0,     0,     0,   138,     0,     0,     0,
       0,     0,     4,   251,   186,     0,     0,     0,     6,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,     0,     0,     0,     0,     0,     0,     0,     0,
     250,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,     0,     0,     0,     0,     0,     0,
       0,     0,   265,   251,   186,   296,     0,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
       0,     0,     0,     0,     0,     0,     0,   297,   250,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,     0,     0,     0,     0,     0,     0,     0,   285,
     250,   251,   186,     0,   237,   238,     0,   240,   241,   242,
       0,     0,   245,   246,   247,   248,   249,     0,     0,     0,
       0,     0,     0,   251,   186,   250,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,     0,
       0,     0,     0,     0,     0,     0,     0,   265,   251,   186,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,     0,     0,     0,     0,     0,   287,     0,
       0,   265,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,     0,     0,     0,     0,     0,
       0,     0,   290,   265,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,     0,     0,     0,
       0,     0,     0,     0,   291,   265,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,     0,
     252,   253,     0,   255,   256,   257,   305,   265,   260,   261,
     262,   263,   264,     0,     0,     0,     0,     0,     0,     0,
       0,   265
};

static const yytype_int16 yycheck[] =
{
     114,   139,   184,    75,     1,    69,    70,    81,   122,    25,
      26,    27,     3,     3,     3,    59,   154,    61,    62,    91,
      92,    45,    19,    47,     6,     7,    59,   165,    61,    62,
       6,     7,   106,    19,    18,     6,     7,    21,   152,   382,
     383,   384,   156,   157,    10,    61,    62,     6,     7,   187,
      61,    62,    43,   167,   168,    52,    53,   239,    49,   197,
     198,     3,    53,    45,    53,    45,   153,    58,    59,    45,
     208,   209,    69,    70,    45,    61,    62,    59,    75,     3,
       5,     6,     7,    59,    81,   199,    45,    84,    59,   176,
     177,   178,   179,   180,    91,    92,   210,   184,     4,   186,
      59,    43,    99,     8,     9,   192,     4,    49,     4,   106,
      54,    53,     4,     4,   111,     0,    58,    59,    41,    43,
      45,    52,   119,    54,     3,    49,   213,    32,    58,    53,
      36,   128,   270,    60,    58,    59,   200,    58,    36,    56,
      36,   205,     3,   281,    36,    36,    56,   234,     6,     7,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,    12,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,     6,
       7,    59,    43,     3,   122,    58,    34,    45,    49,    37,
      58,    39,    53,     4,    56,    15,     3,    58,     8,    57,
     272,   139,    56,   200,   276,     6,     7,    60,   205,    25,
      26,    27,    60,     8,    62,    35,   154,    65,    45,    42,
      42,    44,    44,    43,     6,     7,    56,   165,    35,    49,
      50,    48,    59,    53,     3,    55,    43,    85,    58,     6,
       7,    56,    49,    48,    45,    48,    53,     6,     7,   187,
      56,    58,    36,   391,   392,     6,     7,    36,    59,   197,
     198,   375,   376,    45,    36,    48,    35,    48,   406,    58,
     208,   209,     6,     7,    43,   272,   153,    59,    45,   276,
      49,    58,     6,     7,    53,    58,    45,   401,    58,    58,
       6,     7,    59,    58,    45,   382,   383,   384,    96,   176,
      59,    61,   179,   180,     5,     6,     7,   184,    37,   186,
     108,    45,   160,    36,     4,   192,     6,     7,   116,    58,
      54,    45,    48,     8,     9,    10,   124,    48,    58,    45,
      54,    37,   270,    57,    36,    60,   213,     3,    54,    37,
       3,    58,    61,   281,    45,    37,    57,    32,    33,    37,
      57,    36,     3,   201,    59,    45,    37,     5,     6,     7,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,    59,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,     8,
       9,    10,    57,    12,     3,     3,    58,    45,     5,     6,
       7,    58,    11,    12,    13,    14,    54,    16,     5,     6,
       7,    58,    57,    32,    33,    34,    37,    36,    37,    37,
      39,    57,    31,    32,    37,    34,     3,    37,     6,     7,
      39,    59,     9,    33,    11,    12,    13,    14,    45,    16,
      59,    60,    30,    62,    53,    59,    65,    54,    45,    54,
       3,     6,     7,    59,    57,    32,    60,    34,    11,    12,
      13,    14,     3,    16,    59,    58,    85,    45,    58,    37,
      11,    12,    13,    14,    57,    16,    53,    57,    57,    32,
       4,    34,     6,     7,    57,    37,     3,    40,    59,    59,
      45,    32,    57,    34,    11,    12,    13,    14,    39,    16,
      53,     4,    59,     6,     7,    25,    57,    25,    26,    27,
      28,    29,    53,     8,    28,    32,   128,    34,   119,    19,
      84,    45,    46,    71,    99,   127,    -1,    51,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    45,    61,    62,    -1,    -1,    -1,    51,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    61,    62,    63,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    38,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      38,    61,    62,    -1,    17,    18,    -1,    20,    21,    22,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    38,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    61,    62,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    38,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    38,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    38,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      17,    18,    -1,    20,    21,    22,    59,    38,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     6,     7,    45,    46,    51,    65,    66,    69,
      78,    86,    91,    92,   111,     5,     6,    45,    54,    79,
      80,    86,    10,     3,    45,    67,    68,    54,    70,    71,
      72,     0,    69,    78,    91,   111,    78,    91,   111,    91,
     111,     3,    92,   111,    41,    81,    82,    81,     5,    80,
      81,    58,    58,    56,    47,    68,    52,    71,    56,    78,
      91,   111,    91,   111,   111,    91,   111,   111,   111,    58,
      58,    60,    59,    45,    59,    83,    84,    85,    86,    45,
      54,    76,    77,    86,     4,    91,   111,   111,   111,   111,
      59,    83,    83,    82,    56,     8,    56,    59,    84,    60,
       8,    48,    48,    57,    77,    48,    76,   111,    56,    59,
      59,     4,    36,    87,    36,    87,    56,    85,    45,    73,
      74,    86,    36,    87,    56,     5,    45,    86,    88,    89,
       3,    11,    12,    13,    14,    16,    32,    34,    53,    93,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    36,     9,    93,    94,    36,    36,    87,    48,
       5,    45,    74,    86,    48,    93,    94,    36,    36,    87,
      42,    44,    90,    90,     5,    89,    58,    58,    58,    58,
      58,    61,    94,    95,    19,    61,    62,    93,     3,    43,
      49,    53,    58,   106,   108,    94,    37,    93,    93,    36,
      58,    75,    92,    48,    48,    58,    94,    37,    93,    93,
      36,    60,    35,    58,   106,   107,   108,   106,   106,   106,
     108,   108,     3,    37,    15,    50,    55,   106,   107,   108,
       3,   106,   108,    94,    58,    61,   108,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      38,    61,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    38,    37,    57,    94,    94,
      93,    59,    83,    57,    92,    59,    83,    37,    57,    94,
      94,    93,    42,    44,    35,    59,    59,    59,    59,    59,
      59,    59,    57,    58,    58,    58,    63,    63,    37,    59,
     106,   108,   109,   110,     3,    59,   106,   108,   106,   108,
     106,   107,   108,   106,   108,   106,   108,   106,   108,   106,
     108,   106,   108,   106,   108,   106,   108,   106,   108,   106,
     108,   106,   108,   106,   108,     3,   106,   108,   106,   108,
     106,   108,   106,   108,   106,   108,   106,   108,   106,   108,
     106,   108,   106,   108,   106,   108,   106,   108,   106,   108,
     106,   108,   106,   108,    57,    37,    37,    94,    59,    59,
      57,    37,    37,    94,    59,    33,    30,    59,    59,    54,
      57,    59,    60,    58,    58,    57,    57,    37,    57,    57,
      37,    93,    93,    59,   109,    59,   109,    59,   109,    57,
      57,    31,    39,    40,    59,    59,    93,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    67,
      67,    68,    69,    70,    70,    71,    72,    73,    73,    74,
      74,    74,    74,    75,    75,    76,    76,    77,    77,    77,
      78,    78,    79,    79,    80,    80,    80,    81,    81,    82,
      82,    83,    83,    84,    84,    85,    85,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    90,    91,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    97,    98,    99,
      99,    99,   100,   100,   100,   100,   101,   102,   103,   104,
     105,   106,   106,   106,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   109,   109,   110,   110,   111,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     4,     2,     3,     1,     2,     4,     5,
       3,     4,     2,     3,     2,     3,     3,     4,     3,     2,
       1,     4,     3,     2,     1,     8,     1,     2,     1,     5,
       5,     4,     4,     2,     1,     2,     1,     2,     2,     2,
       3,     2,     2,     1,     2,     2,     2,     3,     1,     1,
       4,     2,     1,     3,     1,     2,     2,     1,     1,     3,
       2,     2,     1,     2,     2,     3,     1,     3,     1,     2,
       1,    12,    11,    12,    11,    11,    10,    11,    10,     9,
       9,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     9,     7,     7,     4,     4,
       4,     4,     3,     3,     3,     6,     1,     1,     5,     4,
       5,     1,     3,     3,     4,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     1,
       6,     5,     6,     5,     3,     1,     1,     1,    11,    10
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
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 48 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 49 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 50 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 52 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 53 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 55 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 56 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 58 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 59 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 60 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 63 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[-1].n5);DisplayT1();}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 66 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) =(yyvsp[-1].n5);}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 67 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[0].n5);}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 70 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[-3].n5); (yyvsp[-3].n5)->fields = (yyvsp[-1].n6);makeFNull();(yyvsp[-3].n5)->size = sz;sz =0;fi =1;}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 73 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) =(yyvsp[-1].n7);ma = 1;DisplayC();}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 76 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) = (yyvsp[-1].n7);}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 77 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) = (yyvsp[0].n7);}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 80 "decl.y" /* yacc.c:1646  */
    {
                                                                                  (yyval.n7) = (yyvsp[-7].n7);
                                                                                  (yyval.n7)->Vfuncptr = (yyvsp[-3].n8);
                                                                                  (yyval.n7)->Fieldcount = fi;
                                                                                  (yyval.n7)->Methodcount = fj;
                                                                                  (yyval.n7)->Memberfield  = (yyvsp[-4].n6);
                                                                                  f15 =0;
                                                                                  makeFNull();
                                                                                  makeMNull();
                                                                                  }
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 92 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) = (yyvsp[0].n7);}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 96 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = (yyvsp[-1].n8);}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 97 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = (yyvsp[0].n8);}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 100 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-3].n6), (yyvsp[-1].n1));}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 101 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-3].n6), (yyvsp[-1].n1));}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 102 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-2].n6), NULL);}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 103 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-2].n6), NULL);}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 107 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 108 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 111 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[-1].n6);}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 112 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[0].n6);}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 115 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) =(yyvsp[0].n6);}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 116 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) =(yyvsp[0].n6);}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 117 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[0].n6); (yyval.n6)->Ctype = (yyvsp[-1].n7);}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 121 "decl.y" /* yacc.c:1646  */
    {   (yyval.no) =(yyvsp[-1].no);Display((yyvsp[-1].no)); }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 122 "decl.y" /* yacc.c:1646  */
    {}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 125 "decl.y" /* yacc.c:1646  */
    {(yyval.no) =(yyvsp[-1].no);}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 126 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 128 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 129 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 130 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 133 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-2].no);}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 134 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 137 "decl.y" /* yacc.c:1646  */
    {(yyval.no) =(yyvsp[0].no);}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 138 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-3].no); (yyvsp[-3].no)->paramlist = (yyvsp[-1].n1);adrs--;}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 145 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[-2].n1);}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 146 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 149 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 150 "decl.y" /* yacc.c:1646  */
    {  (yyval.n1) = (yyvsp[0].n1);
                              struct Paramstruct *temp = (yyvsp[0].n1);
                              while(temp->next != NULL){
                              temp = temp->next;
                              }
                              temp->typet = (yyvsp[-1].n5);
                            }
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 159 "decl.y" /* yacc.c:1646  */
    {}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 160 "decl.y" /* yacc.c:1646  */
    {}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 163 "decl.y" /* yacc.c:1646  */
    {(yyval.n3)= (yyvsp[-1].n3);}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 164 "decl.y" /* yacc.c:1646  */
    {}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 167 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 168 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 171 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 172 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 175 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 176 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 177 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 178 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 182 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[-1].n2);}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 183 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[0].n2);}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 186 "decl.y" /* yacc.c:1646  */
    {

                                                                (yyval.n2) = (yyvsp[-10].n2);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen((yyvsp[-10].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 212 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                (yyval.n2)->Lentry = head2;
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen((yyvsp[-9].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 237 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-10].n2);
                                                                (yyval.n2)->typet = (yyvsp[-11].n5);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen((yyvsp[-10].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 263 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->typet = (yyvsp[-10].n5);
                                                                (yyval.n2)->Lentry = head2;
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen((yyvsp[-9].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 289 "decl.y" /* yacc.c:1646  */
    {

                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen((yyvsp[-9].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 315 "decl.y" /* yacc.c:1646  */
    {    (yyval.n2) = (yyvsp[-8].n2);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->Lentry = head2;
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen((yyvsp[-8].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                }
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 338 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->typet = (yyvsp[-10].n5);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen((yyvsp[-9].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 364 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-8].n2);
                                                                (yyval.n2)->typet = (yyvsp[-9].n5);
                                                                (yyval.n2)->Lentry = head2;
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen((yyvsp[-8].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                }
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 390 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-7].n2);
                                                                (yyval.n2)->typet = (yyvsp[-8].n5);
                                                                (yyval.n2)->Lentry = head2;
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->left  = NULL;
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen((yyvsp[-7].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 416 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-7].n2);
                                                                (yyval.n2)->Lentry = head2;
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->left = NULL;
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", (yyval.n2)->varname);
                                                                  DisplayL((yyval.n2)->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen((yyvsp[-7].n2), fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 445 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeConnectorNode((yyvsp[-1].n2), (yyvsp[0].n2), 0);}
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 446 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 449 "decl.y" /* yacc.c:1646  */
    {        if((yyvsp[0].n2)->nodetype != rettype){
                                                      printf("Unmatching type error");
                                                      exit(-1);
                                                  }
                                                  (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);
                                          }
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 455 "decl.y" /* yacc.c:1646  */
    {if((yyvsp[0].n2)->nodetype != rettype){printf("Unmatching type error");exit(-1);}
                                            (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 461 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-6].n2), (yyvsp[-3].n2), (yyvsp[-1].n2), 6);}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 462 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 7);}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 465 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 8);}
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 469 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("read", (yyvsp[-1].n2), 1);}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 472 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 473 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 474 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 477 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 478 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 479 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 480 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNodeC("new", (yyvsp[-5].n2), (yyvsp[-1].n7), 24);}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 483 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("break", 9);}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 486 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("continue", 10);}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 489 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("alloc", (yyvsp[-4].n2), 18);(yyvsp[-4].n2)->type = 19;}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 492 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("free", (yyvsp[-1].n2), 22);}
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 495 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("initialize", (yyvsp[-4].n2), 21); }
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 499 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[0].n2);}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 500 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 501 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);(yyval.n2)->left = (yyvsp[-2].n2);(yyvsp[-2].n2)->right = (yyval.n2);}
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 502 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 503 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 506 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 507 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 510 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 511 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 512 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 513 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 514 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 515 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 516 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 517 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 518 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 519 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 520 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 521 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 522 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 523 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 524 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 525 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 526 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 527 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 528 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 529 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 530 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 531 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 532 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 533 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 534 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 535 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 536 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 537 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 538 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 539 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 540 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 541 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 542 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 543 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 544 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 545 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 546 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 547 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 548 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 549 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 550 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 551 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 552 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 553 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 554 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 555 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 556 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 557 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 558 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 559 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 560 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 561 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 562 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 563 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 564 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 565 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 566 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 567 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 568 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 569 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNode((yyvsp[-2].n2), NULL, 15);}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 570 "decl.y" /* yacc.c:1646  */
    {check((yyvsp[-3].n2)->Gentry->paramlist, (yyvsp[-1].n4));(yyval.n2) = makeFuncCallNode((yyvsp[-3].n2), (yyvsp[-1].n4), 15);makeANull();}
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 571 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 572 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNodeC((yyvsp[-3].n2), NULL, (yyvsp[-1].n4), 15);  makeANull();}
#line 2950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 573 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNodeC((yyvsp[-2].n2), NULL, NULL, 15); }
#line 2956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 574 "decl.y" /* yacc.c:1646  */
    { struct MemberFuncList *temp = LookupM((yyvsp[-3].n2)->varname, (yyvsp[-5].n2)->Ctype);
                                              check(temp->paramlist, (yyvsp[-1].n4));
                                              (yyval.n2) = makeFuncCallNodeC((yyvsp[-3].n2), (yyvsp[-5].n2), (yyvsp[-1].n4), 15);makeANull();}
#line 2964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 577 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNodeC((yyvsp[-2].n2), (yyvsp[-4].n2), NULL, 15);}
#line 2970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 580 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[-2].n4);}
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 581 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[0].n4);}
#line 2982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 584 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 2988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 585 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 2994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 589 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-9].n2); 
                                                                          (yyval.n2)->Lentry = (yyvsp[-5].n3); 
                                                                          (yyval.n2)->left = (yyvsp[-3].n2);
                                                                          (yyval.n2)->right = (yyvsp[-2].n2);
                                                                          printf("Main Function With Local Decs\n");
                                                                          DisplayL((yyval.n2)->Lentry);
                                                                          FILE *fptr1 = fopen("tree1.xsm", "a+");
                                                                          fprintf(fptr1, "MAIN\n");
                                                                          i = CodeGen((yyvsp[-9].n2), fptr1);
                                                                          fclose(fptr1);
                                                                          }
#line 3010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 600 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-8].n2); 
                                                                          (yyval.n2)->left = (yyvsp[-3].n2);
                                                                          (yyval.n2)->right = (yyvsp[-2].n2);
                                                                          printf("Main Function\n");
                                                                          FILE *fptr1 = fopen("tree1.xsm", "a+");
                                                                          fprintf(fptr1, "MAIN\n");
                                                                          i = CodeGen((yyvsp[-8].n2), fptr1);
                                                                          fclose(fptr1);
                                                                          }
#line 3024 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3028 "y.tab.c" /* yacc.c:1646  */
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
#line 611 "decl.y" /* yacc.c:1906  */


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
