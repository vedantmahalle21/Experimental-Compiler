int adrs = 4097;
int il = 0;
int fi = 1;
int fj = 0;
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
    fi = 1;
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
        //printf("New Class Created %s\n", name1);
        return temp;
    } 
    else{
        struct ClassTable *temp1;
        temp1 = head7;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
        //printf("New Class Created %s\n", name1);
        return temp;
    }
    
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

void DisplayC()
{
    struct ClassTable *temp = head7;
    while(temp != NULL){
        printf("Class %s\n", temp->name);
        printf("With Fields\n");
        struct FieldList *temp1 = temp->Memberfield;
        int d = 1;
        while(temp1 != NULL){
            printf("%d. %s\n", d, temp1->name);
            temp1 = temp1->next;
            d++;
        }
        printf("And Functions\n");
        struct MemberFuncList *temp2 = temp->Vfuncptr;
        int e = 1;
        while(temp2 != NULL){
            printf("%d. %s", e, temp2->name);
            printf("(");
            if(temp2->paramlist != NULL){
                struct Paramstruct *p = temp2->paramlist;
                while(p != NULL){
                    printf("%s", p->name);
                    if(p->next != NULL){
                        printf(",");
                    }
                    p = p->next;
                }
            }
            printf(")");
            printf("\n");
            temp2 = temp2->next;
            e++;
        }
        temp = temp->next;
        printf("\n");
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
    //printf("Class func %s\n", temp2->name);
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
    //printf("Class Function Node with %s with ntype %d\n", name1, nodetype);
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

void DisplayT1(){
    struct TypeTable *t = head4;
    t = t->next;
    t = t->next;
    t = t->next;
    t = t->next;
    while(t != NULL){
        printf("User defined type %s with Fields\n", t->name);
        struct FieldList *t1 = t->fields;
        int d = 0;
        while(t1 != NULL){
            printf("%d. %s\n", d, t1->name);
            d++;
            t1 = t1->next;
        }
        printf("\n");
        t = t->next;
    }
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
        //printf("UserType Declaration %s\n", name1);
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
        //printf("UserType Declaration %s\n", name1);
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
    temp->next = NULL;
    fi++;
    sz++;
    if(t != NULL){
        temp->typet = t;
    }
    else{
        temp->typet = NULL;
    }
    if(head5 == NULL)
    {
        head5 = temp;
        if(t != NULL){
            //printf("Field Declaration %s with type %s and FI %d\n", name1, t->name,temp->fieldIndex);
        }
        else{
            //printf("Field Declaration %s with type C and FI %d\n", name1, temp->fieldIndex);            
        }
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
        //printf("Field Declaration %s with type %s and FI %d\n", name1, t->name, temp->fieldIndex);
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
            //printf("Global Declaration %s and address %d and type %d\n", name1, adrs-1, type);
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
            //printf("Global Declaration %s and address %d and type %d\n", name1, adrs-1, type);
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
            //printf("Global Declaration %s and address %d and type %d\n", name1, adrs-1, type);
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
            //printf("Global Declaration %s and address %d and type %d\n", name1, adrs-1, type);
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
        int d = 0;
        printf("Global Declarations\n");
        while(temp != NULL)
        {
            printf("%d. %s\n", d, temp->name);
            if(temp->paramlist != NULL){
                struct Paramstruct *p = temp->paramlist;
                while(p != NULL){
                    printf("..%s\n", p->name);
                    p = p->next;
                }
            }
            temp = temp->next;
            d++;
        }
        printf("\n");
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
            //printf("Local Declaration ..%s\n", name1);
            return head2;
        }
        else{   
            struct Lsymbol *temp1;
            temp1 = head2;
            while(temp1->next != NULL){
                temp1 = temp1->next;
            }
            temp1->next = temp;
            //printf("Local Declaration ..%s\n", name1);
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
        //printf("Local Declaration %s\n", name1);
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
            //printf("Local Declaration %s with size %d\n", name1, size);
            return head2;
        }
        else{   
            struct Lsymbol *temp1;
            temp1 = head2;
            while(temp1->next != NULL){
                temp1 = temp1->next;
            }
            temp1->next = temp;
            //printf("Local Declaration %s with size %d\n", name1, size);
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
        int d= 0;
        while(temp != NULL)
        {
            printf("%d. %s\n", d, temp->name);
            temp = temp->next;
            il++;
            d++;
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
        //printf("Param Declaration %s\n", name1);
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
            //printf("Arg Creaated with type %d\n", t->type);
            return head3;
        }
        else{
            struct ArgStruct *temp1;
            temp1 = head3;
            while(temp1->next != NULL){
                temp1 = temp1->next;
            }
            temp1->next = temp;
            //printf("Arg Creaated with type %d\n", t->type);
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
    temp->Ctype = NULL;
    temp->type = 17;
    temp->Lentry = NULL;
    temp->Gentry = NULL;
    temp->nodetype = 3;
    temp->typet = NULL;
    //printf("leaf node with NULL\n");
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
    temp->Ctype = NULL;
    temp->Gentry = NULL;
    temp->nodetype = 1;
    //printf("leaf node with %d\n", n);
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
    temp->Ctype = NULL;
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
    //printf("leaf node with %s %d\n", var, type);
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
    else{
        temp->Ctype = NULL;
    }
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = g;
    temp->Lentry = NULL;
    temp->nodetype = nodetype;
    //printf("leaf node with %s\n", var);
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
    temp->Ctype = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    temp->Lentry = l;
    temp->nodetype = nodetype;
    //printf("leaf node with a %s with type %d and t %d\n", var, temp->nodetype, type);
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
    if(t != NULL){
        temp->typet = t;
    }
    else{
        temp->typet = NULL;
    }
    temp->Ctype = c;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    temp->Lentry = NULL;
    if(t != NULL){
        if(t->name == "int"){
            temp->nodetype = 1;
        }
        else if(t->name == "str"){
            temp->nodetype = 2;
        }
        else{
            temp->nodetype = 3;
        }
        //printf("leaf node with aa %s with type %d and t %d\n", var, temp->nodetype, type);
    }
    else{
        temp->nodetype = 4;
        //printf("leaf node with aa %s with type %d and t %d\n", var, temp->nodetype, type);   
    }
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
    temp->Ctype = NULL;
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
    //printf("Array node with %s, %d\n", temp->varname, type);
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
    temp->Ctype = NULL;
    temp->varname = NULL;
    temp->right = r;
    temp->middle = NULL;
    //printf("connector node with both\n");
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
    temp->Ctype = NULL;
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
    //printf("operation node with %s %d\n", op, l->type);
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
    //printf("New node with %s %s\n", op, t->name);
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
    temp->Ctype = NULL;
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
    //printf("operator node with %s, %d, %d\n", op, l->type, r->type);
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
    temp->Ctype = NULL;
    temp->left = l;
    temp->Arg = NULL;
    temp->varname = NULL;
    temp->right = r;
    if(type == 6){
        temp->middle = m;
        //printf("condtional node with %d\n", type);
    }
    else{
        temp->middle = NULL;
        //printf("condtional node with %d\n", type);
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
    temp->Ctype = NULL;
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
    temp->Ctype = NULL;
    temp->left = NULL;
    temp->Arg = NULL;
    temp->right = NULL;
    temp->Lentry = NULL;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = g;
    temp->typet = NULL;
    temp->nodetype = nodetype;
    //printf("Function Node with %s\n", name1);
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
    temp->Ctype = NULL;
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
    //printf("Function call node with %s and ntype %d\n", t->varname, t->nodetype);
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
    temp->Ctype = t->Ctype;
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
    //printf("Function call node with %s and ntype %d and %s\n", t->varname, t->nodetype, t->Ctype->name);
    return temp;
}

int CodeGen(struct ASTNode *t, FILE *targetfile)
{
    int i,j,q,r,s,s1,p,t1,l1,l2;
    char* c, strg;
    int flag = 0;
    if(t->type == 13){
        //printf("type.%d\n", t->type);
        int kl = strcmp(t->varname, "main");
        if(kl == 0){
            fprintf(targetfile, "MOV BP, SP\n");
            p = getReg();
            struct Lsymbol *temp = t->Lentry;
            int u = 1;
            while(temp != NULL){
                fprintf(targetfile, "PUSH R%d\n", p);
                temp->address = u;
                u++;
                temp = temp->next;
            }
            freeReg();
            //printf("Func Body\n");
            i = CodeGen(t->left, targetfile);
            //printf("Func Ret\n");
            j = CodeGen(t->right, targetfile);
            //printf("Main Completed\n");
            return -1;
        }
        else{
            int temp_ar;
            if(t->Ctype == NULL){
                temp_ar = 1;
            }
            else{
                temp_ar = 2;
            }
            fprintf(targetfile, "PUSH BP\n");
            fprintf(targetfile, "MOV BP, SP\n");
            p = getReg();
            struct Lsymbol *temp = t->Lentry;
            int u = 1;
            struct Paramstruct *Param_temp;
            if(t->Gentry != NULL){
                Param_temp = t->Gentry->paramlist;
            }
            else{
                struct MemberFuncList *mem_temp = MLookup(t->varname);
                Param_temp = mem_temp->paramlist;
            }
            while(temp != NULL){
                struct Paramstruct *temp1 = LookupParam(temp->name, Param_temp);
                if(temp1 == NULL){
                    fprintf(targetfile, "PUSH R%d\n", p);
                    temp->address = u;
                    u++;
                }
                else{
                    temp->address = -(temp_ar+2);
                    temp_ar++;
                }
                temp = temp->next;
            }
            freeReg();
            //printf("Func Body\n");
            if(t->left != NULL){
                i = CodeGen(t->left, targetfile);
            }
            //freeReg();
            q = getReg();
            //printf("Func Ret\n");
            while(u > 1){
                fprintf(targetfile, "POP R%d\n", q);
                u--;
            }
            freeReg();
            j = CodeGen(t->right, targetfile);
            p = getReg();
            fprintf(targetfile, "MOV R%d, BP\n", p);
            fprintf(targetfile, "SUB R%d, 2\n", p);
            fprintf(targetfile, "MOV [R%d], R%d\n", p, j);
            freeReg();
            freeReg();
            fprintf(targetfile, "MOV BP, [BP]\n");
            q = getReg();
            fprintf(targetfile, "POP R%d\n", q);
            freeReg();
            fprintf(targetfile, "RET\n");
            //printf("%s Completed\n", t->varname);
        }
    }
    else if(t->type == 14){
        //printf("type.%d\n", t->type);
        //printf("Ret Stmt\n");
        i = CodeGen(t->left, targetfile);
        //printf("Ret Completed\n");
        return i;
    }
    else if(t->type == 15){
        //printf("type.%d\n", t->type);
        //printf("Func Called\n");
        int h = k;
        int g = k;
        while(h != -1){
            fprintf(targetfile, "PUSH R%d\n", h);
            h--;
            freeReg();
        }
        struct ArgStruct *arg = t->Arg;
        if(arg != NULL){
            no_temp1 = 1;
        }
        else{
            no_temp1 = 0;
        }
        if(t->Ctype != NULL){
        }
        if(arg != NULL){
            while(arg->next != NULL){
                arg = arg->next;
                no_temp1++;
            }
        }
        int no_temp = no_temp1;
        while(no_temp != 0){
            int no_ = no_temp;
            struct ArgStruct *arg1 = t->Arg;
            while(no_ != 1 && arg1 != NULL){
                arg1 = arg1->next;
                no_--;
            }
            i = CodeGen(arg1->t, targetfile);
            fprintf(targetfile, "PUSH R%d\n", i);
            freeReg();
            no_temp--;
        }
        struct MemberFuncList * temp5;
        struct ClassTable *temp4 = t->Ctype;
        int r4 = 0;
        if(temp4 != NULL){
            p = getReg();
            int o = 0;
            if(t->right != NULL){
                o = 1;
            }
            if(ma == 1){
                struct Lsymbol *temp1 = LookupLocal(t->right->varname);
                if(temp1  != NULL){            
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "ADD R%d, %d\n", p, temp1->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                    fprintf(targetfile, "PUSH R%d\n", p);
                }
                else{
                    struct Gsymbol *temp = Lookup(t->right->varname);
                    s = temp->address;
                    fprintf(targetfile, "MOV R%d, %d\n", p, s);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                    fprintf(targetfile, "PUSH R%d\n", p);
                }
            }
            else if(o == 1 && t->right->nodetype == 4){
                fprintf(targetfile, "MOV R%d, BP\n", p);
                fprintf(targetfile, "SUB R%d, %d\n", p, 3);
                fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                struct FieldList *temp = LookupField(t->right->varname, head5);
                r4 = 1;
                temp5 = temp->Ctype->Vfuncptr;
                fprintf(targetfile, "ADD R%d, %d\n", p, temp->fieldIndex);
                fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                fprintf(targetfile, "PUSH R%d\n", p);
            }
            else{
                fprintf(targetfile, "MOV R%d, BP\n", p);
                fprintf(targetfile, "SUB R%d, %d\n", p, 3);
                fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                fprintf(targetfile, "PUSH R%d\n", p);
            }
            freeReg();
        }
        p = getReg();
        fprintf(targetfile, "PUSH R%d\n", p);
        freeReg();
        if(temp4 != NULL){
            if(ma == 1){
                struct MemberFuncList *temp = LookupMemFunc(t->left->varname, t->Ctype->Vfuncptr);
                fprintf(targetfile, "CALL Y%d\n", temp->Flabel);
            }
            else if(r4 == 1){
                r4 = 0;
                struct MemberFuncList *temp = LookupMemFunc(t->left->varname, temp5);
                fprintf(targetfile, "CALL Y%d\n", temp->Flabel);
            }
            else{
                struct MemberFuncList *temp = LookupMemFunc(t->left->varname, head6);
                fprintf(targetfile, "CALL Y%d\n", temp->Flabel);
            }
        }
        else{
            fprintf(targetfile, "CALL Y%d\n", t->left->Gentry->flabel);
        }
        fprintf(targetfile, "POP R%d\n", g+1);
        q = getReg();
        while(no_temp1 != 0){
            fprintf(targetfile, "POP R%d\n", q);
            no_temp1--;
        }
        if(temp4 != NULL){
            if(g != -1){
                fprintf(targetfile, "POP R%d\n", q);
            }
            else{
                fprintf(targetfile, "POP R%d\n", q+1);
            }
        }
        freeReg();
        while(g != -1){
            //fprintf(targetfile, "%d\n", g);
            q = getReg();
            fprintf(targetfile, "POP R%d\n", q);
            g--;
        }
        p = getReg();
        return p;
    }
    else if(t->type == 18 || t->type == 24){
        //printf("type.%d\n", t->type);
        int p1;
        struct Lsymbol *temp1;
        struct Gsymbol *temp;
        struct FieldList *temp2;
        p1 = getReg();
        if(t->left->type != 23){
            temp1 = LookupLocal(t->left->varname);
            if(temp1  != NULL){
                if(temp1->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", p1);
                    fprintf(targetfile, "ADD R%d, %d\n", p1, temp1->address);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", p1);
                    fprintf(targetfile, "SUB R%d, %d\n", p1, -temp1->address);
                }
            }
            else{
                temp = Lookup(t->left->varname);
                s = temp->address;
            }
        }
        else{
            temp2 = LookupField(t->left->varname, head5);
            fprintf(targetfile, "MOV R%d, BP\n", p1);
            fprintf(targetfile, "SUB R%d, %d\n", p1, 3);
            fprintf(targetfile, "MOV R%d, [R%d]\n", p1, p1);
            fprintf(targetfile, "ADD R%d, %d\n", p1, temp2->fieldIndex);
        }
        int h = k;
        int g = k;
        p = getReg();
        q = getReg();
        while(h != -1){
            fprintf(targetfile, "PUSH R%d\n", h);
            h--;
            freeReg();
        }
        fprintf(targetfile, "MOV R%d, \"Alloc\"\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile,"CALL 0\n");
        fprintf(targetfile, "POP R%d\n", p);
        fprintf(targetfile, "POP R%d\n", q);
        fprintf(targetfile, "POP R%d\n", q);
        fprintf(targetfile, "POP R%d\n", q);
        fprintf(targetfile, "POP R%d\n", q);
        freeReg();
        while(g != -1){
            //fprintf(targetfile, "%d\n", g);
            q = getReg();
            fprintf(targetfile, "POP R%d\n", q-1);
            g--;
        }
        if(temp1 != NULL){
            fprintf(targetfile, "MOV [R%d], R%d\n", p1 , p);
            freeReg();
            freeReg();
        }
        else if(temp != NULL){
            fprintf(targetfile, "MOV [%d], R%d\n", s, p);
            freeReg();
            freeReg();
        }
        else{
            fprintf(targetfile, "MOV [R%d], R%d\n", p1 , p);
            freeReg();
            freeReg();
        }
        return p;
    }
    else if(t->type == 19){
        struct Lsymbol *temp1 = LookupLocal(t->varname);
        p = getReg();
        if(temp1  != NULL){
            if(temp1->address>-1){
                fprintf(targetfile, "MOV R%d, BP\n", p);
                fprintf(targetfile, "ADD R%d, %d\n", p, temp1->address);
            }
            else{
                fprintf(targetfile, "MOV R%d, BP\n", p);
                fprintf(targetfile, "SUB R%d, %d\n", p, -temp1->address);
            }
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
        }
        else{
            struct Gsymbol *temp = Lookup(t->varname);
            s = temp->address;
            fprintf(targetfile ,"MOV R%d, [%d]\n", p, s);
        }
        return p;
    }
    else if(t->type == 20){
        int k2;
        p = getReg();
        struct ASTNode *temp2 = t;
        while(temp2->left != NULL){
            temp2 = temp2->left;
        }
        struct Lsymbol *temp1 = LookupLocal(temp2->varname);
        struct FieldList *temp5 = temp2->typet->fields;
        while(strcmp(temp2->right->varname, temp5->name) != 0){
            temp5 = temp5->next;
        }
        k2 = temp5->fieldIndex;
        if(temp1  != NULL){
            if(temp1->address>-1){
                fprintf(targetfile, "MOV R%d, BP\n", p);
                fprintf(targetfile, "ADD R%d, %d\n", p, temp1->address);
                fprintf(targetfile, "MOV R%d, [R%d]\n", p , p);
            }
            else{
                fprintf(targetfile, "MOV R%d, BP\n", p);
                fprintf(targetfile, "SUB R%d, %d\n", p, -temp1->address);
                fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
            }
        }   
        else{
            struct Gsymbol *temp = Lookup(temp2->varname);
            s = temp->address;
            fprintf(targetfile, "MOV R%d, [%d]\n", p , s);
        }
        fprintf(targetfile, "ADD R%d, %d\n", p, k2);
        fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
        temp2 = temp2->right;
        while(temp2->right != NULL){
            struct FieldList *temp5 = temp2->typet->fields;
            while(strcmp(temp2->right->varname, temp5->name) != 0){
                temp5 = temp5->next;
            }
            k2 = temp5->fieldIndex;
            fprintf(targetfile, "ADD R%d, %d\n", p, k2);
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
            temp2 = temp2->right;
        }
        return p;
    }
    else if(t->type == 21){
        //printf("type.%d\n", t->type);
        int h = k;
        int g = k;
        while(h != -1){
            fprintf(targetfile, "PUSH R%d\n", h);
            h--;
            freeReg();
        }
        p = getReg();
        fprintf(targetfile, "MOV R%d, \"Heapset\"\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        freeReg();
        fprintf(targetfile,"CALL 0\n");
        q = getReg();
        fprintf(targetfile, "POP R%d\n", q);
        fprintf(targetfile, "POP R%d\n", q);
        fprintf(targetfile, "POP R%d\n", q);
        fprintf(targetfile, "POP R%d\n", q);
        fprintf(targetfile, "POP R%d\n", q);
        freeReg();
        while(g != -1){
            //fprintf(targetfile, "%d\n", g);
            q = getReg();
            fprintf(targetfile, "POP R%d\n", q);
            g--;
        }
        return -1;
    }
    else if(t->type == 22){
        //printf("type.%d\n", t->type);
        int h = k;
        int g = k;
        while(h != -1){
            fprintf(targetfile, "PUSH R%d\n", h);
            h--;
            freeReg();
        }
        p = getReg();
        fprintf(targetfile, "MOV R%d, \"Free\"\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile, "MOV R%d, %d\n", p, 8);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile, "PUSH R%d\n", p);
        freeReg();
        fprintf(targetfile,"CALL 0\n");
        q = getReg();
        fprintf(targetfile, "POP R%d\n", q);
        fprintf(targetfile, "POP R%d\n", q);
        fprintf(targetfile, "POP R%d\n", q);
        fprintf(targetfile, "POP R%d\n", q);
        fprintf(targetfile, "POP R%d\n", q);
        freeReg();
        while(g != -1){
            //fprintf(targetfile, "%d\n", g);
            q = getReg();
            fprintf(targetfile, "POP R%d\n", q);
            g--;
        }
        return -1;
    }
    else if(t->type == 23){
        //printf("type.%d\n", t->type);
        p = getReg();
        struct FieldList *temp = LookupField(t->varname, head5);
        fprintf(targetfile, "MOV R%d, BP\n", p);
        fprintf(targetfile, "SUB R%d, %d\n", p, 3);
        fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
        fprintf(targetfile, "ADD R%d, %d\n", p, temp->fieldIndex);
        fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
        return p;
    }
    else if(t->type == 0){
        //printf("type.%d\n", t->type);
        if(t->left != NULL){
            i = CodeGen(t->left, targetfile);
        }
        if(t->right != NULL){
            j = CodeGen(t->right, targetfile);
        }
        return -1;
    }
    else if(t->type == 1){
        //printf("type.%d\n", t->type);
        struct Lsymbol*temp1;
        if(t->left->type == 5){
            temp1 = LookupLocal(t->left->varname);
            if(temp1 != NULL){
                i = getReg();
                if(temp1->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", i);
                    fprintf(targetfile, "ADD R%d, %d\n", i, temp1->address);
                    //fprintf(targetfile, "MOV R%d, [R%d]\n",i, i);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", i);
                    fprintf(targetfile, "SUB R%d, %d\n", i, -temp1->address);
                    //fprintf(targetfile, "MOV R%d, [R%d]\n",i, i);
                }
            }
            else{
                struct Gsymbol *temp = Lookup(t->left->varname);
                s = temp->address;
            }
        }
        else if(t->left->type == 12){
            s = CodeGen(t->left, targetfile);
        }
        p = getReg();
        q = getReg();
        fprintf(targetfile, "MOV R%d, %d\n", p, 7);
        fprintf(targetfile, "PUSH R%d\n", p);
        fprintf(targetfile, "MOV R%d, %d\n", p, -1);
        fprintf(targetfile, "PUSH R%d\n", p);
        if(t->left->type == 5){
            if(temp1 != NULL){
                fprintf(targetfile, "MOV R%d, R%d\n", q, i);
                freeReg();
            }
            else{
                fprintf(targetfile, "MOV R%d, %d\n", q, s);
            }
        }
        else{
            fprintf(targetfile, "MOV R%d, R%d\n", q, s);
            freeReg();
        }
        fprintf(targetfile, "PUSH R%d\n", q);
        fprintf(targetfile, "PUSH R%d\n", q);
        fprintf(targetfile, "PUSH R%d\n", q);
        fprintf(targetfile, "INT %d\n", 6);
        fprintf(targetfile, "POP R%d\n", p);
        fprintf(targetfile, "POP R%d\n", p);
        fprintf(targetfile, "POP R%d\n", p);
        fprintf(targetfile, "POP R%d\n", p);
        fprintf(targetfile, "POP R%d\n", p);
        freeReg();
        freeReg();
        return -1;
    }
    else if(t->type == 2){
        //printf("type.%d\n", t->type);
        if(t->left->op == NULL){
            q = getReg();
            if(t->left->type == 5){
                struct Lsymbol*temp1 = LookupLocal(t->left->varname);
                if(temp1 != NULL){
                    if(temp1->address>-1){
                        fprintf(targetfile, "MOV R%d, BP\n", q);
                        fprintf(targetfile, "ADD R%d, %d\n", q, temp1->address);
                        fprintf(targetfile, "MOV R%d, [R%d]\n",q, q);
                    }
                    else{
                        fprintf(targetfile, "MOV R%d, BP\n", q);
                        fprintf(targetfile, "SUB R%d, %d\n", q, -temp1->address);
                        fprintf(targetfile, "MOV R%d, [R%d]\n",q, q);
                    }
                }
                else{
                    struct Gsymbol *temp = Lookup(t->left->varname);
                    s = temp->address;
                    fprintf(targetfile, "MOV R%d, [%d]\n", q, s);
                }
            }
            else if(t->left->type == 11){
                fprintf(targetfile, "MOV R%d, %s\n", q, t->left->varname);
            }
            else if(t->left->type == 12){
                s = CodeGen(t->left, targetfile);
                fprintf(targetfile, "MOV R%d, [R%d]\n", q, s);
                freeReg();
            }
            else if(t->left->type == 15){
                i = CodeGen(t->left, targetfile);
                fprintf(targetfile, "MOV R%d, R%d\n", q, i);
                freeReg();
            }
            else if(t->left->type == 19){
                struct Lsymbol *temp1 = LookupLocal(t->left->varname);
                if(temp1 != NULL){
                    if(temp1->address>-1){
                        fprintf(targetfile, "MOV R%d, BP\n", q);
                        fprintf(targetfile, "ADD R%d, %d\n", q, temp1->address);
                        fprintf(targetfile, "MOV R%d, [R%d]\n", q , q);
                    }
                    else{
                        fprintf(targetfile, "MOV R%d, BP\n", q);
                        fprintf(targetfile, "SUB R%d, %d\n", q, -temp1->address);
                        fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
                    }
                }   
                else{
                    struct Gsymbol *temp = Lookup(t->left->varname);
                    s = temp->address;
                    fprintf(targetfile, "MOV R%d, [%d]\n", q , s);
                }
            }
            else if(t->left->type == 20){
                int k2;
                struct ASTNode *temp2 = t->left;
                while(temp2->left != NULL){
                    temp2 = temp2->left;
                }
                struct Lsymbol *temp1 = LookupLocal(temp2->varname);
                struct FieldList *temp5 = temp2->typet->fields;
                while(strcmp(temp2->right->varname, temp5->name) != 0){
                    temp5 = temp5->next;
                }
                k2 = temp5->fieldIndex;
                if(temp1  != NULL){
                    if(temp1->address>-1){
                        fprintf(targetfile, "MOV R%d, BP\n", q);
                        fprintf(targetfile, "ADD R%d, %d\n", q, temp1->address);
                        fprintf(targetfile, "MOV R%d, [R%d]\n", q , q);
                    }
                    else{
                        fprintf(targetfile, "MOV R%d, BP\n", q);
                        fprintf(targetfile, "SUB R%d, %d\n", q, -temp1->address);
                        fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
                    }
                }   
                else{
                    struct Gsymbol *temp = Lookup(temp2->varname);
                    s = temp->address;
                    fprintf(targetfile, "MOV R%d, [%d]\n", q , s);
                }
                fprintf(targetfile, "ADD R%d, %d\n", q, k2);
                fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
                temp2 = temp2->right;
                while(temp2->right != NULL){
                    struct FieldList *temp5 = temp2->typet->fields;
                    while(strcmp(temp2->right->varname, temp5->name) != 0){
                        temp5 = temp5->next;
                    }
                    k2 = temp5->fieldIndex;
                    fprintf(targetfile, "ADD R%d, %d\n", q, k2);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
                    temp2 = temp2->right;
                }
            }
            p = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", p, 5);
            fprintf(targetfile, "PUSH R%d\n", p);
            fprintf(targetfile, "MOV R%d, %d\n", p, -2);
            fprintf(targetfile, "PUSH R%d\n", p);
            freeReg();
            fprintf(targetfile, "PUSH R%d\n", q);
            fprintf(targetfile, "PUSH R%d\n", q);
            fprintf(targetfile, "PUSH R%d\n", q);
            fprintf(targetfile, "INT %d\n", 7);
            fprintf(targetfile, "POP R%d\n", q);
            fprintf(targetfile, "POP R%d\n", q);
            fprintf(targetfile, "POP R%d\n", q);
            fprintf(targetfile, "POP R%d\n", q);
            fprintf(targetfile, "POP R%d\n", q);
            freeReg();
            //freeReg();
            return q;
        }
        else{
            p = getReg();
            q = getReg();
            r = CodeGen(t->left, targetfile);
            fprintf(targetfile, "MOV R%d, %d\n", p, 5);
            fprintf(targetfile, "PUSH R%d\n", p);
            fprintf(targetfile, "MOV R%d, %d\n", p, -2);
            fprintf(targetfile, "PUSH R%d\n", p);
            fprintf(targetfile, "MOV R%d, R%d\n", q, r);
            fprintf(targetfile, "PUSH R%d\n", q);
            fprintf(targetfile, "PUSH R%d\n", q);
            fprintf(targetfile, "PUSH R%d\n", q);
            fprintf(targetfile, "INT %d\n", 7);
            fprintf(targetfile, "POP R%d\n", p);
            fprintf(targetfile, "POP R%d\n", p);
            fprintf(targetfile, "POP R%d\n", p);
            fprintf(targetfile, "POP R%d\n", p);
            fprintf(targetfile, "POP R%d\n", p);
            freeReg();
            freeReg();
            return p;
        }
    }            
    else if (t->type == 3){
        //printf("type.%d\n", t->type);
        struct Lsymbol *temp1;
        if(t->left->type == 3){
            p = CodeGen(t->left, targetfile);
        }
        else if(t->left->type == 4){
            i = t->left->val;
            p = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", p, i);
        }
        else if(*(t->op) == '=' && t->left->type == 12){
            p = CodeGen(t->left, targetfile);
        }
        else if(*(t->op) == '=' && t->left->type == 19){
            temp1 = LookupLocal(t->left->varname);
            if(temp1  != NULL){
                p = getReg();
                if(temp1->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "ADD R%d, %d\n", p, temp1->address);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "SUB R%d, %d\n", p, -temp1->address);
                }
            }
            else{
                struct Gsymbol *temp = Lookup(t->left->varname);
                s = temp->address;
                p = getReg();
                fprintf(targetfile, "MOV R%d, %d\n", p, s);
            }
        }
        else if(*(t->op) == '=' && t->left->type == 5){
            temp1 = LookupLocal(t->left->varname);
            if(temp1 != NULL){
                p = getReg();
                if(temp1->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "ADD R%d, %d\n", p, temp1->address);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "SUB R%d, %d\n", p, -temp1->address);
                }
            }
            else{
                struct Gsymbol *temp = Lookup(t->left->varname);
                s = temp->address;
                p = getReg();
                fprintf(targetfile, "MOV R%d, %d\n", p, s);
            }
        }
        else if(*(t->op) == '=' && t->left->type == 23){
            p = getReg();
            struct FieldList *temp;
            if(ma == 1){
                temp = LookupField(t->left->varname, t->left->Ctype->Memberfield);
            }
            else{
                temp = LookupField(t->left->varname, head5);
            }
            fprintf(targetfile, "MOV R%d, BP\n", p);
            fprintf(targetfile, "SUB R%d, %d\n", p, 3);
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
            fprintf(targetfile, "ADD R%d, %d\n", p, temp->fieldIndex);
        }
        else if(t->left->type == 15){
            p = CodeGen(t->left, targetfile);
        }
        else if(t->left->type == 23){
            p = getReg();
            struct FieldList *temp;
            if(ma == 1){
                temp = LookupField(t->left->varname, t->left->Ctype->Memberfield);
            }
            else{
                temp = LookupField(t->left->varname, head5);
            }
            fprintf(targetfile, "MOV R%d, BP\n", p);
            fprintf(targetfile, "SUB R%d, %d\n", p, 3);
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
            fprintf(targetfile, "ADD R%d, %d\n", p, temp->fieldIndex);
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
        }
        else if(t->left->type == 12){
            s1 = CodeGen(t->left, targetfile);
            p = getReg();
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, s1);
        }
        else if(t->left->type == 20 && *(t->op) == '='){
            int k2;
            p = getReg();
            struct ASTNode *temp2 = t->left;
            while(temp2->left != NULL){
                temp2 = temp2->left;
            }
            if(temp2->Ctype != NULL){
                struct FieldList *temp;
                if(ma == 1){
                    temp = LookupField(temp2->varname, temp2->Ctype->Memberfield);
                }
                else{
                    temp = LookupField(temp2->varname, head5);
                }
                fprintf(targetfile, "MOV R%d, BP\n", p);
                fprintf(targetfile, "SUB R%d, %d\n", p, 3);
                fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                fprintf(targetfile, "ADD R%d, %d\n", p, temp->fieldIndex);
                fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                struct FieldList *temp5 = temp2->typet->fields;
                while(strcmp(temp2->right->varname, temp5->name) != 0){
                    temp5 = temp5->next;
                }
                k2 = temp5->fieldIndex;
                fprintf(targetfile, "ADD R%d, %d\n", p, k2);
            }
            else{
                struct Lsymbol *temp1 = LookupLocal(temp2->varname);
                struct FieldList *temp5 = temp2->typet->fields;
                while(strcmp(temp2->right->varname, temp5->name) != 0){
                    temp5 = temp5->next;
                }
                k2 = temp5->fieldIndex;
                if(temp1  != NULL){
                    if(temp1->address>-1){
                        fprintf(targetfile, "MOV R%d, BP\n", p);
                        fprintf(targetfile, "ADD R%d, %d\n", p, temp1->address);
                        fprintf(targetfile, "MOV R%d, [R%d]\n", p , p);
                    }
                    else{
                        fprintf(targetfile, "MOV R%d, BP\n", p);
                        fprintf(targetfile, "SUB R%d, %d\n", p, -temp1->address);
                        fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                    }
                }   
                else{
                    struct Gsymbol *temp = Lookup(temp2->varname);
                    s = temp->address;
                    fprintf(targetfile, "MOV R%d, [%d]\n", p , s);
                }

                fprintf(targetfile, "ADD R%d, %d\n", p, k2);
            }
            temp2 = temp2->right;
            if(temp2->right != NULL){
                fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
            }
            while(temp2->right!= NULL){
                struct FieldList *temp5 = temp2->typet->fields;
                while(strcmp(temp2->right->varname, temp5->name) != 0){
                    temp5 = temp5->next;
                }
                k2 = temp5->fieldIndex;
                fprintf(targetfile, "ADD R%d, %d\n", p, k2);
                if(temp2->right != NULL){
                    fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                }
                temp2 = temp2->right;
            }
        }
        else if(t->left->type == 20){
            int k2;
            p = getReg();
            struct ASTNode *temp2 = t->left;
            while(temp2->left != NULL){
                temp2 = temp2->left;
            }
            struct Lsymbol *temp1 = LookupLocal(temp2->varname);
            struct FieldList *temp5 = temp2->typet->fields;
            while(strcmp(temp2->right->varname, temp5->name) != 0){
                temp5 = temp5->next;
            }
            k2 = temp5->fieldIndex;
            if(temp1  != NULL){
                if(temp1->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "ADD R%d, %d\n", p, temp1->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", p , p);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "SUB R%d, %d\n", p, -temp1->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                }
            }   
            else{
                struct Gsymbol *temp = Lookup(temp2->varname);
                s = temp->address;
                fprintf(targetfile, "MOV R%d, [%d]\n", p , s);
            }
            fprintf(targetfile, "ADD R%d, %d\n", p, k2);
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
            temp2 = temp2->right;
            while(temp2->right != NULL){
                struct FieldList *temp5 = temp2->typet->fields;
                while(strcmp(temp2->right->varname, temp5->name) != 0){
                    temp5 = temp5->next;
                }
                k2 = temp5->fieldIndex;
                fprintf(targetfile, "ADD R%d, %d\n", p, k2);
                fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                temp2 = temp2->right;
            }
        }
        else if(t->left->type == 5){
            temp1 = LookupLocal(t->left->varname);
            if(temp1 != NULL){
                p = getReg();
                if(temp1->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "ADD R%d, %d\n", p, temp1->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "SUB R%d, %d\n", p, -temp1->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n",p, p);
                }
            }
            else{
                struct Gsymbol *temp = Lookup(t->left->varname);
                s = temp->address;
                p = getReg();
                fprintf(targetfile, "MOV R%d, [%d]\n", p, s);
            }
        }
        struct Lsymbol *temp2;
        if(t->right->type == 3){
            q = CodeGen(t->right, targetfile);
        }
        else if(t->right->type == 19){
            q = getReg();
            temp2 = LookupLocal(t->right->varname);
            if(temp2  != NULL){
                if(temp2->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", q);
                    fprintf(targetfile, "ADD R%d, %d\n", q, temp2->address);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", q);
                    fprintf(targetfile, "SUB R%d, %d\n", q, -temp2->address);
                }
                fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
            }
            else{
                struct Gsymbol *temp = Lookup(t->right->varname);
                s = temp->address;
                fprintf(targetfile, "MOV R%d, [%d]\n", q, s);
            }
        }
        else if(t->right->type == 11){
            q = getReg();
            fprintf(targetfile, "MOV R%d, %s\n", q, t->right->varname);
        }
        else if(t->right->type == 12){
            q = getReg();
            s1 = CodeGen(t->right, targetfile);
            fprintf(targetfile, "MOV R%d, [R%d]\n", q, s1);
            freeReg();
        }
        else if(t->right->type == 15){
            q = CodeGen(t->right, targetfile);
        }
        else if(t->right->type == 4){
            i = t->right->val;
            q = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", q, i);
        }
        else if(t->right->type == 23){
            q = getReg();
            struct FieldList *temp;
            if(ma == 1){
                temp = LookupField(t->right->varname, t->right->Ctype->Memberfield);
            }
            else{
                temp = LookupField(t->right->varname, head5);
            }
            fprintf(targetfile, "MOV R%d, BP\n", q);
            fprintf(targetfile, "SUB R%d, %d\n", q, 3);
            fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
            fprintf(targetfile, "ADD R%d, %d\n", q, temp->fieldIndex);
            fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
        }
        else if(t->right->type == 17){
            q = getReg();
            fprintf(targetfile, "MOV R%d, \"NULL\"\n", q);
        }
        else if(t->right->type == 20){
            int k2;
            struct ASTNode *temp3 = t->right;
            while(temp3->left != NULL){
                temp3 = temp3->left;
            }
            q = getReg();
            struct Lsymbol *temp2 = LookupLocal(temp3->varname);
            struct FieldList *temp5 = temp3->typet->fields;
            while(strcmp(temp3->right->varname, temp5->name) != 0){
                temp5 = temp5->next;
            }
            k2 = temp5->fieldIndex;
            if(temp2  != NULL){
                if(temp2->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", q);
                    fprintf(targetfile, "ADD R%d, %d\n", q, temp2->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", q , q);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", q);
                    fprintf(targetfile, "SUB R%d, %d\n", q, -temp2->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
                }
            }   
            else{
                struct Gsymbol *temp = Lookup(temp3->varname);
                s = temp->address;
                fprintf(targetfile, "MOV R%d, [%d]\n", q , s);
            }
            fprintf(targetfile, "ADD R%d, %d\n", q, k2);
            fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
            temp3 = temp3->right;
            while(temp3->right != NULL){
                struct FieldList *temp5 = temp3->typet->fields;
                while(strcmp(temp3->right->varname, temp5->name) != 0){
                    temp5 = temp5->next;
                }
                k2 = temp5->fieldIndex;
                fprintf(targetfile, "ADD R%d, %d\n", q, k2);
                fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
                temp3 = temp3->right;
            }
        }
        else if(t->right->type == 5){
            temp2 = LookupLocal(t->right->varname);
            if(temp2 != NULL){
                q = getReg();
                if(temp2->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", q);
                    fprintf(targetfile, "ADD R%d, %d\n", q, temp2->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", q);
                    fprintf(targetfile, "SUB R%d, %d\n", q, -temp2->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
                }
            }
            else{
                struct Gsymbol *temp = Lookup(t->right->varname);
                s1 = temp->address;
                q = getReg();
                fprintf(targetfile, "MOV R%d, [%d]\n", q, s1);
            }
        }
        switch(*(t->op)){
            case '+' : fprintf(targetfile, "ADD R%d, R%d\n", p, q);
                       freeReg();
                       return p;
                       break;
            case '-' : fprintf(targetfile, "SUB R%d, R%d\n", p, q);
                       freeReg();
                       return p;
                       break;
            case '*' : fprintf(targetfile, "MUL R%d, R%d\n", p, q);
                       freeReg();
                       return p;
                       break;
            case '/' : fprintf(targetfile, "DIV R%d, R%d\n", p, q);
                       freeReg();
                       return p;
                       break;
            case '%' : fprintf(targetfile, "MOD R%d, R%d\n", p, q);
                       freeReg();
                       return p;
                       break;
            case '=' :  if(t->left->type == 12)
                        {   
                            fprintf(targetfile, "MOV [R%d], R%d\n", p, q);
                            freeReg();
                            freeReg();
                            return -1;
                        }
                        else if(t->right->type == 17 && t->left->type == 19){
                            if(temp1 != NULL){
                                fprintf(targetfile, "MOV [R%d], R%d\n", p, q);
                                freeReg();
                                freeReg();
                            }
                            else{
                                fprintf(targetfile, "MOV [%d], R%d\n", s, q);
                                freeReg();
                            }
                            return -1;
                            break;
                        }
                        else if(t->right->type == 17 && t->left->type == 20){
                            fprintf(targetfile, "MOV [R%d], R%d\n", p, q);
                            freeReg();
                            freeReg();
                            return -1;
                            break;
                        }
                        else if(t->left->type == 5){
                            if(temp1 != NULL){
                                fprintf(targetfile, "MOV [R%d], R%d\n", p, q);
                                freeReg();
                                freeReg();
                            }
                            else{
                                fprintf(targetfile, "MOV [R%d], R%d\n", p, q);
                                freeReg();
                                freeReg();
                            }
                            return -1;
                            break;
                        }
                        else if(t->left->type == 20){
                            fprintf(targetfile, "MOV [R%d], R%d\n", p , q);
                            freeReg();
                            freeReg();
                            return -1;
                            break;
                        }
                        else if(t->left->type == 19){
                            if(temp1 != NULL){
                                fprintf(targetfile, "MOV [R%d], R%d\n", p , q);
                                freeReg();
                                freeReg();
                            }
                            else{
                                fprintf(targetfile, "MOV [R%d], R%d\n", p , q);
                                freeReg();
                                freeReg();
                            }
                            return -1;
                            break;
                        }
                        else if(t->left->type == 23){
                            fprintf(targetfile, "MOV [R%d], R%d\n", p, q);
                            freeReg();
                            freeReg();
                            return -1;
                            break;
                        }
                        else
                        {
                            fprintf(targetfile, "MOV R%d, R%d\n", p, q);
                            freeReg();
                            freeReg();
                            return -1;
                            break;
                        }
        }
    }
    else if(t->type == 4){
        p = getReg();
        fprintf(targetfile, "MOV R%d, %d\n", p, t->val);
        return p;
    }
    else if(t->type == 5){
        struct Lsymbol *temp1 = LookupLocal(t->varname);
        if(temp1 != NULL){
            p = getReg();
            if(temp1->address>-1){
                fprintf(targetfile, "MOV R%d, BP\n", p);
                fprintf(targetfile, "ADD R%d, %d\n", p, temp1->address);
                fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
            }
            else{
                fprintf(targetfile, "MOV R%d, BP\n", p);
                fprintf(targetfile, "SUB R%d, %d\n", p, -temp1->address);
                fprintf(targetfile, "MOV R%d, [R%d]\n",p, p);
            }
        }
        else{
            struct Gsymbol *temp = Lookup(t->varname);
            s = temp->address;
            p = getReg();
            fprintf(targetfile, "MOV R%d, [%d]\n", p, s);
        }
        return p;
    }
    else if(t->type == 16){
        //printf("type.%d\n", t->type);
        struct Lsymbol *temp1;
        if(t->left->type == 4){
            i = t->left->val;
            p = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", p ,i);
        }
        else if(t->left->type == 12)
        {
            p = getReg();
            i = CodeGen(t->left, targetfile);
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, i);
            freeReg();
            
        }
        else if(t->left->type == 15){
            p = CodeGen(t->left, targetfile);
        }
        else if(t->left->type == 3)
        {
            p = CodeGen(t->left, targetfile);
            //p = getReg();
            //fprintf(targetfile, "MOV R%d, [R%d]\n", p, i);
        }
        else if(t->left->type == 16)
        {
            p = CodeGen(t->left, targetfile);
            //p = getReg();
            //fprintf(targetfile, "MOV R%d, [R%d]\n", p, i);
        }
        else if(t->left->type == 20){
            int k2;
            p = getReg();
            struct ASTNode *temp2 = t->left;
            while(temp2->left != NULL){
                temp2 = temp2->left;
            }
            struct Lsymbol *temp1 = LookupLocal(temp2->varname);
            struct FieldList *temp5 = temp2->typet->fields;
            while(strcmp(temp2->right->varname, temp5->name) != 0){
                temp5 = temp5->next;
            }
            k2 = temp5->fieldIndex;
            if(temp1  != NULL){
                if(temp1->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "ADD R%d, %d\n", p, temp1->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", p , p);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "SUB R%d, %d\n", p, -temp1->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                }
            }   
            else{
                struct Gsymbol *temp = Lookup(temp2->varname);
                s = temp->address;
                fprintf(targetfile, "MOV R%d, [%d]\n", p , s);
            }
            fprintf(targetfile, "ADD R%d, %d\n", p, k2);
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
            temp2 = temp2->right;
            while(temp2->right != NULL){
                struct FieldList *temp5 = temp2->typet->fields;
                while(strcmp(temp2->right->varname, temp5->name) != 0)
                {
                    temp5 = temp5->next;
                }
                k2 = temp5->fieldIndex;
                fprintf(targetfile, "ADD R%d, %d\n", p, k2);
                fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                temp2 = temp2->right;
            }
        }
        else if(t->left->type == 19)
        {
            temp1 = LookupLocal(t->left->varname);
            if(temp1  != NULL){
                p = getReg();
                if(temp1->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "ADD R%d, %d\n", p, temp1->address);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "SUB R%d, %d\n", p, -temp1->address);
                }
                fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
            }
            else{
                struct Gsymbol *temp = Lookup(t->left->varname);
                s = temp->address;
                p = getReg();
                fprintf(targetfile, "MOV R%d, [%d]\n", p, s);
            }
        }
        else if(t->left->type == 23){
            p = getReg();
            struct FieldList *temp;
            if(ma == 1){
                temp = LookupField(t->left->varname, t->left->Ctype->Memberfield);
            }
            else{
                temp = LookupField(t->left->varname, head5);
            }
            fprintf(targetfile, "MOV R%d, BP\n", p);
            fprintf(targetfile, "SUB R%d, 3\n", p);
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
            fprintf(targetfile, "ADD R%d, %d\n", p, temp->fieldIndex);
            fprintf(targetfile, "MOV R%d, [R%d]\n",p, p);
        }
        else if(t->left->type == 5){
                temp1 = LookupLocal(t->left->varname);
                if(temp1 != NULL){
                    p = getReg();
                    if(temp1->address>-1){
                        fprintf(targetfile, "MOV R%d, BP\n", p);
                        fprintf(targetfile, "ADD R%d, %d\n", p, temp1->address);
                        fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                    }
                    else{
                        fprintf(targetfile, "MOV R%d, BP\n", p);
                        fprintf(targetfile, "SUB R%d, %d\n", p, -temp1->address);
                        fprintf(targetfile, "MOV R%d, [R%d]\n",p, p);
                    }
                }
                else{
                    struct Gsymbol *temp = Lookup(t->left->varname);
                    i = temp->address;
                    p = getReg();
                    fprintf(targetfile, "MOV R%d, [%d]\n", p ,i);                
                }              
        }
        struct Lsymbol *temp2;
        if(t->right->type == 4){
            j = t->right->val;
            q = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", q ,j);
        }
        else if(t->right->type == 12)
        {
            q = getReg();
            i = CodeGen(t->right, targetfile);
            fprintf(targetfile, "MOV R%d, [R%d]\n", q, i);
            freeReg();
        }
        else if(t->right->type == 3)
        {
            q = CodeGen(t->right, targetfile);
        }
        else if(t->right->type == 16)
        {
            q = CodeGen(t->right, targetfile);
        }
        else if(t->right->type == 20){
            int k2;
            struct ASTNode *temp3 = t->right;
            while(temp3->left != NULL){
                temp3 = temp3->left;
            }
            q = getReg();
            struct Lsymbol *temp2 = LookupLocal(temp3->varname);
            struct FieldList *temp5 = temp3->typet->fields;
            while(strcmp(temp3->right->varname, temp5->name) != 0){
                temp5 = temp5->next;
            }
            k2 = temp5->fieldIndex;
            if(temp2  != NULL){
                if(temp2->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", q);
                    fprintf(targetfile, "ADD R%d, %d\n", q, temp2->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", q , q);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", q);
                    fprintf(targetfile, "SUB R%d, %d\n", q, -temp2->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
                }
            }   
            else{
                struct Gsymbol *temp = Lookup(temp3->varname);
                s = temp->address;
                fprintf(targetfile, "MOV R%d, [%d]\n", q , s);
            }
            fprintf(targetfile, "ADD R%d, %d\n", q, k2);
            fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
            temp3 = temp3->right;
            while(temp3->right != NULL){
                struct FieldList *temp5 = temp3->typet->fields;
                while(strcmp(temp3->right->varname, temp5->name) != 0)
                {
                    temp5 = temp5->next;
                }
                k2 = temp5->fieldIndex;
                fprintf(targetfile, "ADD R%d, %d\n", q, k2);
                fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
                temp3 = temp3->right;
            }
        }
        else if(t->right->type == 17){
            q = getReg();
            fprintf(targetfile, "MOV R%d, \"NULL\"\n", q);
        }
        else if(t->right->type == 23){
            q = getReg();
            struct FieldList *temp;
            if(ma == 1){
                temp = LookupField(t->right->varname, t->right->Ctype->Memberfield);
            }
            else{
                temp = LookupField(t->right->varname, head5);
            }
            fprintf(targetfile, "MOV R%d, BP\n", q);
            fprintf(targetfile, "SUB R%d, 3\n", q);
            fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
            fprintf(targetfile, "ADD R%d, %d\n", q, temp->fieldIndex);
            fprintf(targetfile, "MOV R%d, [R%d]\n",q, q);
        }
        else if(t->right->type == 5){
            temp2 = LookupLocal(t->right->varname);
            if(temp2 != NULL){
                q = getReg();
                if(temp2->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", q);
                    fprintf(targetfile, "ADD R%d, %d\n", q, temp2->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", q);
                    fprintf(targetfile, "SUB R%d, %d\n", q, -temp2->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", q, q);
                }
            }
            else{
                struct Gsymbol *temp = Lookup(t->right->varname);
                i = temp->address;
                q = getReg();
                fprintf(targetfile, "MOV R%d, [%d]\n", q ,i);
            }              
        }
        else if(t->right->type == 15){
            q = CodeGen(t->right, targetfile);
        }
        if(*(t->op) == '>'){    fprintf(targetfile, "GT R%d, R%d\n", p, q);
                                freeReg();
                                return p;
                            }
        else if(*(t->op) == '<'){       fprintf(targetfile, "LT R%d, R%d\n", p, q);
                                        freeReg();
                                        return p;
                            }
        else if(*(t->op) == 'E')      {fprintf(targetfile, "EQ R%d, R%d\n", p, q);
                            freeReg();
                            return p;
                            }
        else if(*(t->op) == 'N')      {fprintf(targetfile, "NE R%d, R%d\n", p, q);
                            freeReg();
                            return p;
                            }
            else if(*(t->op) == 'G')      {fprintf(targetfile, "GE R%d, R%d\n", p, q);
                            freeReg();
                            return p;
                            }
            else if(*(t->op) == 'L')      {fprintf(targetfile, "LE R%d, R%d\n", p, q);
                            freeReg();
                            return p;
                            }
            else if(*(t->op) == 'A')        {   i = getReg();
                                                fprintf(targetfile, "MOV R%d, 1\n", i);
                                                fprintf(targetfile, "EQ R%d, R%d\n", p, i);
                                                l1 = l;
                                                l++;
                                                fprintf(targetfile, "JZ R%d, X%d\n", p, l1);
                                                fprintf(targetfile, "MOV R%d, 1\n", i);
                                                fprintf(targetfile, "EQ R%d, R%d\n", q, i);
                                                freeReg();
                                                fprintf(targetfile, "JZ R%d, X%d\n", q, l1);
                                                fprintf(targetfile, "MOV R%d, 1\n", p);
                                                l2 = l;
                                                l++;
                                                fprintf(targetfile, "JMP X%d\n", l2);
                                                fprintf(targetfile, "X%d:\n", l1);
                                                fprintf(targetfile, "MOV R%d, 0\n", p);
                                                fprintf(targetfile, "X%d:\n", l2);
                                                freeReg();
                                                return p;
                                            }
        }
    else if (t->type == 6){
        //printf("type.%d\n", t->type);
        p = CodeGen(t->left, targetfile);
        l1 = l;
        l++;
        fprintf(targetfile, "JZ R%d, X%d\n", p, l1);
        freeReg();
        i = CodeGen(t->right, targetfile);
        l2 = l;
        l++;
        fprintf(targetfile, "JMP X%d\n", l2);
        fprintf(targetfile, "X%d:\n", l1);
        i = CodeGen(t->middle, targetfile);
        fprintf(targetfile, "X%d:\n", l2);
        return i;
        }
    else if (t->type == 7){
        //printf("type.%d\n", t->type);
        p = CodeGen(t->left, targetfile);
        l1 = l;
        l++;
        fprintf(targetfile, "JZ R%d, X%d\n", p, l1);
        freeReg();
        i = CodeGen(t->right, targetfile);
        fprintf(targetfile, "X%d:\n", l1);
        return i;
    }
    else if (t->type == 8){
        //printf("type.%d\n", t->type);
        l1 = l;
        l++;
        nest[w] = l;
        w++;
        fprintf(targetfile, "X%d:\n", l1);
        p = CodeGen(t->left, targetfile);
        l2 = l;
        l++;
        fprintf(targetfile, "JZ R%d, X%d\n", p, l2);
        freeReg();
        i = CodeGen(t->right, targetfile);
        fprintf(targetfile, "JMP X%d\n", l1);
        fprintf(targetfile, "X%d:\n", l2);
        w--;
        return i;    
    }
    else if (t->type == 9){
        //printf("type.%d\n", t->type);
        fprintf(targetfile, "JMP X%d\n", nest[w-1]);
        return -1;
    }
    else if (t->type == 10){
        //printf("type.%d\n", t->type);
        fprintf(targetfile, "JMP X%d\n", nest[w]);
        return -1;
    }
    else if(t->type == 12){
        //printf("type.%d\n", t->type);
        struct Gsymbol* temp2 = Lookup(t->varname);
            j = temp2->address;
        if(t->left->type == 4){
            i = t->left->val;
            p = getReg();
            fprintf(targetfile, "MOV R%d, %d\n",p ,i+j);
            return p;
        }
        else if(t->left->type == 5){
            struct Lsymbol*temp1;
            temp1 = LookupLocal(t->left->varname);
            if(temp1 != NULL){
                p = getReg();
                if(temp1->address>-1){
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "ADD R%d, %d\n", p, temp1->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n", p, p);
                }
                else{
                    fprintf(targetfile, "MOV R%d, BP\n", p);
                    fprintf(targetfile, "SUB R%d, %d\n", p, -temp1->address);
                    fprintf(targetfile, "MOV R%d, [R%d]\n",p, p);
                }
            }
            else{
                struct Gsymbol *temp = Lookup(t->left->varname);
                i = temp->address;
                p = getReg();
                fprintf(targetfile, "MOV R%d, [%d]\n", p ,i);                
            }
            fprintf(targetfile, "ADD R%d, %d\n", p, j);
            return p;

        }
        else if(t->left->type == 3){
            i = CodeGen(t->left, targetfile);
            fprintf(targetfile, "ADD R%d, %d\n", i, j);
            return i;
        }
        else if(t->left->type == 13){
            q = CodeGen(t->left, targetfile);
            fprintf(targetfile, "ADD R%d, %d\n", q, j);
            return q;
        }
        else if(t->left->type == 12)
        {
            i = CodeGen(t->left, targetfile);
            p = getReg();
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, i);
            freeReg();
            fprintf(targetfile, "ADD R%d, %d\n", p, j);
            return p;
        }        
    }
}

int getReg()
{
    k++;
    //printf("%d\n", k);
    return k;
}

void freeReg()
{
    k--;
    //printf("%d\n", k);
}