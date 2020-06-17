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

#line 78 "y.tab.c" /* yacc.c:339  */

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
#line 14 "decl.y" /* yacc.c:355  */

	struct Gsymbol *no;
	struct Paramstruct *n1;
    struct ASTNode *n2;
    struct Lsymbol *n3;
    struct ArgStruct *n4;
    struct TypeTable *n5;
    struct FieldList *n6;
    struct ClassTable *n7;
    struct MemberFuncList *n8;

#line 242 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 259 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   803

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  415

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
       0,    44,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    62,    65,
      66,    69,    72,    75,    76,    79,    91,   103,   104,   117,
     118,   121,   122,   123,   124,   128,   129,   132,   133,   136,
     137,   138,   142,   143,   146,   147,   149,   150,   151,   154,
     155,   158,   159,   162,   163,   166,   167,   170,   171,   180,
     181,   184,   185,   188,   189,   192,   193,   196,   197,   198,
     199,   203,   204,   207,   235,   262,   290,   318,   346,   371,
     399,   427,   455,   485,   486,   489,   495,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   501,   502,   505,
     509,   512,   513,   514,   517,   518,   519,   520,   523,   526,
     529,   532,   535,   539,   540,   541,   542,   543,   546,   547,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   587,   588,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,   611,   612,   613,   614,   617,   620,   621,   624,   625,
     626,   630,   645
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

