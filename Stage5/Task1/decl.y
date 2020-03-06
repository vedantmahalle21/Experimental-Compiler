
%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "decl.h"
	int yylex(void);
%}

%union{
	struct Gsymbol *no;
	struct Paramstruct *n1;
}
%type <n1> ParamList Param Plist PARAM
%type <no> GDeclBlock GDeclList GDecl GidList Type Gid ID
%token ID DECL ENDDECL INT STR PARAM
%%

GDeclBlock  : DECL GDeclList ENDDECL {$$ =$2;Display($2);exit(1);}
            | DECL ENDDECL            {exit(1);}
            ;

GDeclList   : GDeclList GDecl {$$ =$1;}
            | GDecl           {$$ = $1;}
            ;
GDecl : Type GidList    {$$ = $2;}
      ;

GidList : GidList ',' Gid       {$$ = $3;}
        | Gid                   {$$ = $1;}
        ;

Gid : ID                           {}       
    | ID '(' ParamList ')'         {$$ = $1; $1->paramlist = $3;}
    ; 

ParamList : ParamList Plist
          | Plist
          ;

Plist : Plist ',' Param     {$$ = $1;}
      | Param                   {$$ = $1;}
      ;

Param : Type PARAM         {$$ = $2;}
      ;

Type : INT  {} 
     | STR    {}
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