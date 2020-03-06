extern int adrs;


typedef struct Gsymbol{
	char *name; //name of the variable or function
	int type; //type of the variable:(Integer / String)
	int size; //size of an array
	int address; //static binding of global variables
	struct Paramstruct *paramlist;//pointer to the head of the formal parameter list in the case of functions
	int flabel; //a label for identifying the starting address of a function's code
	struct Gsymbol *next; //points to the next Global Symbol Table entry
}Gsymbol; 

typedef struct Paramstruct{
	char *name; //name of the variable
	int type; //type of the variable:(Integer / String)
	struct Paramstruct *next; //points to the next Local Symbol Table entry
}Paramstruct;

struct Paramstruct *newParam(char* name, int type);

void Display1(struct Paramstruct *t);

struct Gsymbol *Lookup(char * name);

struct Paramstruct *LookupParam(char* name);

struct Gsymbol *newVariable(char *name, int type);

struct Gsymbol *newVariableArr(char *name,int num, int type);

void Display(struct Gsymbol *t);

void makeNULL();
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