#define YYPACT_NINF -183

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-183)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     542,    33,     8,  -183,     5,   -23,   -19,    42,   546,   106,
     309,    48,   309,  -183,  -183,  -183,  -183,    43,    43,   305,
    -183,    43,     3,    29,    67,    69,  -183,    49,   143,  -183,
      70,  -183,   106,   309,   309,  -183,   309,   309,  -183,   309,
    -183,    71,  -183,  -183,    85,    87,  -183,    87,  -183,  -183,
      87,   126,     7,   349,  -183,  -183,   136,  -183,  -183,   187,
     309,   309,  -183,   309,  -183,  -183,   309,  -183,  -183,  -183,
      26,   398,    43,   137,   191,   146,   140,   147,  -183,   201,
     167,   171,   181,  -183,   172,  -183,   400,   309,  -183,  -183,
    -183,  -183,   173,   186,   198,  -183,    -2,  -183,    11,   208,
     147,   398,  -183,  -183,  -183,  -183,  -183,  -183,   180,   313,
    -183,   400,   196,  -183,    75,   213,  -183,   390,   498,   246,
     450,   250,   100,  -183,   232,   473,   252,  -183,   255,   403,
     245,   450,   277,   178,  -183,   236,   236,   486,  -183,  -183,
     258,   267,  -183,  -183,   271,   272,   273,   275,   450,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
      -9,   498,     6,   450,   297,   498,   498,   302,   204,    37,
    -183,   232,   245,   473,   227,   450,   303,   498,   498,   308,
    -183,  -183,   278,   278,  -183,  -183,    82,    16,    16,     6,
       6,   330,   304,  -183,   226,   342,     6,   450,   287,  -183,
    -183,   289,     6,   609,   751,   312,   294,   450,   450,   498,
    -183,   247,  -183,  -183,   290,  -183,   283,   337,   334,   450,
     450,   498,   285,  -183,   163,   586,   351,   657,   -37,   -33,
     609,   682,   705,  -183,   344,   353,   357,   360,   609,  -183,
     751,  -183,   516,   538,   385,    21,   422,   728,     6,     6,
      82,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,   423,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,   370,  -183,   396,
     399,   450,  -183,  -183,  -183,   379,  -183,   401,   402,   450,
    -183,  -183,   380,  -183,  -183,  -183,  -183,  -183,   413,   425,
    -183,   407,   409,   404,  -183,  -183,   412,  -183,   609,  -183,
     751,   421,   395,   424,  -183,   556,   296,   556,   296,   635,
    -183,   765,   556,   296,   556,   296,   556,   296,   635,   765,
     635,   765,    14,  -183,    14,  -183,    14,  -183,   596,   211,
     596,   211,   556,   296,   430,   556,   296,   556,   296,   635,
     765,   556,   296,   556,   296,   556,   296,   635,   765,   635,
     765,    14,  -183,    14,  -183,    14,  -183,   596,   211,   596,
     211,   556,   296,  -183,   414,   437,   460,  -183,   440,   441,
     463,  -183,   498,   498,  -183,  -183,   444,  -183,  -183,    82,
      80,   224,  -183,  -183,   447,  -183,  -183,   449,   418,   462,
    -183,  -183,  -183,   456,  -183,   457,  -183,  -183,   498,  -183,
    -183,  -183,  -183,   474,  -183
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
      39,     0,     0,     0,    62,     0,     0,     0,    64,   113,
       0,     0,   108,   109,     0,     0,     0,     0,     0,    84,
      90,    91,    87,    88,    89,    92,    93,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,    70,    66,    65,    61,    63,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,   113,   127,
     181,     0,     0,    85,    86,     0,     0,     0,     0,     0,
      34,     0,    26,    35,     0,    33,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,     0,   106,   105,
     104,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,     0,    32,    25,    31,     0,    82,     0,     0,     0,
      67,    69,     0,   102,   103,   101,   100,   111,     0,     0,
     192,     0,     0,     0,   117,   116,     0,   179,   189,   190,
     188,     0,   187,   114,   126,   170,   155,   171,   156,   169,
     178,   163,   172,   157,   175,   160,   176,   161,   174,   159,
     173,   158,   167,   153,   166,   152,   168,   154,   164,   150,
     165,   151,   177,   162,   115,   141,   128,   142,   129,   148,
     125,   143,   130,   144,   131,   147,   134,   146,   133,   145,
     132,   139,   124,   138,   122,   140,   123,   136,   120,   137,
     121,   149,   135,    80,     0,     0,     0,    78,     0,     0,
       0,   119,     0,     0,   110,   112,     0,   191,   180,     0,
       0,     0,    79,    76,     0,    77,    74,     0,     0,     0,
     107,   186,   183,     0,   185,     0,    75,    73,     0,    98,
      99,   182,   184,     0,    97
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,  -183,  -183,   435,   511,  -183,   492,  -183,   410,
     -92,   350,   436,   -75,   113,  -183,   505,    78,   453,   -65,
     -73,   427,   131,     4,  -183,   389,   393,   391,   184,  -120,
    -100,  -147,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,   -96,  -182,   112,  -134,  -183,   381
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,    25,    26,     9,    28,    29,    30,   109,
     110,   169,    82,    83,    10,    19,    20,    45,    46,    76,
      77,    78,    11,   119,   137,   138,   182,    12,    13,   148,
     164,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   309,   310,   311,   312,    14
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     163,   193,   117,   100,   226,    93,    94,   106,    23,   198,
     194,   175,   239,    16,     3,   117,   193,   127,    22,   139,
     100,   100,    24,   296,   198,   195,   196,   297,   193,   195,
     196,   176,    16,     3,   118,    27,   106,   127,    15,    16,
       3,   197,    31,    16,     3,   207,   208,   120,   192,   199,
     193,    41,    74,   195,   196,   200,   223,   219,   220,   201,
     193,   193,    51,   205,   199,   202,   203,    75,   320,   147,
     200,    74,   193,   193,   201,   217,   262,   196,    17,   117,
     224,   307,     4,   198,    44,   198,    92,    18,    52,   281,
     225,   228,   229,   230,   230,   212,    47,   244,   238,    50,
     242,   289,   121,   211,   117,    56,   230,   279,   280,   216,
       1,   131,     2,     3,    24,   223,    54,   223,   132,   287,
     288,    33,    36,   199,    53,   199,   167,    59,   230,   200,
      70,   200,    21,   201,   193,   201,   166,   179,   100,   224,
     402,   224,   193,   100,    71,    60,    16,     3,    72,   308,
      21,     4,   315,   317,   319,   322,   324,   326,   328,   330,
     332,   334,   336,   338,   340,   342,   198,   345,   347,   349,
     351,   353,   355,   357,   359,   361,   363,   365,   367,   369,
     371,   376,   117,    79,    84,    74,    73,    16,     3,   380,
      85,    86,    16,     3,    96,    57,    42,    27,   292,    97,
      99,    79,    79,    98,    16,     3,   199,    79,   101,   102,
      16,     3,   200,    84,   178,   103,   201,   112,    42,   104,
     107,    42,   202,    42,    79,    79,    80,   198,   124,   198,
     114,    74,    79,    16,     3,    81,   271,   272,   273,   105,
     128,   235,   112,    74,   130,    42,   115,    42,   136,    74,
      42,   193,   193,    16,     3,   401,   403,   405,   116,   223,
     128,   223,   398,   399,   210,   122,   193,   199,   136,   199,
     133,    42,    74,   200,   204,   200,   236,   201,   180,   201,
     181,   237,   161,   224,   404,   224,   165,   215,   413,    16,
       3,   168,    74,   308,   308,   308,    16,     3,   227,    79,
     171,   231,   232,   172,   174,    79,   240,   282,   243,   170,
      48,    16,     3,   177,   247,     2,     3,   186,   125,    16,
       3,   271,   272,   273,   274,   275,   187,   290,    74,   291,
     188,   189,   190,   233,   206,     4,   247,   191,   209,   222,
     218,   234,    79,   284,   221,   241,   245,    79,   283,   277,
      17,   246,   278,   213,     4,    16,     3,   170,   126,    18,
     316,   318,   321,   323,   325,   327,   329,   331,   333,   335,
     337,   339,   341,   343,   285,   346,   348,   350,   352,   354,
     356,   358,   360,   362,   364,   366,   368,   370,   372,    35,
      38,    40,   286,    43,    80,   134,    16,     3,   213,    34,
      37,    39,   300,    81,    16,     3,    16,     3,   173,    16,
       3,   294,   301,    62,    64,    65,   302,    67,    68,   303,
      69,   139,   306,    61,    63,   313,   344,    66,   373,   140,
     141,   142,   143,   374,   144,   135,   375,   377,   378,   379,
     381,    88,    89,    74,    90,   108,   382,    91,   126,   408,
     145,    87,   146,   139,    81,   383,   389,   409,   386,   162,
      55,   140,   141,   142,   143,   139,   144,   384,   113,   385,
     387,   147,   392,   140,   141,   142,   143,   139,   144,    16,
       3,   388,   145,   390,   146,   140,   141,   142,   143,   391,
     144,   184,    16,     3,   145,   393,   146,   394,   395,   396,
     397,   139,   410,   147,   400,   406,   145,   407,   146,   140,
     141,   142,   143,   414,   144,   147,   411,   412,     4,    32,
      58,   129,   111,   214,    49,    95,   185,   147,   123,   183,
     145,   135,   146,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,     1,     0,     2,     3,
       1,   147,     2,     3,   261,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,     0,     0,
       0,     0,     0,     0,     0,     0,   276,     0,   262,   196,
     304,   256,   257,   258,   259,   260,     0,     4,     5,     0,
       0,     4,     0,     6,     0,     0,     0,     6,     0,     0,
       0,     0,   305,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,     0,     0,   262,   196,
       0,   256,   257,   258,   261,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,     0,
       0,     0,     0,     0,     0,     0,   293,   261,   262,   196,
       0,     0,   248,   249,     0,   251,   252,   253,   262,   196,
     256,   257,   258,   259,   260,     0,     0,     0,     0,     0,
       0,   262,   196,   261,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,     0,     0,     0,
       0,     0,     0,     0,     0,   276,     0,   262,   196,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,     0,     0,     0,     0,     0,   295,     0,     0,
     276,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,     0,     0,     0,     0,     0,
       0,     0,   298,   276,     0,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,     0,     0,
       0,     0,     0,     0,     0,   299,   276,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,     0,   263,   264,     0,   266,   267,   268,   314,   276,
     271,   272,   273,   274,   275,     0,     0,     0,     0,     0,
       0,     0,     0,   276
};

