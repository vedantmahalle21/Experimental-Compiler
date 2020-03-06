%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "tree.h"

	int number;
	char* var;

%}

%%

"begin"     {return BEG;}
"end"		{return END;}
"break"		{return	BREAK;}
"continue"	{return CONTINUE;}
"+"         {return PLUS;}
"-"         {return MINUS;}
"*"         {return MUL;}
"/"         {return DIV;}
"="			{return EQT;}
"if"		{return IF;}
">"			{return GT;}
"<"			{return LT;}
"=="		{return EQ;}
"!="		{return NE;}
">="		{return GE;}
"<="		{return LE;}
"then"		{return THEN;}
"else"		{return ELSE;}
"endif"		{return ENDIF;}
"while"		{return WHILE;}
"do"		{return DO;}
"endwhile"	{return ENDWHILE;}
[0-9]+      {number = atoi(yytext); yylval.no = makeLeafNodeInt(number, 4); return E;}
"read"		{return READ;}
"write"		{return WRITE;}
[a-z]		{var = yytext; yylval.no = makeLeafNodeVar(var, 5); return ID;}
[\t]        {}
[()]        {return *yytext;}
[\n]        {}
[ ]			{}
[;]			{}
.           {yyerror("unknown character\n");exit(1);}

%%

int yywrap(void){
    return 1;
}
