int adrs = 4097;
int l =0;
int k = -1;
int w = 0;
int z =0;int z1 =0;
int nest[50] = {0};

struct Gsymbol *head = NULL;


void newVariable(char* name, int type)
	{
		struct Gsymbol *temp;
    	temp = (struct Gsymbol*)malloc(sizeof(struct Gsymbol));
    	char* name1 = (char*)malloc(sizeof(char*));
    	strcpy(name1, name);
    	temp->name = name1;
    	temp->type = type;
    	temp->size = 1;
    	temp->address = adrs;
    	adrs++;
    	temp->next = NULL;
    	if(head == NULL)
    	{
    		head = temp;
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
    	}
	}

void newVariableArr(char* name, int size, int type)
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
		struct Gsymbol *temp = head;
		while(temp != NULL)
		{
			printf("%s\n", temp->name);
			temp = temp->next;
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
    temp->type = type;
    temp->Gentry = NULL;
    temp->nodetype = 1;
    //printf("leaf node with %d\n", n);
    return temp;
}

struct ASTNode* makeLeafNodeVarArr(char* var, int size, struct Gsymbol *g, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    char* name1 = (char*)malloc(sizeof(char*));
    strcpy(name1, var);
    temp->op = NULL;
    temp->val = size;
    temp->varname = name1;
    temp->left = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = g;
    if(g->type == 1){
        temp->nodetype = 1;
    }
    else{
        temp->nodetype = 2;
    }
    //printf("leaf node with %s[%d\n]", name1, size);
    return temp;
}

struct ASTNode* makeLeafNodeVar(char* var,struct Gsymbol *g, int type)
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
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = g;
    if(g->type == 1){
        temp->nodetype = 1;
    }
    else{
        temp->nodetype = 2;
    }
    //printf("leaf node with %s\n", var);
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
    temp->right = NULL;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    temp->type = 2;
    //printf("leaf node with %s\n", var);
    return temp;
}

struct ASTNode* makeConnectorNode(struct ASTNode *l, struct ASTNode *r, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->val = 0;
    temp->left = l;
    temp->varname = NULL;
    temp->right = r;
    temp->middle = NULL;
    //printf("connector node with both\n");
    temp->type = type;
    temp->Gentry = NULL;
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
    temp->right = NULL;
    temp->middle = NULL;
    //printf("Array node with %s, %d\n", temp->varname, type);
    temp->type = type;
    temp->Gentry = temp1;
    if(temp1->type == 1){
        temp->nodetype = 1;
    }
    else{
        temp->nodetype = 2;
    }
    return temp;
    
}


struct ASTNode* makeOperationNode(char* op, struct ASTNode *l, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = op;
    temp->val = 0;
    temp->varname = NULL;
    temp->left = l;
    temp->right = NULL;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    /*printf("operation node with %s\n", op);
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
        printf("A%s\n", l->Gentry->name);
        printf("B%d\n", l->left->type);
    }
    else if(l->type == 3)
    {
        printf("A%s\n", l->op);
    }
    return temp;*/
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
    temp->right = r;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    temp->nodetype = l->nodetype;
    /*printf("operator node with %s, %d, %d\n", op, l->type, r->type);
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
        printf("%s\n", l->Gentry->name);
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
        printf("%s\n", r->Gentry->name);
    }
    else if(r->type == 3)
    {
        printf("%s\n", r->op);
    }
    return temp;*/
}
}

struct ASTNode* makeConditionalNode(struct ASTNode *l, struct ASTNode *r, struct ASTNode *m, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->val = 0;
    temp->left = l;
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
    temp->left = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    return temp;
}

