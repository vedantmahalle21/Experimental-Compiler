%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "tree.c"
	int f1 =0; int f2 =0;int f3 = 0;
	int arr = 2040; 

%}
num [0-9]

%%
"\n"					{printf("%s", yytext);
							arr = arr+2;printf("%d", arr);}
"J"							{f2 = 1; printf("%s", yytext);}
"L"							{if(f2 == 1){f1 = 1;printf("%s",yytext);}else{f3 =1;printf("%s", yytext);}}
{num}					{printf("%s", yytext);
						if(f2 == 1 && f1 == 1)
						{
							f2 =0; f1 =0;
						//printf("\n%d\n",f2);
						}
						else if(f3 == 1){int b = atoi(yytext);ar[b] = arr;arr = arr-2; 
						f3 =0;}
					}
.						{printf("%s", yytext);}
<<EOF>>					{printf("%d", ar[3]);return END;}

%%

int yywrap(void){
    return 1;
}
