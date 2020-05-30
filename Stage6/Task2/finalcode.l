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
	int f5 = 0;
	int f6 = 0;
	int f7 = 0;
	int arr = 2040; 
	

%}
num [0-9]

%%
"\n"					{if(f4 == 0){printf("%s", yytext);}f7 = 0;}
"JMP"							{f2 = 1; printf("%s", yytext);f4 =0;}
"JZ"							{f2 = 1; printf("%s", yytext);f4 =0;}
"JNZ"							{f2 = 1; printf("%s", yytext);f4 =0;}
"CALL"							{f7 = 1; printf("%s", yytext);f4 =0;}
"MAIN"							{if(f2 == 1){printf("%d", m_a);f2 = 0;}else{f4 =1;}}
"X"							{if(f2 == 1){f1 = 1;}else{f3 =1;}f4 =0;}
"Y"							{if(f7 == 1){f6 = 1;}else{f5 =1;}f4 =0;}

{num}					{
						if(f2 == 1 && f1 == 1)
						{
							f2 =0; f1 =0;
							int b = atoi(yytext);
							printf("%d",aa[b]);
							f4 =0;
						}
						else if(f7 == 1 && f6 == 1)
						{
							f7 =0; f6 =0;
							int b = atoi(yytext);
							printf("%d",aa1[b]);
							f4 =0;
						}
						else if(f3 ==1){f3 =0; f4 =1;}
						else if(f5 ==1){f5 =0; f4 =1;}
						else{printf("%s", yytext);f4 =0;}
					}
[:]					{}
.						{printf("%s", yytext);f4 =0;}
<<EOF>>					{return END;}

%%

int yywrap(void){
    return 1;
}
