int adrs = 4097;
int il = 0;
int fi = 1;
int fj = 1;
int sz =0;
int l =0;
int id = 5;
int k = -1;
int w = 0;
int ar[1000];
int ar1[1000];
int main_address;
int z =0;int z1 =0;
int nest[50] = {0};
int no_temp1 = 1;

struct Gsymbol *head = NULL;

struct Paramstruct *head1 = NULL;

struct Lsymbol *head2 = NULL;

struct ArgStruct *head3 = NULL;

struct TypeTable *head4 = NULL;

struct FieldList *head5 = NULL;

struct MemberFuncList *head6 = NULL;

struct ClassTable *head7  = NULL;

void makeNull()
{
    head1 = NULL;
}

void makeLNull()
{
    head2 = NULL;
    il =0;
}

void makeANull()
{
    head3 = NULL;
}

void makeFNull()
{
    head5 = NULL;
}

void makeMNull()
{
    head6 = NULL;
}

struct ClassTable *newClass(char *name){
    struct ClassTable *temp;
    temp = (struct ClassTable*)malloc(sizeof(struct ClassTable));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, name);
    temp->name = name1;
    temp->Parentptr = NULL;
    temp->next = NULL;
    if(head7 == NULL){
        head7 = temp;
        return temp;
    } 
    else{
        struct ClassTable *temp1;
        temp1 = head7;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
        return temp;
    }
    printf("New Class Created %s\n", name1);
}

struct ClassTable *CLookup(char *name1){
    struct ClassTable *temp = head7;
    if(temp == NULL){
            return temp;
        }
    else{
        int cmp = strcmp(temp->name,name1);
        if(cmp != 0){
            do
            {
                temp = temp->next;
                if(temp == NULL)
                {
                    break;
                }
                cmp = strcmp(temp->name,name1);
                
            }while(cmp != 0);
        }
        return temp;
    }
}

struct MemberFuncList *CreateFuncDef(struct FieldList *f, struct Paramstruct *p){
    struct MemberFuncList *temp;
    struct FieldList *temp2 = f;
    while(temp2->next->next != NULL){
        temp2 = temp2->next;
    }
    struct FieldList *temp3 = temp2;
    temp2 = temp2->next;
    //printf("%s\n", temp2->name);
    temp = (struct MemberFuncList*)malloc(sizeof(struct MemberFuncList));
    temp->name = temp2->name;
    //printf("sd...%s\n", temp2->typet->name);
    temp->typet = temp2->typet;
    temp->paramlist  = p;
    temp->Funcposition = fj;
    temp->Flabel = fj;
    fj++;
    temp->next = NULL;
    fi--;
    printf("Class func %s\n", temp2->name);
    temp3->next = NULL;
    if(head6 == NULL){
        head6 = temp;
        return head6;
    }
    else{
        struct MemberFuncList *temp1;
        temp1 = head6;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
        return head6;
    }
}

struct MemberFuncList *MLookup(char *name1){
    struct MemberFuncList *temp = head6;
    if(temp == NULL)
        {
            return temp;
        }
        else{
            //printf("%s %s\n", temp->name, name1);
            //printf("%s\n", temp->typet->name);
            int cmp = strcmp(temp->name,name1);
            if(cmp != 0){
        do
        {
            temp = temp->next;
            if(temp == NULL)
            {
                break;
            }
            //printf("%s %s\n", temp->name, name1);
            //printf("%s\n", temp->typet->name);
            cmp = strcmp(temp->name,name1);
            
        }while(cmp != 0);
    }
        return temp;
    }
}

