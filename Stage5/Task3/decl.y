
%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "decl.h"
	int yylex(void);
    int fl = 0;
    int i =0;
%}

%union{
	struct Gsymbol *no;
	struct Paramstruct *n1;
    struct ASTNode *n2;
    struct Lsymbol *n3;
    struct ArgStruct *n4;
}

%type <n4> ArgList Arg
%type <n3> LDeclBlock LDeclList LDecl ID3 IDList AID3
%type <n2> Program FDefBlock MainBlock ID FDefList Slist Stmt Retstmt InputStmt OutputStmt AsgStmt Ifstmt Whilestmt BreakStmt ContinueStmt AllocStmt FreeStmt expr var FIELD string MAIN E Type
%type <n1> ParamList Param Plist PARAM
%type <no> GDeclBlock GDeclList GDecl GidList Gid ID1
%token ID DECL ENDDECL INT STR PARAM RETURN MAIN WRITE READ BREAK CONTINUE ALLOC FREE LT GT EQT LE GE NE AND OR MOD MUL DIV PLUS MINUS DO ELSE IF THEN WHILE STRING BEG END EQ ENDIF ENDWHILE ID1 ID3 E AID3
%left EQT AND OR 
%left GT LT EQ NE GE LE
%left PLUS MINUS
%left MUL DIV MOD

%%

Program : GDeclBlock FDefBlock MainBlock        {$$ = $3;}
        | GDeclBlock MainBlock                  {$$ = $2;}
        | MainBlock                             {$$ = $1;}
        ;

