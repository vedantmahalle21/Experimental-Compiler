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
    NUL = 304
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

#line 224 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 241 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   580

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  157
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  310

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
      53,    54,     2,     2,    52,     2,    55,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    38,    39,    40,    41,    42,    43,    44,
      47,    50,    51,    54,    57,    58,    61,    62,    63,    67,
      69,    72,    73,    75,    76,    79,    80,    83,    84,    87,
      88,    91,    92,    95,    96,    99,   100,   103,   104,   107,
     108,   111,   114,   115,   116,   117,   121,   122,   125,   135,
     144,   154,   167,   168,   171,   177,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   183,   184,   187,   191,   194,
     195,   196,   199,   200,   201,   202,   205,   208,   211,   212,
     215,   216,   219,   220,   223,   224,   225,   228,   229,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   297,   298,   301,   302,   306,   313
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
  "ID4", "TYPE", "ENDTYPE", "ID5", "NUL", "'{'", "'}'", "','", "'('",
  "')'", "'.'", "'['", "']'", "$accept", "Program", "TypeDefBlock",
  "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl", "GDeclBlock",
  "GDeclList", "GDecl", "GidList", "Gid", "ParamList", "Plist", "Param",
  "Type", "LDeclBlock", "LDeclList", "LDecl", "IDList", "FDefBlock",
  "FDefList", "Slist", "Retstmt", "Stmt", "Ifstmt", "Whilestmt",
  "InputStmt", "OutputStmt", "AsgStmt", "BreakStmt", "ContinueStmt",
  "AllocStmt", "FreeStmt", "FIELD", "var", "string", "expr", "ArgList",
  "Arg", "MainBlock", YY_NULLPTR
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
     123,   125,    44,    40,    41,    46,    91,    93
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
     103,   196,     4,  -122,    33,   -19,    84,     5,    28,   102,
      28,  -122,  -122,  -122,  -122,    70,   243,  -122,    70,    62,
      78,    96,   -22,  -122,  -122,    28,    28,  -122,    28,  -122,
     127,  -122,  -122,   136,   142,  -122,  -122,  -122,   142,   153,
     211,   261,  -122,  -122,    28,  -122,  -122,  -122,   211,   211,
      70,   161,   207,   178,   174,  -122,   279,   212,   260,   264,
       1,  -122,  -122,   189,   193,  -122,     9,  -122,   257,   174,
     211,  -122,  -122,  -122,  -122,  -122,  -122,   263,  -122,   186,
     510,   255,    11,  -122,    40,  -122,    23,   252,  -122,   273,
     256,   277,  -122,  -122,   278,   281,   282,   496,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,   -13,   -15,
     510,   510,   293,   510,   296,  -122,  -122,   299,  -122,  -122,
     347,    45,   350,   352,    21,    21,    21,   326,  -122,    13,
     366,    36,    21,   496,   496,   510,   496,   510,    64,  -122,
      59,  -122,  -122,  -122,   184,   319,   298,   338,   361,  -122,
     132,   110,   200,    21,   320,   383,   405,   320,   528,   343,
     344,   340,  -122,   360,   320,  -122,   528,   254,   276,   377,
     379,   496,   380,   496,  -122,  -122,    29,   364,   427,    21,
      21,    45,    21,    21,    21,    21,    21,    21,    21,    21,
      21,    21,    21,  -122,  -122,    21,    21,    21,    21,    21,
      21,    21,    21,    21,    21,    21,    21,    21,    21,  -122,
    -122,  -122,  -122,   386,   390,  -122,   381,   382,  -122,  -122,
     387,   388,   403,   391,   404,  -122,   320,   528,   406,   411,
    -122,  -122,    -7,   237,    -7,   237,   339,  -122,   542,    -7,
     237,    -7,   237,    -7,   237,   339,   542,   339,   542,   340,
    -122,   340,  -122,   340,  -122,    74,   259,    74,   259,    -7,
     237,    -7,   237,    -7,   237,   339,   542,    -7,   237,    -7,
     237,    -7,   237,   339,   542,   339,   542,   340,  -122,   340,
    -122,   340,  -122,    74,   259,    74,   259,    -7,   237,   510,
     510,  -122,  -122,  -122,  -122,   419,  -122,   421,  -122,    21,
     472,   455,  -122,  -122,  -122,   510,  -122,  -122,   359,  -122
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    35,    36,     0,     0,     0,     0,     0,     0,
       0,    47,     4,    20,    35,     0,     0,    22,     0,     0,
       0,     0,     0,    12,     1,     0,     0,     7,     0,     3,
       0,    46,     8,    27,    24,    26,    19,    21,    23,     0,
       0,     0,    10,    11,     0,     6,     9,     2,     0,     0,
       0,     0,     0,     0,    30,    32,     0,     0,     0,     0,
       0,    15,     5,     0,     0,    25,     0,    34,     0,    29,
       0,    33,    16,    17,    18,    13,    14,     0,    28,     0,
       0,     0,     0,    31,     0,    38,     0,     0,    40,    84,
       0,     0,    76,    77,     0,     0,     0,     0,    53,    59,
      60,    56,    57,    58,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,    43,    45,    41,    37,    39,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
      84,    87,    96,   151,     0,   150,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    54,    55,     0,
       0,    75,    83,     0,    74,    73,    72,     0,     0,     0,
       0,     0,     0,     0,    42,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
      68,    80,    81,     0,     0,   157,     0,     0,    86,    85,
       0,     0,     0,     0,     0,   148,   155,   154,     0,   153,
      88,    95,   139,   124,   140,   125,   138,   147,   132,   141,
     126,   144,   129,   145,   130,   143,   128,   142,   127,   136,
     122,   135,   121,   137,   123,   133,   119,   134,   120,   146,
     131,   110,    97,   111,    98,   117,    94,   112,    99,   113,
     100,   116,   103,   115,   102,   114,   101,   108,    93,   107,
      91,   109,    92,   105,    89,   106,    90,   118,   104,     0,
       0,    79,    78,   156,    51,     0,    49,     0,   149,     0,
       0,     0,    50,    48,   152,     0,    66,    67,     0,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,  -122,   435,  -122,   413,   467,  -122,   460,
     459,   428,   241,   176,   420,   182,   160,  -122,   407,  -122,
      79,   180,  -108,    80,   -96,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,   -80,   -63,  -121,   -29,   192,  -122,
     454
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    22,    23,    60,    61,     8,    16,    17,
      34,    35,    53,    54,    55,     9,    81,    87,    88,   117,
      10,    11,    97,   127,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   145,   109,   147,   178,   228,   229,
      12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     108,   128,   133,   134,   131,   136,   129,    57,    58,     1,
     165,     2,     3,    79,    19,    79,   149,   108,   187,   188,
     189,   190,   191,    21,   140,    42,    21,   171,   160,   173,
     108,   108,   140,   108,     2,     3,    20,   128,   128,   140,
     128,   132,   130,   152,    79,    80,    59,   111,   140,   132,
       4,   163,    75,   108,   108,   108,   108,   108,   146,   150,
     237,   154,   154,   157,   142,   115,   161,   116,   164,   167,
     143,   141,   142,     4,   153,   128,   113,   128,   143,   142,
     141,   154,   153,   225,    24,   143,    26,    28,   142,   144,
     154,   108,   148,   108,   143,   155,   156,   158,   144,   187,
     188,   189,   166,   168,    44,    30,   174,     1,   175,     2,
       3,    33,   176,   226,   120,    39,   232,   234,   236,   239,
     241,   243,   245,   247,   249,   251,   253,   255,   257,   259,
     132,    40,   261,   263,   265,   267,   269,   271,   273,   275,
     277,   279,   281,   283,   285,   287,    41,   227,     4,     5,
     233,   235,   238,   240,   242,   244,   246,   248,   250,   252,
     254,   256,   258,   260,   211,   120,   262,   264,   266,   268,
     270,   272,   274,   276,   278,   280,   282,   284,   286,   288,
      48,   300,   301,    18,    14,     3,   210,   140,   132,    49,
      31,    85,    14,     3,    50,    14,     3,   308,    18,    14,
       3,    13,    14,     3,   128,   128,    31,    51,    31,   108,
     108,    66,   128,   169,   170,    67,   172,    14,     3,   177,
     108,   108,    56,    52,    31,   108,    70,   142,   108,    69,
      56,    56,    68,   143,    52,    56,   226,   153,    52,    69,
      69,    15,   112,    77,   114,    56,    56,    78,    36,    14,
       3,   222,    56,   224,   212,   130,    52,   118,    14,     3,
      72,    86,   203,   204,   205,   206,   207,    57,    58,    86,
     227,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   203,   204,   205,    71,    15,    63,
      64,   110,   192,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,    59,    82,    73,   121,
     132,   218,    74,    84,   208,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   120,   135,
     122,   123,   137,   219,   124,   125,   192,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     139,   138,   193,   149,   132,   151,   179,   180,   192,   182,
     183,   184,    89,   159,   187,   188,   189,   190,   191,   162,
      90,    91,    92,    93,   130,    94,   132,   192,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,    95,   194,    96,   215,   132,   132,   216,   309,   208,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   217,   220,   209,   221,   223,   230,   289,
     290,   208,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   291,   292,   213,   293,   294,
     295,   297,   296,   208,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,    43,    89,   214,
     298,    27,    29,   299,    32,   208,    90,    91,    92,    93,
     302,    94,   303,    76,    25,    89,    37,    38,    65,    45,
      46,   231,    47,    90,    91,    92,    93,    95,    94,    96,
      83,   304,     0,     0,   119,   307,     0,     0,    62,    89,
       0,     0,     0,   305,    95,   126,    96,    90,    91,    92,
      93,   306,    94,    89,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,     0,    94,     0,    95,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,    96,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   195,
     196,     0,   198,   199,   200,     0,   208,   203,   204,   205,
     206,   207,     0,     0,     0,     0,     0,     0,     0,     0,
     208
};