struct MemberFuncList *LookupM(char *name1, struct ClassTable *c){
    struct MemberFuncList *temp = c->Vfuncptr;
    if(temp == NULL)
        {
            return temp;
        }
        else{
            //printf("%s %s\n", temp->name, name1);
            //printf("%s\n", temp->typet->name);
            int cmp = strcmp(temp->name,name1);
            if(cmp != 0){
        do
        {
            temp = temp->next;
            if(temp == NULL)
            {
                break;
            }
            //printf("%s %s\n", temp->name, name1);
            //printf("%s\n", temp->typet->name);
            cmp = strcmp(temp->name,name1);
            
        }while(cmp != 0);
    }
        return temp;
    }
}

struct ASTNode *makeFuncNodeC(char *name, struct ClassTable *c, int nodetype, int type){
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, name);
    temp->op = NULL;
    temp->val = 0;
    temp->varname = name1;
    temp->left = NULL;
    temp->Arg = NULL;
    temp->right = NULL;
    temp->Lentry = NULL;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    temp->Ctype = c;
    temp->typet = NULL;
    temp->nodetype = nodetype;
    printf("Class Function Node with %s with ntype %d\n", name1, nodetype);
    return temp;
}

void TypeTableCreate()
{
    struct TypeTable *temp;
    temp = (struct TypeTable*)malloc(sizeof(struct TypeTable));
    struct TypeTable *temp1;
    temp1 = (struct TypeTable*)malloc(sizeof(struct TypeTable));
    struct TypeTable *temp2;
    temp2 = (struct TypeTable*)malloc(sizeof(struct TypeTable));
    struct TypeTable *temp3;
    temp3 = (struct TypeTable*)malloc(sizeof(struct TypeTable));
    temp->name = "int";
    temp->size = 1;
    temp->index = 1;
    temp->fields = NULL;
    head4 = temp;
    temp1->name = "str";
    temp1->size = 1;
    temp1->index = 2;
    temp1->fields = NULL;
    temp2->name = "boolean";
    temp2->size = 1;
    temp2->index = 3;
    temp2->fields = NULL;
    temp3->name = "void";
    temp3->size = 1;
    temp3->index = 4;
    temp3->fields = NULL;
    temp3->next = NULL;
    temp->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
}

struct TypeTable* TLookup(char *name1)
{
    struct TypeTable *temp = head4;
        if(head4 == NULL)
        {
            return head4;
        }
        else{
            int cmp = strcmp(temp->name,name1);
            if(cmp != 0){
        do
        {
            temp = temp->next;
            if(temp == NULL)
            {
                break;
            }
            cmp = strcmp(temp->name,name1);
            
        }while(cmp != 0);
    }
        return temp;
    }
}

struct TypeTable *newUserType(char* name)
{
    struct TypeTable *temp;
    temp = (struct TypeTable*)malloc(sizeof(struct TypeTable));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, name);
    temp->name = name1;
    temp->size = 0;
    temp->index = id;
    id++;
    temp->fields = NULL;
    temp->next = NULL;
    if(head4 == NULL)
    {
        head4 = temp;
        printf("UserType Declaration %s\n", name1);
        return head4;
    }
    else
    {   
        struct TypeTable *temp1;
        temp1 = head4;
        while(temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
        printf("UserType Declaration %s\n", name1);
        return temp1->next;
    }
}

struct FieldList *newField(char* name, struct TypeTable *t)
{
    struct FieldList *temp;
    temp = (struct FieldList*)malloc(sizeof(struct FieldList));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, name);
    temp->name = name1;
    temp->fieldIndex = fi;
    fi++;
    sz++;
    temp->typet = t;
    if(head5 == NULL)
    {
        head5 = temp;
        printf("Field Declaration %s with type %s and FI %d\n", name1, t->name,temp->fieldIndex);
        return head5;
    }
    else
    {   
        struct FieldList *temp1;
        temp1 = head5;
        while(temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
        printf("Field Declaration %s with type %s and FI %d\n", name1, t->name, temp->fieldIndex);
        return head5;
    }
}