GDeclBlock  : DECL GDeclList ENDDECL    {   $$ =$2;Display($2);
                                            FILE *fptr = fopen("tree1.xsm", "w");
                                            fprintf(fptr, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
                                            //fprintf(fptr, "BRKP\n");
                                            fprintf(fptr, "MOV SP,%d\n", adrs++);
                                            fprintf(fptr, "JMP MAIN\n");
                                            fclose(fptr);
                                        }
            | DECL ENDDECL                                {}
            ;

GDeclList   : GDeclList GDecl {$$ =$1;}
            | GDecl           {$$ = $1;}
            ;
GDecl : Type GidList    {$$ = $2;}
      ;

GidList : GidList ',' Gid       {$$ = $1;}
        | Gid                   {$$ = $1;}
        ;

Gid : ID1                           {}       
    | ID1 '(' ParamList ')'         {$$ = $1; $1->paramlist = $3;adrs--;}
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

LDeclBlock :DECL LDeclList ENDDECL {$$= $2;}
           | DECL ENDDECL           {}
           ;

LDeclList : LDeclList LDecl {$$ =$2;}
         | LDecl            {$$ =$1;}
         ;

LDecl : Type IDList    {$$ = $2;}
      ;

IDList : IDList ',' ID3  {$$ = $3;}   
       | ID3                {$$ = $1;}
       | IDList ',' AID3   {$$ = $3;}            
       | AID3               {$$ = $1;}
       ;


FDefBlock : FDefBlock FDefList           {$$ =$1;}
          | FDefList                    {$$ =$1;}
          ;

FDefList  : Type ID '(' ParamList ')' '{' LDeclBlock BEG Slist Retstmt END '}'  {
                                                                $$ = $2;
                                                                $$->Lentry = $7;
                                                                $$->left = $9;
                                                                $$->right  = $10;
                                                                $$->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                DisplayL($2->Lentry);
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen($2, fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                }                                
          | Type ID '(' ParamList ')' '{' BEG Slist Retstmt END '}'  {
                                                                $$ = $2;
                                                                $$->left = $8;
                                                                $$->right  = $9;
                                                                $$->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                //DisplayL($2->Lentry);
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen($2, fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                }
          ;


Slist     : Slist Stmt                  {$$ = makeConnectorNode($1, $2, 0);}
          | Stmt                        {$$ = $1;}
          ;

Retstmt   : RETURN var                   {        if($2->nodetype != rettype){
                                                      printf("Unmatching type error");
                                                      exit(-1);
                                                  }
                                                  $$ = makeOperationNode("return", $2, 14);
                                          }
          | RETURN expr                   {if($2->nodetype != rettype){printf("Unmatching type error");exit(-1);}
                                            $$ = makeOperationNode("return", $2, 14);}
          ;

Stmt: InputStmt | OutputStmt | AsgStmt | Ifstmt | Whilestmt | BreakStmt | ContinueStmt | AllocStmt | FreeStmt ;

Ifstmt : IF '(' expr ')' THEN Slist ELSE Slist ENDIF   {   $$ = makeConditionalNode($3, $6, $8, 6);}   
       | IF '(' expr ')' THEN Slist ENDIF              {   $$ = makeConditionalNode($3, $6, $6, 7);}
       ; 

Whilestmt : WHILE '(' expr ')' DO Slist ENDWHILE       {   $$ = makeConditionalNode($3, $6, $6, 8);}
          ;


InputStmt: READ '(' var ')'             { $$ = makeOperationNode("read", $3, 1);}
         ;

OutputStmt: WRITE '(' expr ')'              { $$ = makeOperationNode("write", $3, 2);}
          | WRITE '(' var ')'               { $$ = makeOperationNode("write", $3, 2);}
          | WRITE '(' string  ')'           { $$ = makeOperationNode("write", $3, 2);}
          ;

AsgStmt: var EQT expr                       { $$ = makeOperatorNode("=", $1, $3, 3);}
       | var EQT string                     { $$ = makeOperatorNode("=", $1, $3, 3);}
       | var EQT var                        { $$ = makeOperatorNode("=", $1, $3, 3);}
       ;

BreakStmt:  BREAK                           {$$ = makeUnconditionalNode("break", 9);}
         ;

ContinueStmt:  CONTINUE                           {$$ = makeUnconditionalNode("continue", 10);}
         ;

AllocStmt: var EQT ALLOC'(' ')'              {}
         | FIELD EQT ALLOC'(' ')'           {}
         ;

FreeStmt: FREE '(' ID ')'                   {}
        | FREE '(' FIELD ')'                {}
        ;

FIELD   : ID '.' ID                       {}
        | FIELD '.' ID                    {}
        ; 

var: ID                                     {}
   | var '[' expr ']'                        {$$ = makeArrayNode($1->varname, $3 , 12);}
   | var '[' var ']'                         {$$ = makeArrayNode($1->varname, $3 , 12);}
   ;

string: STRING                              {}
      | '('STRING ')'                       {}
      ;

  expr  : expr PLUS expr                {$$ = makeOperatorNode("+", $1, $3, 3);}
        | expr MINUS expr               {$$ = makeOperatorNode("-", $1, $3, 3);}
        | expr MUL expr                 {$$ = makeOperatorNode("*", $1, $3, 3);}
        | expr DIV expr                 {$$ = makeOperatorNode("/", $1, $3, 3);}
        | expr MOD expr                 {$$ = makeOperatorNode("%", $1, $3, 3);}
        | expr EQT expr                 {$$ = makeOperatorNode("=", $1, $3, 3);}
        | '(' expr ')'                  {$$ = $2;}
        | E                             {$$ = $1;}
        | expr LT expr                  {$$ = makeOperatorNode("<", $1, $3, 16);}
        | expr GT expr                  {$$ = makeOperatorNode(">", $1, $3, 16);}
        | expr LE expr                  {$$ = makeOperatorNode("L", $1, $3, 16);} 
        | expr GE expr                  {$$ = makeOperatorNode("G", $1, $3, 16);}
        | expr OR expr                  {$$ = makeOperatorNode("O", $1, $3, 16);}
        | expr AND expr                 {$$ = makeOperatorNode("A", $1, $3, 16);}
        | expr NE expr                  {$$ = makeOperatorNode("N", $1, $3, 16);}
        | expr EQ expr                  {$$ = makeOperatorNode("E", $1, $3, 16);}
        | expr PLUS var                 {$$ = makeOperatorNode("+", $1, $3, 3);}
        | expr MINUS var                {$$ = makeOperatorNode("-", $1, $3, 3);}
        | expr MUL var                  {$$ = makeOperatorNode("*", $1, $3, 3);}
        | expr MOD var                  {$$ = makeOperatorNode("%", $1, $3, 3);}
        | expr DIV var                  {$$ = makeOperatorNode("/", $1, $3, 3);}
        | expr LT var                   {$$ = makeOperatorNode("<", $1, $3, 16);}
        | expr GT var                   {$$ = makeOperatorNode(">", $1, $3, 16);}
        | expr LE var                   {$$ = makeOperatorNode("L", $1, $3, 16);} 
        | expr GE var                   {$$ = makeOperatorNode("G", $1, $3, 16);}
        | expr OR var                  {$$ = makeOperatorNode("O", $1, $3, 16);}
        | expr AND var                 {$$ = makeOperatorNode("A", $1, $3, 16);}
        | expr NE var                   {$$ = makeOperatorNode("N", $1, $3, 16);}
        | expr EQ var                   {$$ = makeOperatorNode("E", $1, $3, 16);}
        | var PLUS expr                 {$$ = makeOperatorNode("+", $1, $3, 3);}
        | var MINUS expr                {$$ = makeOperatorNode("-", $1, $3, 3);}
        | var MUL expr                  {$$ = makeOperatorNode("*", $1, $3, 3);}
        | var MOD expr                  {$$ = makeOperatorNode("%", $1, $3, 3);}
        | var DIV expr                  {$$ = makeOperatorNode("/", $1, $3, 3);}
        | var LT expr                   {$$ = makeOperatorNode("<", $1, $3, 16);}
        | var GT expr                   {$$ = makeOperatorNode(">", $1, $3, 16);}
        | var LE expr                   {$$ = makeOperatorNode("L", $1, $3, 16);} 
        | var OR expr                  {$$ = makeOperatorNode("O", $1, $3, 16);}
        | var AND expr                 {$$ = makeOperatorNode("A", $1, $3, 16);}
        | var GE expr                   {$$ = makeOperatorNode("G", $1, $3, 16);}
        | var NE expr                   {$$ = makeOperatorNode("N", $1, $3, 16);}
        | var EQ expr                   {$$ = makeOperatorNode("E", $1, $3, 16);}
        | var EQT expr                  {$$ = makeOperatorNode("=", $1, $3, 3);}
        | var PLUS var                  {$$ = makeOperatorNode("+", $1, $3, 3);}
        | var MINUS var                 {$$ = makeOperatorNode("-", $1, $3, 3);}
        | var MUL var                   {$$ = makeOperatorNode("*", $1, $3, 3);}
        | var MOD var                   {$$ = makeOperatorNode("%", $1, $3, 3);}
        | var DIV var                   {$$ = makeOperatorNode("/", $1, $3, 3);}
        | var EQT var                   {$$ = makeOperatorNode("=", $1, $3, 3);}
        | var LT var                    {$$ = makeOperatorNode("<", $1, $3, 16);}
        | var GT var                    {$$ = makeOperatorNode(">", $1, $3, 16);}
        | var LE var                    {$$ = makeOperatorNode("L", $1, $3, 16);} 
        | var OR var                  {$$ = makeOperatorNode("O", $1, $3, 16);}
        | var AND var                 {$$ = makeOperatorNode("A", $1, $3, 16);}
        | var GE var                    {$$ = makeOperatorNode("G", $1, $3, 16);}
        | var NE var                    {$$ = makeOperatorNode("N", $1, $3, 16);}
        | var EQ var                    {$$ = makeOperatorNode("E", $1, $3, 16);}
        | var EQT string                {$$ = makeOperatorNode("=", $1, $3, 3);}
        | ID '(' ')'                    {$$ = makeFuncCallNode($1, NULL, 15);}
        | ID '(' ArgList ')'            {check($1->Gentry->paramlist, $3);$$ = makeFuncCallNode($1, $3, 15);makeANull();}
        | FIELD                         {}
        ;

ArgList : Arg ',' ArgList     {$$ = $1;}
        | Arg               {$$ = $1;}
        ;

Arg : expr                  {$$ = CreateArg($1);}
    | var                   {$$ = CreateArg($1);}
    ;


MainBlock : INT MAIN '(' ')' '{' LDeclBlock BEG Slist Retstmt END '}'    {$$ = $2; 
                                                                          $$->Lentry = $6; 
                                                                          $$->left = $8;
                                                                          $$->right = $9;
                                                                          printf("Main Created\n");
                                                                          FILE *fptr1 = fopen("tree1.xsm", "a+");
                                                                          fprintf(fptr1, "MAIN\n");
                                                                          i = CodeGen($2, fptr1);
                                                                          fclose(fptr1);
                                                                          DisplayL($$->Lentry);
                                                                          }
          | INT MAIN '(' ')' '{' BEG Slist Retstmt END '}'                 {$$ = $2; 
                                                                          $$->left = $7;
                                                                          $$->right = $8;
                                                                          printf("Main Created\n");
                                                                          FILE *fptr1 = fopen("tree1.xsm", "a+");
                                                                          fprintf(fptr1, "MAIN\n");
                                                                          i = CodeGen($2, fptr1);
                                                                          fclose(fptr1);
                                                                          }
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