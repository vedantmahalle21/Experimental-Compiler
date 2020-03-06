%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "a.c"
	#include "a.h"
	int f1 = 0; 
	int f2 = 0;
	int f3 = 0;
	int f4 = 0;
	int arr = 2040; 
	

%}
num [0-9]

%%
"\n"					{if(f4 == 0){printf("%s", yytext);}}
"J"							{f2 = 1; printf("%s", yytext);f4 =0;}
"C"							{if(f2 == 1){f1 = 1;}else{f3 =1;}f4 =0;}
{num}					{
						if(f2 == 1 && f1 == 1)
						{
							f2 =0; f1 =0;
							int b = atoi(yytext);
							printf("%d",aa[b]);
							f4 =0;
						}
						else if(f3 ==1){f3 =0; f4 =1;}
						else{printf("%s", yytext);f4 =0;}
					}
[:]					{}
.						{printf("%s", yytext);f4 =0;}
<<EOF>>					{return END;}

%%

int yywrap(void){
    return 1;
}
