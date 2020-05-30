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

#line 240 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 257 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   787

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  193
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  413

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
       0,    44,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    62,    65,
      66,    69,    72,    75,    76,    79,    91,    95,    96,    99,
     100,   101,   102,   106,   107,   110,   111,   114,   115,   119,
     120,   123,   124,   126,   127,   128,   131,   132,   135,   136,
     139,   140,   143,   144,   147,   148,   157,   158,   161,   162,
     165,   166,   169,   170,   173,   174,   175,   176,   180,   181,
     184,   198,   211,   225,   239,   253,   264,   278,   292,   305,
     321,   322,   325,   331,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   337,   338,   341,   345,   348,   349,
     350,   353,   354,   355,   356,   357,   358,   361,   364,   367,
     368,   371,   372,   375,   377,   378,   379,   380,   381,   384,
     387,   388,   389,   392,   393,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   461,   462,
     465,   466,   470,   476
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
  "ContinueStmt", "AllocStmt", "FreeStmt", "InitializeStmt", "FIELD",
  "var", "string", "expr", "ArgList", "Arg", "MainBlock", YY_NULLPTR
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

#define YYPACT_NINF -279

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-279)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     493,   361,    -3,  -279,     9,   -28,   -29,    30,   365,   329,
     245,    39,   245,  -279,  -279,  -279,  -279,    -6,    -6,   418,
    -279,    -6,    -8,    48,    57,    86,  -279,  -279,   128,  -279,
      66,  -279,   329,   245,   245,  -279,   245,   245,  -279,   245,
    -279,    76,  -279,  -279,    85,    89,  -279,    89,  -279,  -279,
      89,    94,     8,   314,  -279,  -279,  -279,  -279,   157,   245,
     245,  -279,   245,  -279,  -279,   245,  -279,  -279,  -279,    27,
     320,    -6,   129,   183,   143,    32,   150,  -279,   195,   163,
      16,  -279,   172,   314,   245,  -279,  -279,  -279,  -279,   166,
      64,   139,  -279,    22,  -279,    40,   197,   150,   320,  -279,
    -279,  -279,  -279,  -279,   443,  -279,    62,   198,  -279,   436,
     509,   222,   455,   231,   115,  -279,   220,   441,  -279,   223,
     455,   240,   135,  -279,   144,   144,   601,  -279,   217,   215,
     227,  -279,  -279,   230,   247,   249,   252,   455,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,    36,
     -13,   509,   212,   455,   273,   509,   509,   281,   265,   497,
     282,  -279,   283,   290,   455,   303,   509,   509,   313,  -279,
    -279,   291,   291,  -279,  -279,   347,    77,   350,    21,   212,
     212,   351,   319,  -279,   159,   354,   279,   212,   455,   -21,
    -279,  -279,   212,   297,   598,   735,   323,   304,   455,   455,
     509,   250,   162,  -279,   265,   290,   280,   325,   306,   455,
     455,   509,   152,   312,  -279,   105,   576,   305,   645,  -279,
      55,   145,   155,   598,   669,   691,   356,   364,   368,   598,
     735,  -279,   372,   375,   386,   598,  -279,   735,   528,   550,
     371,    26,   713,   212,   212,    77,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   394,  -279,   415,   416,   455,  -279,   293,  -279,  -279,
    -279,   296,   399,  -279,   424,   433,   455,  -279,  -279,   134,
     421,  -279,  -279,  -279,  -279,  -279,  -279,   444,   453,   212,
    -279,   425,   426,   439,   447,  -279,  -279,   448,  -279,   598,
     735,   450,   446,  -279,   501,   317,   501,   317,   623,  -279,
     749,   501,   317,   501,   317,   501,   317,   623,   749,   623,
     749,   445,  -279,   445,  -279,   445,  -279,   585,   237,   585,
     237,   501,   317,   501,   317,   501,   317,   623,   749,   501,
     317,   501,   317,   501,   317,   623,   749,   623,   749,   445,
    -279,   445,  -279,   445,  -279,   585,   237,   585,   237,   501,
     317,  -279,   457,   459,   473,  -279,  -279,  -279,   460,   467,
     482,  -279,   472,  -279,   509,   509,   474,  -279,  -279,  -279,
     475,  -279,  -279,   212,  -279,  -279,   478,  -279,  -279,   480,
    -279,   406,   462,  -279,  -279,  -279,  -279,  -279,   509,  -279,
    -279,   479,  -279
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,     6,    40,    56,     0,     0,     0,
      42,     0,     0,     0,     0,     0,    20,    26,     0,    24,
       0,     1,     0,     0,     0,    12,     0,     0,     7,     0,
       4,     0,    68,    14,    48,    44,    47,    45,    39,    41,
      43,     0,     0,     0,    18,    19,    22,    23,     0,     0,
       0,    13,     0,    10,    16,     0,     5,    15,     2,     0,
       0,     0,     0,     0,     0,     0,    51,    53,     0,     0,
       0,    36,     0,     0,     0,    11,    17,     8,     3,     0,
       0,     0,    46,     0,    55,     0,     0,    50,     0,    54,
      38,    21,    35,    37,     0,     9,     0,     0,    49,     0,
       0,     0,     0,     0,     0,    52,     0,     0,    28,     0,
       0,     0,     0,    59,     0,     0,     0,    61,   120,     0,
       0,   107,   108,     0,     0,     0,     0,     0,    81,    87,
      88,    84,    85,    86,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,    27,     0,    37,     0,     0,     0,     0,     0,    65,
      67,    63,    62,    58,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,     0,     0,   120,
     132,   187,     0,   186,    82,    83,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   123,     0,     0,     0,     0,   120,
       0,     0,     0,     0,     0,     0,   116,     0,     0,   104,
     105,   115,     0,     0,     0,   103,   102,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,    32,     0,    25,    33,
      31,     0,     0,    79,     0,     0,     0,    64,    66,     0,
       0,    99,   100,    98,    97,   111,   112,     0,     0,     0,
     193,     0,     0,     0,     0,   122,   121,     0,   184,   191,
     190,     0,   189,   131,   175,   160,   176,   161,   174,   183,
     168,   177,   162,   180,   165,   181,   166,   179,   164,   178,
     163,   172,   158,   171,   157,   173,   159,   169,   155,   170,
     156,   182,   167,   146,   133,   147,   134,   153,   130,   148,
     135,   149,   136,   152,   139,   151,   138,   150,   137,   144,
     129,   143,   127,   145,   128,   141,   125,   142,   126,   154,
     140,    77,     0,     0,     0,    30,    29,    75,     0,     0,
       0,   119,     0,   124,     0,     0,     0,   110,   109,   113,
       0,   192,   185,     0,    76,    73,     0,    74,    71,     0,
     118,     0,     0,   117,   106,   188,    72,    70,     0,    95,
      96,     0,    94
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -279,  -279,  -279,  -279,   511,   532,  -279,   530,  -279,  -279,
     442,  -279,   477,    38,   251,  -279,   542,   106,   494,   -65,
     -72,   466,    12,   -86,  -279,   454,   456,   403,   113,  -104,
      -9,  -105,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -110,   -20,  -185,   132,  -278,  -279,   395
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,    25,    26,     9,    28,    29,    30,   117,
     118,   202,    80,    81,    10,    19,    20,    45,    46,    75,
      76,    77,    11,   111,   126,   127,   171,    12,    13,   137,
     154,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   193,   150,   217,   310,   311,   312,    14
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     149,   236,   149,    97,    90,    91,   186,    22,   153,   113,
     149,   382,    23,    21,    16,     3,   164,    24,    97,    97,
     121,   386,    16,     3,   221,    27,   109,   149,   157,   189,
      31,    21,   183,    16,     3,    44,   168,   241,    16,     3,
     175,   149,    41,   149,   109,   149,   149,   188,   183,   187,
      51,   198,   199,    73,   149,   184,   149,   149,   110,   183,
     319,    79,   209,   210,    78,    82,   109,    74,   222,   190,
      16,     3,    73,   101,   136,   191,   112,    73,   149,   136,
     189,    78,    78,   183,   192,   308,    89,    78,   149,   149,
     149,    96,    82,   183,   183,    82,   275,   185,   120,   149,
     149,   149,    78,    78,   183,   183,    52,   286,   189,    73,
      78,   165,   214,    53,   294,   405,   119,   187,   102,   109,
     190,   125,    58,   107,    47,    42,   191,    50,   182,   162,
     136,    24,   194,    54,    69,   215,   277,   189,   125,   109,
     290,   281,   102,    70,   196,    16,     3,    42,   190,    71,
      42,   156,    42,    72,   191,   207,   216,   220,   136,   223,
     223,    83,   189,   192,   229,   149,   235,   238,    16,     3,
     183,   167,   223,    42,   228,    42,   149,   190,    42,   240,
      56,   183,    27,   191,    73,    93,   169,   136,   170,   273,
     274,    94,   192,   381,   287,   223,   288,    42,   108,    95,
     284,   285,   190,    99,   295,    97,   175,     4,   191,    97,
      98,   100,   136,    78,   296,   189,   185,   192,    78,   278,
     103,   309,   106,   314,   316,   318,   321,   323,   325,   327,
     329,   331,   333,   335,   337,   339,   341,   343,   345,   347,
     349,   351,   353,   355,   357,   359,   361,   363,   365,   367,
     369,     2,     3,   114,   122,   190,    16,     3,   151,    33,
      36,   191,   265,   266,   267,   136,   374,   155,   158,   309,
     192,   163,   203,   176,   149,   149,   166,   380,   175,   309,
     401,   402,   189,    59,   195,   177,    16,     3,   178,    78,
       4,   149,   149,    78,   232,    73,   183,   183,   149,    16,
       3,   149,    16,     3,   411,   179,   183,   180,   218,   276,
     197,   224,   225,   181,   214,   279,   230,   200,   237,   239,
      16,     3,   190,   201,   242,    73,    16,     3,   191,   233,
     204,   205,   136,     1,   234,     2,     3,   215,    73,   280,
     208,    73,   265,   266,   267,   268,   269,   242,   206,   211,
     213,   212,   375,   219,   226,   376,   227,   231,   185,    79,
     271,   272,   282,   283,   292,    73,    15,    16,     3,     1,
     289,     2,     3,   309,     4,   315,   317,   320,   322,   324,
     326,   328,   330,   332,   334,   336,   338,   340,   342,   344,
     346,   348,   350,   352,   354,   356,   358,   360,   362,   364,
     366,   368,   370,    35,    38,    40,    17,    43,   307,   128,
       4,    34,    37,    39,   299,    18,     6,   129,   130,   131,
     132,   300,   133,    48,    16,     3,   301,    61,    63,    64,
     302,    66,    67,   303,    68,    60,    62,   408,   134,    65,
     135,   123,    16,     3,   304,   409,   159,    16,     3,    16,
       3,   371,   372,   373,    85,    86,   377,    87,   128,   136,
      88,   378,    84,    17,   152,   128,   129,   130,   131,   132,
     379,   133,    18,   129,   130,   131,   132,   384,   133,   105,
     383,   124,   128,   385,   387,   388,   160,   134,   116,   135,
     129,   130,   131,   132,   134,   133,   135,     1,   389,     2,
       3,   390,   410,    16,     3,   391,   393,   187,   136,   392,
     396,   134,   128,   135,   394,   136,   395,   397,   412,   399,
     129,   130,   131,   132,   398,   133,   251,   252,   253,   254,
     255,   400,   136,   403,   404,   406,    55,   407,     4,     5,
      32,   134,     4,   135,     6,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,    57,   161,
     104,    49,   136,   187,   115,    92,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     174,   172,     0,     0,     0,     0,     0,     0,   270,     0,
     187,   305,     0,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   173,    16,     3,     0,
     251,   252,   253,   306,   256,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,     0,     0,
       0,     0,     0,     0,     0,   291,   256,     0,   187,     0,
     243,   244,     0,   246,   247,   248,   124,   187,   251,   252,
     253,   254,   255,     0,     0,     0,     0,     0,     0,     0,
     187,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,     0,     0,     0,     0,     0,
       0,     0,     0,   270,     0,   187,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,     0,
       0,     0,     0,     0,   293,     0,     0,   270,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,     0,     0,     0,     0,     0,     0,     0,   297,   270,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,     0,     0,     0,     0,     0,     0,     0,
     298,   270,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,     0,   257,   258,     0,   260,
     261,   262,   313,   270,   265,   266,   267,   268,   269,     0,
       0,     0,     0,     0,     0,     0,     0,   270
};

