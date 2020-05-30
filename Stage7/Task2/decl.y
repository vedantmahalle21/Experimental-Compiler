
%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "decl.h"
  int yylex(void);
    int fl = 0;
    int i =0;
    int j;
    int b = 0;
    int ma = 0;
%}

%union{
	struct Gsymbol *no;
	struct Paramstruct *n1;
    struct ASTNode *n2;
    struct Lsymbol *n3;
    struct ArgStruct *n4;
    struct TypeTable *n5;
    struct FieldList *n6;
    struct ClassTable *n7;
    struct MemberFuncList *n8;
}

%type <n7> ClassDefBlock ClassDefList ClassDef Cname ID6;
%type <n8> MethodDecl MDecl 
%type <n6> FieldDeclList FieldDecl ID5
%type <n5> TypeDefBlock TypeDefList TypeDef ID4
%type <n4> ArgList Arg
%type <n3> LDeclBlock LDeclList LDecl ID3 IDList AID3
%type <n2> Program FDefBlock MainBlock ID FDefList Slist Stmt Retstmt InputStmt OutputStmt AsgStmt Ifstmt Whilestmt BreakStmt ContinueStmt AllocStmt FreeStmt expr var string MAIN E Type NUL InitializeStmt STRING MethodDefns
%type <n1> ParamList Param Plist PARAM
%type <no> GDeclBlock GDeclList GDecl GidList Gid ID1
%token ID DECL ENDDECL INT STR PARAM RETURN MAIN WRITE READ BREAK CONTINUE ALLOC FREE LT GT EQT LE GE NE AND OR MOD MUL DIV PLUS MINUS DO ELSE IF THEN WHILE STRING BEG END EQ ENDIF ENDWHILE ID1 ID3 E AID3 ID4 TYPE ENDTYPE ID5 NUL INITIALIZE CLASS
ENDCLASS SELF ID6 NEW
%left EQT AND OR 
%left GT LT EQ NE GE LE
%left PLUS MINUS
%left MUL DIV MOD

%%

Program : GDeclBlock FDefBlock MainBlock                               {$$ = $3;}
        | ClassDefBlock GDeclBlock FDefBlock MainBlock                 {$$ = $4;}
        | GDeclBlock MainBlock                                         {$$ = $2;}
        | ClassDefBlock GDeclBlock MainBlock                           {$$ = $3;}
        | MainBlock                                                    {$$ = $1;}
        | ClassDefBlock MainBlock                                      {$$ = $2;}
        | TypeDefBlock GDeclBlock FDefBlock MainBlock                  {$$ = $4;}
        | TypeDefBlock ClassDefBlock GDeclBlock FDefBlock MainBlock    {$$ = $5;}
        | TypeDefBlock GDeclBlock MainBlock                            {$$ = $3;}
        | TypeDefBlock ClassDefBlock GDeclBlock MainBlock              {$$ = $4;}
        | TypeDefBlock MainBlock                                       {$$ = $2;}
        | TypeDefBlock ClassDefBlock MainBlock                         {$$ = $3;}
        | FDefBlock MainBlock                                          {$$ = $2;}
        | ClassDefBlock FDefBlock MainBlock                            {$$ = $3;}
        | TypeDefBlock FDefBlock MainBlock                             {$$ = $3;}
        | TypeDefBlock ClassDefBlock FDefBlock MainBlock               {$$ = $4;}
        ;

TypeDefBlock  : TYPE TypeDefList ENDTYPE                {$$ = $2;DisplayT1();}                               
              ;

TypeDefList   : TypeDefList TypeDef     {$$ =$1;}
              | TypeDef                 {$$ = $1;}
              ;

TypeDef       : ID4 '{' FieldDeclList '}'   {$$ = $1; $1->fields = $3;makeFNull();$1->size = sz;sz =0;fi =1;}
              ;

ClassDefBlock : CLASS ClassDefList ENDCLASS  {$$ =$2;ma = 1;DisplayC();}
              ;

ClassDefList  : ClassDefList ClassDef        {$$ = $1;}
              | ClassDef                      {$$ = $1;}
              ;

ClassDef      : Cname '{'DECL FieldDeclList MethodDecl ENDDECL MethodDefns '}'   {
                                                                                  $$ = $1;
                                                                                  $$->Vfuncptr = $5;
                                                                                  $$->Fieldcount = fi;
                                                                                  $$->Methodcount = fj;
                                                                                  $$->Memberfield  = $4;
                                                                                  f15 =0;
                                                                                  makeFNull();
                                                                                  makeMNull();
                                                                                  }
              ;

Cname         :ID6 {$$ = $1;}
              ;


