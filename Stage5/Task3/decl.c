int adrs = 4097;
int il = 0;
int l =0;
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
    if(l->nodetype != r->nodetype){
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

int CodeGen(struct ASTNode *t, FILE *targetfile)
{
    int i,j,q,r,s,s1,p,t1,l1,l2;
    char* c, strg;
    int flag = 0;
    if(t->type == 13){
        printf("type.%d\n", t->type);
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
            printf("Func Body\n");
            i = CodeGen(t->left, targetfile);
            printf("Func Ret\n");
            j = CodeGen(t->right, targetfile);
            printf("Main Completed\n");
            return -1;
        }
        else{
            int temp_ar = 1;
            fprintf(targetfile, "PUSH BP\n");
            fprintf(targetfile, "MOV BP, SP\n");
            p = getReg();
            struct Lsymbol *temp = t->Lentry;
            int u = 1;
            struct Paramstruct *Param_temp = t->Gentry->paramlist;
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
            printf("Func Body\n");
            i = CodeGen(t->left, targetfile);
            //freeReg();
            q = getReg();
            printf("Func Ret\n");
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
            printf("%s Completed\n", t->varname);
        }
    }
    else if(t->type == 14){
        printf("type.%d\n", t->type);
        printf("Ret Stmt\n");
        i = CodeGen(t->left, targetfile);
        printf("Ret Completed\n");
        return i;
    }
    else if(t->type == 15){
        printf("type.%d\n", t->type);
        printf("Func Called\n");
        int h = k;
        int g = k;
        while(h != -1){
            fprintf(targetfile, "PUSH R%d\n", h);
            h--;
            freeReg();
        }
        struct ArgStruct *arg = t->Arg;
        no_temp1 = 1;
        while(arg->next != NULL){
            arg = arg->next;
            no_temp1++;
        }
        int no_temp = no_temp1;
        while(no_temp != 0){
            int no_ = no_temp;
            struct ArgStruct *arg1 = t->Arg;
            while(no_ != 1){
                arg1 = arg1->next;
                no_--;
            }
            i = CodeGen(arg1->t, targetfile);
            fprintf(targetfile, "PUSH R%d\n", i);
            freeReg();
            no_temp--;
        }
        p = getReg();
        fprintf(targetfile, "PUSH R%d\n", p);
        freeReg();
        fprintf(targetfile, "CALL Y%d\n", t->left->Gentry->flabel);
        fprintf(targetfile, "POP R%d\n", g+1);
        q = getReg();
        while(no_temp1 != 0){
            fprintf(targetfile, "POP R%d\n", q);
            no_temp1--;
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
    else if(t->type == 0){
        printf("type.%d\n", t->type);
        if(t->left != NULL){
            i = CodeGen(t->left, targetfile);
        }
        if(t->right != NULL){
            j = CodeGen(t->right, targetfile);
        }
        return -1;
        }
    else if(t->type == 1){
        printf("type.%d\n", t->type);
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
        printf("type.%d\n", t->type);
        if(t->left->op == NULL){
            q = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", q, 5);
            fprintf(targetfile, "PUSH R%d\n", q);
            fprintf(targetfile, "MOV R%d, %d\n", q, -2);
            fprintf(targetfile, "PUSH R%d\n", q);
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
        printf("type.%d\n", t->type);
        struct Lsymbol*temp1;
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
            }
        }
        else if(t->left->type == 15){
            p = CodeGen(t->left, targetfile);
        }
        else if(t->left->type == 12){
            s1 = CodeGen(t->left, targetfile);
            p = getReg();
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, s1);
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
        struct Lsymbol*temp2;
        if(t->right->type == 3){
            q = CodeGen(t->right, targetfile);
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
                        else if(t->left->type == 5){
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
        printf("type.%d\n", t->type);
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
        printf("type.%d\n", t->type);
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
        printf("type.%d\n", t->type);
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
        printf("type.%d\n", t->type);
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
        printf("type.%d\n", t->type);
        fprintf(targetfile, "JMP X%d\n", nest[w-1]);
        return -1;
    }
    else if (t->type == 10){
        printf("type.%d\n", t->type);
        fprintf(targetfile, "JMP X%d\n", nest[w]);
        return -1;
    }
    else if(t->type == 12){
        printf("type.%d\n", t->type);
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
    return k;
}

void freeReg()
{
    k--;
}