int CodeGen(struct ASTNode *t, FILE *targetfile)
{
    int i,j,q,r,s,s1,p,t1,l1,l2;
    char* c, strg;
    int flag = 0;
    if(t->type == 0){
                    if(t->left != NULL){
                        i = CodeGen(t->left, targetfile);
                    }
                    if(t->right != NULL){
                        j = CodeGen(t->right, targetfile);
                    }
                    return -1;
                    }
        else if(t->type == 1){
                    if(t->left->type == 5){
        			    struct Gsymbol *temp = Lookup(t->left->varname);
                        s = temp->address;
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
                        fprintf(targetfile, "MOV R%d, %d\n", q, s);
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
            if(t->left->op == NULL){
            		p = getReg();
                    q = getReg();
                    fprintf(targetfile, "MOV R%d, %d\n", p, 5);
                    fprintf(targetfile, "PUSH R%d\n", p);
                    fprintf(targetfile, "MOV R%d, %d\n", p, -2);
                    fprintf(targetfile, "PUSH R%d\n", p);
                    if(t->left->type == 5){
                        struct Gsymbol *temp = Lookup(t->left->varname);
                    	s = temp->address;
                    	fprintf(targetfile, "MOV R%d, [%d]\n", q, s);
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
                    fprintf(targetfile, "POP R%d\n", p);
                    fprintf(targetfile, "POP R%d\n", p);
                    fprintf(targetfile, "POP R%d\n", p);
                    fprintf(targetfile, "POP R%d\n", p);
                    fprintf(targetfile, "POP R%d\n", p);
                    freeReg();
                    freeReg();
                    return q;
                }
                else{
                    r = CodeGen(t->left, targetfile);
                    p = getReg();
                    q = getReg();
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
                            struct Gsymbol *temp = Lookup(t->left->varname);
                            s = temp->address;
                        }
                        else if(t->left->type == 12){
                            s1 = CodeGen(t->left, targetfile);
                            p = getReg();
                            fprintf(targetfile, "MOV R%d, [R%d]\n", p, s1);
                        }
                        else{
                            struct Gsymbol *temp = Lookup(t->left->varname);
                    		s = temp->address;
                            p = getReg();
                            fprintf(targetfile, "MOV R%d, [%d]\n", p, s);
                        }
                    if(t->right->type == 3){
                        q = CodeGen(t->right, targetfile);
                    }
                    else if(t->right->type == 11){
                    	q = getReg();
                    	fprintf(targetfile, "MOV R%d, %s\n", q, t->right->varname);
                    }
                    else if(t->right->type == 12){
                        s1 = CodeGen(t->right, targetfile);
                        q = getReg();
                        fprintf(targetfile, "MOV R%d, [R%d]\n", q, s1);
                        freeReg();
                    }
                    else if(t->right->type == 4){
                            i = t->right->val;
                            q = getReg();
                            fprintf(targetfile, "MOV R%d, %d\n", q, i);
                        }
                        else{
                            struct Gsymbol *temp = Lookup(t->right->varname);
                    		s1 = temp->address;
                            q = getReg();
                            fprintf(targetfile, "MOV R%d, [%d]\n", q, s1);
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
                                        return p;
                                    }
                                    else if(t->left->type == 5){
                                        fprintf(targetfile, "MOV [%d], R%d\n", s, q);
                                        freeReg();
                                        return s;
                                        break;
                                    }
                                    else
                                    {
                                        fprintf(targetfile, "MOV R%d, R%d\n", p, q);
                                        freeReg();
                                        return p;
                                        break;
                                    }
                    }
                    }
        else if (t->type == 6){
            if(t->left->left->type == 4){
            i = t->left->left->val;
            p = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", p ,i);
        }
        else if(t->left->left->type == 12)
        {
            i = CodeGen(t->left->left, targetfile);
            p = getReg();
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, i);
            
        }
        else if(t->left->left->type == 3)
        {
            p = CodeGen(t->left->left, targetfile);
            //p = getReg();
            //fprintf(targetfile, "MOV R%d, [R%d]\n", p, i);
        }
        else{
            struct Gsymbol *temp = Lookup(t->left->left->varname);
            i = temp->address;
            p = getReg();
            fprintf(targetfile, "MOV R%d, [%d]\n", p ,i);    
        }
        if(t->left->right->type == 4){
            j = t->left->right->val;
            q = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", q ,j);
        }
        else if(t->left->right->type == 12)
        {
            i = CodeGen(t->left->right, targetfile);
            q = getReg();
            fprintf(targetfile, "MOV R%d, [R%d]\n", q, i);
            freeReg();
        }
        else if(t->left->right->type == 3)
        {
            q = CodeGen(t->left->right, targetfile);
            //p = getReg();
            //fprintf(targetfile, "MOV R%d, [R%d]\n", p, i);
        }
        else{
            struct Gsymbol *temp = Lookup(t->left->right->varname);
            j = temp->address;
            q = getReg();
            fprintf(targetfile, "MOV R%d, [%d]\n", q ,j);
        }
        if(*(t->left->op) == '>'){
                            fprintf(targetfile, "GT R%d, R%d\n", p, q);
                            l1 = l;
                            l++;
                            fprintf(targetfile, "JZ R%d, C%d\n", p, l1);
                            i = CodeGen(t->right, targetfile);
                            l2 = l;
                            l++;
                            fprintf(targetfile, "JMP C%d\n", l2);
                            fprintf(targetfile, "C%d:\n", l1);
                            i = CodeGen(t->middle, targetfile);
                            fprintf(targetfile, "C%d:\n", l2);
                            freeReg();
                            freeReg();
                            return i;
                            }
        else if(*(t->left->op) == '<'){       fprintf(targetfile, "LT R%d, R%d\n", p, q);
                            l1 = l;
                            l++;
                            fprintf(targetfile, "JZ R%d, C%d\n", p, l1);
                            i = CodeGen(t->right, targetfile);
                            l2 = l;
                            l++;
                            fprintf(targetfile, "JMP C%d\n", l2);
                            fprintf(targetfile, "C%d:\n", l1);
                            i = CodeGen(t->middle, targetfile);
                            fprintf(targetfile, "C%d:\n", l2);
                            freeReg();
                            freeReg();
                            return i;
                            }
        else if(*(t->left->op) == 'E')      {fprintf(targetfile, "EQ R%d, R%d\n", p, q);
                            l1 = l;
                            l++;
                            fprintf(targetfile, "JZ R%d, C%d\n", p, l1);
                            i = CodeGen(t->right, targetfile);
                            l2 = l;
                            l++;
                            fprintf(targetfile, "JMP C%d\n", l2);
                            fprintf(targetfile, "C%d:\n", l1);
                            i = CodeGen(t->middle, targetfile);
                            fprintf(targetfile, "C%d:\n", l2);
                            freeReg();
                            freeReg();
                            return i;
                            }
        else if(*(t->left->op) == 'N')      {fprintf(targetfile, "NE R%d, R%d\n", p, q);
                            l1 = l;
                            l++;
                            fprintf(targetfile, "JZ R%d, C%d\n", p, l1);
                            i = CodeGen(t->right, targetfile);
                            l2 = l;
                            l++;
                            fprintf(targetfile, "JMP C%d\n", l2);
                            fprintf(targetfile, "C%d:\n", l1);
                            i = CodeGen(t->middle, targetfile);
                            fprintf(targetfile, "C%d:\n", l2);
                            freeReg();
                            freeReg();
                            return i;
                            }
            else if(*(t->left->op) == 'G')      {fprintf(targetfile, "GE R%d, R%d\n", p, q);
                            l1 = l;
                            l++;
                            fprintf(targetfile, "JZ R%d, C%d\n", p, l1);
                            i = CodeGen(t->right, targetfile);
                            l2 = l;
                            l++;
                            fprintf(targetfile, "JMP C%d\n", l2);
                            fprintf(targetfile, "C%d:\n", l1);
                            i = CodeGen(t->middle, targetfile);
                            fprintf(targetfile, "C%d:\n", l2);
                            freeReg();
                            freeReg();
                            return i;
                            }
            else if(*(t->left->op) == 'L')      {fprintf(targetfile, "LE R%d, R%d\n", p, q);
                            l1 = l;
                            l++;
                            fprintf(targetfile, "JZ R%d, C%d\n", p, l1);
                            i = CodeGen(t->right, targetfile);
                            l2 = l;
                            l++;
                            fprintf(targetfile, "JMP C%d\n", l2);
                            fprintf(targetfile, "C%d:\n", l1);
                            i = CodeGen(t->middle, targetfile);
                            fprintf(targetfile, "C%d:\n", l2);
                            freeReg();
                            freeReg();
                            return i;
                            }
            
    }
        else if (t->type == 7){
            if(t->left->left->type == 4){
            i = t->left->left->val;
            p = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", p ,i);
        }
        else if(t->left->left->type == 12)
        {
            i = CodeGen(t->left->left, targetfile);
            p = getReg();
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, i);
            freeReg();
        }
        else if(t->left->left->type == 3)
        {
            p = CodeGen(t->left->left, targetfile);
            //p = getReg();
            //fprintf(targetfile, "MOV R%d, [R%d]\n", p, i);
        }
        else{
            struct Gsymbol *temp = Lookup(t->left->left->varname);
            i = temp->address;
            p = getReg();
            fprintf(targetfile, "MOV R%d, [%d]\n", p ,i);    
        }
        if(t->left->right->type == 4){
            j = t->left->right->val;
            q = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", q ,j);
        }
        else if(t->left->right->type == 12)
        {
            i = CodeGen(t->left->right, targetfile);
            q = getReg();
            fprintf(targetfile, "MOV R%d, [R%d]\n", q, i);
            freeReg();
        }
        else if(t->left->right->type == 3)
        {
            q = CodeGen(t->left->right, targetfile);
            //p = getReg();
            //fprintf(targetfile, "MOV R%d, [R%d]\n", p, i);
        }
        else{
            struct Gsymbol *temp = Lookup(t->left->right->varname);
            j = temp->address;
            q = getReg();
            fprintf(targetfile, "MOV R%d, [%d]\n", q ,j);
        }
            if(*(t->left->op) == '>'){
                               fprintf(targetfile, "GT R%d, R%d\n", p, q);
                                l1 = l;
                                l++;
                                fprintf(targetfile, "JZ R%d, C%d\n", p, l1);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "C%d:\n", l1);
                                freeReg();
                                freeReg();
                                return i;
                                }
            else if(*(t->left->op) == '<')       {fprintf(targetfile, "LT R%d, R%d\n", p, q);
                                l1 = l;
                                l++;
                                fprintf(targetfile, "JZ R%d, C%d\n", p, l1);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "C%d:\n", l1);
                                freeReg();
                                freeReg();
                                return i;
                                }
            else if(*(t->left->op) == 'E')      {fprintf(targetfile, "EQ R%d, R%d\n", p, q);
                                l1 = l;
                                l++;
                                fprintf(targetfile, "JZ R%d, C%d\n", p, l1);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "C%d:\n", l1);
                                freeReg();
                                freeReg();
                                return i;
                                }
            else if(*(t->left->op) == 'N')      {fprintf(targetfile, "NE R%d, R%d\n", p, q);
                                l1 = l;
                                l++;
                                fprintf(targetfile, "JZ R%d, C%d\n", p, l1);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "C%d:\n", l1);
                                freeReg();
                                freeReg();
                                return i;
                                }
            else if(*(t->left->op) == 'G')      {fprintf(targetfile, "GE R%d, R%d\n", p, q);
                                l1 = l;
                                l++;
                                fprintf(targetfile, "JZ R%d, C%d\n", p, l1);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "C%d:\n", l1);
                                freeReg();
                                freeReg();
                                return i;
                                }
            else if(*(t->left->op) == 'L') {fprintf(targetfile, "LE R%d, R%d\n", p, q);
                                l1 = l;
                                l++;
                                fprintf(targetfile, "JZ R%d, C%d\n", p, l1);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "C%d:\n", l1);
                                freeReg();
                                freeReg();
                                return i;
                                
            }    
        }
    else if (t->type == 8){
        	l1 = l;
            l++;
            nest[w] = l;
            w++;
            fprintf(targetfile, "C%d:\n", l1);
            if(t->left->left->type == 4){
            i = t->left->left->val;
            p = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", p ,i);
        }
        else if(t->left->left->type == 12)
        {
            p = CodeGen(t->left->left, targetfile);
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, i);
            
        }
        else if(t->left->left->type == 3)
        {
            p = CodeGen(t->left->left, targetfile);
            //p = getReg();
            //fprintf(targetfile, "MOV R%d, [R%d]\n", p, i);
        }
        else{
            struct Gsymbol *temp = Lookup(t->left->left->varname);
            i = temp->address;
            p = getReg();
            fprintf(targetfile, "MOV R%d, [%d]\n", p ,i);    
        }
        if(t->left->right->type == 4){
            j = t->left->right->val;
            q = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", q ,j);
        }
        else if(t->left->right->type == 12)
        {
            i = CodeGen(t->left->right, targetfile);
            q = getReg();
            fprintf(targetfile, "MOV R%d, [R%d]\n", q, i);
            freeReg();
        }
        else if(t->left->right->type == 3)
        {
            q = CodeGen(t->left->right, targetfile);
            //p = getReg();
            //fprintf(targetfile, "MOV R%d, [R%d]\n", p, i);
        }
        else{
            struct Gsymbol *temp = Lookup(t->left->right->varname);
            j = temp->address;
            q = getReg();
            fprintf(targetfile, "MOV R%d, [%d]\n", q ,j);
        }
            if(*(t->left->op) == '>'){
                                   
                                fprintf(targetfile, "GT R%d, R%d\n", p, q);
                                l2 = l;
                                l++;
                                fprintf(targetfile, "JZ R%d, C%d\n", p, l2);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "JMP C%d\n", l1);
                                fprintf(targetfile, "C%d:\n", l2);
                                freeReg();
                                freeReg();
                                }
            else if(*(t->left->op) == '<')       {
                                fprintf(targetfile, "LT R%d, R%d\n", p, q);
                                l2 = l;
                                l++;
                                fprintf(targetfile, "JZ R%d, C%d\n", p, l2);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "JMP C%d\n", l1);
                                fprintf(targetfile, "C%d:\n", l2);
                                freeReg();
                                freeReg();
                                }
            else if(*(t->left->op) == 'E')      {
                                fprintf(targetfile, "EQ R%d, R%d\n", p, q);
                                l2 = l;
                                l++;
                                fprintf(targetfile, "JZ R%d, C%d\n", p, l2);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "JMP C%d\n", l1);
                                fprintf(targetfile, "C%d:\n", l2);
                                freeReg();
                                freeReg();
                                
                                }
            else if(*(t->left->op) == 'N')      {
                                fprintf(targetfile, "NE R%d, R%d\n", p, q);
                                l2 = l;
                                l++;
                                fprintf(targetfile, "JZ R%d, C%d\n", p, l2);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "JMP C%d\n", l1);
                                fprintf(targetfile, "C%d:\n", l2);
                                freeReg();
                                freeReg();
                                
                                }
            else if(*(t->left->op) == 'G')      {
                                fprintf(targetfile, "GE R%d, R%d\n", p, q);
                                l2 = l;
                                l++;
                                fprintf(targetfile, "JZ R%d, C%d\n", p, l2);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "JMP C%d\n", l1);
                                fprintf(targetfile, "C%d:\n", l2);
                                freeReg();
                                freeReg();
                                
                                }
            else if(*(t->left->op) == 'L')      {
                                fprintf(targetfile, "LE R%d, R%d\n", p, q);
                                l2 = l;
                                l++;
                                fprintf(targetfile, "JZ R%d, C%d\n", p, l2);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "JMP C%d\n", l1);
                                fprintf(targetfile, "C%d:\n", l2);
                                freeReg();
                                freeReg();                     
            }
            w--;
        return i;    
        }
    else if (t->type == 9){
        fprintf(targetfile, "JMP C%d\n", nest[w-1]);
        return -1;
    }
    else if (t->type == 10){
        fprintf(targetfile, "JMP C%d\n", nest[w]);
        return -1;
    }
    else if(t->type == 12){
        struct Gsymbol* temp2 = Lookup(t->varname);
            j = temp2->address;
            //printf("%d\n", j);
        if(t->left->type == 4)
        {
            i = t->left->val;
            p = getReg();
            fprintf(targetfile, "MOV R%d, %d\n",p ,i+j);
            return p;
        }
        else if(t->left->type == 5)
        {
            struct Gsymbol* temp1 = Lookup(t->left->varname);
            i = temp1->address;
            p = getReg();
            fprintf(targetfile, "MOV R%d, [%d]\n", p, i);
            fprintf(targetfile, "ADD R%d, %d\n", p, j);
            return p;

        }
        else if(t->left->type == 3)
        {
            i = CodeGen(t->left, targetfile);
            fprintf(targetfile, "ADD R%d, %d\n", i, j);
            return i;
        }
        else if(t->left->type == 12)
        {
            i = CodeGen(t->left, targetfile);
            p = getReg();
            fprintf(targetfile, "MOV R%d, [R%d]\n", p, q);
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