static const yytype_int16 yycheck[] =
{
     120,   148,     4,    76,   186,    70,    71,    82,     3,     3,
      19,   131,   194,     6,     7,     4,   163,   109,    10,     3,
      93,    94,    45,    60,     3,    62,    63,    60,   175,    62,
      63,   131,     6,     7,    36,    54,   111,   129,     5,     6,
       7,   161,     0,     6,     7,   165,   166,    36,   148,    43,
     197,     3,    45,    62,    63,    49,    35,   177,   178,    53,
     207,   208,    59,   163,    43,    59,   162,    60,   250,    53,
      49,    45,   219,   220,    53,   175,    62,    63,    45,     4,
      59,    60,    45,     3,    41,     3,    60,    54,    59,   209,
     186,   187,   188,   189,   190,    58,    18,   197,   194,    21,
     196,   221,    98,   168,     4,    56,   202,   207,   208,   174,
       4,    36,     6,     7,    45,    35,    47,    35,   114,   219,
     220,     8,     9,    43,    57,    43,   122,    57,   224,    49,
      59,    49,     1,    53,   281,    53,    36,   133,   211,    59,
      60,    59,   289,   216,    59,    32,     6,     7,    61,   245,
      19,    45,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,     3,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   281,     4,    52,    53,    45,    60,     6,     7,   289,
      54,     4,     6,     7,    57,    52,    12,    54,    35,     8,
      60,    70,    71,    57,     6,     7,    43,    76,    61,     8,
       6,     7,    49,    82,    36,    48,    53,    86,    34,    48,
      48,    37,    59,    39,    93,    94,    45,     3,    48,     3,
      57,    45,   101,     6,     7,    54,    25,    26,    27,    58,
     109,    15,   111,    45,    48,    61,    60,    63,   117,    45,
      66,   398,   399,     6,     7,   389,   390,   391,    60,    35,
     129,    35,   382,   383,    60,    57,   413,    43,   137,    43,
      57,    87,    45,    49,   162,    49,    50,    53,    42,    53,
      44,    55,    36,    59,    60,    59,    36,    60,   408,     6,
       7,    59,    45,   389,   390,   391,     6,     7,   186,   168,
      48,   189,   190,    48,    59,   174,   194,    60,   196,   125,
       5,     6,     7,    36,   202,     6,     7,    59,     5,     6,
       7,    25,    26,    27,    28,    29,    59,    42,    45,    44,
      59,    59,    59,     3,    37,    45,   224,    62,    36,    61,
      37,    37,   211,    60,    36,     3,    59,   216,    58,    37,
      45,    62,    58,   169,    45,     6,     7,   173,    45,    54,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,    37,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     8,
       9,    10,    58,    12,    45,     5,     6,     7,   214,     8,
       9,    10,    58,    54,     6,     7,     6,     7,     5,     6,
       7,    60,    59,    32,    33,    34,    59,    36,    37,    59,
      39,     3,    37,    32,    33,     3,     3,    36,    58,    11,
      12,    13,    14,    37,    16,    45,    37,    58,    37,    37,
      60,    60,    61,    45,    63,    45,    33,    66,    45,    31,
      32,    60,    34,     3,    54,    30,    61,    39,    54,     9,
      25,    11,    12,    13,    14,     3,    16,    60,    87,    60,
      58,    53,    58,    11,    12,    13,    14,     3,    16,     6,
       7,    60,    32,    59,    34,    11,    12,    13,    14,    59,
      16,     5,     6,     7,    32,    58,    34,    37,    58,    58,
      37,     3,    40,    53,    60,    58,    32,    58,    34,    11,
      12,    13,    14,    39,    16,    53,    60,    60,    45,     8,
      28,   111,    86,   173,    19,    72,   137,    53,   101,   136,
      32,    45,    34,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     4,    -1,     6,     7,
       4,    53,     6,     7,    38,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    62,    63,
      64,    25,    26,    27,    28,    29,    -1,    45,    46,    -1,
      -1,    45,    -1,    51,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    64,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    62,    63,
      -1,    25,    26,    27,    38,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    38,    62,    63,
      -1,    -1,    17,    18,    -1,    20,    21,    22,    62,    63,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    38,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    62,    63,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      38,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    38,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    38,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    17,    18,    -1,    20,    21,    22,    60,    38,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38
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
      49,    53,    59,   107,   109,    95,    37,    94,    94,    36,
      60,    84,    58,    93,    76,    60,    84,    95,    37,    94,
      94,    36,    61,    35,    59,   107,   108,   109,   107,   107,
     107,   109,   109,     3,    37,    15,    50,    55,   107,   108,
     109,     3,   107,   109,    95,    59,    62,   109,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    38,    62,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    38,    37,    58,    95,
      95,    94,    60,    58,    60,    37,    58,    95,    95,    94,
      42,    44,    35,    60,    60,    60,    60,    60,    60,    60,
      58,    59,    59,    59,    64,    64,    37,    60,   107,   108,
     109,   110,   111,     3,    60,   107,   109,   107,   109,   107,
     108,   109,   107,   109,   107,   109,   107,   109,   107,   109,
     107,   109,   107,   109,   107,   109,   107,   109,   107,   109,
     107,   109,   107,   109,     3,   107,   109,   107,   109,   107,
     109,   107,   109,   107,   109,   107,   109,   107,   109,   107,
     109,   107,   109,   107,   109,   107,   109,   107,   109,   107,
     109,   107,   109,    58,    37,    37,    95,    58,    37,    37,
      95,    60,    33,    30,    60,    60,    54,    58,    60,    61,
      59,    59,    58,    58,    37,    58,    58,    37,    94,    94,
      60,   110,    60,   110,    60,   110,    58,    58,    31,    39,
      40,    60,    60,    94,    39
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
      93,    93,    93,    94,    94,    95,    95,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    97,    97,    98,
      99,   100,   100,   100,   101,   101,   101,   101,   102,   103,
     104,   105,   106,   107,   107,   107,   107,   107,   108,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   110,   110,   111,   111,
     111,   112,   112
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
      10,     9,     9,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     9,     7,     7,
       4,     4,     4,     4,     3,     3,     3,     6,     1,     1,
       5,     4,     5,     1,     3,     3,     4,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     1,     6,     5,     6,     5,     3,     1,     1,     1,
       1,    11,    10
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
#line 44 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 45 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 46 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 47 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 48 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 49 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 50 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 51 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 52 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 53 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 54 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 55 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 56 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 57 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 58 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 59 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 62 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[-1].n5);DisplayT1();}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 65 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) =(yyvsp[-1].n5);}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 66 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[0].n5);}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 69 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[-3].n5); (yyvsp[-3].n5)->fields = (yyvsp[-1].n6);makeFNull();(yyvsp[-3].n5)->size = sz;sz =0;fi =1;}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 72 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) =(yyvsp[-1].n7);ma = 1;DisplayC();}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 75 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) = (yyvsp[0].n7);}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 76 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) = (yyvsp[0].n7);}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 79 "decl.y" /* yacc.c:1646  */
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
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 91 "decl.y" /* yacc.c:1646  */
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
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 103 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) = (yyvsp[0].n7);}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 104 "decl.y" /* yacc.c:1646  */
    { (yyval.n7) = (yyvsp[-2].n7);(yyval.n7)->Parentptr = (yyvsp[0].n7); 
                                  printf("With parent %s\n", (yyvsp[0].n7)->name);
                                  fjj = fjk[(yyvsp[0].n7)->Class_index];
                                  (yyval.n7)->Memberfield = makeCopy((yyvsp[0].n7)->Memberfield); 
                                  makeAdrrCopy((yyvsp[-2].n7)->Class_index, (yyvsp[0].n7)->Class_index);
                                  fi = (yyvsp[0].n7)->Fieldcount;
                                  (yyval.n7)->Vfuncptr = makeCopyM((yyvsp[0].n7)->Vfuncptr);
                                  head6 = (yyval.n7)->Vfuncptr;
                                  head5 = (yyval.n7)->Memberfield;
                                }
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 117 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = (yyvsp[-1].n8);}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 118 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = (yyvsp[0].n8);}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 121 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-3].n6), (yyvsp[-1].n1));}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 122 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-3].n6), (yyvsp[-1].n1));}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 123 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-2].n6), NULL);}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 124 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-2].n6), NULL);}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 128 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 129 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 132 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[-1].n6);}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 133 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[0].n6);}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 136 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) =(yyvsp[0].n6);}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 137 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) =(yyvsp[0].n6);}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 138 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[0].n6); (yyval.n6)->Ctype = (yyvsp[-1].n7);fi++;}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 142 "decl.y" /* yacc.c:1646  */
    {   (yyval.no) =(yyvsp[-1].no);Display((yyvsp[-1].no)); }
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 143 "decl.y" /* yacc.c:1646  */
    {}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 146 "decl.y" /* yacc.c:1646  */
    {(yyval.no) =(yyvsp[-1].no);}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 147 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 149 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 150 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 151 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 154 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-2].no);}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 155 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 158 "decl.y" /* yacc.c:1646  */
    {(yyval.no) =(yyvsp[0].no);}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 159 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-3].no); (yyvsp[-3].no)->paramlist = (yyvsp[-1].n1);adrs--;}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 166 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[-2].n1);}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 167 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 170 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);}
