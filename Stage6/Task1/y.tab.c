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

#line 76 "y.tab.c" /* yacc.c:339  */

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
    INITIALIZE = 305
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "decl.y" /* yacc.c:355  */

	struct Gsymbol *no;
	struct Paramstruct *n1;
    struct ASTNode *n2;
    struct Lsymbol *n3;
    struct ArgStruct *n4;
    struct TypeTable *n5;
    struct FieldList *n6;

#line 226 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 243 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   605

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  315

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      54,    55,     2,     2,    53,     2,    56,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    38,    39,    40,    41,    42,    43,    44,
      47,    50,    51,    54,    57,    58,    61,    62,    66,    67,
      70,    71,    73,    74,    77,    78,    81,    82,    85,    86,
      89,    90,    93,    94,    97,    98,   101,   102,   105,   106,
     109,   110,   113,   114,   115,   116,   120,   121,   124,   134,
     143,   154,   168,   169,   172,   178,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   184,   185,   188,   192,
     195,   196,   197,   200,   201,   202,   203,   204,   207,   210,
     213,   214,   217,   218,   221,   223,   224,   227,   228,   229,
     232,   233,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   301,   302,   305,   306,   310,
     317
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
  "ID4", "TYPE", "ENDTYPE", "ID5", "NUL", "INITIALIZE", "'{'", "'}'",
  "','", "'('", "')'", "'.'", "'['", "']'", "$accept", "Program",
  "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl",
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
     305,   123,   125,    44,    40,    41,    46,    91,    93
};
# endif

