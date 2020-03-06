%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"
	#include "decl.h"
	char* name;
	int flag =0;
	int flag1 = 0; 

%}

%%

"decl"		{return DECL;}
"enddecl"	{return ENDDECL;}
"int"		{flag =1;flag1 =1;return INT;}
"str"		{flag =1;flag1 =2;return STR;}
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
						}

[;]						{ flag1 = 0; flag = 0; }
[,]						{return *yytext;}
[" "]					{}
["\n"]					{}
["\t"]					{}

%%


int yywrap(void){
    return 1;
}