static const yytype_int16 yycheck[] =
{
     110,   186,   112,    75,    69,    70,    19,    10,   112,    95,
     120,   289,     3,     1,     6,     7,   120,    45,    90,    91,
     106,   299,     6,     7,     3,    54,     4,   137,   114,     3,
       0,    19,   137,     6,     7,    41,   122,    58,     6,     7,
      61,   151,     3,   153,     4,   155,   156,   151,   153,    62,
      58,   155,   156,    45,   164,    19,   166,   167,    36,   164,
     245,    45,   166,   167,    52,    53,     4,    59,   178,    43,
       6,     7,    45,    57,    53,    49,    36,    45,   188,    53,
       3,    69,    70,   188,    58,    59,    59,    75,   198,   199,
     200,    59,    80,   198,   199,    83,   200,    61,    36,   209,
     210,   211,    90,    91,   209,   210,    58,   211,     3,    45,
      98,   120,    35,    56,    59,   393,   104,    62,    80,     4,
      43,   109,    56,    59,    18,    12,    49,    21,   137,   117,
      53,    45,   152,    47,    58,    58,   201,     3,   126,     4,
      35,   206,   104,    58,   153,     6,     7,    34,    43,    60,
      37,    36,    39,    59,    49,   164,   176,   177,    53,   179,
     180,     4,     3,    58,   184,   275,   186,   187,     6,     7,
     275,    36,   192,    60,    15,    62,   286,    43,    65,   188,
      52,   286,    54,    49,    45,    56,    42,    53,    44,   198,
     199,     8,    58,    59,    42,   215,    44,    84,    59,    56,
     209,   210,    43,     8,    59,   277,    61,    45,    49,   281,
      60,    48,    53,   201,    59,     3,    61,    58,   206,    57,
      48,   241,    56,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,     6,     7,    56,    56,    43,     6,     7,    36,     8,
       9,    49,    25,    26,    27,    53,   275,    36,    48,   289,
      58,    48,   159,    58,   384,   385,    36,   286,    61,   299,
     384,   385,     3,    32,   152,    58,     6,     7,    58,   277,
      45,   401,   402,   281,    15,    45,   401,   402,   408,     6,
       7,   411,     6,     7,   408,    58,   411,    58,   176,    59,
      37,   179,   180,    61,    35,   202,   184,    36,   186,   187,
       6,     7,    43,    58,   192,    45,     6,     7,    49,    50,
      48,    48,    53,     4,    55,     6,     7,    58,    45,    59,
      37,    45,    25,    26,    27,    28,    29,   215,    58,    36,
       3,    60,    59,     3,     3,    59,    37,     3,    61,    45,
      37,    57,    37,    57,    59,    45,     5,     6,     7,     4,
      58,     6,     7,   393,    45,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,     8,     9,    10,    45,    12,    37,     3,
      45,     8,     9,    10,    58,    54,    51,    11,    12,    13,
      14,    57,    16,     5,     6,     7,    58,    32,    33,    34,
      58,    36,    37,    58,    39,    32,    33,    31,    32,    36,
      34,     5,     6,     7,    58,    39,     5,     6,     7,     6,
       7,    57,    37,    37,    59,    60,    57,    62,     3,    53,
      65,    37,    59,    45,     9,     3,    11,    12,    13,    14,
      37,    16,    54,    11,    12,    13,    14,    33,    16,    84,
      59,    45,     3,    30,    59,    59,    45,    32,    45,    34,
      11,    12,    13,    14,    32,    16,    34,     4,    59,     6,
       7,    54,    40,     6,     7,    57,    60,    62,    53,    59,
      37,    32,     3,    34,    57,    53,    57,    57,    39,    37,
      11,    12,    13,    14,    57,    16,    25,    26,    27,    28,
      29,    59,    53,    59,    59,    57,    25,    57,    45,    46,
       8,    32,    45,    34,    51,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    28,   117,
      83,    19,    53,    62,    98,    71,    38,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
     126,   125,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      62,    63,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     5,     6,     7,    -1,
      25,    26,    27,    63,    38,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    38,    -1,    62,    -1,
      17,    18,    -1,    20,    21,    22,    45,    62,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    38,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    62,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    38,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    38,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    38,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    17,    18,    -1,    20,
      21,    22,    59,    38,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     6,     7,    45,    46,    51,    65,    66,    69,
      78,    86,    91,    92,   112,     5,     6,    45,    54,    79,
      80,    86,    10,     3,    45,    67,    68,    54,    70,    71,
      72,     0,    69,    78,    91,   112,    78,    91,   112,    91,
     112,     3,    92,   112,    41,    81,    82,    81,     5,    80,
      81,    58,    58,    56,    47,    68,    52,    71,    56,    78,
      91,   112,    91,   112,   112,    91,   112,   112,   112,    58,
      58,    60,    59,    45,    59,    83,    84,    85,    86,    45,
      76,    77,    86,     4,    91,   112,   112,   112,   112,    59,
      83,    83,    82,    56,     8,    56,    59,    84,    60,     8,
      48,    57,    77,    48,    76,   112,    56,    59,    59,     4,
      36,    87,    36,    87,    56,    85,    45,    73,    74,    86,
      36,    87,    56,     5,    45,    86,    88,    89,     3,    11,
      12,    13,    14,    16,    32,    34,    53,    93,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    36,     9,    93,    94,    36,    36,    87,    48,     5,
      45,    74,    86,    48,    93,    94,    36,    36,    87,    42,
      44,    90,    90,     5,    89,    61,    58,    58,    58,    58,
      58,    61,    94,    95,    19,    61,    19,    62,    93,     3,
      43,    49,    58,   106,   107,   109,    94,    37,    93,    93,
      36,    58,    75,    92,    48,    48,    58,    94,    37,    93,
      93,    36,    60,     3,    35,    58,   107,   108,   109,     3,
     107,     3,   106,   107,   109,   109,     3,    37,    15,   107,
     109,     3,    15,    50,    55,   107,   108,   109,   107,   109,
      94,    58,   109,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    38,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      38,    37,    57,    94,    94,    93,    59,    83,    57,    92,
      59,    83,    37,    57,    94,    94,    93,    42,    44,    58,
      35,    59,    59,    59,    59,    59,    59,    59,    59,    58,
      57,    58,    58,    58,    58,    63,    63,    37,    59,   107,
     109,   110,   111,    59,   107,   109,   107,   109,   107,   108,
     109,   107,   109,   107,   109,   107,   109,   107,   109,   107,
     109,   107,   109,   107,   109,   107,   109,   107,   109,   107,
     109,   107,   109,   107,   109,   107,   109,   107,   109,   107,
     109,   107,   109,   107,   109,   107,   109,   107,   109,   107,
     109,   107,   109,   107,   109,   107,   109,   107,   109,   107,
     109,    57,    37,    37,    94,    59,    59,    57,    37,    37,
      94,    59,   110,    59,    33,    30,   110,    59,    59,    59,
      54,    57,    59,    60,    57,    57,    37,    57,    57,    37,
      59,    93,    93,    59,    59,   110,    57,    57,    31,    39,
      40,    93,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    67,
      67,    68,    69,    70,    70,    71,    72,    73,    73,    74,
      74,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    80,    80,    80,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      93,    93,    94,    94,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    96,    96,    97,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   100,   101,   102,   103,
     103,   104,   104,   105,   106,   106,   106,   106,   106,   106,
     107,   107,   107,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     111,   111,   112,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     4,     2,     3,     1,     2,     4,     5,
       3,     4,     2,     3,     2,     3,     3,     4,     3,     2,
       1,     4,     3,     2,     1,     8,     1,     2,     1,     5,
       5,     4,     4,     2,     1,     2,     1,     2,     2,     3,
       2,     2,     1,     2,     2,     2,     3,     1,     1,     4,
       2,     1,     3,     1,     2,     2,     1,     1,     3,     2,
       2,     1,     2,     2,     3,     1,     3,     1,     2,     1,
      12,    11,    12,    11,    11,    10,    11,    10,     9,     9,
       2,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     9,     7,     7,     4,     4,     4,
       4,     3,     3,     3,     3,     3,     6,     1,     1,     5,
       5,     4,     4,     5,     3,     3,     3,     6,     6,     5,
       1,     4,     4,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     1,     1,     3,     1,
       1,     1,    11,    10
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
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 45 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 46 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 47 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 48 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 49 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 50 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 51 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 52 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 53 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 54 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 55 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 56 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 57 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 58 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 59 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 62 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[-1].n5); }
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 65 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) =(yyvsp[-1].n5);}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 66 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[0].n5);}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 69 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[-3].n5); (yyvsp[-3].n5)->fields = (yyvsp[-1].n6);makeFNull();(yyvsp[-3].n5)->size = sz;sz =0;DisplayT((yyvsp[-3].n5));fi =1;}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 72 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) =(yyvsp[-1].n7);}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 75 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) = (yyvsp[-1].n7);}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 76 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) = (yyvsp[0].n7);}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 79 "decl.y" /* yacc.c:1646  */
    {
                                                                                  (yyval.n7) = (yyvsp[-7].n7);
                                                                                  (yyval.n7)->Vfuncptr = (yyvsp[-3].n8);
                                                                                  (yyval.n7)->Fieldcount = fi;
                                                                                  (yyval.n7)->Methodcount = fj;
                                                                                  (yyval.n7)->Memberfield  = (yyvsp[-4].n6);
                                                                                  printf("Class Created\n");
                                                                                  makeFNull();
                                                                                  makeMNull();
                                                                                  }
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 91 "decl.y" /* yacc.c:1646  */
    {(yyval.n7) = (yyvsp[0].n7);}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = (yyvsp[-1].n8);}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 96 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = (yyvsp[0].n8);}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 99 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-3].n6), (yyvsp[-1].n1));}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 100 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-3].n6), (yyvsp[-1].n1));}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 101 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-2].n6), NULL);}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 102 "decl.y" /* yacc.c:1646  */
    {(yyval.n8) = CreateFuncDef((yyvsp[-2].n6), NULL);}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 106 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 107 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 110 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[-1].n6);}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 111 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[0].n6);}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 114 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) =(yyvsp[0].n6);}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 115 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) =(yyvsp[0].n6);}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 119 "decl.y" /* yacc.c:1646  */
    {   (yyval.no) =(yyvsp[-1].no);Display((yyvsp[-1].no)); printf("Global created\n");}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 120 "decl.y" /* yacc.c:1646  */
    {}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 123 "decl.y" /* yacc.c:1646  */
    {(yyval.no) =(yyvsp[-1].no);}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 124 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 126 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 127 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 128 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 131 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-2].no);}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 132 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 135 "decl.y" /* yacc.c:1646  */
    {(yyval.no) =(yyvsp[0].no);}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 136 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-3].no); (yyvsp[-3].no)->paramlist = (yyvsp[-1].n1);adrs--;}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 143 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[-2].n1);}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 144 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 147 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 148 "decl.y" /* yacc.c:1646  */
    {  (yyval.n1) = (yyvsp[0].n1);
                              struct Paramstruct *temp = (yyvsp[0].n1);
                              while(temp->next != NULL){
                              temp = temp->next;
                              }
                              temp->typet = (yyvsp[-1].n5);
                            }
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 157 "decl.y" /* yacc.c:1646  */
    {}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 158 "decl.y" /* yacc.c:1646  */
    {}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 161 "decl.y" /* yacc.c:1646  */
    {(yyval.n3)= (yyvsp[-1].n3);}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 162 "decl.y" /* yacc.c:1646  */
    {}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 165 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 166 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 169 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 170 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 173 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 174 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 175 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 176 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 180 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[-1].n2);}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 181 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[0].n2);}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 184 "decl.y" /* yacc.c:1646  */
    {

                                                                (yyval.n2) = (yyvsp[-10].n2);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyvsp[-10].n2)->Lentry);
                                                                makeLNull();
                                                                
                                                                }
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 198 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                (yyval.n2)->Lentry = head2;
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyval.n2)->Lentry);
                                                                makeLNull();
                                                                
                                                                }
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 211 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-10].n2);
                                                                (yyval.n2)->typet = (yyvsp[-11].n5);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyvsp[-10].n2)->Lentry);
                                                                makeLNull();
                                                                
                                                                }
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 225 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->typet = (yyvsp[-10].n5);
                                                                (yyval.n2)->Lentry = head2;
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyval.n2)->Lentry);
                                                                makeLNull();
                                                                
                                                                }
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 239 "decl.y" /* yacc.c:1646  */
    {

                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyvsp[-9].n2)->Lentry);
                                                                makeLNull();
                                                                
                                                                }
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 253 "decl.y" /* yacc.c:1646  */
    {    (yyval.n2) = (yyvsp[-8].n2);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->Lentry = head2;
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyval.n2)->Lentry);
                                                                makeLNull();
                                                                }
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 264 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->typet = (yyvsp[-10].n5);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyvsp[-9].n2)->Lentry);
                                                                makeLNull();
                                                                
                                                                }
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 278 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-8].n2);
                                                                (yyval.n2)->typet = (yyvsp[-9].n5);
                                                                (yyval.n2)->Lentry = head2;
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyval.n2)->Lentry);
                                                                makeLNull();
                                                                }
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 292 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-7].n2);
                                                                (yyval.n2)->typet = (yyvsp[-8].n5);
                                                                (yyval.n2)->Lentry = head2;
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyval.n2)->Lentry);
                                                                makeLNull();
                                                                
                                                                }
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 305 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-7].n2);
                                                                (yyval.n2)->Lentry = head2;
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                if((yyval.n2)->Gentry != NULL){
                                                                  (yyval.n2)->Gentry->flabel = fl;
                                                                }
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyval.n2)->Lentry);
                                                                makeLNull();
                                                                
                                                                }
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 321 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeConnectorNode((yyvsp[-1].n2), (yyvsp[0].n2), 0);}
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 322 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 325 "decl.y" /* yacc.c:1646  */
    {        if((yyvsp[0].n2)->nodetype != rettype){
                                                      printf("Unmatching type error");
                                                      exit(-1);
                                                  }
                                                  (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);
                                          }
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 331 "decl.y" /* yacc.c:1646  */
    {if((yyvsp[0].n2)->nodetype != rettype){printf("Unmatching type error");exit(-1);}
                                            (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);}
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 337 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-6].n2), (yyvsp[-3].n2), (yyvsp[-1].n2), 6);}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 338 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 7);}
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 341 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 8);}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 345 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("read", (yyvsp[-1].n2), 1);}
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 348 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 349 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 350 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 353 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 354 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 355 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 356 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 357 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 358 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNodeC("new", (yyvsp[-5].n2), (yyvsp[-1].n7), 24);}
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 361 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("break", 9);}
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 364 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("continue", 10);}
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 367 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("alloc", (yyvsp[-4].n2), 18);(yyvsp[-4].n2)->type = 19;}
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 368 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("alloc", (yyvsp[-4].n2), 18);(yyvsp[-4].n2)->type = 19;}
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 371 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("free", (yyvsp[-1].n2), 22);}
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 372 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("free", (yyvsp[-1].n2), 22);}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 375 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("initialize", (yyvsp[-4].n2), 21); }
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 377 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);(yyval.n2)->left = (yyvsp[-2].n2);(yyvsp[-2].n2)->right = (yyval.n2);}
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 378 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);(yyval.n2)->left = (yyvsp[-2].n2);(yyvsp[-2].n2)->right = (yyval.n2);}
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 379 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 380 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNode((yyvsp[-3].n2), (yyvsp[-1].n4), 15);  makeANull();}
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 381 "decl.y" /* yacc.c:1646  */
    { struct MemberFuncList *temp = LookupM((yyvsp[-3].n2)->varname, (yyvsp[-5].n2)->Ctype);
                                              check(temp->paramlist, (yyvsp[-1].n4));
                                              (yyval.n2) = makeFuncCallNodeC((yyvsp[-3].n2), (yyvsp[-5].n2), (yyvsp[-1].n4), 15);makeANull();}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 384 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNodeC((yyvsp[-2].n2), (yyvsp[-4].n2), NULL, 15);}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 387 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[0].n2);}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 388 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 389 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 392 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 393 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 396 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 397 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 398 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 399 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 400 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 401 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 402 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 403 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 404 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 405 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 406 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 407 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 408 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 409 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 410 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 411 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 412 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 413 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 414 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 415 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 416 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 417 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 418 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 419 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 420 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 421 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 422 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 423 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 424 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 425 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 426 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 427 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 428 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 429 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 430 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 431 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 432 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 433 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 434 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 435 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 436 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 437 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 438 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 439 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 440 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 441 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 442 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 443 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 444 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 445 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 446 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 447 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 448 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 449 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 450 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 451 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 452 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 453 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 454 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 455 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNode((yyvsp[-2].n2), NULL, 15);}