#define YYPACT_NINF -122

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-122)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     151,   167,    16,  -122,     9,   -16,    41,   163,     0,    85,
       0,  -122,  -122,  -122,  -122,    54,   172,  -122,    54,    45,
      52,   105,   -30,  -122,  -122,     0,     0,  -122,     0,  -122,
     108,  -122,  -122,   117,    49,  -122,  -122,  -122,    49,   128,
      70,   153,  -122,  -122,     0,  -122,  -122,  -122,    70,    70,
      54,   139,   192,    42,   160,  -122,   198,   166,     2,  -122,
     171,  -122,    46,   106,  -122,   132,  -122,   179,   160,    70,
    -122,  -122,  -122,  -122,  -122,   183,  -122,   175,   547,   187,
     197,  -122,   292,  -122,    48,    48,   231,  -122,   170,   221,
     247,  -122,  -122,   250,   251,   254,   327,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,    51,    63,
     547,   547,   274,   547,   276,  -122,  -122,   260,   260,  -122,
    -122,   311,    40,   312,   314,    24,    24,    24,   281,  -122,
     150,   316,     1,    24,   327,   327,   547,   327,   547,   110,
    -122,   241,  -122,  -122,  -122,    65,   268,   351,   270,   417,
    -122,   174,   -18,    61,    24,   373,   439,   461,   373,   548,
     277,   272,   373,   548,  -122,   278,   279,   373,  -122,   548,
     265,   329,   294,   297,   327,   300,   327,  -122,  -122,    31,
     287,   483,    24,    24,    40,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,  -122,  -122,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,  -122,  -122,  -122,  -122,   330,   315,  -122,   305,
     307,   309,  -122,  -122,   313,   331,   344,   332,   345,  -122,
     373,   548,   333,   350,  -122,  -122,   252,    -4,   252,    -4,
     395,  -122,   567,   252,    -4,   252,    -4,   252,    -4,   395,
     567,   395,   567,   328,  -122,   328,  -122,   328,  -122,    78,
      84,    78,    84,   252,    -4,   252,    -4,   252,    -4,   395,
     567,   252,    -4,   252,    -4,   252,    -4,   395,   567,   395,
     567,   328,  -122,   328,  -122,   328,  -122,    78,    84,    78,
      84,   252,    -4,   547,   547,  -122,  -122,  -122,  -122,  -122,
     334,  -122,   352,  -122,    24,   523,   511,  -122,  -122,  -122,
     547,  -122,  -122,   415,  -122
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    34,    35,     0,     0,     0,     0,     0,     0,
       0,    47,     4,    19,    34,     0,     0,    21,     0,     0,
       0,     0,     0,    12,     1,     0,     0,     7,     0,     3,
       0,    46,     8,    26,    23,    25,    18,    20,    22,     0,
       0,     0,    10,    11,     0,     6,     9,     2,     0,     0,
       0,     0,     0,     0,    29,    31,     0,     0,     0,    15,
       0,     5,     0,     0,    24,     0,    33,     0,    28,     0,
      32,    17,    13,    14,    16,     0,    27,     0,     0,     0,
       0,    30,     0,    37,     0,     0,     0,    39,    87,     0,
       0,    78,    79,     0,     0,     0,     0,    53,    59,    60,
      56,    57,    58,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,    43,    45,    41,    40,    36,
      38,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    87,    90,    99,   154,     0,   153,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    54,    55,
       0,     0,    76,    77,    86,     0,     0,    75,    74,    73,
       0,     0,     0,     0,     0,     0,     0,    42,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    69,    82,    83,     0,     0,   160,     0,
       0,     0,    89,    88,     0,     0,     0,     0,     0,   151,
     158,   157,     0,   156,    91,    98,   142,   127,   143,   128,
     141,   150,   135,   144,   129,   147,   132,   148,   133,   146,
     131,   145,   130,   139,   125,   138,   124,   140,   126,   136,
     122,   137,   123,   149,   134,   113,   100,   114,   101,   120,
      97,   115,   102,   116,   103,   119,   106,   118,   105,   117,
     104,   111,    96,   110,    94,   112,    95,   108,    92,   109,
      93,   121,   107,     0,     0,    81,    80,    84,   159,    51,
       0,    49,     0,   152,     0,     0,     0,    50,    48,   155,
       0,    67,    68,     0,    66
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,  -122,   383,  -122,   349,   402,  -122,   394,
     396,   369,   127,   -43,   356,   258,   220,  -122,   346,   363,
       6,   181,  -108,    29,   -95,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,   -78,   -61,  -121,    62,   146,
    -122,   214
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    22,    23,    58,    59,     8,    16,    17,
      34,    35,    53,    54,    55,     9,    79,    86,    87,   117,
      10,    11,    96,   128,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   146,   109,   148,   181,   232,
     233,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     108,   129,   134,   135,   141,   137,     2,     3,    14,     3,
      68,   168,    20,    26,    28,    21,   165,    42,   108,    68,
      68,   206,   207,   208,   209,   210,    19,   141,   174,    21,
     176,    44,   108,   108,   141,   108,   142,   214,   121,   129,
     129,    24,   129,   141,   143,     4,   153,    57,    14,     3,
     144,   166,    14,     3,    72,   145,   108,   108,   108,   108,
     108,   147,   151,   241,   155,   155,   158,   143,   141,   162,
     130,   167,   170,   144,   143,   142,    14,     3,   154,   129,
     144,   129,   132,   143,   155,   154,   229,    52,    30,   144,
     115,    52,   116,   155,   145,    33,   108,    67,   108,    39,
     180,    75,    50,   190,   191,   192,    40,   131,   143,   206,
     207,   208,    14,     3,   144,    52,   215,   131,   230,   154,
     133,   236,   238,   240,   243,   245,   247,   249,   251,   253,
     255,   257,   259,   261,   263,   133,    77,   265,   267,   269,
     271,   273,   275,   277,   279,   281,   283,   285,   287,   289,
     291,    52,   177,   141,   178,     1,    41,     2,     3,    14,
       3,    76,    48,   172,   173,   161,   175,     1,    78,     2,
       3,    49,    13,    14,     3,    62,    63,    36,    14,     3,
      83,    14,     3,    51,   149,   305,   306,   156,   157,   159,
      65,    31,   163,   143,   169,   171,     4,     5,    57,   144,
      66,    77,   313,   226,   154,   228,    70,    31,     4,    31,
     129,   129,    15,    69,    71,   108,   108,    15,   129,    74,
      84,    27,    29,   110,    32,    31,   121,   108,   108,   213,
      80,   133,   108,   111,    82,   108,   119,    14,     3,    45,
      46,   231,    47,   230,   237,   239,   242,   244,   246,   248,
     250,   252,   254,   256,   258,   260,   262,   264,    61,    18,
     266,   268,   270,   272,   274,   276,   278,   280,   282,   284,
     286,   288,   290,   292,    18,   122,    84,   190,   191,   192,
     193,   194,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   179,    77,   121,    56,    60,
     112,   123,   114,   195,   124,   125,    56,    56,   126,   133,
     136,    56,   138,   139,   140,   150,    60,   152,   160,   164,
      56,    56,   133,   222,   131,   197,   219,    56,   113,   218,
      88,   224,   220,   221,   225,    85,   127,   227,    89,    90,
      91,    92,   234,    93,    85,   294,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,    94,
     295,    95,   296,   293,   297,   298,   231,   211,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   300,   302,   299,   301,   133,   307,   223,   303,   195,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   304,   308,    43,   196,    73,   133,    25,
      37,   195,   182,   183,    38,   185,   186,   187,    88,    64,
     190,   191,   192,   193,   194,    81,    89,    90,    91,    92,
     133,    93,   120,   195,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,    94,   118,    95,
     309,     0,   133,     0,   314,   211,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,     0,
       0,     0,   212,     0,     0,     0,     0,   211,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,     0,     0,     0,   216,     0,     0,     0,     0,   211,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,    88,     0,   217,     0,     0,     0,
       0,   211,    89,    90,    91,    92,    88,    93,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,   235,    93,
       0,     0,     0,    94,     0,    95,     0,     0,     0,     0,
      88,   312,     0,     0,   310,    94,     0,    95,    89,    90,
      91,    92,   311,    93,     0,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,    94,
       0,    95,     0,     0,   198,   199,   211,   201,   202,   203,
       0,     0,   206,   207,   208,   209,   210,     0,     0,     0,
       0,     0,     0,     0,     0,   211
};

