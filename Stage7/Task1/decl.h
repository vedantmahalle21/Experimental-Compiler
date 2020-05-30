extern int adrs;
extern int rettype;
extern int sz;
extern int fi;
extern int fj;
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
	struct ClassTable *Ctype;
}Gsymbol;

typedef struct ClassTable {
 	char *name;                           //name of the class
	struct FieldList *Memberfield;        //pointer to Fieldlist 
	struct MemberFuncList *Vfuncptr;      //pointer to Memberfunclist
	struct ClassTable *Parentptr;         //pointer to the parent's class table
	int Class_index;                      //position of the class in the virtual function table
	int Fieldcount;                       //count of fields
  	int Methodcount;                      //count of methods
	struct ClassTable *next;              //pointer to next class table entry
}ClassTable;

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
}TypeTable;

typedef struct FieldList{
	char *name;
	int fieldIndex;
	struct ClassTable *Ctype;
	struct TypeTable *typet;
	struct FieldList *next;
}FieldList;

typedef struct MemberFuncList {
 	char *name;                      //name of the member function in the class
	struct TypeTable *typet;          //pointer to typetable
	struct Paramstruct *paramlist;   //pointer to the head of the formal parameter list
	int Funcposition;                //position of the function in the class table
 	int Flabel;                      //A label for identifying the starting address of the function's code in the memory
	struct MemberFuncList *next;     //pointer to next Memberfunclist entry
}MemberFuncList;

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
	struct ClassTable *Ctype;
	struct ArgStruct *Arg;
}ASTNode;

typedef struct ArgStruct
{
	struct ASTNode *t;
	struct ArgStruct *next;
}ArgStruct;

void TDisplay(struct TypeTable *t);

struct MemberFuncList *MLookup(char *name1);

struct ClassTable *newClass(char *name);

struct ASTNode* makeOperationNodeC(char* op, struct ASTNode *l, struct ClassTable *t, int type);

struct ClassTable *CLookup(char *name1);

struct Gsymbol *newVariableC(char* name, struct ClassTable *t, int type);

struct FieldList *newField(char* name, struct TypeTable *t);

struct MemberFuncList *CreateFuncDef(struct FieldList *f, struct Paramstruct *p);

struct ASTNode* makeFuncCallNodeC(struct ASTNode *t, struct ASTNode *t1, struct ArgStruct *arg, int type);

void TypeTableCreate();

struct MemberFuncList *LookupM(char *name1, struct ClassTable *c);

struct TypeTable* TLookup(char *name1);

struct TypeTable *newUserType(char* name);

struct ASTNode *makeFuncNodeC(char *name, struct ClassTable *c, int nodetype, int type);

struct FieldList* FLookup(char *name1);

int GetSize (TypeTable* type);

int CodeGen(struct ASTNode *t, FILE *targetfile);

struct MemberFuncList *LookupMemFunc(char* name1, struct MemberFuncList *f);

struct FieldList *LookupField(char* name1, struct FieldList *f);

struct ASTNode *makeNullVar();

void DisplayF();

struct FieldList *LookupF(struct TypeTable *t, char *name1);

struct ASTNode* makeLeafNodeVarC(char* var, struct ClassTable *t, struct TypeTable *c, int nodetype, int type);

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

void makeMNull();

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
23 - classFunc
*/