#line 2857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 456 "decl.y" /* yacc.c:1646  */
    {check((yyvsp[-3].n2)->Gentry->paramlist, (yyvsp[-1].n4));(yyval.n2) = makeFuncCallNode((yyvsp[-3].n2), (yyvsp[-1].n4), 15);makeANull();}
#line 2863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 457 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 458 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 461 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[-2].n4);}
#line 2881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 462 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[0].n4);}
#line 2887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 465 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 2893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 466 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 2899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 470 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-9].n2); 
                                                                          (yyval.n2)->Lentry = (yyvsp[-5].n3); 
                                                                          (yyval.n2)->left = (yyvsp[-3].n2);
                                                                          (yyval.n2)->right = (yyvsp[-2].n2);
                                                                          printf("Main Created\n");
                                                                          }
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 476 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-8].n2); 
                                                                          (yyval.n2)->left = (yyvsp[-3].n2);
                                                                          (yyval.n2)->right = (yyvsp[-2].n2);
                                                                          printf("Main Created\n");
                                                                          }
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2924 "y.tab.c" /* yacc.c:1646  */
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
#line 483 "decl.y" /* yacc.c:1906  */


yyerror(char const *s)
{
    printf("yyerror %s", s);
}

int main(void){
    extern FILE *yyin;
    yyin = fopen("input.txt", "r");
    TypeTableCreate();
    yyparse();
    return 0;
}
