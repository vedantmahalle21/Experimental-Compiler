int k = -1;

struct ASTNode* makeLeafNode(int n)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct ASTNode* makeOperatorNode(char c, struct ASTNode *l, struct ASTNode *r){
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = malloc(sizeof(char));
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

int evaluate(struct ASTNode *t){
    if(t->op == NULL)
    {
        return t->val;
    }
    else{
        switch(*(t->op)){
            case '+' : return evaluate(t->left) + evaluate(t->right);
                       break;
            case '-' : return evaluate(t->left) - evaluate(t->right);
                       break;
            case '*' : return evaluate(t->left) * evaluate(t->right);
                       break;
            case '/' : return evaluate(t->left) / evaluate(t->right);
                       break;
        }
    }
}


int codeGen(struct ASTNode *t, FILE *targetfile)
{
        int i,j,p,q;
        if(t->left->op != NULL){
            p = codeGen(t->left, targetfile);
            
        }
        else{
            i = t->left->val;
            p = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", p, i);
        }
        if(t->right->op != NULL){
            q = codeGen(t->right, targetfile);
            
        }
        else{
            j = t->right->val;
            q = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", q, j);
        }
        switch(*(t->op)){
            case '+' : fprintf(targetfile, "ADD R%d, R%d\n", p, q);
                       break;
            case '-' : fprintf(targetfile, "SUB R%d, R%d\n", p, q);
                       break;
            case '*' : fprintf(targetfile, "MUL R%d, R%d\n", p, q);
                       break;
            case '/' : fprintf(targetfile, "DIV R%d, R%d\n", p, q);
                       break;
        }
        freeReg();
        return p;
}

int getReg()
{
    k++;
    //printf("%d", k);
    return k;
}

void freeReg()
{
    //printf("%d", k);
    k--;
}

void storeResult(int i, FILE *targetfile)
{
    int p = getReg();
    int q = getReg();
    fprintf(targetfile, "MOV SP, %d\n", 4096);
    fprintf(targetfile, "MOV [%d], R%d\n", 4095, i);
    fprintf(targetfile, "MOV R%d, [%d]\n", p, 4095);
    fprintf(targetfile, "MOV R%d, %d\n", q, 5);
    fprintf(targetfile, "PUSH %d\n", q);
    fprintf(targetfile, "MOV R%d, %d\n", q, -2);
    fprintf(targetfile, "PUSH R%d\n", q);
    fprintf(targetfile, "PUSH R%d\n", p);
    fprintf(targetfile, "PUSH R%d\n", p);
    fprintf(targetfile, "PUSH R%d\n", p);
    fprintf(targetfile, "INT 7\n");
    fprintf(targetfile, "POP R%d\n", q);
    fprintf(targetfile, "POP R%d\n", q);
    fprintf(targetfile, "POP R%d\n", q);
    fprintf(targetfile, "POP R%d\n", q);
    fprintf(targetfile, "POP R%d\n", q);
    freeReg();
    freeReg();
}