static const yytype_int16 yycheck[] =
{
      80,    97,   110,   111,    19,   113,    19,     6,     7,     4,
     131,     6,     7,     4,    10,     4,     3,    97,    25,    26,
      27,    28,    29,    45,     3,    47,    45,   135,    15,   137,
     110,   111,     3,   113,     6,     7,     3,   133,   134,     3,
     136,    56,    55,   123,     4,    36,    45,    36,     3,    56,
      45,    15,    51,   133,   134,   135,   136,   137,   121,   122,
     181,   124,   125,   126,    43,    42,   129,    44,   131,   132,
      49,    35,    43,    45,    53,   171,    36,   173,    49,    43,
      35,   144,    53,    54,     0,    49,     7,     8,    43,    53,
     153,   171,   121,   173,    49,   124,   125,   126,    53,    25,
      26,    27,   131,   132,    25,     3,    42,     4,    44,     6,
       7,    41,    53,   176,    55,    53,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      56,    53,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,    50,   176,    45,    46,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    54,    55,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
      53,   289,   290,     1,     6,     7,    54,     3,    56,    53,
      10,     5,     6,     7,    52,     6,     7,   305,    16,     6,
       7,     5,     6,     7,   300,   301,    26,    54,    28,   289,
     290,    50,   308,   133,   134,     8,   136,     6,     7,    35,
     300,   301,    40,    45,    44,   305,    52,    43,   308,    53,
      48,    49,    54,    49,    45,    53,   299,    53,    45,    63,
      64,    45,    82,    54,    84,    63,    64,    54,     5,     6,
       7,   171,    70,   173,    54,    55,    45,     5,     6,     7,
      48,    79,    25,    26,    27,    28,    29,     6,     7,    87,
     299,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    25,    26,    27,     8,    45,    48,
      49,    36,    38,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    45,    50,    48,    53,
      56,    57,    48,    50,    38,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    55,    36,
      53,    53,    36,    57,    53,    53,    38,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       3,    52,    54,     3,    56,     3,    17,    18,    38,    20,
      21,    22,     3,    37,    25,    26,    27,    28,    29,     3,
      11,    12,    13,    14,    55,    16,    56,    38,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    32,    54,    34,    51,    56,    56,    53,    39,    38,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    53,    37,    54,    37,    37,    54,    33,
      30,    38,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    54,    54,    54,    51,    51,
      37,    37,    51,    38,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    22,     3,    54,
      54,     7,     8,    52,    10,    38,    11,    12,    13,    14,
      51,    16,    51,    60,     7,     3,    16,    18,    50,    25,
      26,    54,    28,    11,    12,    13,    14,    32,    16,    34,
      70,   299,    -1,    -1,    87,    40,    -1,    -1,    44,     3,
      -1,    -1,    -1,    31,    32,     9,    34,    11,    12,    13,
      14,    39,    16,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    -1,    16,    -1,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    17,
      18,    -1,    20,    21,    22,    -1,    38,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     6,     7,    45,    46,    59,    60,    65,    73,
      78,    79,    98,     5,     6,    45,    66,    67,    73,    10,
       3,    45,    61,    62,     0,    65,    78,    98,    78,    98,
       3,    79,    98,    41,    68,    69,     5,    67,    68,    53,
      53,    50,    47,    62,    78,    98,    98,    98,    53,    53,
      52,    54,    45,    70,    71,    72,    73,     6,     7,    45,
      63,    64,    98,    70,    70,    69,    50,     8,    54,    71,
      52,     8,    48,    48,    48,    51,    64,    54,    54,     4,
      36,    74,    50,    72,    50,     5,    73,    75,    76,     3,
      11,    12,    13,    14,    16,    32,    34,    80,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      36,    36,    74,    36,    74,    42,    44,    77,     5,    76,
      55,    53,    53,    53,    53,    53,     9,    81,    82,    19,
      55,    19,    56,    80,    80,    36,    80,    36,    52,     3,
       3,    35,    43,    49,    53,    92,    93,    94,    95,     3,
      93,     3,    92,    53,    93,    95,    95,    93,    95,    37,
      15,    93,     3,    15,    93,    94,    95,    93,    95,    81,
      81,    80,    81,    80,    42,    44,    53,    35,    95,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    38,    54,    54,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    38,    54,
      54,    54,    54,    54,    54,    51,    53,    53,    57,    57,
      37,    37,    81,    37,    81,    54,    93,    95,    96,    97,
      54,    54,    93,    95,    93,    95,    93,    94,    95,    93,
      95,    93,    95,    93,    95,    93,    95,    93,    95,    93,
      95,    93,    95,    93,    95,    93,    95,    93,    95,    93,
      95,    93,    95,    93,    95,    93,    95,    93,    95,    93,
      95,    93,    95,    93,    95,    93,    95,    93,    95,    93,
      95,    93,    95,    93,    95,    93,    95,    93,    95,    33,
      30,    54,    54,    51,    51,    37,    51,    37,    54,    52,
      80,    80,    51,    51,    96,    31,    39,    40,    80,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      60,    61,    61,    62,    63,    63,    64,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    72,    73,    73,    74,    74,    75,
      75,    76,    77,    77,    77,    77,    78,    78,    79,    79,
      79,    79,    80,    80,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    84,    85,    86,
      86,    86,    87,    87,    87,    87,    88,    89,    90,    90,
      91,    91,    92,    92,    93,    93,    93,    94,    94,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    96,    96,    97,    97,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     4,     3,     2,     2,     3,
       3,     2,     1,     4,     2,     1,     2,     2,     2,     3,
       2,     2,     1,     2,     2,     3,     1,     1,     4,     2,
       1,     3,     1,     2,     2,     1,     1,     3,     2,     2,
       1,     2,     3,     1,     3,     1,     2,     1,    12,    11,
      12,    11,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     9,     7,     7,     4,     4,
       4,     4,     3,     3,     3,     3,     1,     1,     5,     5,
       4,     4,     3,     3,     1,     4,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       1,     1,     3,     1,     1,     1,    11,    10
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
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 38 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 39 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 40 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 41 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 42 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 43 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 44 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 47 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[-1].n5);printf("JHY\n");}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 50 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) =(yyvsp[-1].n5);printf("LOI\n");}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 51 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[0].n5);printf("JJU\n");}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 54 "decl.y" /* yacc.c:1646  */
    {(yyval.n5) = (yyvsp[-3].n5); (yyvsp[-3].n5)->fields = (yyvsp[-1].n6);makeFNull();(yyvsp[-3].n5)->size = sz;sz =0;printf("AAE\n");}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[0].n6);printf("UYU\n");}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 58 "decl.y" /* yacc.c:1646  */
    {(yyval.n6) = (yyvsp[0].n6);printf("OOI\n");}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 61 "decl.y" /* yacc.c:1646  */
    {printf("QWWW\n");(yyval.n6) = (yyvsp[0].n6);struct TypeTable *temp = TLookup("int");(yyvsp[0].n6)->typet = temp;printf("rt::%s\n", (yyvsp[0].n6)->typet->name);printf("rta::%s\n", (yyvsp[0].n6)->name);}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 62 "decl.y" /* yacc.c:1646  */
    {printf("AAWS\n");(yyval.n6) = (yyvsp[0].n6);struct TypeTable *temp = TLookup("str");(yyvsp[0].n6)->typet = temp;}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 63 "decl.y" /* yacc.c:1646  */
    {printf("AOUT\n");(yyval.n6) = (yyvsp[0].n6);(yyvsp[0].n6)->typet = (yyvsp[-1].n5);}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 67 "decl.y" /* yacc.c:1646  */
    {   (yyval.no) =(yyvsp[-1].no);Display((yyvsp[-1].no));printf("SSD\n");
                                        }
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 69 "decl.y" /* yacc.c:1646  */
    {}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 72 "decl.y" /* yacc.c:1646  */
    {(yyval.no) =(yyvsp[-1].no);printf("nnu\n");}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 73 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);printf("RFB\n");}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 75 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);printf("AQW1\n");}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 76 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);printf("AQ\n");(yyvsp[0].no)->typet = (yyvsp[-1].n5);printf("AQWw\n");}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 79 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-2].no);printf("vfa\n");}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 80 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);printf("11..a\n");}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 83 "decl.y" /* yacc.c:1646  */
    {(yyval.no) =(yyvsp[0].no);printf("lkj\n");}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 84 "decl.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-3].no);printf("lkjj\n"); (yyvsp[-3].no)->paramlist = (yyvsp[-1].n1);adrs--;}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 91 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[-2].n1);printf("AVD\n");}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 92 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);printf("JUH\n");}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 95 "decl.y" /* yacc.c:1646  */
    {(yyval.n1) = (yyvsp[0].n1);printf("AKU\n");}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 96 "decl.y" /* yacc.c:1646  */
    {printf("QDF\n");(yyval.n1) = (yyvsp[0].n1);(yyvsp[0].n1)->typet = (yyvsp[-1].n5);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 99 "decl.y" /* yacc.c:1646  */
    {}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 100 "decl.y" /* yacc.c:1646  */
    {}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 103 "decl.y" /* yacc.c:1646  */
    {(yyval.n3)= (yyvsp[-1].n3);}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 104 "decl.y" /* yacc.c:1646  */
    {}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 107 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 108 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) =(yyvsp[0].n3);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 111 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 114 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 115 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 116 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 117 "decl.y" /* yacc.c:1646  */
    {(yyval.n3) = (yyvsp[0].n3);}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 121 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[-1].n2);}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 122 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[0].n2);}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 125 "decl.y" /* yacc.c:1646  */
    {printf("aajh\n");
                                                                (yyval.n2) = (yyvsp[-10].n2);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyvsp[-10].n2)->Lentry);
                                                                makeLNull();
                                                                }
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 135 "decl.y" /* yacc.c:1646  */
    {printf("aajlh\n");
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                //DisplayL($2->Lentry);
                                                                makeLNull();
                                                                }
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 144 "decl.y" /* yacc.c:1646  */
    {printf("aajh\n");
                                                                (yyval.n2) = (yyvsp[-10].n2);
                                                                (yyval.n2)->Lentry = (yyvsp[-5].n3);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                DisplayL((yyvsp[-10].n2)->Lentry);
                                                                makeLNull();
                                                                }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 154 "decl.y" /* yacc.c:1646  */
    {printf("aajlh\n");
                                                                (yyval.n2) = (yyvsp[-9].n2);
                                                                (yyval.n2)->left = (yyvsp[-3].n2);
                                                                (yyval.n2)->right  = (yyvsp[-2].n2);
                                                                (yyval.n2)->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                //DisplayL($2->Lentry);
                                                                makeLNull();
                                                                }
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 167 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeConnectorNode((yyvsp[-1].n2), (yyvsp[0].n2), 0);}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 168 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 171 "decl.y" /* yacc.c:1646  */
    {        if((yyvsp[0].n2)->nodetype != rettype){
                                                      printf("Unmatching type error");
                                                      exit(-1);
                                                  }
                                                  (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);
                                          }
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 177 "decl.y" /* yacc.c:1646  */
    {if((yyvsp[0].n2)->nodetype != rettype){printf("Unmatching type error");exit(-1);}
                                            (yyval.n2) = makeOperationNode("return", (yyvsp[0].n2), 14);}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 183 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-6].n2), (yyvsp[-3].n2), (yyvsp[-1].n2), 6);}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 184 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 7);}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 187 "decl.y" /* yacc.c:1646  */
    {   (yyval.n2) = makeConditionalNode((yyvsp[-4].n2), (yyvsp[-1].n2), (yyvsp[-1].n2), 8);}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 191 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("read", (yyvsp[-1].n2), 1);}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 194 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 195 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 196 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperationNode("write", (yyvsp[-1].n2), 2);}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 199 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 200 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 201 "decl.y" /* yacc.c:1646  */
    { (yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 202 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);printf("AssQ\n");}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 205 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("break", 9);}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 208 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeUnconditionalNode("continue", 10);}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 211 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("alloc", (yyvsp[-4].n2), 18);printf("NBV\n");}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 212 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperationNode("alloc", (yyvsp[-4].n2), 18);printf("NBD\n");}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 215 "decl.y" /* yacc.c:1646  */
    {}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 216 "decl.y" /* yacc.c:1646  */
    {}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 219 "decl.y" /* yacc.c:1646  */
    {printf("AAqw\n");(yyval.n2) = (yyvsp[0].n2);(yyvsp[0].n2)->typet = (yyvsp[-2].n2)->typet;printf("ALKI\n");}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 220 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);(yyvsp[0].n2)->typet = (yyvsp[-2].n2)->typet;}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 223 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) =(yyvsp[0].n2);printf("..%s\n", (yyvsp[0].n2)->varname);}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 224 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 225 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeArrayNode((yyvsp[-3].n2)->varname, (yyvsp[-1].n2) , 12);}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 228 "decl.y" /* yacc.c:1646  */
    {}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 229 "decl.y" /* yacc.c:1646  */
    {}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 232 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 233 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 234 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 235 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 236 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 237 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 238 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-1].n2);}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 239 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 240 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 241 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 242 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 243 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 244 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 245 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 246 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 247 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 248 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 249 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 250 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 251 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 252 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 253 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 254 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 255 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 256 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 257 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 258 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 259 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 260 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 261 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 262 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 263 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 264 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 265 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 266 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 267 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 268 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 269 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 270 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 271 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 272 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 273 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 274 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 275 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 276 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("+", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 277 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("-", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 278 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("*", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 279 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("%", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 280 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("/", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 281 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 282 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("<", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 283 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode(">", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 284 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("L", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 285 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("O", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 286 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("A", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 287 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("G", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 288 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("N", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 289 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("E", (yyvsp[-2].n2), (yyvsp[0].n2), 16);}
#line 2426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 290 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeOperatorNode("=", (yyvsp[-2].n2), (yyvsp[0].n2), 3);}
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 291 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = makeFuncCallNode((yyvsp[-2].n2), NULL, 15);}
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 292 "decl.y" /* yacc.c:1646  */
    {check((yyvsp[-3].n2)->Gentry->paramlist, (yyvsp[-1].n4));(yyval.n2) = makeFuncCallNode((yyvsp[-3].n2), (yyvsp[-1].n4), 15);makeANull();}
#line 2444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 293 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);printf("AAQI\n");}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 294 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[0].n2);}
#line 2456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 297 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[-2].n4);}
#line 2462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 298 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = (yyvsp[0].n4);}
#line 2468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 301 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 2474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 302 "decl.y" /* yacc.c:1646  */
    {(yyval.n4) = CreateArg((yyvsp[0].n2));}
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 306 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-9].n2); 
                                                                          (yyval.n2)->Lentry = (yyvsp[-5].n3); 
                                                                          (yyval.n2)->left = (yyvsp[-3].n2);
                                                                          (yyval.n2)->right = (yyvsp[-2].n2);
                                                                          printf("Main Created\n");
                                                                          DisplayL((yyval.n2)->Lentry);
                                                                          }
#line 2492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 313 "decl.y" /* yacc.c:1646  */
    {(yyval.n2) = (yyvsp[-8].n2); 
                                                                          (yyval.n2)->left = (yyvsp[-3].n2);
                                                                          (yyval.n2)->right = (yyvsp[-2].n2);
                                                                          printf("Main Created\n");
                                                                          }
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2506 "y.tab.c" /* yacc.c:1646  */
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
#line 320 "decl.y" /* yacc.c:1906  */


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
