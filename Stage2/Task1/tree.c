int m = 4095;
int k = -1;
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
    printf("leaf node with %d\n", n);
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
    printf("leaf node with %s\n", var);
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
    printf("connector node with both\n");
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
    printf("operation node with %s\n", op);
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
    printf("operator node with %s\n", op);
    return temp;
}

