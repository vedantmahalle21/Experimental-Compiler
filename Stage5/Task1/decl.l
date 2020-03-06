%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"
	#include "decl.h"
	#include "decl.c"
	int number;
	int flag =0;
	int flag1 = 0;
	int flag2 = 0;
	int f1 =0;int f2 =0;int f3 =0;
	int pl =0; 

%}

%%

"decl"		{f1 =1;return DECL;}
"enddecl"	{f1 =0;return ENDDECL;}
"int"		{if(f2 ==1){f3 = 1; flag2 = 1; return INT;}else{flag =1;flag1 =1;return INT;}}
"str"		{if(f2 ==1){f3 = 1; flag2 = 2; return STR;}else{flag =1;flag1 =2;return STR;}}
[a-zA-Z][a-zA-Z0-9]*"["[0-9]+"]"	{ if(f1 ==1){if(flag == 1)
							{	
								char* name = yytext;
								char* name2 = strchr(name, '[');
								char* name3 = strchr(name, ']');
								char* name1 = malloc(sizeof(char*));
								char* num1 = malloc(sizeof(char*));
								int loc = (int)(name2 - name);
								int loc1 = (int)(name3 - name);
								strncpy(name1, name, loc);
								strncpy(num1, name, loc1-1);
								int num = atoi(num1);
								struct Gsymbol* temp1 = Lookup(name1);
								if(temp1 == NULL){
								if(flag1 == 1)
								{ 
									yylval.no = newVariableArr(name1, num, 1);
									return ID;
								}
								else if(flag1 == 2)
								{
									yylval.no = newVariableArr(name1, num, 2);
									return ID;
								}}
								else{
									printf("Dec error\n");
									exit(-1);
								}
							}
						}}
[a-zA-Z][a-zA-Z0-9]*	{  
							if(f3 == 1)
							{
								char* name1 = yytext;
								struct Paramstruct* param = LookupParam(name1);
									if(param == NULL){
									if(flag2 == 1)
									{ 
										yylval.n1 = newParam(name1, 1);
										return PARAM;
									}
									else if(flag2 == 2)
									{
										yylval.n1 = newParam(name1, 2);
										//printf("str\n");
										return PARAM;
									}
								}
								f3 =0;
								}
							else
							{	
								char* name1 = yytext;
								struct Gsymbol* temp1 = Lookup(name1);
								if(temp1 == NULL){
									if(flag1 == 1)
									{ 
										yylval.no = newVariable(name1, 1);
										return ID;
									}
									else if(flag1 == 2)
									{
										yylval.no = newVariable(name1, 2);
										return ID;
									}
								}
								else{
									printf("Dec error\n");
									exit(-1);
								}
							}
						}
"["						{if(f1 == 0){return *yytext;}}
"]"						{if(f1 == 0){return *yytext;}}
[(]					{f2 = 1;return *yytext;}
[)]						{f2 =0;makeNull();return *yytext;}
[;]						{flag1 = 0; flag = 0;f3= 0; f2 = 0; }
[,]						{return *yytext;}
[" "]					{}
["\n"]					{}
["\t"]					{}
.           {yyerror("unknown character\n");exit(1);}



%%


int yywrap(void){
    return 1;
}