MethodDecl    : MethodDecl MDecl {$$ = $1;}
              | MDecl             {$$ = $1;}
              ;

MDecl         : Type ID5 '(' ParamList ')' {$$ = CreateFuncDef($2, $4);}
              | ID4 ID5 '(' ParamList ')' {$$ = CreateFuncDef($2, $4);}
              | Type ID5 '(' ')' {$$ = CreateFuncDef($2, NULL);}
              | ID4 ID5 '(' ')' {$$ = CreateFuncDef($2, NULL);}
              ;


MethodDefns   : MethodDefns FDefList  {$$ = $1;}
              | FDefList                {$$ = $1;}
              ;

FieldDeclList : FieldDeclList FieldDecl         {$$ = $1;}
              | FieldDecl                       {$$ = $1;}
              ;

FieldDecl    : Type ID5 {$$ =$2;}
             | ID4 ID5 {$$ =$2;}
             | ID6 ID5 {$$ = $2; $$->Ctype = $1;}
             ;


GDeclBlock  : DECL GDeclList ENDDECL    {   $$ =$2;Display($2); }
            | DECL ENDDECL                                {}
            ;

GDeclList   : GDeclList GDecl {$$ =$1;}
            | GDecl           {$$ = $1;}
            ;
GDecl : Type GidList    {$$ = $2;}
      | ID4 GidList     {$$ = $2;}
      | ID6 GidList     {$$ = $2;}
      ;

GidList : GidList ',' Gid       {$$ = $1;}
        | Gid                   {$$ = $1;}
        ;

Gid : ID1                           {$$ =$1;}       
    | ID1 '(' ParamList ')'         {$$ = $1; $1->paramlist = $3;adrs--;}
    ; 

ParamList : ParamList Plist
          | Plist
          ;

Plist : Plist ',' Param     {$$ = $1;}
      | Param                   {$$ = $1;}
      ;

