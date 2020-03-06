%{
    #include <stdlib.h>
    #include <stdio.h>
    #include "codegen.h"
    #include "codegen.c"
    int yylex(void);
%}

%union{
    struct ASTNode *no;
}

%type <no> expr NUM program END
%token NUM PLUS END
%left PLUS

%%

program : expr END {
                        $$ = $2;
                        FILE *fptr = fopen("codegen.xsm", "w");
                        fprintf(fptr, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0); 
                        int i = codeGen($1, fptr);
                        storeResult(i, fptr);
                        exit(1);
                    }
                ;

expr : expr PLUS expr       {$$ = makeOperatorNode('+', $1, $3);}
        | '(' expr ')'      {$$ = $2;}
        | NUM               {$$ = $1;}
        ;

%%

yyerror(char const *s)
{
    printf("yyerror %s", s);
}

int main(void){
    yyparse();
    
    return 0;
}
