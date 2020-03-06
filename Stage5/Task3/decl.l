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
	int flag3 = 0;
	int flag4 = 0;
	int f1 =0;int f2 =0;int f3 =0;int f4 = 0;int f5 = 0;int f6 =0;int f7 =0;
	struct Paramstruct *temp_param = NULL;
	int rettype =0;

%}

%%

"decl"								{if(flag3 == 0){f1 =1;}else{f5 = 1;}return DECL;}
"enddecl"							{if(flag3 == 0){f1 =0;}else{f5 = 0;}return ENDDECL;}
"begin"								{f7 = 1;return BEG;}
"end"								{f7 = 0;return END;}
"main"								{yylval.n2 = makeFuncNode("main", 1, NULL, 13);rettype = 1;return MAIN;}
"return"							{return RETURN;}
"then"								{return THEN;}
"else"								{return ELSE;}
"endif"								{return ENDIF;}
"while"								{return WHILE;}
"do"								{return DO;}
"endwhile"							{return ENDWHILE;}
"read"								{return READ;}
"write"								{return WRITE;}
"if"								{return IF;}
\".*\"     							{char* name = yytext; yylval.n2 = makeLeafNodeStr(name, 11); return STRING;}
"int"								{printf("int\n");if(f2 ==1){f3 = 1; flag2 = 1; return INT;}else if(f1 == 0){flag3 = 1;flag4 = 1;if(f4 ==0){flag =1;flag4 = 1;}return INT;}else if(f2 == 0){flag =1;flag1 =1;return INT;}}
"str"								{printf("str\n");if(f2 ==1){f3 = 1; flag2 = 2; return STR;}else if(f1 == 0){flag3 = 1;flag4 = 2;if(f4 ==0){flag =1;flag4 = 2;}return STR;}else if(f2 == 0){flag =1;flag1 =2;return STR;}}
[a-zA-Z][a-zA-Z0-9]*"["[0-9]+"]"	{ 	if(f1 ==1){
											if(flag == 1){	
												char* name = yytext;
												char* name2 = strchr(name, '[');
												char* name3 = strchr(name, ']');
												char* name1 = malloc(sizeof(char*));
												char* num1 = malloc(sizeof(char*));
												int loc = (int)(name2 - name);
												int loc1 = (int)(name3 - name);
												strncpy(name1, name, loc);
												strncpy(num1, name+loc+1, loc1-1);
												int num = atoi(num1);
												struct Gsymbol* temp1 = Lookup(name1);
												if(temp1 == NULL){
													if(flag1 == 1){ 
														yylval.no = newVariableArr(name1, num, 1);
														return ID1;
													}
													else if(flag1 == 2){
														yylval.no = newVariableArr(name1, num, 2);
														return ID1;
													}
												}
												else{
													printf("Dec error7\n");
													exit(-1);
												}
											}
										}
										else if(f7 == 1){
												char* name = yytext;
												char* name2 = strchr(name, '[');
												char* name3 = strchr(name, ']');
												char* name1 = malloc(sizeof(char*));
												char* num1 = malloc(sizeof(char*));
												int loc = (int)(name2 - name);
												int loc1 = (int)(name3 - name);
												strncpy(name1, name, loc);
												strncpy(num1, name+loc+1, loc1-1);
												int num = atoi(num1);
												struct Lsymbol* temp1 = LookupLocal(name1);
												struct Gsymbol* temp2 = Lookup(name1);
												if(temp1 != NULL){
													yylval.n2 = makeArrayNode(name1, makeLeafNodeInt(num, 4), 12);
													return ID;
												}
												else if(temp2 != NULL){
													yylval.n2 = makeArrayNode(name1, makeLeafNodeInt(num, 4), 12);
													return ID;
												}
												else{
													printf("UnDec error6\n");
													exit(-1);
												}
										}
										else{
											if(flag == 1){	
												char* name = yytext;
												char* name2 = strchr(name, '[');
												char* name3 = strchr(name, ']');
												char* name1 = malloc(sizeof(char*));
												char* num1 = malloc(sizeof(char*));
												int loc = (int)(name2 - name);
												int loc1 = (int)(name3 - name);
												strncpy(name1, name, loc);
												strncpy(num1, name+loc+1, loc1-1);
												int num = atoi(num1);
												struct Lsymbol* temp1 = LookupLocal(name1);
												if(temp1 == NULL){
													if(flag4 == 1){ 
														yylval.n3 = newLVariableArr(name1, num, 1);
														return AID3;
													}
													else if(flag4 == 2){
														yylval.n3 = newLVariableArr(name1, num, 2);
														return AID3;
													}
												}
												else{
													printf("Dec error6\n");
													exit(-1);
												}
											}
										}
									}
