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
	int f1 =0;int f2 =0;int f3 =0;int f4 = 0;int f5 = 0;int f6 =0;int f7 =0;int f8 =0;
	int f9 =0;int f10 =0;int f11 =0; int f12 =0;
	int flag5 = 0;
	struct Paramstruct *temp_param = NULL;
	struct TypeTable *temp_table = NULL;
	struct TypeTable *temp_table1 = NULL;
	struct Gsymbol *temp_one = NULL;
	struct GLsymbol *temp_one1 = NULL;
	int rettype =0;

%}

%%

"decl"								{if(flag3 == 0){f1 =1;}else{f5 = 1;}return DECL;}
"enddecl"							{if(flag3 == 0){f1 =0;}else{f5 = 0;}return ENDDECL;}
"type"								{flag5 = 1; return TYPE;}
"endtype"							{flag5 = 0; return ENDTYPE;}
"begin"								{f7 = 1;return BEG;}
"end"								{f7 = 0;return END;}
"main"								{yylval.n2 = makeFuncNode("main", 1, NULL, 13);rettype = 1;return MAIN;}
"return"							{return RETURN;}
"null"								{yylval.n2 = makeNullVar();return NUL;}
"then"								{return THEN;}
"else"								{return ELSE;}
"endif"								{return ENDIF;}
"while"								{return WHILE;}
"do"								{return DO;}
"endwhile"							{return ENDWHILE;}
"read"								{return READ;}
"write"								{return WRITE;}
"if"								{return IF;}
"alloc"								{return ALLOC;}
"free"								{return FREE;}
"initialize"						{return INITIALIZE;}
\".*\"     							{char* name = yytext; yylval.n2 = makeLeafNodeStr(name, 11); return STRING;}
"int"								{printf("int\n");if(f8 ==1){f9 =1;return INT;}else if(f2 ==1){f3 = 1; flag2 = 1; return INT;}else if(f1 == 0){flag3 = 1;flag4 = 1;if(f4 ==0){flag =1;flag4 = 1;}return INT;}else if(f2 == 0){flag =1;flag1 =1;return INT;}}
"str"								{printf("str\n");if(f8 ==1){f9 =2;return STR;}else if(f2 ==1){f3 = 1; flag2 = 2; return STR;}else if(f1 == 0){flag3 = 1;flag4 = 2;if(f4 ==0){flag =1;flag4 = 2;}return STR;}else if(f2 == 0){flag =1;flag1 =2;return STR;}}
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
[a-zA-Z][a-zA-Z0-9]*				{   char* name1 = yytext;
										struct TypeTable *temp3 = TLookup(name1);
										if(temp3 != NULL){
											f11 = 1;
											yylval.n5 = temp3;
											if(f2 == 1){
												f3 = 1;
											}
											else if(f1 == 0){
												flag3 = 1;
											}
											temp_table1 = temp3;
											printf("%s\n", name1);
											return ID4;
										}
										if(flag5 == 1 && f8 == 0){
											char* name1 = yytext;
											struct TypeTable *temp = TLookup(name1);
											if(temp == NULL){
												yylval.n5 = newUserType(name1);
												f11 =0;
												return ID4;
											}
											else{
												printf("Dec error8\n");
												exit(-1);
											}
										}
										else if(flag5 == 1 && f8 == 1){
											char* name1 = yytext;
											if(f9 == 1){
												struct FieldList *temp1 = FLookup(name1);
												if(temp1 == NULL){
													struct TypeTable *temp2 = TLookup("int");
													yylval.n6 = newField(name1, temp2);
													return ID5;
												}
												else{
													printf("Dec error9\n");
													exit(-1);
												}
											}
											else if(f9 == 2){
												struct FieldList *temp1 = FLookup(name1);
												if(temp1 == NULL){
													struct TypeTable *temp2 = TLookup("str");
													yylval.n6 = newField(name1, temp2);
													return ID5;
												}
												else{
													printf("Dec error9\n");
													exit(-1);
												}
											}
											else{
												struct FieldList *temp = FLookup(name1);
												if(temp == NULL){
													yylval.n6 = newField(name1, temp_table1);
													f10 = 0;
													return ID5;
												}
												else{
													printf("Dec error9\n");
													exit(-1);
												}
											}											
										}
										else if(f3 == 1){
											char* name1 = yytext;
											struct Paramstruct* param = LookupParam(name1, head1);
											if(param == NULL){
												if(flag2 == 1){ 
													yylval.n1 = newParam(name1, 1);
													flag2 =0;
													return PARAM;
												}
												else if(flag2 == 2){
													yylval.n1 = newParam(name1, 2);
													flag2 =0;
													return PARAM;
												}
												else if(f11 == 1){
													yylval.n1 = newParam(name1, 3);
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
													yylval.n3 = newLVariable(name1,NULL, 1);
													return ID3;
												}
												else if(flag4 == 2)
												{
													yylval.n3 = newLVariable(name1,NULL, 2);
													return ID3;
												}
												else if(f11 == 1)
												{
													yylval.n3 = newLVariable(name1,temp_table1, 3);
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
													if(f11 == 1)
													{
														newLVariableG(name1, param->typet, 3);
														yylval.n1 = param;
														f11 = 0;
														return PARAM;
													}
													else if(flag4 == 1){ 
														newLVariableG(name1, NULL, 1);
														yylval.n1 = param;
														flag4 =0;
														return PARAM;
													}
													else if(flag4 == 2){
														newLVariableG(name1, NULL, 2);
														yylval.n1 = param;
														flag4 = 0;
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
											struct Lsymbol* temp2;
											struct Gsymbol* temp1;
											if(f12 == 0){
												printf("%s\n", yytext);
												temp2 = LookupLocal(name1);
												if(temp2 != NULL){
													if(temp2->type == 3){
														struct TypeTable *temp = temp2->typet;
														yylval.n2 = makeLeafNodeVarL(name1, temp2,temp,3, 19);
														temp_table = temp;
														printf("%s\n", temp_table->name);
														return ID;
													}
													else if(temp2->type == 1){
														yylval.n2 = makeLeafNodeVarL(name1, temp2,NULL,1, 5);
														return ID;
													}
													else if(temp2->type == 2){
														yylval.n2 = makeLeafNodeVarL(name1, temp2,NULL,2, 5);
														return ID;
													}
												}
												temp1 = Lookup(name1);
												if(temp1 != NULL){
													if(temp1->type  == 3){
														struct TypeTable *temp = temp1->typet;
														temp_table = temp;
														printf("%s\n", temp_table->name);
														yylval.n2 = makeLeafNodeVarG(name1, temp1,temp,3, 19);
														return ID;
													}
													else if(temp1->type == 1){
														yylval.n2 = makeLeafNodeVarG(name1, temp1,NULL,1, 5);
														return ID;
													}
													else if(temp1->type == 2){
														yylval.n2 = makeLeafNodeVarG(name1, temp1,NULL,2, 5);
														return ID;
													}
												}
												else{
													printf("Dec error3\n");
													exit(-1);
												}
											}
											else{
												printf("%s\n", name1);
												struct FieldList* temp3 = LookupF(temp_table, name1);
												if(temp3 != NULL){
													struct TypeTable *temp = temp3->typet;
													temp_table = temp;
													f12 =0;
													if(temp2 != NULL){
														if(temp->name == "int"){
															printf("%s\n", temp_table->name);
															yylval.n2 = makeLeafNodeVarL(name1, temp2,temp,1, 20);
															return ID;
														}
														else if(temp->name == "str"){
															printf("%s\n", temp_table->name);
															yylval.n2 = makeLeafNodeVarL(name1, temp2,temp,2, 20);
															return ID;
														}
														else{
															printf("%s\n", temp_table->name);
															yylval.n2 = makeLeafNodeVarL(name1, temp2,temp,3, 20);
															return ID;
														}
													}
													else{
														if(temp->name == "int"){
															printf("%s\n", temp_table->name);
															yylval.n2 = makeLeafNodeVarG(name1, temp1,temp,1, 20);
															return ID;
														}
														else if(temp->name == "str"){
															printf("%s\n", temp_table->name);
															yylval.n2 = makeLeafNodeVarG(name1, temp1,temp,2, 20);
															return ID;
														}
														else{
															printf("%s\n", temp_table->name);
															yylval.n2 = makeLeafNodeVarG(name1, temp1,temp,3, 20);
															return ID;
														}
													}
												}
												else{
													printf("Dec error31\n");
													exit(-1);
												}
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
													else if(flag4 == 2){
														yylval.n2 = makeFuncNode(name1,2,temp1, 13);
														return ID;
													}
													else if(f11 == 1){
														yylval.n2 = makeFuncNode(name1,3,temp1, 13);
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
														yylval.no = newVariable(name1,NULL, 1);
														return ID1;
													}
													else if(flag1 == 2)
													{
														yylval.no = newVariable(name1,NULL, 2);
														return ID1;
													}
													else if(f11 == 1)
													{
														yylval.no = newVariable(name1,temp_table1, 3);
														f11 = 0;
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
[;]									{flag1 = 0; flag = 0;f3= 0; f2 = 0; f11 =0;f9=0;flag4 =0;}
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
[{]									{if(flag5 == 1){f8 = 1;}return *yytext;}
[}]									{if(flag5 == 1){f8 = 0;}flag3 = 0;return *yytext;}
"."									{f12 =1;return *yytext;}
.           						{yyerror("unknown character\n");exit(1);}


%%


int yywrap(void){
    return 1;
}