typedef struct Gsymbol{
	char* name;
	int type;
	int size;
	int binding;
	struct Gsymbol *next;
}Gsymbol;

struct Gsymbol *Lookup(char * name);

void newVariable(char *name, int type);