[a-zA-Z][a-zA-Z0-9]*				{   if(f3 == 1){
											char* name1 = yytext;
											struct Paramstruct* param = LookupParam(name1, head1);
											if(param == NULL){
												if(flag2 == 1){ 
													yylval.n1 = newParam(name1, 1);
													return PARAM;
												}
												else if(flag2 == 2){
													yylval.n1 = newParam(name1, 2);
													return PARAM;
												}
											f3 =0;
											}
										}
										else if(f5 == 1){
											char* name1 = yytext;
											struct Lsymbol *temp = LookupLocal(name1);
											if(temp == NULL){
												if(flag4 == 1)
												{
													yylval.n3 = newLVariable(name1, 1);
													return ID3;
												}
												else if(flag4 == 2)
												{
													yylval.n3 = newLVariable(name1, 2);
													return ID3;
												}
											}
											else{
												printf("Dec error5\n");
												exit(-1);
											}
										}
										else if(f4 == 1){
											char* name1 = yytext;
											struct Paramstruct* param = LookupParam(name1, temp_param);
											if(param == NULL){
												printf("error\n");
												exit(-1);
											}
											else{
												struct Lsymbol *temp = LookupLocal(name1);
												if(temp == NULL){
													if(flag4 == 1){ 
														newLVariableG(name1, 1);
														yylval.n1 = param;
														return PARAM;
														
													}
													else if(flag4 == 2){
														newLVariableG(name1, 2);
														yylval.n1 = param;
														return PARAM;
														
													}
												}
												else{
													printf("Dec error4\n");
													exit(-1);
												}
											}
										}
										else if(f7 == 1){
											char* name1 = yytext;
											struct Lsymbol* temp2 = LookupLocal(name1);
											if(temp2 != NULL){
												yylval.n2 = makeLeafNodeVarL(name1, temp2, 5);
												return ID;
											}
											struct Gsymbol* temp1 = Lookup(name1);
											if(temp1 != NULL){
												if(temp1->type  == 15){
													yylval.n2 = makeLeafNodeVarG(name1, temp1, 13);
													return ID;
												}
												else{
													yylval.n2 = makeLeafNodeVarG(name1, temp1, 5);
													return ID;
												}
											}
											else{
												printf("Dec error3\n");
												exit(-1);
											}
										}
										else if(f3 ==0){
											if(flag3 == 1){
												char* name1 = yytext;
												struct Gsymbol* temp1 = Lookup(name1);
												if(temp1 != NULL){
													rettype = temp1->type;
													temp_param = temp1->paramlist;
													if(flag4 == 1){
														yylval.n2 = makeFuncNode(name1,1,temp1, 13);
														return ID;
													}
													else{
														yylval.n2 = makeFuncNode(name1,2,temp1, 13);
														return ID;
													}
												}
												else{
													printf("Dec error2\n");
													exit(-1);
												}
											}
											else{	
												char* name1 = yytext;
												struct Gsymbol* temp1 = Lookup(name1);
												if(temp1 == NULL){
													if(flag1 == 1)
													{ 
														yylval.no = newVariable(name1, 1);
														return ID1;
													}
													else if(flag1 == 2)
													{
														yylval.no = newVariable(name1, 2);
														return ID1;
													}
												}
												else{
													printf("Dec error1\n");
													exit(-1);
												}
											}
										}
									}
"["									{if(f1 == 0){return *yytext;}}
"]"									{if(f1 == 0){return *yytext;}}
[(]									{if(flag3 ==0){f2 = 1;}else if(f5 == 0 && f7 ==0){f4 = 1;}return *yytext;}
[)]									{if(flag3 ==0){f2 = 0;f3 =0;}else if(f5 == 0 && f7 ==0){f4 = 0;}makeNull();return *yytext;}
[;]									{flag1 = 0; flag = 0;f3= 0; f2 = 0; }
[,]									{return *yytext;}
[" "]								{}
["\n"]								{}
["\t"]								{}
"+"         						{return PLUS;}
"-"         						{return MINUS;}
"*"         						{return MUL;}
"%"									{return MOD;}
"/"         						{return DIV;}
"="									{return EQT;}
">"									{return GT;}
"<"									{return LT;}
"=="								{return EQ;}
"!="								{return NE;}
">="								{return GE;}
"<="								{return LE;}
"||" 								{return OR;}
"&&" 								{return AND;}
[0-9]+ 								{number = atoi(yytext); yylval.n2 = makeLeafNodeInt(number, 4); return ID;}
[{]									{return *yytext;}
[}]									{flag3 = 0;return *yytext;}
.           						{yyerror("unknown character\n");exit(1);}


%%


int yywrap(void){
    return 1;
}