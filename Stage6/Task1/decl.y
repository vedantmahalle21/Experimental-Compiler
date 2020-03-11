
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
    struct TypeTable *n5;
    struct FieldList *n6;
}

%type <n6> FieldDeclList FieldDecl ID5
%type <n5> TypeDefBlock TypeDefList TypeDef ID4
%type <n4> ArgList Arg
%type <n3> LDeclBlock LDeclList LDecl ID3 IDList AID3
%type <n2> Program FDefBlock MainBlock ID FDefList Slist Stmt Retstmt InputStmt OutputStmt AsgStmt Ifstmt Whilestmt BreakStmt ContinueStmt AllocStmt FreeStmt expr var FIELD string MAIN E Type NUL
%type <n1> ParamList Param Plist PARAM
%type <no> GDeclBlock GDeclList GDecl GidList Gid ID1
%token ID DECL ENDDECL INT STR PARAM RETURN MAIN WRITE READ BREAK CONTINUE ALLOC FREE LT GT EQT LE GE NE AND OR MOD MUL DIV PLUS MINUS DO ELSE IF THEN WHILE STRING BEG END EQ ENDIF ENDWHILE ID1 ID3 E AID3 ID4 TYPE ENDTYPE ID5 NUL
%left EQT AND OR 
%left GT LT EQ NE GE LE
%left PLUS MINUS
%left MUL DIV MOD

%%

Program : GDeclBlock FDefBlock MainBlock                     {$$ = $3;}
        | GDeclBlock MainBlock                               {$$ = $2;}
        | MainBlock                                          {$$ = $1;}
        | TypeDefBlock GDeclBlock FDefBlock MainBlock        {$$ = $4;}
        | TypeDefBlock GDeclBlock MainBlock                  {$$ = $3;}
        | TypeDefBlock MainBlock                             {$$ = $2;}
        | FDefBlock MainBlock                                {$$ = $2;}
        | TypeDefBlock FDefBlock MainBlock                   {$$ = $3;}
        ;

TypeDefBlock  : TYPE TypeDefList ENDTYPE                {$$ = $2;printf("JHY\n");}                               
              ;

TypeDefList   : TypeDefList TypeDef     {$$ =$1;printf("LOI\n");}
              | TypeDef                 {$$ = $1;printf("JJU\n");}
              ;

TypeDef       : ID4 '{' FieldDeclList '}'   {$$ = $1; $1->fields = $3;makeFNull();$1->size = sz;sz =0;printf("AAE\n");}
              ;

FieldDeclList : FieldDeclList FieldDecl         {$$ = $2;printf("UYU\n");}
              | FieldDecl                       {$$ = $1;printf("OOI\n");}
              ;

FieldDecl    : INT ID5    {printf("QWWW\n");$$ = $2;struct TypeTable *temp = TLookup("int");$2->typet = temp;printf("rt::%s\n", $2->typet->name);printf("rta::%s\n", $2->name);}
             | STR ID5   {printf("AAWS\n");$$ = $2;struct TypeTable *temp = TLookup("str");$2->typet = temp;}
             | ID4 ID5     {printf("AOUT\n");$$ = $2;$2->typet = $1;}
             ;


GDeclBlock  : DECL GDeclList ENDDECL    {   $$ =$2;Display($2);printf("SSD\n");
                                        }
            | DECL ENDDECL                                {}
            ;

GDeclList   : GDeclList GDecl {$$ =$1;printf("nnu\n");}
            | GDecl           {$$ = $1;printf("RFB\n");}
            ;
GDecl : Type GidList    {$$ = $2;printf("AQW1\n");}
      | ID4 GidList     {$$ = $2;printf("AQ\n");$2->typet = $1;printf("AQWw\n");}
      ;

GidList : GidList ',' Gid       {$$ = $1;printf("vfa\n");}
        | Gid                   {$$ = $1;printf("11..a\n");}
        ;

Gid : ID1                           {$$ =$1;printf("lkj\n");}       
    | ID1 '(' ParamList ')'         {$$ = $1;printf("lkjj\n"); $1->paramlist = $3;adrs--;}
    ; 

ParamList : ParamList Plist
          | Plist
          ;

Plist : Plist ',' Param     {$$ = $1;printf("AVD\n");}
      | Param                   {$$ = $1;printf("JUH\n");}
      ;

Param : Type PARAM         {$$ = $2;printf("AKU\n");}
      | ID4 PARAM          {printf("QDF\n");$$ = $2;$2->typet = $1;}
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

FDefList  : Type ID '(' ParamList ')' '{' LDeclBlock BEG Slist Retstmt END '}'  {printf("aajh\n");
                                                                $$ = $2;
                                                                $$->Lentry = $7;
                                                                $$->left = $9;
                                                                $$->right  = $10;
                                                                $$->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                DisplayL($2->Lentry);
                                                                makeLNull();
                                                                }                                
          | Type ID '(' ParamList ')' '{' BEG Slist Retstmt END '}'  {printf("aajlh\n");
                                                                $$ = $2;
                                                                $$->left = $8;
                                                                $$->right  = $9;
                                                                $$->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                //DisplayL($2->Lentry);
                                                                makeLNull();
                                                                }
         | ID4 ID '(' ParamList ')' '{' LDeclBlock BEG Slist Retstmt END '}'  {printf("aajh\n");
                                                                $$ = $2;
                                                                $$->Lentry = $7;
                                                                $$->left = $9;
                                                                $$->right  = $10;
                                                                $$->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                DisplayL($2->Lentry);
                                                                makeLNull();
                                                                }                                
          | ID4 ID '(' ParamList ')' '{' BEG Slist Retstmt END '}'  {printf("aajlh\n");
                                                                $$ = $2;
                                                                $$->left = $8;
                                                                $$->right  = $9;
                                                                $$->Gentry->flabel = fl;
                                                                printf("FUNC CREATED\n");
                                                                //DisplayL($2->Lentry);
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
       | FIELD EQT var                  {$$ = makeOperatorNode("=", $1, $3, 3);printf("AssQ\n");} 
       ;

BreakStmt:  BREAK                           {$$ = makeUnconditionalNode("break", 9);}
         ;

ContinueStmt:  CONTINUE                           {$$ = makeUnconditionalNode("continue", 10);}
         ;

AllocStmt: var EQT ALLOC'(' ')'              {$$ = makeOperationNode("alloc", $1, 18);printf("NBV\n");}
         | FIELD EQT ALLOC'(' ')'            {$$ = makeOperationNode("alloc", $1, 18);printf("NBD\n");}
         ;

FreeStmt: FREE '(' ID ')'                   {}
        | FREE '(' FIELD ')'                {}
        ;

FIELD   : ID '.' ID                       {printf("AAqw\n");$$ = $3;$3->typet = $1->typet;printf("ALKI\n");}
        | FIELD '.' ID                    {$$ = $3;$3->typet = $1->typet;}
        ; 

var: ID                                     {$$ =$1;printf("..%s\n", $1->varname);}
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
    | expr EQT var                   {$$ = makeOperatorNode("=", $1, $3, 16);}
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
    | FIELD                         {$$ = $1;printf("AAQI\n");}
    | NUL                           {$$ = $1;}
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
                                                                          DisplayL($$->Lentry);
                                                                          }
          | INT MAIN '(' ')' '{' BEG Slist Retstmt END '}'                 {$$ = $2; 
                                                                          $$->left = $7;
                                                                          $$->right = $8;
                                                                          printf("Main Created\n");
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
    TypeTableCreate();
    yyparse();
    return 0;
}