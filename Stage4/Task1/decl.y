
%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "decl.h"
	#include "decl.c"
	int yylex(void);
%}

%union{
	struct Gsymbol *no;
}

%type<no>	Declarations DeclList Decl VarList Type
%token DECL ENDDECL INT STR ID

%%

Declarations : DECL DeclList ENDDECL 	{ 
											$$ =$2;
											Display($2);
											exit(1);
										}
			 | DECL ENDDECL				{ exit(1); }
			 ;

DeclList : DeclList Decl 					
		 | Decl
		 ;

Decl : Type VarList 
	 ;

Type : INT 								{}
	 | STR 								{}
	 ;

VarList : VarList ',' ID 
		| ID 							{}
		;

%%

yyerror(char const *s)
{
    printf("yyerror %s", s);
}

int main(void){
    extern FILE *yyin;
    yyin = fopen("input.txt", "r");
	yyparse();
    return 0;
}