Param : Type PARAM         {$$ = $2;}
        | ID4 PARAM        {  $$ = $2;
                              struct Paramstruct *temp = $2;
                              while(temp->next != NULL){
                              temp = temp->next;
                              }
                              temp->typet = $1;
                            }
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
      | ID4 IDList    {$$ = $2;}
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
                                                                if($$->Gentry != NULL){
                                                                  $$->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", $$->varname);
                                                                  DisplayL($$->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
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
                                                                if($$->Gentry != NULL){
                                                                  $$->Gentry->flabel = fl;
                                                                }
                                                                $$->Lentry = head2;
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", $$->varname);
                                                                  DisplayL($$->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen($2, fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
         | ID4 ID '(' ParamList ')' '{' LDeclBlock BEG Slist Retstmt END '}'  {
                                                                $$ = $2;
                                                                $$->typet = $1;
                                                                $$->Lentry = $7;
                                                                $$->left = $9;
                                                                $$->right  = $10;
                                                                if($$->Gentry != NULL){
                                                                  $$->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", $$->varname);
                                                                  DisplayL($$->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen($2, fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }                                
          | ID4 ID '(' ParamList ')' '{' BEG Slist Retstmt END '}'  {
                                                                $$ = $2;
                                                                $$->typet = $1;
                                                                $$->Lentry = head2;
                                                                $$->left = $8;
                                                                $$->right  = $9;
                                                                if($$->Gentry != NULL){
                                                                  $$->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", $$->varname);
                                                                  DisplayL($$->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen($2, fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
          | Type ID '(' ')' '{' LDeclBlock BEG Slist Retstmt END '}'  {

                                                                $$ = $2;
                                                                $$->Lentry = $6;
                                                                $$->left = $8;
                                                                $$->right  = $9;
                                                                if($$->Gentry != NULL){
                                                                  $$->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", $$->varname);
                                                                  DisplayL($$->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen($2, fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }                                
          | Type ID '(' ')' '{' BEG Slist Retstmt END '}'  {    $$ = $2;
                                                                $$->left = $7;
                                                                $$->right  = $8;
                                                                $$->Lentry = head2;
                                                                if($$->Gentry != NULL){
                                                                  $$->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", $$->varname);
                                                                  DisplayL($$->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen($2, fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                }
         | ID4 ID '(' ')' '{' LDeclBlock BEG Slist Retstmt END '}'  {
                                                                $$ = $2;
                                                                $$->typet = $1;
                                                                $$->Lentry = $6;
                                                                $$->left = $8;
                                                                $$->right  = $9;
                                                                if($$->Gentry != NULL){
                                                                  $$->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", $$->varname);
                                                                  DisplayL($$->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen($2, fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }                                
          | ID4 ID '(' ')' '{' BEG Slist Retstmt END '}'  {
                                                                $$ = $2;
                                                                $$->typet = $1;
                                                                $$->Lentry = head2;
                                                                $$->left = $7;
                                                                $$->right  = $8;
                                                                if($$->Gentry != NULL){
                                                                  $$->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", $$->varname);
                                                                  DisplayL($$->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen($2, fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                }

          | ID4 ID '(' ')' '{' BEG Retstmt END '}'  {
                                                                $$ = $2;
                                                                $$->typet = $1;
                                                                $$->Lentry = head2;
                                                                $$->right  = $7;
                                                                $$->left  = NULL;
                                                                if($$->Gentry != NULL){
                                                                  $$->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", $$->varname);
                                                                  DisplayL($$->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
                                                                fprintf(fptr, "Y%d:\n", fl);
                                                                fl++;
                                                                i = CodeGen($2, fptr);
                                                                fclose(fptr);
                                                                makeLNull();
                                                                
                                                                }
          | Type ID '(' ')' '{' BEG Retstmt END '}'  {
                                                                $$ = $2;
                                                                $$->Lentry = head2;
                                                                $$->right  = $7;
                                                                $$->left = NULL;
                                                                if($$->Gentry != NULL){
                                                                  $$->Gentry->flabel = fl;
                                                                }
                                                                if(f13 == 0){
                                                                  printf("Function %s\n", $$->varname);
                                                                  DisplayL($$->Lentry);
                                                                }
                                                                FILE *fptr = fopen("tree1.xsm", "a+");
                                                                if(b == 0){
                                                                fprintf(fptr, "MOV SP,%d\n", adrs);
                                                                fprintf(fptr, "JMP MAIN\n");
                                                                b = 1;
                                                                }
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

Stmt: InputStmt | OutputStmt | AsgStmt | Ifstmt | Whilestmt | BreakStmt | ContinueStmt | AllocStmt | FreeStmt | InitializeStmt  ;

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
       | var EQT NEW '(' ID6 ')'      {$$ = makeOperationNodeC("new", $1, $5, 24);}
       ;

BreakStmt:  BREAK                           {$$ = makeUnconditionalNode("break", 9);}
         ;

ContinueStmt:  CONTINUE                           {$$ = makeUnconditionalNode("continue", 10);}
         ;

AllocStmt: var EQT ALLOC'(' ')'              {$$ = makeOperationNode("alloc", $1, 18);$1->type = 19;}
         ;

FreeStmt: FREE '(' var ')'                {$$ = makeOperationNode("free", $3, 22);}
        ;

InitializeStmt : var EQT INITIALIZE '(' ')'  {$$ = makeOperationNode("initialize", $1, 21); }



var: ID                                     {$$ =$1;}
   | SELF '.' ID                    {$$ = $3;}
   | var '.' ID                     {$$ = $3;$$->left = $1;$1->right = $$;}
   | var '[' expr ']'                        {$$ = makeArrayNode($1->varname, $3 , 12);}
   | var '[' var ']'                         {$$ = makeArrayNode($1->varname, $3 , 12);}
   ;

string: STRING                              {$$ = $1;}
      | '('STRING ')'                       {$$ = $2;}
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
    | NUL                           {$$ = $1;}
    | SELF '.' ID '(' ArgList ')'  {$$ = makeFuncCallNodeC($3, NULL, $5, 15);  makeANull();}
    | SELF '.' ID '(' ')'           {$$ = makeFuncCallNodeC($3, NULL, NULL, 15); }
    | var '.' ID '(' ArgList ')'         { struct MemberFuncList *temp = LookupM($3->varname, $1->Ctype);
                                              check(temp->paramlist, $5);
                                              $$ = makeFuncCallNodeC($3, $1, $5, 15);makeANull();}
    | var '.' ID '(' ')'                 {$$ = makeFuncCallNodeC($3, $1, NULL, 15);}    
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
                                                                          printf("Main Function With Local Decs\n");
                                                                          DisplayL($$->Lentry);
                                                                          FILE *fptr1 = fopen("tree1.xsm", "a+");
                                                                          fprintf(fptr1, "MAIN\n");
                                                                          i = CodeGen($2, fptr1);
                                                                          fclose(fptr1);
                                                                          }
          | INT MAIN '(' ')' '{' BEG Slist Retstmt END '}'                 {$$ = $2; 
                                                                          $$->left = $7;
                                                                          $$->right = $8;
                                                                          printf("Main Function\n");
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
    TypeTableCreate();
    FILE *fptr = fopen("tree1.xsm", "w");
    fprintf(fptr, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
    fprintf(fptr, "BRKP\n");
    fclose(fptr);
    yyparse();
    return 0;
}