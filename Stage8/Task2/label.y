%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "array.c"
	int yylex(void);
%}

%token END

%%

start:END	{		
					FILE *fptr = fopen("a.c", "a+");
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
					fprintf(fptr, "};\n");
					fprintf(fptr,"int aa1[1000] = {");
					i =0;
					while(ar1[i] != 0 && i < 20)
					{
						fprintf(fptr, "%d", ar1[i]);
						i++;
						if(ar1[i] != 0)
						{
						fprintf(fptr, ",");
						}
					}
					fprintf(fptr, "};\n");
					fprintf(fptr,"int m_a = ");
					fprintf(fptr, "%d;", main_address);
					printf("Completed\n");exit(1);}
%%

yyerror(char const *s)
{
    printf("yyerror %s", s);
}

int main(void){
    extern FILE *yyin;
    yyin = fopen("tree1.xsm", "r");
  	yyparse();

    return 0;
}

