%{
    #include <stdlib.h>
    #include <stdio.h>
    #include "y.tab.h"
    #include "codegen.h"
    
    int number;
    
%}

%%

[0-9]+      {number = atoi(yytext); yylval.no = makeLeafNode(number); return NUM;}
"+"         {return PLUS;}
[\t]        {}
[()]        {return *yytext;}
[\n]        {return END;}
.           {yyerror("unknown character\n");exit(1);}

%%

int yywrap(void){
    return 1;
}
