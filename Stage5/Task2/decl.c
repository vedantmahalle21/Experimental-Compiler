int adrs = 4097;
int i = 0;
struct Gsymbol *head = NULL;

struct Paramstruct *head1 = NULL;

struct Lsymbol *head2 = NULL;

struct ArgStruct *head3 = NULL;

void makeNull()
{
    head1 = NULL;
}

void makeLNull()
{
    head2 = NULL;
}

void makeANull()
{
    head3 = NULL;
}

struct Gsymbol *newVariable(char* name, int type)
	{
		struct Gsymbol *temp;
    	temp = (struct Gsymbol*)malloc(sizeof(struct Gsymbol));
    	char* name1 = (char*)malloc(sizeof(char*));
    	strcpy(name1, name);
    	temp->name = name1;
    	temp->type = type;
    	temp->size = 1;
        temp->paramlist = NULL;
    	temp->address = adrs;
        temp->flabel = 0;
    	adrs++;
    	temp->next = NULL;
    	if(head == NULL)
    	{
    		head = temp;
            printf("Global Declaration %s\n", name1);
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
            printf("Global Declaration %s\n", name1);
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
        adrs = adrs + size;
        temp->next = NULL;
        if(head == NULL)
        {
            head = temp;
            printf("Global Declaration %s with size %d\n", name1, size);
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
            printf("Global Declaration %s with size %d\n", name1, size);
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

void newLVariableG(char* name, int type)
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
        i=0;
        while(temp != NULL)
        {
            printf("%d.%s\n",i, temp->name);
            temp = temp->next;
            i++;
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
        //printf("t.%d\n", p->type);
        //printf("n.%d\n", arg->t->nodetype);
        //printf("w.%d\n", arg->t->type);
        if(p->type != arg->t->nodetype){
            printf("Arguments does not match1\n");
            exit(-1);
        }
        p = p->next;
        arg = arg->next;
    }
    if(arg != NULL){
        printf("r.%d\n", arg->t->nodetype);
        printf("Arguments does not match2\n");
        exit(-1);
    }
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
    temp->type = type;
    temp->Lentry = NULL;
    temp->Gentry = NULL;
    temp->type = 2;
    printf("leaf node with %s\n", var);
    return temp;
}

struct ASTNode* makeLeafNodeVarG(char* var,struct Gsymbol *g, int type)
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

struct ASTNode* makeLeafNodeVarL(char* var,struct Lsymbol *l, int type)
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
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    temp->Lentry = l;
    if(l->type == 1){
        temp->nodetype = 1;
    }
    else{
        temp->nodetype = 2;
    }
    printf("leaf node with %s\n", var);
    return temp;
}

struct ASTNode* makeArrayNode(char* var, struct ASTNode *l, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, var);
    struct Gsymbol* temp1 = Lookup(name1);
    struct Lsymbol* temp2 = LookupLocal(name1);    
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
        }
        else{
            temp->nodetype = 2;
        }
    }
    else{
        temp->Lentry = temp2;
        if(temp2->type == 1){
            temp->nodetype = 1;
        }
        else{
            temp->nodetype = 2;
        }
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
    temp->type = type;
    temp->Gentry = NULL;
    return temp;
}

struct ASTNode* makeOperationNode(char* op, struct ASTNode *l, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    if(l->type == 5){
        struct Gsymbol *temp1 = Lookup(l->varname);
        if(temp1->size != 1){
            printf("Array index error\n");
            exit(-1);
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
    printf("operation node with %s\n", op);
    if(l->type == 4)
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
    }
    return temp;
}

struct ASTNode* makeOperatorNode(char* op, struct ASTNode *l, struct ASTNode *r, int type)
{
    if(l->nodetype != r->nodetype){
        printf("Typematch error\n");
        exit(1);
    }
    else if(r->type == 6 && type == 3){
        printf("Typematch error\n");
        exit(1);
    }
    else{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = op;
    temp->val = 0;
    temp->varname = NULL;
    temp->left = l;
    temp->Lentry = NULL;
    temp->right = r;
    temp->middle = NULL;
    temp->Arg = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    temp->nodetype = l->nodetype;
    printf("operator node with %s, %d, %d\n", op, l->type, r->type);
    if(l->type == 4)
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
    }
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
    temp->Lentry = NULL;
    temp->left = NULL;
    temp->Arg = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    return temp;
}

struct ASTNode* makeFuncNode(char* name, int nodetype, int type)
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
    temp->Gentry = NULL;
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

