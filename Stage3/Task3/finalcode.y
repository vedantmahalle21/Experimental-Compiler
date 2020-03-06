%{
	#include <stdlib.h>
	#include <stdio.h>
	int yylex(void);

%}

%token END

%%

start:END	{printf("\nCompleted\n");exit(1);}
%%

yyerror(char const *s)
{
    printf("yyerror %s", s);
}

int main(void){
    extern FILE *yyin;
    yyin = fopen("tree.xsm", "r");
	yyparse();
    return 0;
}