#line 2045 "y.tab.c" /* yacc.c:1646  */
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
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 180 "decl.y" /* yacc.c:1646  */
    {}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 181 "decl.y" /* yacc.c:1646  */
    {}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 184 "decl.y" /* yacc.c:1646  */
    {(yyval.n3)= (yyvsp[-1].n3);}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 185 "decl.y" /* yacc.c:1646  */
    {}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 188 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 189 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 192 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 193 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 196 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 197 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 198 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 199 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 203 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[-1].n2);}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 204 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[0].n2);}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 207 "decl.y" /* yacc.c:1646  */
    {

                                                                (yyval.n2) = (yyvsp[-10].n2);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
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
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 235 "decl.y" /* yacc.c:1646  */
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
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 262 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-10].n2);
                                                                (yyval.n2)->typet = (yyvsp[-11].n5);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
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
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 290 "decl.y" /* yacc.c:1646  */
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
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 318 "decl.y" /* yacc.c:1646  */
    {

                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
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
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 346 "decl.y" /* yacc.c:1646  */
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
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 371 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->typet = (yyvsp[-10].n5);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
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
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 399 "decl.y" /* yacc.c:1646  */
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
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 427 "decl.y" /* yacc.c:1646  */
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
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 455 "decl.y" /* yacc.c:1646  */
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
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 485 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeConnectorNode((yyvsp[-1].n2), (yyvsp[0].n2), 0);}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 486 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 489 "decl.y" /* yacc.c:1646  */
    {        if((yyvsp[0].n2)->nodetype != rettype){
                                                      printf("Unmatching type error");
                                                      exit(-1);
                                                  }
                                                  (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);
                                          }
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 495 "decl.y" /* yacc.c:1646  */
    {if((yyvsp[0].n2)->nodetype != rettype){printf("Unmatching type error");exit(-1);}
                                            (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 501 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-6].n2), (yyvsp[-3].n2), (yyvsp[-1].n2), 6);}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 502 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 7);}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 505 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 8);}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 509 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("read", (yyvsp[-1].n2), 1);}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 512 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 513 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 514 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 517 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 518 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 519 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 520 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNodeC("new", (yyvsp[-5].n2), (yyvsp[-1].n7), 24);}
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 523 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("break", 9);}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 526 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("continue", 10);}
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 529 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("alloc", (yyvsp[-4].n2), 18);(yyvsp[-4].n2)->type = 19;}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 532 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("free", (yyvsp[-1].n2), 22);}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 535 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("initialize", (yyvsp[-4].n2), 21); }
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 539 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[0].n2);}
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 540 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 541 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);(yyval.n2)->left = (yyvsp[-2].n2);(yyvsp[-2].n2)->right = (yyval.n2);}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 542 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 543 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 546 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 547 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 550 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 551 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 552 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 553 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 554 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 555 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 556 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 557 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 558 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 559 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 560 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 561 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 562 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 563 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 564 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 565 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 566 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 567 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 568 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 569 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 570 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 571 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 572 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 573 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 574 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 575 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 576 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 577 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 578 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 579 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 580 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 581 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 582 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 583 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 584 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 585 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 586 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 587 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 588 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 589 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 590 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 591 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 592 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 593 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 594 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 595 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 596 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 597 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 598 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 599 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 600 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 601 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 602 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 603 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 604 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 605 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 606 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 607 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 608 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 609 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNode((yyvsp[-2].n2), NULL, 15);}
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 610 "decl.y" /* yacc.c:1646  */
    {check((yyvsp[-3].n2)->Gentry->paramlist, (yyvsp[-1].n4));(yyval.n2) = makeFuncCallNode((yyvsp[-3].n2), (yyvsp[-1].n4), 15);makeANull();}
