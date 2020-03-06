extern int adrs;
typedef struct Gsymbol{
	char* name;
	int type;
	int size;
	int address;
	struct Gsymbol *next;
}Gsymbol;

struct Gsymbol *Lookup(char * name);

void newVariable(char *name, int type);

void newVariableArr(char *name,int num, int type);

typedef struct ASTNode { 
	int val;	
	int type;	
	char* varname;
	char* op;
	int nodetype;
	struct Gsymbol *Gentry;
	struct ASTNode *left,*right,*middle;
}ASTNode;


struct ASTNode* makeOperationNode(char* op, struct ASTNode *l, int type);

struct ASTNode* makeConnectorNode(struct ASTNode *l, struct ASTNode *r, int type);

struct ASTNode* makeOperatorNode(char* op, struct ASTNode *l, struct ASTNode *r, int type);

struct ASTNode* makeArrayNode(char* var, struct ASTNode *l, int type);

struct ASTNode* makeLeafNodeInt(int n, int type);

struct ASTNode* makeLeafNodeVarArr(char* var, int size, struct Gsymbol *g, int type);

struct ASTNode* makeLeafNodeVar(char* var, struct Gsymbol *g, int type);

struct ASTNode* makeLeafNodeStr(char* var, int type);

int CodeGen(struct ASTNode *t, FILE *targetfile);

int getReg();

void freeReg();

/*
0 - operator
1 - read
2 - write
3 - + - * / =
4 - int
5 - var
6 - if-then-else
7 - if-then
8 - while
9 - break
10 - continue
11 - string
*/