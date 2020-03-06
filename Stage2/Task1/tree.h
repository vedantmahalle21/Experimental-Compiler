typedef struct ASTNode { 
	int val;	
	int type;	
	char* varname;
	char* op;
	int nodetype;
	struct ASTNode *left,*right;
}ASTNode;

struct ASTNode* makeOperationNode(char* op, struct ASTNode *t, int type);

struct ASTNode* makeConnectorNode(struct ASTNode *l, struct ASTNode *r, int type);

struct ASTNode* makeOperatorNode(char* op, struct ASTNode *l, struct ASTNode *r, int type);

struct ASTNode* makeLeafNodeInt(int n, int type);

struct ASTNode* makeLeafNodeVar(char* var, int type);

