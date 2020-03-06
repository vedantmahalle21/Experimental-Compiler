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
[0-9]+      {number = atoi(yytext); yylval.no = makeLeafNodeInt(number, 4); return E;}
"+"         {return PLUS;}
"-"         {return MINUS;}
"*"         {return MUL;}
"/"         {return DIV;}
"="			{return EQT;}
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
