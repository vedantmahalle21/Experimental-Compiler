extern int adrs;
extern int rettype;
extern int sz;
extern int fi;
extern struct Lsymbol *head2;
extern struct Paramstruct *head1;

typedef struct Gsymbol{
	char *name; //name of the variable or function
	int type; //type of the variable:(Integer / String)
	int size; //size of an array
	int address; //static binding of global variables
	struct Paramstruct *paramlist;//pointer to the head of the formal parameter list in the case of functions
	int flabel; //a label for identifying the starting address of a function's code
	struct Gsymbol *next; //points to the next Global Symbol Table entry
	struct TypeTable *typet;
	struct ArgStruct *arg;
}Gsymbol; 

typedef struct Paramstruct{
	char *name; //name of the variable
	int type; //type of the variable:(Integer / String)
	struct TypeTable *typet;
	struct Paramstruct *next; //points to the next Local Symbol Table entry
}Paramstruct;

typedef struct Lsymbol{
	char *name;
	struct TypeTable *typet;
	int type;
	int address;
	int size;
	struct Lsymbol *next;
}Lsymbol;

typedef struct TypeTable{
	char *name;
	int size;
	int index;
	struct FieldList *fields;
	struct TypeTable *next;
}Typetable;

typedef struct FieldList{
	char *name;
	int fieldIndex;
	struct TypeTable *typet;
	struct FieldList *next;
}FieldList;

typedef struct ASTNode{
	struct TypeTable *typet;
	int val;
	char* varname;
	int type;
	char *op;
	int nodetype;
	struct ASTNode *left;
	struct ASTNode *right;
	struct ASTNode *middle;
	struct Gsymbol *Gentry;
	struct Lsymbol *Lentry;
	struct ArgStruct *Arg;
}ASTNode;

typedef struct ArgStruct
{
	struct ASTNode *t;
	struct ArgStruct *next;
}ArgStruct;

void TDisplay(struct TypeTable *t);

struct FieldList *newField(char* name, struct TypeTable *t);

void TypeTableCreate();

struct TypeTable* TLookup(char *name1);

struct TypeTable *newUserType(char* name);

struct FieldList* FLookup(char *name1);

int GetSize (Typetable* type);

int CodeGen(struct ASTNode *t, FILE *targetfile);

struct ASTNode *makeNullVar();

struct FieldList *LookupF(struct TypeTable *t, char *name1);

struct Paramstruct *newParam(char* name, int type);

void Display1(struct Paramstruct *t);

struct Gsymbol *Lookup(char * name);

struct Paramstruct *LookupParam(char* name, struct Paramstruct *t);

struct Lsymbol *newLVariable(char* name, struct TypeTable *t, int type);

void DisplayT(struct TypeTable *t);

struct ArgStruct* CreateArg(struct ASTNode *t);

void check(struct Paramstruct *p, struct ArgStruct *arg);

struct Lsymbol *newLVariableArr(char* name, int size, int type);

struct Lsymbol *LookupLocal(char* name1);

struct ASTNode* makeArrayNode(char* var, struct ASTNode *l, int type);

struct ASTNode* makeLeafNodeInt(int n, int type);

void newLVariableG(char* name, struct TypeTable *t, int type);

void makeANull();

void makeFNull();

struct ASTNode* makeLeafNodeVarG(char* var,struct Gsymbol *g, struct TypeTable *t, int nodetype, int type);

struct ASTNode* makeLeafNodeVarL(char* var,struct Lsymbol *l, struct TypeTable *t, int nodetype, int type);

struct ASTNode* makeLeafNodeStr(char* var, int type);

struct ASTNode* makeConnectorNode(struct ASTNode *l, struct ASTNode *r, int type);

struct ASTNode* makeArrayNode(char* var, struct ASTNode *l, int type);

struct ASTNode* makeOperationNode(char* op, struct ASTNode *l, int type);

struct ASTNode* makeOperatorNode(char* op, struct ASTNode *l, struct ASTNode *r, int type);

struct ASTNode* makeConditionalNode(struct ASTNode *l, struct ASTNode *r, struct ASTNode *m, int type);

struct ASTNode* makeUnconditionalNode(char* op, int type);

struct ASTNode* makeFuncNode(char* name, int nodetype, struct Gsymbol *g, int type);

struct Gsymbol *newVariable(char *name, struct TypeTable *t, int type);

struct Gsymbol *newVariableArr(char *name,int num, int type);

void DisplayL(struct Lsymbol *t);

struct ASTNode* makeFuncCallNode(struct ASTNode *t, struct ArgStruct *arg, int type);

void Display(struct Gsymbol *t);

void makeLNull();

void makeNULL();

void freeReg();

int getReg();
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
12 - array
13 - func body
14 - return stmt
15 - func call
16 - comparision
17 - null
18 - alloc
19 - user defined type
20 - user defined type object
21 - initialize
22 - free
*/