struct FieldList* FLookup(char *name1)
{
    struct FieldList *temp = head5;
    if(temp == NULL)
        {
            return temp;
        }
        else{
            int cmp = strcmp(temp->name,name1);
            if(cmp != 0){
        do
        {
            temp = temp->next;
            if(temp == NULL)
            {
                break;
            }
            cmp = strcmp(temp->name,name1);
            
        }while(cmp != 0);
    }
        return temp;
    }
}

struct FieldList *LookupF(struct TypeTable *t, char *name1)
{
    struct FieldList *temp = t->fields;
    if(temp == NULL)
        {
            return temp;
        }
        else{
            int cmp = strcmp(temp->name,name1);
            if(cmp != 0){
                do
                {
                    temp = temp->next;
                    if(temp == NULL)
                    {
                        break;
                    }
                    cmp = strcmp(temp->name,name1);        
                }while(cmp != 0);
        }
        return temp;
    }
}

struct FieldList *LookupField(char* name1, struct FieldList *f)
{
    struct FieldList *temp = f;
    if(temp == NULL)
        {
            return temp;
        }
        else{
            int cmp = strcmp(temp->name,name1);
            if(cmp != 0){
                do
                {
                    temp = temp->next;
                    if(temp == NULL)
                    {
                        break;
                    }
                    cmp = strcmp(temp->name,name1);        
                }while(cmp != 0);
        }
        return temp;
    }
}

struct MemberFuncList *LookupMemFunc(char* name1, struct MemberFuncList *f)
{
    struct MemberFuncList *temp = f;
    if(temp == NULL)
        {
            return temp;
        }
        else{
            int cmp = strcmp(temp->name,name1);
            if(cmp != 0){
                do
                {
                    temp = temp->next;
                    if(temp == NULL)
                    {
                        break;
                    }
                    cmp = strcmp(temp->name,name1);        
                }while(cmp != 0);
        }
        return temp;
    }
}

void DisplayT(struct TypeTable *t)
    {
        printf("%s\n", t->name);
        struct FieldList *temp = t->fields;
        while(temp != NULL)
        {
            printf("%s\n", temp->name);
            temp = temp->next;
        }
    }

int GetSize (TypeTable* type)
{
    return type->size;
}

struct Gsymbol *newVariable(char* name, struct TypeTable *t, int type)
	{
		struct Gsymbol *temp;
    	temp = (struct Gsymbol*)malloc(sizeof(struct Gsymbol));
    	char* name1 = (char*)malloc(sizeof(char*));
    	strcpy(name1, name);
    	temp->name = name1;
    	temp->type = type;
        if(type == 1){
            struct TypeTable *temp1 = TLookup("int");
            temp->typet = temp1;
        }
        else if(type == 2){
            struct TypeTable *temp1 = TLookup("str");
            temp->typet = temp1;
        }
        else{
            temp->typet = t;
        }
    	temp->size = 1;
        temp->paramlist = NULL;
    	temp->address = adrs;
        temp->flabel = 0;
    	adrs++;
    	temp->next = NULL;
    	if(head == NULL)
    	{
    		head = temp;
            printf("Global Declaration %s and address %d and type %d\n", name1, adrs-1, type);
            return head;
    	}
    	else
    	{	
    		struct Gsymbol *temp1;
    		temp1 = head;
    		while(temp1->next != NULL)
    		{
    			temp1 = temp1->next;
    		}
    		temp1->next = temp;
            printf("Global Declaration %s and address %d and type %d\n", name1, adrs-1, type);
            return temp1->next;
    	}
	}

