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

%type <no> var expr E program Slist stmt InputStmt OutputStmt AsgStmt ID END Ifstmt Whilestmt BreakStmt ContinueStmt
%token E EQT PLUS BEG READ WRITE MINUS MUL DIV ID END IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE 
%left EQT
%left GT LT EQ NE GE LE
%left PLUS MINUS
%left MUL DIV


%%

program: BEG Slist END 				{ 	$$ = $2; printf("Tree Constructed\n"); 
                                        FILE *fptr = fopen("tree1.xsm", "w");
                                        fprintf(fptr, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
                                        fprintf(fptr, "MOV SP,%d\n", 4122);
                                        int k = CodeGen($2, fptr); 
                                        printf("DONE\n"); 
                                        exit(1);
                                    }
	   | BEG END						{ $$ = $2; exit(1);}
	   ;

Slist: Slist stmt 						{ $$ = makeConnectorNode($1, $2, 0);}
	 | stmt 							{ }
	 ;

stmt: InputStmt | OutputStmt | AsgStmt | Ifstmt | Whilestmt | BreakStmt | ContinueStmt
	;


Ifstmt : IF '(' expr ')' THEN Slist ELSE Slist ENDIF   {    $$ = makeConditionalNode($3, $6, $8, 6);}   
       | IF '(' expr ')' THEN Slist ENDIF              {   $$ = makeConditionalNode($3, $6, $6, 7);}
       ; 

Whilestmt : WHILE '(' expr ')' DO Slist ENDWHILE       {   $$ = makeConditionalNode($3, $6, $6, 8);}
          ;


InputStmt: READ '(' var ')'				{ $$ = makeOperationNode("read", $3, 1);}
		 ;

OutputStmt: WRITE '(' expr')'				{ $$ = makeOperationNode("write", $3, 2);}
		  ;

AsgStmt: var EQT expr					    { $$ = makeOperatorNode("=", $1, $3, 3);}
	   ;

BreakStmt:  BREAK                           {$$ = makeUnconditionalNode("break", 9);}
         ;

ContinueStmt:  CONTINUE                           {$$ = makeUnconditionalNode("continue", 10);}
         ;

var: ID                                     {}
   ;

expr : expr PLUS expr       			{$$ = makeOperatorNode("+", $1, $3, 3);}
        | expr MINUS expr   			{$$ = makeOperatorNode("-", $1, $3, 3);}
        | expr MUL expr     			{$$ = makeOperatorNode("*", $1, $3, 3);}
        | expr DIV expr     			{$$ = makeOperatorNode("/", $1, $3, 3);}
        | expr EQT expr                 {$$ = makeOperatorNode("=", $1, $3, 3);}
        | '(' expr ')'      			{$$ = $2;}
        | E               				{$$ = $1;}
        | expr LT expr 					{$$ = makeOperatorNode("<", $1, $3, 6);}
        | expr GT expr 					{$$ = makeOperatorNode(">", $1, $3, 6);}
        | expr LE expr 					{$$ = makeOperatorNode("L", $1, $3, 6);} 
        | expr GE expr					{$$ = makeOperatorNode("G", $1, $3, 6);}
        | expr NE expr					{$$ = makeOperatorNode("N", $1, $3, 6);}
        | expr EQ expr					{$$ = makeOperatorNode("E", $1, $3, 6);}
        | expr PLUS var                 {$$ = makeOperatorNode("+", $1, $3, 3);}
        | expr MINUS var                {$$ = makeOperatorNode("-", $1, $3, 3);}
        | expr MUL var                  {$$ = makeOperatorNode("*", $1, $3, 3);}
        | expr DIV var                  {$$ = makeOperatorNode("/", $1, $3, 3);}
        | '(' var ')'                   {$$ = $2;}
        | expr LT var                  {$$ = makeOperatorNode("<", $1, $3, 6);}
        | expr GT var                  {$$ = makeOperatorNode(">", $1, $3, 6);}
        | expr LE var                  {$$ = makeOperatorNode("L", $1, $3, 6);} 
        | expr GE var                  {$$ = makeOperatorNode("G", $1, $3, 6);}
        | expr NE var                  {$$ = makeOperatorNode("N", $1, $3, 6);}
        | expr EQ var                  {$$ = makeOperatorNode("E", $1, $3, 6);}
        | var PLUS expr                {$$ = makeOperatorNode("+", $1, $3, 3);}
        | var MINUS expr               {$$ = makeOperatorNode("-", $1, $3, 3);}
        | var MUL expr                 {$$ = makeOperatorNode("*", $1, $3, 3);}
        | var DIV expr                 {$$ = makeOperatorNode("/", $1, $3, 3);}
        | var LT expr                  {$$ = makeOperatorNode("<", $1, $3, 6);}
        | var GT expr                  {$$ = makeOperatorNode(">", $1, $3, 6);}
        | var LE expr                  {$$ = makeOperatorNode("L", $1, $3, 6);} 
        | var GE expr                  {$$ = makeOperatorNode("G", $1, $3, 6);}
        | var NE expr                  {$$ = makeOperatorNode("N", $1, $3, 6);}
        | var EQ expr                  {$$ = makeOperatorNode("E", $1, $3, 6);}
        | var EQT expr                 {$$ = makeOperatorNode("=", $1, $3, 3);}
        | var PLUS var                {$$ = makeOperatorNode("+", $1, $3, 3);}
        | var MINUS var               {$$ = makeOperatorNode("-", $1, $3, 3);}
        | var MUL var                 {$$ = makeOperatorNode("*", $1, $3, 3);}
        | var DIV var                 {$$ = makeOperatorNode("/", $1, $3, 3);}
        | var EQT var                 {$$ = makeOperatorNode("=", $1, $3, 3);}
        | var LT var                  {$$ = makeOperatorNode("<", $1, $3, 6);}
        | var GT var                  {$$ = makeOperatorNode(">", $1, $3, 6);}
        | var LE var                  {$$ = makeOperatorNode("L", $1, $3, 6);} 
        | var GE var                  {$$ = makeOperatorNode("G", $1, $3, 6);}
        | var NE var                  {$$ = makeOperatorNode("N", $1, $3, 6);}
        | var EQ var                  {$$ = makeOperatorNode("E", $1, $3, 6);}
        ;

%%

yyerror(char const *s)
{
    printf("yyerror %s", s);
}

int main(void){
    extern FILE *yyin;
    yyin = fopen("sum.txt", "r");
	yyparse();
    return 0;
}

