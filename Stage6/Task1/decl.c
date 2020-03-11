int adrs = 4097;
int il = 0;
int fi =0;
int sz =0;

struct Gsymbol *head = NULL;

struct Paramstruct *head1 = NULL;

struct Lsymbol *head2 = NULL;

struct ArgStruct *head3 = NULL;

struct TypeTable *head4 = NULL;

struct FieldList *head5 = NULL;

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
    temp->fields = NULL;
    head4 = temp;
    temp1->name = "str";
    temp1->size = 1;
    temp1->fields = NULL;
    temp2->name = "boolean";
    temp2->size = 1;
    temp2->fields = NULL;
    temp3->name = "void";
    temp3->size = 1;
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

struct FieldList *newField(char* name)
{
    struct FieldList *temp;
    temp = (struct FieldList*)malloc(sizeof(struct FieldList));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, name);
    temp->name = name1;
    temp->fieldIndex = fi;
    fi++;
    sz++;
    temp->typet = NULL;
    if(head5 == NULL)
    {
        head5 = temp;
        printf("Field Declaration %s\n", name1);
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
        printf("Field Declaration %s\n", name1);
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
            printf("qq..%s\n", temp->name);
            printf("%s\n", temp->typet->name);
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

int GetSize (Typetable* type)
{
    return type->size;
}

struct Gsymbol *newVariable(char* name, int type)
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
            temp->typet = NULL;
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
            printf("Global Declaration %s and address %d\n", name1, adrs-1);
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
            printf("Global Declaration %s and address %d\n", name1, adrs-1);
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


void Display(struct Gsymbol *t)
    {
        struct Gsymbol *temp = t;
        while(temp != NULL)
        {
            printf("%s\n", temp->name);
            if(temp->paramlist != NULL){
                Display1(temp->paramlist);
            }
            temp = temp->next;
        }
    }

struct Lsymbol *newLVariable(char* name, int type)
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
            temp->typet = NULL;
        }
        if(head2 == NULL){
            head2 = temp;
            printf("Local Declaration %s\n", name1);
            DisplayL(head2);
            return head2;
        }
        else{   
            struct Lsymbol *temp1;
            temp1 = head2;
            while(temp1->next != NULL){
                temp1 = temp1->next;
            }
            temp1->next = temp;
            printf("Local Declaration %s\n", name1);
            DisplayL(head2);
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
            printf("Arguments does not match1\n");
            exit(-1);
        }
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
    temp->varname = NULL;
    temp->left = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    temp->Arg = NULL;
    temp->type = 19;
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
    temp->type = 2;
    printf("leaf node with %s\n", var);
    return temp;
}

struct ASTNode* makeLeafNodeVarG(char* var,struct Gsymbol *g, struct TypeTable *t, int type)
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
    temp->Gentry = g;
    temp->Lentry = NULL;
    if(g->type == 1){
        temp->nodetype = 1;
    }
    else{
        temp->nodetype = 2;
    }
    printf("leaf node with %s\n", var);
    return temp;
}

struct ASTNode* makeLeafNodeVarL(char* var,struct Lsymbol *l,struct TypeTable *t, int type)
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
    temp->nodetype = l->type;
    printf("leaf node with a %s with type %d\n", var, temp->nodetype);
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
            printf("Typematch error\n");
            exit(1);
        }
    }
    else if(l->type == 6){
        printf("Typematch error\n");
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
    printf("operation node with %s\n", op);
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

struct ASTNode* makeOperatorNode(char* op, struct ASTNode *l, struct ASTNode *r, int type)
{
    printf("%d\n", l->type);
    printf("%d\n", r->type);
    printf("%s\n", l->varname);
    printf("%s\n", op);
    if(*op == 'E'){
        if(r->type != l->type && r->type == 19){
            printf("Typematch error\n");
            exit(1);
        }
    }
    else if(l->type == 20 && r->type != 20){
        struct FieldList *temp1 =  LookupF(l->typet, l->varname);
        printf("%s\n", l->typet->name);
        //printf("%s\n", r->typet->name);
        if(temp1->typet != r->typet){
            printf("Typematch error2\n");
            exit(1);
        }
    }
    else if(r->type == 20 && l->type != 20){
        struct FieldList *temp1 =  LookupF(r->typet, r->varname);
        if(temp1->typet != l->typet){
            printf("Typematch error1\n");
            exit(1);
        }
    }
    else if(l->typet != r->typet){
        printf("%s\n", l->typet->name);
        printf("%s\n", r->typet->name);
        printf("Typematch error1\n");
        exit(1);
    }
    else{
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
    printf("Function call node with %s\n", t->varname);
    return temp;
}

