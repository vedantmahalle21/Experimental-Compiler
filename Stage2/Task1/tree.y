%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "tree.h"
	#include "tree.c"
	int yylex(void);
%}

%union{
	struct ASTNode *no;
}

%type <no> expr E program Slist stmt InputStmt OutputStmt AsgStmt ID END
%token E EQT PLUS BEG READ WRITE MINUS MUL DIV ID END
%left EQT
%left PLUS MINUS
%left MUL DIV

%%

program: BEG Slist END 				{ 	$$ = $2; 
										printf("DONE\n"); exit(1);}
	   | BEG END						{ $$ = $2; exit(1);}
	   ;

Slist: Slist stmt 						{ $$ = makeConnectorNode($1, $2, 0);}
	 | stmt 							{}
	 ;

stmt: InputStmt | OutputStmt | AsgStmt
	;

InputStmt: READ '(' expr ')'				{ $$ = makeOperationNode("read", $3, 1);}
		 ;

OutputStmt: WRITE '(' expr')'				{ $$ = makeOperationNode("write", $3, 2);}
		  ;

AsgStmt: expr EQT expr					{ $$ = makeOperatorNode("=", $1, $3, 3);}
	   ;

expr : expr PLUS expr       			{$$ = makeOperatorNode("+", $1, $3, 3);}
        | expr MINUS expr   			{$$ = makeOperatorNode("-", $1, $3, 3);}
        | expr MUL expr     			{$$ = makeOperatorNode("*", $1, $3, 3);}
        | expr DIV expr     			{$$ = makeOperatorNode("/", $1, $3, 3);}
        | '(' expr ')'      			{$$ = $2;}
        | E               				{$$ = $1;}
        | ID              				{$$ = $1;}
        ;

%%

yyerror(char const *s)
{
    printf("yyerror %s", s);
}

int main(void){
    extern FILE *yyin;
    yyin = fopen("source.txt", "r");
	yyparse();
    return 0;
}