struct Gsymbol *newVariableC(char* name, struct ClassTable *t, int type)
    {
        struct Gsymbol *temp;
        temp = (struct Gsymbol*)malloc(sizeof(struct Gsymbol));
        char* name1 = (char*)malloc(sizeof(char*));
        strcpy(name1, name);
        temp->name = name1;
        temp->type = type;
        temp->Ctype = t;
        temp->typet = NULL;
        temp->size = 1;
        temp->paramlist = NULL;
        temp->address = adrs;
        temp->flabel = 0;
        adrs++;
        temp->next = NULL;
        if(head == NULL)
        {
            head = temp;
            printf("Global Declaration %s and address %d and type %d\n", name1, adrs-1, type);
            return head;
        }
        else
        {   
            struct Gsymbol *temp1;
            temp1 = head;
            while(temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = temp;
            printf("Global Declaration %s and address %d and type %d\n", name1, adrs-1, type);
            return temp1->next;
        }
    }


struct Gsymbol *newVariableArr(char* name, int size, int type)
    {
        struct Gsymbol *temp;
        temp = (struct Gsymbol*)malloc(sizeof(struct Gsymbol));
        char* name1 = (char*)malloc(sizeof(char*));
        strcpy(name1, name);
        temp->name = name1;
        temp->type = type;
        temp->size = size;
        temp->address = adrs;
        temp->flabel = 0;
        adrs = adrs + size;
        if(type == 1){
            struct TypeTable *temp1 = TLookup("int");
            temp->typet = temp1;
        }
        else if(type == 2){
            struct TypeTable *temp1 = TLookup("str");
            temp->typet = temp1;
        }
        else{
            temp->typet = NULL;
        }
        temp->next = NULL;
        if(head == NULL)
        {
            head = temp;
            printf("Global Declaration %s with size %d and address %d\n", name1, size, adrs-size);
            return head;
        }
        else
        {   
            struct Gsymbol *temp1;
            temp1 = head;
            while(temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = temp;
            printf("Global Declaration %s with size %d and address %d\n", name1, size, adrs-size);
            return temp1->next;
        }

    }

struct Gsymbol *Lookup(char* name1)
    {
        struct Gsymbol *temp = head;
        if(head == NULL)
        {
            return head;
        }
        else{
            int cmp = strcmp(temp->name,name1);
            if(cmp != 0){
        do
        {
            temp = temp->next;
            if(temp == NULL)
            {
                break;
            }
            cmp = strcmp(temp->name,name1);
            
        }while(cmp != 0);
    }
        return temp;
    }
    } 

void DisplayF(){
    struct FieldList *temp = head5;
    while(temp != NULL){
        printf("%s\n", temp->name);
        temp = temp->next;
    }
}

void Display(struct Gsymbol *t)
    {
        struct Gsymbol *temp = t;
        while(temp != NULL)
        {
            printf("%s\n", temp->name);
            if(temp->paramlist != NULL){
            }
            temp = temp->next;
        }
    }

struct Lsymbol *newLVariable(char* name, struct TypeTable *t, int type)
    {
        struct Lsymbol *temp;
        temp = (struct Lsymbol*)malloc(sizeof(struct Lsymbol));
        char* name1 = (char*)malloc(sizeof(char*));
        strcpy(name1, name);
        temp->name = name1;
        temp->type = type;
        temp->address = 0;
        temp->size = 1;
        temp->next = NULL;
        if(type == 1){
            struct TypeTable *temp1 = TLookup("int");
            temp->typet = temp1;
        }
        else if(type == 2){
            struct TypeTable *temp1 = TLookup("str");
            temp->typet = temp1;
        }
        else{
            temp->typet = t;
        }
        if(head2 == NULL){
            head2 = temp;
            printf("Local Declaration ..%s\n", name1);
            return head2;
        }
        else{   
            struct Lsymbol *temp1;
            temp1 = head2;
            while(temp1->next != NULL){
                temp1 = temp1->next;
            }
            temp1->next = temp;
            printf("Local Declaration ..%s\n", name1);
            return head2;
        }
    }

void newLVariableG(char* name, struct TypeTable *t, int type)
    {
        struct Lsymbol *temp;
        temp = (struct Lsymbol*)malloc(sizeof(struct Lsymbol));
        char* name1 = (char*)malloc(sizeof(char*));
        strcpy(name1, name);
        temp->name = name1;
        temp->type = type;
        temp->address = 0;
        temp->size = 1;
        temp->typet = t;
        temp->next = NULL;
        if(head2 == NULL){
            head2 = temp;
        }
        else{   
            struct Lsymbol *temp1;
            temp1 = head2;
            while(temp1->next != NULL){
                temp1 = temp1->next;
            }
            temp1->next = temp;
        }
        printf("Local Declaration %s\n", name1);
        DisplayL(head2);
    }

struct Lsymbol *newLVariableArr(char* name, int size, int type)
    {
        struct Lsymbol *temp;
        temp = (struct Lsymbol*)malloc(sizeof(struct Lsymbol));
        char* name1 = (char*)malloc(sizeof(char*));
        strcpy(name1, name);
        temp->name = name1;
        temp->type = type;
        temp->size = size;
        temp->address = 0;
        temp->next = NULL;
        if(type == 1){
            struct TypeTable *temp1 = TLookup("int");
            temp->typet = temp1;
        }
        else if(type == 2){
            struct TypeTable *temp1 = TLookup("str");
            temp->typet = temp1;
        }
        else{
            temp->typet = NULL;
        }
        if(head2 == NULL){
            head2 = temp;
            printf("Local Declaration %s with size %d\n", name1, size);
            return head2;
        }
        else{   
            struct Lsymbol *temp1;
            temp1 = head2;
            while(temp1->next != NULL){
                temp1 = temp1->next;
            }
            temp1->next = temp;
            printf("Local Declaration %s with size %d\n", name1, size);
            return head2;
        }
    }

struct Lsymbol *LookupLocal(char* name1)
    {
        struct Lsymbol *temp = head2;
        if(temp == NULL){
            return temp;
        }
        else{
            int cmp = strcmp(temp->name,name1);
            if(cmp != 0){
                do{
                    temp = temp->next;
                    if(temp == NULL){
                            break;
                    }
                cmp = strcmp(temp->name,name1);
                }while(cmp != 0);
            }
            return temp;
        }
    } 

void DisplayL(struct Lsymbol *l)
    {
        struct Lsymbol *temp = l;
        il=0;
        while(temp != NULL)
        {
            printf("%s\n", temp->name);
            temp = temp->next;
            il++;
        }
    }

struct Paramstruct *newParam(char* name, int type)
    {
        struct Paramstruct *temp;
        temp = (struct Paramstruct*)malloc(sizeof(struct Paramstruct));
        char* name1 = (char*)malloc(sizeof(char*));
        strcpy(name1, name);
        temp->name = name1;
        temp->type = type;
        if(type == 1){
            struct TypeTable *temp1 = TLookup("int");
            temp->typet = temp1;
        }
        else if(type == 2){
            struct TypeTable *temp1 = TLookup("str");
            temp->typet = temp1;
        }
        else{
            temp->typet = NULL;
        }
        temp->next = NULL;
        if(head1 == NULL)
        {
            head1 = temp;
        }
        else
        {   
            struct Paramstruct *temp1;
            temp1 = head1;
            while(temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = temp;
        }
        printf("Param Declaration %s\n", name1);
        return head1;
    }



struct Paramstruct *LookupParam(char* name1, struct Paramstruct *t)
    {
        struct Paramstruct *temp = t;
        if(t == NULL)
        {
            return t;
        }
        else{
            int cmp = strcmp(temp->name,name1);
            if(cmp != 0){
        do
        {
            temp = temp->next;
            if(temp == NULL)
            {
                break;
            }
            cmp = strcmp(temp->name,name1);
            
        }while(cmp != 0);
    }
        return temp;
    }
    } 

void Display1(struct Paramstruct *t)
    {
        struct Paramstruct *temp4 = t;
        while(temp4 != NULL)
        {
            printf("%s\n", temp4->name);
            temp4 = temp4->next;
        }
    }

void TDisplay(struct TypeTable *t){
    while(t != NULL){
        printf("%s\n", t->name);
        t = t->next;
    }
}

struct ArgStruct* CreateArg(struct ASTNode *t)
    {
        struct ArgStruct *temp;
        temp = (struct ArgStruct*)malloc(sizeof(struct ArgStruct));
        temp->t = t;
        temp->next = NULL;
        if(head3 == NULL){
            head3 = temp;
            printf("Arg Creaated with type %d\n", t->type);
            return head3;
        }
        else{
            struct ArgStruct *temp1;
            temp1 = head3;
            while(temp1->next != NULL){
                temp1 = temp1->next;
            }
            temp1->next = temp;
            printf("Arg Creaated with type %d\n", t->type);
            return head3;
        }
    }

void check(struct Paramstruct *p, struct ArgStruct *arg)
{
    while(p != NULL){
        if(p->type != arg->t->nodetype){
            //printf("%d %d\n", p->type, arg->t->nodetype);
            printf("Arguments does not match1\n");
            exit(-1);
        }
        //printf("%d %d\n", p->type, arg->t->nodetype);
        p = p->next;
        arg = arg->next;
    }
    if(arg != NULL){
        printf("Arguments does not match2\n");
        exit(-1);
    }
}

struct ASTNode* makeNullVar(){
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->val = 0;
    temp->varname = "NULL";
    temp->left = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    temp->Arg = NULL;
    temp->type = 17;
    temp->Lentry = NULL;
    temp->Gentry = NULL;
    temp->nodetype = 3;
    temp->typet = NULL;
    printf("leaf node with NULL\n");
    return temp;
}

struct ASTNode* makeLeafNodeInt(int n, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->val = n;
    temp->varname = NULL;
    temp->left = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    if(type == 1){
            struct TypeTable *temp1 = TLookup("int");
            temp->typet = temp1;
    }
    else{
        temp->typet = NULL;
    }
    temp->Arg = NULL;
    temp->type = type;
    temp->Lentry = NULL;
    temp->Gentry = NULL;
    temp->nodetype = 1;
    printf("leaf node with %d\n", n);
    return temp;
}

struct ASTNode* makeLeafNodeStr(char* var, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, var);
    temp->op = NULL;
    temp->val = 0;
    temp->varname = name1;
    temp->left = NULL;
    temp->Arg = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    if(type == 2){
            struct TypeTable *temp1 = TLookup("str");
            temp->typet = temp1;
    }
    else{
        temp->typet = NULL;
    }
    temp->type = type;
    temp->Lentry = NULL;
    temp->Gentry = NULL;
    printf("leaf node with %s %d\n", var, type);
    return temp;
}

struct ASTNode* makeLeafNodeVarG(char* var,struct Gsymbol *g, struct TypeTable *t,int nodetype, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, var);
    temp->op = NULL;
    temp->val = 0;
    temp->varname = name1;
    temp->left = NULL;
    temp->right = NULL;
    temp->Arg = NULL;
    temp->typet = t;
    if(g->Ctype != NULL){
        temp->Ctype = g->Ctype;
    }
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = g;
    temp->Lentry = NULL;
    temp->nodetype = nodetype;
    printf("leaf node with %s\n", var);
    return temp;
}

struct ASTNode* makeLeafNodeVarL(char* var,struct Lsymbol *l,struct TypeTable *t, int nodetype, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, var);
    temp->op = NULL;
    temp->val = 0;
    temp->varname = name1;
    temp->left = NULL;
    temp->right = NULL;
    temp->Arg = NULL;
    temp->typet = t;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    temp->Lentry = l;
    temp->nodetype = nodetype;
    printf("leaf node with a %s with type %d and t %d\n", var, temp->nodetype, type);
    return temp;
}

