int m = 4095;
int k = -1;
int flag1 =0 ;
struct ASTNode* makeLeafNodeInt(int n, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->val = n;
    temp->varname = NULL;
    temp->left = NULL;
    temp->right = NULL;
    temp->type = type;
    //printf("leaf node with %d\n", n);
    return temp;
}

struct ASTNode* makeLeafNodeVar(char* var, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->val = NULL;
    temp->varname = var;
    temp->left = NULL;
    temp->right = NULL;
    temp->type = type;
    //printf("leaf node with %s\n", var);
    return temp;
}

struct ASTNode* makeConnectorNode(struct ASTNode *l, struct ASTNode *r, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->val = NULL;
    temp->left = l;
    temp->right = r;
    //printf("connector node with both\n");
    temp->type = type;
    return temp;
}

struct ASTNode* makeOperationNode(char* op, struct ASTNode *t, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = op;
    temp->val = NULL;
    temp->varname = NULL;
    temp->left = t;
    temp->right = NULL;
    temp->type = type;
    //printf("operation node with %s\n", op);
    return temp;
}

struct ASTNode* makeOperatorNode(char* op, struct ASTNode *l, struct ASTNode *r, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = op;
    temp->val = NULL;
    temp->varname = NULL;
    temp->left = l;
    temp->right = r;
    temp->type = type;
    //printf("operator node with %s\n", op);
    return temp;
}

