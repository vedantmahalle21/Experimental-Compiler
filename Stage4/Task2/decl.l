%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"
	#include "decl.h"
	int number;
	int flag =0;
	int flag1 = 0; 

%}


%%

"begin"     {return BEG;}
"end"		{return END;}
"decl"		{return DECL;}
"enddecl"	{return ENDDECL;}
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
[a-zA-Z][a-zA-Z0-9]*	{	 if(flag == 1)
							{	
								char* name1 = yytext;
								struct Gsymbol* temp1 = Lookup(name1);
								if(temp1 == NULL){
								if(flag1 == 1)
								{ 
									newVariable(name1, 1);
									return ID;
								}
								else if(flag1 == 2)
								{
									newVariable(name1, 2);
									return ID;
								}}
								else{
									printf("Dec error\n");
									exit(-1);
								}
							}
							else{
								char* name2 = yytext;
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
[;]						{ flag1 = 0; flag = 0; }
[,]						{return *yytext;}
[" "]					{}
["\n"]					{}
["\t"]					{}
"+"         {return PLUS;}
"-"         {return MINUS;}
"*"         {return MUL;}
"/"         {return DIV;}
"="			{printf("AA\n");return EQT;}
">"			{return GT;}
"<"			{return LT;}
"=="		{return EQ;}
"!="		{return NE;}
">="		{return GE;}
"<="		{return LE;}
[0-9]+      {number = atoi(yytext); yylval.n1 = makeLeafNodeInt(number, 4); return E;}
[()]        {return *yytext;}
.           {yyerror("unknown character\n");exit(1);}



%%


int yywrap(void){
    return 1;
}