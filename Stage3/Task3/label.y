%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "array.c"
	int yylex(void);
%}

%token END

%%

start:END	{		
					FILE *fptr = fopen("a.c", "w");
    				fprintf(fptr,"int aa[1000] = {");
					int i =0;
					while(ar[i] != 0 && i < 20)
					{
						fprintf(fptr, "%d", ar[i]);
						i++;
						if(ar[i] != 0)
						{
						fprintf(fptr, ",");
						}
					}
					fprintf(fptr, "};");
					printf("Completed\n");exit(1);}
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

