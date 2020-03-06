typedef struct ASTNode{
int val;
char *op;
struct ASTNode *left,*right;
}ASTNode;

struct ASTNode* makeLeafNode(int n);

struct ASTNode* makeOperatorNode(char c, struct ASTNode *l, struct ASTNode *r);

int codeGen(struct ASTNode *t, FILE *target_file);

int evaluate(struct ASTNode *t);

int getReg();

void freeReg();
