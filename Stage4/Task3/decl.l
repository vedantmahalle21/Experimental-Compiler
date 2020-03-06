%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"
	#include "decl.h"
	int number;
	int flag =0;
	int flag1 = 0;
	int f1 =0;int f2 =0; 

%}

%%

"begin"     {return BEG;}
"end"		{return END;}
"decl"		{f1 =1;return DECL;}
"enddecl"	{f1 =0;return ENDDECL;}
"int"		{flag =1;flag1 =1;return INT;}
"str"		{flag =1;flag1 =2;return STR;}
"then"		{return THEN;}
"else"		{return ELSE;}
"endif"		{return ENDIF;}
"while"		{return WHILE;}
"do"		{return DO;}
"endwhile"	{return ENDWHILE;}
"read"		{return READ;}
"write"		{return WRITE;}
"if"		{return IF;}
\".*\"     {char* name3 = yytext; yylval.n1 = makeLeafNodeStr(name3, 11); return STRING;}			
[a-zA-Z][a-zA-Z0-9]*	{  if(flag == 1)
							{	
								char* name1 = yytext;
								//printf("%s\n", name1);
								struct Gsymbol* temp1 = Lookup(name1);
								if(temp1 == NULL){
								if(flag1 == 1)
								{ 
									newVariable(name1, 1);
									//printf("int\n");
									return ID;
								}
								else if(flag1 == 2)
								{
									newVariable(name1, 2);
									//printf("str\n");
									return ID;
								}}
								else{
									printf("Dec error\n");
									exit(-1);
								}
							}
							else{
								char* name2 = yytext;
								//printf("%s\n", name2);
								struct Gsymbol* temp1 = Lookup(name2);
								if(temp1 != NULL)
								{
									yylval.n1 = makeLeafNodeVar(name2, temp1, 5);
									return ID;
								}
								else
								{
									printf("Undeclared Variable\n");
								}
							}
						}
[a-zA-Z][a-zA-Z0-9]*"["[0-9]+"]"	{ if(f1 ==1){if(flag == 1)
							{	
								char* name = yytext;
								char* name2 = strchr(name, '[');
								char* name3 = strchr(name, ']');
								char* name1 = malloc(sizeof(char*));
								char* num1;
								int loc = (int)(name2 - name);
								int loc1 = (int)(name3 - name);
								strncpy(name1, name, loc);
								strncpy(num1, name+loc+1, loc1-1);
								int num = atoi(num1);
								struct Gsymbol* temp1 = Lookup(name1);
								if(temp1 == NULL){
								if(flag1 == 1)
								{ 
									newVariableArr(name1, num, 1);
									return ARR;
								}
								else if(flag1 == 2)
								{
									newVariableArr(name1, num, 2);
									return ARR;
								}}
								else{
									printf("Dec error\n");
									exit(-1);
								}
							}
						}
						else{
							char* name = yytext;
							//printf("A\n");
								char* name2 = strchr(name, '[');
								char* name3 = strchr(name, ']');
								char* name1 = malloc(sizeof(char*));
								char* num1 = malloc(sizeof(char*));
								//printf("A\n");
								int loc = (int)(name2 - name);
								int loc1 = (int)(name3 - name);
								strncpy(name1, name, loc);
								strncpy(num1, name+loc+1, loc1-1);
								//printf("A\n");
								int num = atoi(num1);
								//printf("A\n");
								struct Gsymbol* temp1 = Lookup(name1);
								if(temp1 != NULL){
									//printf("A\n");
									yylval.n1 = makeArrayNode(name1 ,makeLeafNodeInt(num, 4) , 12);
									return ID;
								}
								else{
									printf("Undeclared Variable\n");
									exit(1);
								}			
						}
						}
"["						{if(f1 == 0){return *yytext;}}
"]"						{if(f1 == 0){return *yytext;}}
[;]						{ flag1 = 0; flag = 0; }
[,]						{return *yytext;}
[" "]					{}
["\n"]					{}
["\t"]					{}
"+"         {return PLUS;}
"-"         {return MINUS;}
"*"         {return MUL;}
"%"			{return MOD;}
"/"         {return DIV;}
"="			{return EQT;}
">"			{return GT;}
"<"			{return LT;}
"=="		{return EQ;}
"!="		{return NE;}
">="		{return GE;}
"<="		{return LE;}
[0-9]+ 		{number = atoi(yytext); yylval.n1 = makeLeafNodeInt(number, 4); return ID;}
[()]        {return *yytext;}
.           {yyerror("unknown character\n");exit(1);}



%%


int yywrap(void){
    return 1;
}