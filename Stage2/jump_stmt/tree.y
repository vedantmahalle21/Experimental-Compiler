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
										FILE *fptr = fopen("tree.xsm", "w");
                        				fprintf(fptr, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
                        				fprintf(fptr, "MOV SP,%d\n", 4122);
                        				int k = CodeGen($2, fptr);
										printf("DONE\n"); exit(1);}
	   | BEG END						{ $$ = $2; exit(1);}
	   ;

Ifstmt : IF '(' E ')' then Slist Else Slist ENDIF	{	$$ = makeConnectorNode($3, $6, $8, )
												flag = 1;}	
       | IF '(' E ')' then Slist ENDIF
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
        |E < E 							{$$ = makeOperatorNode("<", $1, $3, 6);}
        | E > E 						{$$ = makeOperatorNode(">", $1, $3, 6);}
        | E <= E 						{$$ = makeOperatorNode("<=", $1, $3, 6);} 
        | E >= E 						{$$ = makeOperatorNode(">=", $1, $3, 6);}
        | E != E 						{$$ = makeOperatorNode("!=", $1, $3, 6);}
        | E == E 						{$$ = makeOperatorNode("==", $1, $3, 6);}
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

