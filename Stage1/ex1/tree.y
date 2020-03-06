%{
    #include <stdlib.h>
    #include <stdio.h>
    #include "tree.h"
    #include "tree.c"
    int yylex(void);
%}

%union{
    struct tnode *no;
}

%type <no> expr NUM program END
%token NUM PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%

program : expr END {
                        $$ = $2;
                        printf("%c", *($1->op));
                        printf("\n");
                        postfix($1);
                        printf("\n");
                        prefix($1);
                        printf("\n");
                        infix($1);
                        printf("\n");
                        printf("Answer : %d\n", evaluate($1));
                        
                        exit(1);
                    }
                ;

expr : expr PLUS expr       {$$ = makeOperatorNode('+', $1, $3);}
        | expr MINUS expr   {$$ = makeOperatorNode('-', $1, $3);}
        | expr MUL expr     {$$ = makeOperatorNode('*', $1, $3);}
        | expr DIV expr     {$$ = makeOperatorNode('/', $1, $3);}
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
