/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 11 "decl.y" /* yacc.c:1909  */

	struct Gsymbol *no;
	struct Paramstruct *n1;
    struct ASTNode *n2;
    struct Lsymbol *n3;
    struct ArgStruct *n4;

#line 150 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