struct ASTNode* makeLeafNodeVarC(char* var, struct ClassTable *c, struct TypeTable *t, int nodetype, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, var);
    temp->op = NULL;
    temp->val = 0;
    temp->varname = name1;
    temp->left = NULL;
    temp->right = NULL;
    temp->Arg = NULL;
    temp->typet = t;
    temp->Ctype = c;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    temp->Lentry = NULL;
    if(t->name == "int"){
        temp->nodetype = 1;
    }
    else if(t->name == "str"){
        temp->nodetype = 2;
    }
    else{
        temp->nodetype = 3;
    }
    printf("leaf node with a %s with type %d and t %d\n", var, temp->nodetype, type);
    return temp;
}

struct ASTNode* makeArrayNode(char* var, struct ASTNode *l, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, var);
    struct Gsymbol* temp1 = Lookup(name1);
    if(l->type == 5){
        if(l->nodetype != 1){
            printf("Typematch error1\n");
            exit(1);
        }
    }
    else if(l->type == 6){
        printf("Typematch error2\n");
        exit(1);
    }
    temp->op = NULL;
    temp->val = 0;
    temp->varname = name1;
    temp->left = l;
    temp->Arg = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    temp->type = type;
    if(temp1 != NULL){
        temp->Gentry = temp1;
        if(temp1->type == 1){
            temp->nodetype = 1;
            struct TypeTable *temp1 = TLookup("int");
            temp->typet = temp1;

        }
        else{
            temp->nodetype = 2;
            struct TypeTable *temp1 = TLookup("int");
            temp->typet = temp1;
        }
    }
    else{
        printf("error Array not declared\n");
        exit(1);
    }
    printf("Array node with %s, %d\n", temp->varname, type);
    return temp;
}