int CodeGen(struct ASTNode *t, FILE *targetfile)
{
    int i,j,q,r,s,s1,p,t1;
    char* c;
    int flag = 0;
    if(t->type == 0){
                    if(t->left != NULL){
                        i = CodeGen(t->left, targetfile);
                    }
                    if(t->right != NULL){
                        j = CodeGen(t->right, targetfile);
                    }
                    return -1;
                    }
        else if(t->type == 1){
                    s = *(t->left->varname) + 4000;
                    p = getReg();
                    q = getReg();
                    fprintf(targetfile, "MOV R%d, %d\n", p, 7);
                    fprintf(targetfile, "PUSH R%d\n", p);
                    fprintf(targetfile, "MOV R%d, %d\n", p, -1);
                    fprintf(targetfile, "PUSH R%d\n", p);
                    fprintf(targetfile, "MOV R%d, %d\n", q, s);
                    fprintf(targetfile, "PUSH R%d\n", q);
                    fprintf(targetfile, "PUSH R%d\n", q);
                    fprintf(targetfile, "PUSH R%d\n", q);
                    fprintf(targetfile, "INT %d\n", 6);
                    fprintf(targetfile, "POP R%d\n", p);
                    fprintf(targetfile, "POP R%d\n", p);
                    fprintf(targetfile, "POP R%d\n", p);
                    fprintf(targetfile, "POP R%d\n", p);
                    fprintf(targetfile, "POP R%d\n", p);
                    freeReg();
                    return q;
                    }
        else if(t->type == 2){
            if(t->left->op == NULL){
                if(t->left->val == NULL){
                    s = *(t->left->varname) + 4000;
                }
                else{
                    t1 = t->left->val;
                }
                p = getReg();
                q = getReg();
                fprintf(targetfile, "MOV R%d, %d\n", p, 5);
                fprintf(targetfile, "PUSH R%d\n", p);
                fprintf(targetfile, "MOV R%d, %d\n", p, -2);
                fprintf(targetfile, "PUSH R%d\n", p);
                if(t->left->val == NULL){
                    fprintf(targetfile, "MOV R%d, [%d]\n", q, s);
                }
                else{
                    fprintf(targetfile, "MOV R%d, %d\n", q, t1);
                }
                fprintf(targetfile, "PUSH R%d\n", q);
                fprintf(targetfile, "PUSH R%d\n", q);
                fprintf(targetfile, "PUSH R%d\n", q);
                fprintf(targetfile, "INT %d\n", 7);
                fprintf(targetfile, "POP R%d\n", p);
                fprintf(targetfile, "POP R%d\n", p);
                fprintf(targetfile, "POP R%d\n", p);
                fprintf(targetfile, "POP R%d\n", p);
                fprintf(targetfile, "POP R%d\n", p);
                freeReg();
                return q;
            }
            else{
                r = CodeGen(t->left, targetfile);
                p = getReg();
                q = getReg();
                fprintf(targetfile, "MOV R%d, %d\n", p, 5);
                fprintf(targetfile, "PUSH R%d\n", p);
                fprintf(targetfile, "MOV R%d, %d\n", p, -2);
                fprintf(targetfile, "PUSH R%d\n", p);
                fprintf(targetfile, "MOV R%d, R%d\n", q, r);
                fprintf(targetfile, "PUSH R%d\n", q);
                fprintf(targetfile, "PUSH R%d\n", q);
                fprintf(targetfile, "PUSH R%d\n", q);
                fprintf(targetfile, "INT %d\n", 7);
                fprintf(targetfile, "POP R%d\n", p);
                fprintf(targetfile, "POP R%d\n", p);
                fprintf(targetfile, "POP R%d\n", p);
                fprintf(targetfile, "POP R%d\n", p);
                fprintf(targetfile, "POP R%d\n", p);
                return p;
            }
        } 
        else if (t->type == 3){   
            if(t->left->op != NULL){
                i = CodeGen(t->left, targetfile);
                p = getReg();
                    fprintf(targetfile, "MOV R%d, R%d\n", p, i);
            }
            else{
                if(t->left->type == 4){
                    i = t->left->val;
                    p = getReg();
                    fprintf(targetfile, "MOV R%d, %d\n", p, i);
                }
                else if(*(t->op) == '='){
                    s = *(t->left->varname) + 4000;
                }
                else{
                    s = *(t->left->varname) + 4000;
                    p = getReg();
                    fprintf(targetfile, "MOV R%d, [%d]\n", p, s);
                }   
            }
            if(t->right->op != NULL){
                q = CodeGen(t->right, targetfile);
            }
            else{
                if(t->right->type == 4){
                    i = t->right->val;
                    q = getReg();
                    fprintf(targetfile, "MOV R%d, %d\n", q, i);
                }
                else{
                    s1 = *(t->right->varname) + 4000;
                    q = getReg();
                    fprintf(targetfile, "MOV R%d, [%d]\n", q, s1);
                }
            }
            switch(*(t->op)){
                case '+' : fprintf(targetfile, "ADD R%d, R%d\n", p, q);
                           freeReg();
                           return p;
                           break;
                case '-' : fprintf(targetfile, "SUB R%d, R%d\n", p, q);
                           freeReg();
                           return p;
                           break;
                case '*' : fprintf(targetfile, "MUL R%d, R%d\n", p, q);
                           freeReg();
                           return p;
                           break;
                case '/' : fprintf(targetfile, "DIV R%d, R%d\n", p, q);
                           freeReg();
                           return p;
                           break;
                case '=' : fprintf(targetfile, "MOV [%d], R%d\n", s, q);
                           return q;
                           break;
            }
        }
        else if(type == 6){
            if(t->left->type == 4){
                i = t->left->val;
                p = getReg();
                fprintf(targetfile, "MOV R%d, %d\n", p, i);
            }
            else
            {
                i = *(t->left->varname) + 4000;
                p = getReg();
                fprintf(targetfile, "MOV R%d, [%d\n]", p, i);
            }
            if(t->right->type == 4){
                j = t->right->val;
                q = getReg();
                fprintf(targetfile, "MOV R%d, %d\n", q, i);
            }
            else
            {
                p = *(t->right->varname) + 4000;
                q = getReg();
                fprintf(targetfile, "MOV R%d, [%d]\n", q, i);
            }
            switch(*(t->op)){
                case '>' :  fprintf(targetfile, "GT R%d, R%d\n", p, q);
                            if(flag1 == 1){
                                fprintf(targetfile, "JZ R%d\n", p);
                            }
                            

            }
        }
}

int getReg()
{
    k++;
    return k;
}

int getVar(int s)
{
    
    return 4096 + s;
}

void freeReg()
{
    k--;
}