#line 2998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 611 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 3004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 612 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNodeC((yyvsp[-3].n2), NULL, (yyvsp[-1].n4), 15);  makeANull();}
#line 3010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 613 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNodeC((yyvsp[-2].n2), NULL, NULL, 15); }
#line 3016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 614 "decl.y" /* yacc.c:1646  */
    { struct MemberFuncList *temp = LookupM((yyvsp[-3].n2)->varname, (yyvsp[-5].n2)->Ctype);
                                              check(temp->paramlist, (yyvsp[-1].n4));
                                              (yyval.n2) = makeFuncCallNodeC((yyvsp[-3].n2), (yyvsp[-5].n2), (yyvsp[-1].n4), 15);makeANull();}
#line 3024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 617 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNodeC((yyvsp[-2].n2), (yyvsp[-4].n2), NULL, 15);}
#line 3030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 620 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[-2].n4);}
#line 3036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 621 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[0].n4);}
#line 3042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 624 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 3048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 625 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 3054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 626 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 3060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 630 "decl.y" /* yacc.c:1646  */
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
                                                                          FILE *fptr2 = fopen("a.c", "w");
                                                                          fprintf(fptr2,"int address = ");
                                                                          fprintf(fptr2,"%d;", adrs);
                                                                          fclose(fptr2);
                                                                          }
#line 3080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 645 "decl.y" /* yacc.c:1646  */
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
#line 3098 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3102 "y.tab.c" /* yacc.c:1646  */
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
#line 660 "decl.y" /* yacc.c:1906  */


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