struct ASTNode* makeConnectorNode(struct ASTNode *l, struct ASTNode *r, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->Arg = NULL;
    temp->val = 0;
    temp->left = l;
    temp->varname = NULL;
    temp->right = r;
    temp->middle = NULL;
    printf("connector node with both\n");
    temp->Lentry = NULL;
    temp->typet = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    return temp;
}

struct ASTNode* makeOperationNode(char* op, struct ASTNode *l, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    if(l->type == 5){
        struct Lsymbol *temp2 = LookupLocal(l->varname);
        if(temp2 == NULL){
            struct Gsymbol *temp1 = Lookup(l->varname);
            if(temp1->size != 1){
                printf("Array index error\n");
                exit(-1);
            }
        }
    }
    temp->op = op;
    temp->val = 0;
    temp->varname = NULL;
    temp->Arg = NULL;
    temp->left = l;
    temp->Lentry = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    temp->typet = NULL;
    printf("operation node with %s %d\n", op, l->type);
    /*if(l->type == 4)
    {
        printf("A%d\n", l->val);
    }
    else if(l->type == 5)
    {
        printf("A%s\n", l->varname);
    }
    else if(l->type == 12)
    {
        if(l->Gentry != NULL){
            printf("A%s\n", l->Gentry->name);
            printf("B%d\n", l->left->type);
        }
        else{
            printf("A%s\n", l->Lentry->name);
            printf("B%d\n", l->left->type);
        }
    }
    else if(l->type == 3)
    {
        printf("A%s\n", l->op);
    }*/
    return temp;
}

