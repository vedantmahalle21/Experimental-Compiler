%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "array.c"
	int f1 = 0; 
	int f2 = 0;
	int f3 = 0;
	int f4 = 0;
	int f5 = 0;
	int f6 = 0;
	int f7 = 0;
	int arr = 2040;


%}

num [0-9]

%%
"\n"						{printf("%s", yytext);arr = arr+2;printf("%d ", arr);f5 = 0;}
"JMP"						{f2 = 1; printf("%s", yytext);}
"JZ"						{f2 = 1; printf("%s", yytext);}
"JNZ"						{f2 = 1; printf("%s", yytext);}
"CALL"						{f5 = 1; printf("%s", yytext);}
"X"							{if(f2 == 1){f1 = 1;printf("%s",yytext);}else{f3 =1;printf("%s", yytext);}}
"Y"							{if(f5 == 1){f6 = 1;printf("%s",yytext);}else{f4 =1;printf("%s", yytext);}}
"MAIN"						{if(f2 == 1){printf("%s",yytext);f2 =0;}else{main_address  = arr;arr = arr-2;printf("%s", yytext);}}
	{num}					{	
								printf("%s", yytext);
								if(f2 == 1 && f1 == 1){
									f2 =0; 
									f1 =0;
								}
								if(f5 == 1 && f6 == 1){
									f5 =0; 
									f6 =0;
								}
								else if(f3 == 1){
									int b = atoi(yytext);
									ar[b] = arr;
									arr = arr-2; 
									f3 =0;
								}
								else if(f4 == 1){
									int b = atoi(yytext);
									printf("%d", arr);
									ar1[b] = arr;
									arr = arr-2; 
									f4 =0;
								}
							}
.							{printf("%s", yytext);}
<<EOF>>						{return END;}

%%

int yywrap(void){
    return 1;
}
