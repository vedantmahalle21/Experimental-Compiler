int k = 0;
int variable[26];
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

int Evaluate(struct ASTNode *t)
{
    int i,j;
    if(t->type == 0){
        if(t->left != NULL){
            i = Evaluate(t->left);
            printf("Done left\n");
        }
        if(t->right != NULL){
            j = Evaluate(t->right);
            printf("Done right\n");
        }
        return 0;
    }
    else if(t->type == 1){
        i = *(t->left->varname) -97;
        int n;
        scanf("%d", &n);
        variable[i] = n;
        printf("Done read\n");
        return 0;
    }
    else if(t->type == 2){
        if(t->left->type == 3){
            i = Evaluate(t->left);
            printf("%d\n", i);
            printf("Done write\n");
            return 0;
        }
        else{
            if(t->left->type == 5){
                j = *(t->left->varname) - 97;
                i = variable[j];
                printf("%d\n", i);
                printf("Done write\n");
            }
            else{
                i = t->left->val;
                printf("%d\n", i);
                printf("Done write\n");
            }
            return 0;
        }
    }        
    else if (t->type == 3){   
        if(t->left->type == 3){
            i = Evaluate(t->left);
        }
        else{
            if(*(t->op) == '='){
                i = *(t->left->varname) -97;
            }
            else if(t->left->type == 4){
                i = t->left->val;
            }
            else{
                i = variable[*(t->left->varname) -97];
            }            
        }
        if(t->right->type == 3){
            j = Evaluate(t->right);
        }
        else{
            if(t->right->type == 4){
                j = t->right->val;
            }
            else{
                j = *(t->right->varname) -97;
                j = variable[j];
            }
        }
        switch(*(t->op)){
            case '+' : return (i + j);
                       break;
            case '-' : return (i - j);
                       break;
            case '*' : return (i * j);
                       break;
            case '/' : return (i / j);
                       break;
            case '=' : variable[i] = j;
                       return variable[i];
                       break;
        }
    }
}