struct ASTNode* makeOperationNodeC(char* op, struct ASTNode *l, struct ClassTable *t, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, op);
    temp->op = name1;
    temp->val = 0;
    temp->varname = NULL;
    temp->Arg = NULL;
    temp->left = l;
    temp->Lentry = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    temp->Ctype = t;
    temp->type = type;
    temp->Gentry = NULL;
    temp->typet = NULL;
    printf("New node with %s %s\n", op, t->name);
    return temp;
}

struct ASTNode* makeOperatorNode(char* op, struct ASTNode *l, struct ASTNode *r, int type)
{
    if(l->nodetype != r->nodetype){
        //printf("%d, %d\n", l->nodetype, r->nodetype);
        printf("Typematch error3..\n");
        exit(1);
    }
    else if(l->nodetype == 3 && r->nodetype == 3){
        if(l->typet != r->typet && r->varname != "NULL"){
            //printf("%s\n",r->typet->name);
            //printf("%s, ",l->typet->name);
            printf("Typematch error3\n");
            exit(1);
        }
    }
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = op;
    temp->val = 0;
    temp->varname = NULL;
    temp->left = l;
    temp->typet = l->typet;
    temp->Lentry = NULL;
    temp->right = r;
    temp->middle = NULL;
    temp->Arg = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    temp->nodetype = l->nodetype;
    printf("operator node with %s, %d, %d\n", op, l->type, r->type);
    /*if(l->type == 4)
    {
        printf("%d\n", l->val);
    }
    else if(l->type == 5)
    {
        printf("%s\n", l->varname);
    }
    else if(l->type == 12)
    {
        if(l->Gentry != NULL){
            printf("G%s\n", l->Gentry->name);
        }
        else{
            printf("L%s\n", l->Lentry->name);
        }
    }
    else if(l->type == 3)
    {
        printf("%s\n", l->op);
    }
    if(r->type == 4)
    {
        printf("%d\n", r->val);
    }
    else if(r->type == 5)
    {
        printf("%s\n", r->varname);
    }
    else if(r->type == 12)
    {
        if(r->Gentry != NULL){
            printf("G%s\n", r->Gentry->name);
        }
        else{
            printf("L%s\n", r->Lentry->name);
        }
    }
    else if(r->type == 3)
    {
        printf("%s\n", r->op);
    }*/
    return temp;
}