static const yytype_int16 yycheck[] =
{
      78,    96,   110,   111,     3,   113,     6,     7,     6,     7,
      53,   132,     3,     7,     8,    45,    15,    47,    96,    62,
      63,    25,    26,    27,    28,    29,    10,     3,   136,    45,
     138,    25,   110,   111,     3,   113,    35,    55,    56,   134,
     135,     0,   137,     3,    43,    45,   124,    45,     6,     7,
      49,    50,     6,     7,    52,    54,   134,   135,   136,   137,
     138,   122,   123,   184,   125,   126,   127,    43,     3,   130,
      19,   132,   133,    49,    43,    35,     6,     7,    54,   174,
      49,   176,    19,    43,   145,    54,    55,    45,     3,    49,
      42,    45,    44,   154,    54,    41,   174,    55,   176,    54,
      35,    55,    53,    25,    26,    27,    54,    56,    43,    25,
      26,    27,     6,     7,    49,    45,    55,    56,   179,    54,
      57,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,    57,     4,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,    45,    42,     3,    44,     4,    51,     6,     7,     6,
       7,    55,    54,   134,   135,    15,   137,     4,    36,     6,
       7,    54,     5,     6,     7,    48,    49,     5,     6,     7,
       5,     6,     7,    55,   122,   293,   294,   125,   126,   127,
      51,    10,   130,    43,   132,   133,    45,    46,    45,    49,
       8,     4,   310,   174,    54,   176,     8,    26,    45,    28,
     305,   306,    45,    53,    48,   293,   294,    45,   313,    48,
      45,     7,     8,    36,    10,    44,    56,   305,   306,    55,
      51,    57,   310,    36,    51,   313,     5,     6,     7,    25,
      26,   179,    28,   304,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,    44,     1,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,    16,    54,    45,    25,    26,    27,
      28,    29,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    54,     4,    56,    40,    41,
      80,    54,    82,    38,    54,    54,    48,    49,    54,    57,
      36,    53,    36,    53,     3,     3,    58,     3,    37,     3,
      62,    63,    57,    58,    56,    55,    54,    69,    36,    52,
       3,    37,    54,    54,    37,    77,     9,    37,    11,    12,
      13,    14,    55,    16,    86,    30,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    32,
      55,    34,    55,    33,    55,    52,   304,    38,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    37,    37,    52,    52,    57,    52,    58,    55,    38,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    53,    52,    22,    55,    58,    57,     7,
      16,    38,    17,    18,    18,    20,    21,    22,     3,    50,
      25,    26,    27,    28,    29,    69,    11,    12,    13,    14,
      57,    16,    86,    38,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    32,    85,    34,
     304,    -1,    57,    -1,    39,    38,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    38,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    38,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,     3,    -1,    55,    -1,    -1,    -1,
      -1,    38,    11,    12,    13,    14,     3,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    55,    16,
      -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,
       3,    40,    -1,    -1,    31,    32,    -1,    34,    11,    12,
      13,    14,    39,    16,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    32,
      -1,    34,    -1,    -1,    17,    18,    38,    20,    21,    22,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     6,     7,    45,    46,    60,    61,    66,    74,
      79,    80,   100,     5,     6,    45,    67,    68,    74,    10,
       3,    45,    62,    63,     0,    66,    79,   100,    79,   100,
       3,    80,   100,    41,    69,    70,     5,    68,    69,    54,
      54,    51,    47,    63,    79,   100,   100,   100,    54,    54,
      53,    55,    45,    71,    72,    73,    74,    45,    64,    65,
      74,   100,    71,    71,    70,    51,     8,    55,    72,    53,
       8,    48,    52,    65,    48,    55,    55,     4,    36,    75,
      51,    73,    51,     5,    45,    74,    76,    77,     3,    11,
      12,    13,    14,    16,    32,    34,    81,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      36,    36,    75,    36,    75,    42,    44,    78,    78,     5,
      77,    56,    54,    54,    54,    54,    54,     9,    82,    83,
      19,    56,    19,    57,    81,    81,    36,    81,    36,    53,
       3,     3,    35,    43,    49,    54,    94,    95,    96,    97,
       3,    95,     3,    94,    54,    95,    97,    97,    95,    97,
      37,    15,    95,    97,     3,    15,    50,    95,    96,    97,
      95,    97,    82,    82,    81,    82,    81,    42,    44,    54,
      35,    97,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    38,    55,    55,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    38,    55,    55,    55,    55,    55,    55,    52,    54,
      54,    54,    58,    58,    37,    37,    82,    37,    82,    55,
      95,    97,    98,    99,    55,    55,    95,    97,    95,    97,
      95,    96,    97,    95,    97,    95,    97,    95,    97,    95,
      97,    95,    97,    95,    97,    95,    97,    95,    97,    95,
      97,    95,    97,    95,    97,    95,    97,    95,    97,    95,
      97,    95,    97,    95,    97,    95,    97,    95,    97,    95,
      97,    95,    97,    95,    97,    95,    97,    95,    97,    95,
      97,    95,    97,    33,    30,    55,    55,    55,    52,    52,
      37,    52,    37,    55,    53,    81,    81,    52,    52,    98,
      31,    39,    40,    81,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      61,    62,    62,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    78,    78,    79,    79,    80,    80,
      80,    80,    81,    81,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    85,    86,
      87,    87,    87,    88,    88,    88,    88,    88,    89,    90,
      91,    91,    92,    92,    93,    94,    94,    95,    95,    95,
      96,    96,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    98,    98,    99,    99,   100,
     100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     4,     3,     2,     2,     3,
       3,     2,     1,     4,     2,     1,     2,     2,     3,     2,
       2,     1,     2,     2,     3,     1,     1,     4,     2,     1,
       3,     1,     2,     2,     1,     1,     3,     2,     2,     1,
       2,     2,     3,     1,     3,     1,     2,     1,    12,    11,
      12,    11,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     9,     7,     7,     4,
       4,     4,     4,     3,     3,     3,     3,     3,     1,     1,
       5,     5,     4,     4,     5,     3,     3,     1,     4,     4,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     1,     1,     3,     1,     1,     1,    11,
      10
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
#line 37 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 38 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 39 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 40 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 41 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 42 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 43 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 44 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 47 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[-1].n5);}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 50 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) =(yyvsp[-1].n5);}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 51 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[0].n5);}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 54 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[-3].n5); (yyvsp[-3].n5)->fields = (yyvsp[-1].n6);makeFNull();(yyvsp[-3].n5)->size = sz;sz =0;DisplayT((yyvsp[-3].n5));}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[-1].n6);}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 58 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[0].n6);}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 61 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) =(yyvsp[0].n6);}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 62 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) =(yyvsp[0].n6);}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 66 "decl.y" /* yacc.c:1646  */
    {   (yyval.no) =(yyvsp[-1].no);Display((yyvsp[-1].no));}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 67 "decl.y" /* yacc.c:1646  */
    {}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 70 "decl.y" /* yacc.c:1646  */
    {(yyval.no) =(yyvsp[-1].no);}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 71 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 73 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 74 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 77 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-2].no);}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 78 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 81 "decl.y" /* yacc.c:1646  */
    {(yyval.no) =(yyvsp[0].no);}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 82 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-3].no); (yyvsp[-3].no)->paramlist = (yyvsp[-1].n1);adrs--;}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 89 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[-2].n1);}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 90 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 93 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 94 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);(yyvsp[0].n1)->typet = (yyvsp[-1].n5);}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 97 "decl.y" /* yacc.c:1646  */
    {}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 98 "decl.y" /* yacc.c:1646  */
    {}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 101 "decl.y" /* yacc.c:1646  */
    {(yyval.n3)= (yyvsp[-1].n3);}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 102 "decl.y" /* yacc.c:1646  */
    {}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 105 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 106 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 109 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 110 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 113 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 114 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 115 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 116 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 120 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[-1].n2);}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 121 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[0].n2);}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 124 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-10].n2);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyvsp[-10].n2)->Lentry);
                                                                makeLNull();
                                                                }
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 134 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                //DisplayL($2->Lentry);
                                                                makeLNull();
                                                                }
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 143 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-10].n2);
                                                                (yyval.n2)->typet = (yyvsp[-11].n5);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyvsp[-10].n2)->Lentry);
                                                                makeLNull();
                                                                }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 154 "decl.y" /* yacc.c:1646  */
    {
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->typet = (yyvsp[-10].n5);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                //DisplayL($2->Lentry);
                                                                makeLNull();
                                                                }
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 168 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeConnectorNode((yyvsp[-1].n2), (yyvsp[0].n2), 0);}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 169 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 172 "decl.y" /* yacc.c:1646  */
    {        if((yyvsp[0].n2)->nodetype != rettype){
                                                      printf("Unmatching type error");
                                                      exit(-1);
                                                  }
                                                  (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);
                                          }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 178 "decl.y" /* yacc.c:1646  */
    {if((yyvsp[0].n2)->nodetype != rettype){printf("Unmatching type error");exit(-1);}
                                            (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 184 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-6].n2), (yyvsp[-3].n2), (yyvsp[-1].n2), 6);}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 185 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 7);}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 188 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 8);}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 192 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("read", (yyvsp[-1].n2), 1);}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 195 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 196 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 197 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 200 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 201 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 202 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 203 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 204 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 207 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("break", 9);}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 210 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("continue", 10);}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 213 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("alloc", (yyvsp[-4].n2), 18);}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 214 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("alloc", (yyvsp[-4].n2), 18);}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 217 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("free", (yyvsp[-1].n2), 22);}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 218 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("free", (yyvsp[-1].n2), 22);}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 221 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("initialize", (yyvsp[-4].n2), 21);}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 223 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);(yyvsp[0].n2)->typet = (yyvsp[-2].n2)->typet;}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 224 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);(yyvsp[0].n2)->typet = (yyvsp[-2].n2)->typet;}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 227 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[0].n2);}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 228 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 229 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 232 "decl.y" /* yacc.c:1646  */
    {}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 233 "decl.y" /* yacc.c:1646  */
    {}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 236 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 237 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 238 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 239 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 240 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 241 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 242 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 243 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 244 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 245 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 246 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 247 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 248 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 249 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 250 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 251 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 252 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 253 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 254 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 255 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 256 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 257 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 258 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 259 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 260 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 261 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 262 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 263 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 264 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 265 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 266 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 267 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 268 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 269 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 270 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 271 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 272 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 273 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 274 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 275 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 276 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 277 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 278 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 279 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 280 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 281 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 282 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 283 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 284 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 285 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 286 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 287 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 288 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 289 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 290 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 291 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 292 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 293 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 294 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 295 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNode((yyvsp[-2].n2), NULL, 15);}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 296 "decl.y" /* yacc.c:1646  */
    {check((yyvsp[-3].n2)->Gentry->paramlist, (yyvsp[-1].n4));(yyval.n2) = makeFuncCallNode((yyvsp[-3].n2), (yyvsp[-1].n4), 15);makeANull();}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 297 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 298 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 301 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[-2].n4);}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 302 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[0].n4);}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 305 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 306 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 310 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-9].n2); 
                                                                          (yyval.n2)->Lentry = (yyvsp[-5].n3); 
                                                                          (yyval.n2)->left = (yyvsp[-3].n2);
                                                                          (yyval.n2)->right = (yyvsp[-2].n2);
                                                                          printf("Main Created\n");
                                                                          DisplayL((yyval.n2)->Lentry);
                                                                          }
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 317 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-8].n2); 
                                                                          (yyval.n2)->left = (yyvsp[-3].n2);
                                                                          (yyval.n2)->right = (yyvsp[-2].n2);
                                                                          printf("Main Created\n");
                                                                          }
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2531 "y.tab.c" /* yacc.c:1646  */
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
#line 324 "decl.y" /* yacc.c:1906  */


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
