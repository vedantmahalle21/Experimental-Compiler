%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "tree.c"
	int yylex(void);
	int a = 2040;
	int labels[50];
	int flag = 0;
	int flag1 =0;

%}

%token END

%%

start:END	{printf("Com");}
%%

yyerror(char const *s)
{
    printf("yyerror %s", s);
}

int main(void){
    extern FILE *yyin;
    yyin = fopen("source.xsm", "r");
	yyparse();
    return 0;
}