struct ASTNode* makeConditionalNode(struct ASTNode *l, struct ASTNode *r, struct ASTNode *m, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->Lentry = NULL;
    temp->val = 0;
    temp->left = l;
    temp->Arg = NULL;
    temp->varname = NULL;
    temp->right = r;
    if(type == 6){
        temp->middle = m;
        printf("condtional node with %d\n", type);
    }
    else{
        temp->middle = NULL;
        printf("condtional node with %d\n", type);
    }
    temp->type = type;
    temp->Gentry = NULL;
    return temp;
}

struct ASTNode* makeUnconditionalNode(char* op, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->val = 0;
    temp->varname = NULL;
    temp->Lentry = NULL;
    temp->left = NULL;
    temp->Arg = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    return temp;
}

struct ASTNode* makeFuncNode(char* name, int nodetype,struct Gsymbol *g, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, name);
    temp->op = NULL;
    temp->val = 0;
    temp->varname = name1;
    temp->left = NULL;
    temp->Arg = NULL;
    temp->right = NULL;
    temp->Lentry = NULL;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = g;
    temp->typet = NULL;
    temp->nodetype = nodetype;
    printf("Function Node with %s\n", name1);
    return temp;
}

struct ASTNode* makeFuncCallNode(struct ASTNode *t, struct ArgStruct *arg, int type){
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->val = 0;
    temp->varname = NULL;
    temp->left = t;
    temp->Arg = arg;
    temp->right = NULL;
    temp->Lentry = NULL;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    temp->nodetype = t->nodetype;
    if(t->nodetype == 3){
        temp->typet = t->typet;
    }
    else{
        temp->typet = NULL;
    }
    printf("Function call node with %s and ntype %d\n", t->varname, t->nodetype);
    return temp;
}

struct ASTNode* makeFuncCallNodeC(struct ASTNode *t, struct ASTNode *t1, struct ArgStruct *arg, int type){
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->val = 0;
    temp->varname = NULL;
    temp->left = t;
    temp->Arg = arg;
    temp->right = t1;
    temp->Ctype = t1->Ctype;
    temp->Lentry = NULL;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    temp->nodetype = t->nodetype;
    if(t->nodetype == 3){
        temp->typet = t->typet;
    }
    else{
        temp->typet = NULL;
    }
    printf("Function call node with %s and ntype %d\n", t->varname, t->nodetype);
    return temp;
}