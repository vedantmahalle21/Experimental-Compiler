int adrs = 4097;
int l =0;
int k = 0;
int w = 0;
int nest[50] = {0};

struct Gsymbol *head = NULL;


void newVariable(char* name, int type)
	{
		struct Gsymbol *temp;
    	temp = (struct Gsymbol*)malloc(sizeof(struct Gsymbol));
    	char* name1 = (char*)malloc(sizeof(char*));
    	strcpy(name1, name);
    	temp->name = name1;
    	temp->type = 1;
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
    printf("leaf node with %d\n", n);
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
    printf("leaf node with %s\n", var);
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
    printf("leaf node with %s\n", var);
    return temp;
}

struct ASTNode* makeConnectorNode(struct ASTNode *l, struct ASTNode *r, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->val = 0;
    temp->left = l;
    temp->right = r;
    temp->middle = NULL;
    printf("connector node with both\n");
    temp->type = type;
    temp->Gentry = NULL;
    return temp;
}

struct ASTNode* makeOperationNode(char* op, struct ASTNode *t, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = op;
    temp->val = 0;
    temp->varname = NULL;
    temp->left = t;
    temp->right = NULL;
    temp->middle = NULL;
    temp->type = type;
    temp->Gentry = NULL;
    printf("operation node with %s\n", op);
    return temp;
}

struct ASTNode* makeOperatorNode(char* op, struct ASTNode *l, struct ASTNode *r, int type)
{
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
    printf("operator node with %s\n", op);
    return temp;
}

struct ASTNode* makeConditionalNode(struct ASTNode *l, struct ASTNode *r, struct ASTNode *m, int type)
{
    struct ASTNode *temp;
    temp = (struct ASTNode*)malloc(sizeof(struct ASTNode));
    temp->op = NULL;
    temp->val = 0;
    temp->left = l;
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
    temp->op = NULL;temp->Gentry = NULL;
    temp->val = 0;
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
        			struct Gsymbol *temp = Lookup(t->left->varname);
                    s = temp->address;
                    p = getReg();
                    q = getReg();
                    fprintf(targetfile, "MOV R%d, %d\n", p, 7);
                    fprintf(targetfile, "PUSH R%d\n", p);
                    fprintf(targetfile, "MOV R%d, %d\n", p, -1);
                    fprintf(targetfile, "PUSH R%d\n", p);
                    fprintf(targetfile, "MOV R%d, %d\n", q, s);
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
                    return p;
                }
                }
                
        else if (t->type == 3){   
                    if(t->left->type == 3){
                        i = CodeGen(t->left, targetfile);
                        p = getReg();
                        fprintf(targetfile, "MOV R%d, R%d\n", p, i);
                    }
                    else{
                        if(t->left->type == 4){
                            i = t->left->val;
                            p = getReg();
                            fprintf(targetfile, "MOV R%d, %d\n", p, i);
                        }
                        else if(*(t->op) == '='){
                            struct Gsymbol *temp = Lookup(t->left->varname);
                    		s = temp->address;
                        }
                        else{
                            struct Gsymbol *temp = Lookup(t->left->varname);
                    		s = temp->address;
                            p = getReg();
                            fprintf(targetfile, "MOV R%d, [%d]\n", p, s);
                        }
                        
                    }
                    if(t->right->type == 3){
                        q = CodeGen(t->right, targetfile);
                    }
                    else if(t->right->type == 11){
                    	q = getReg();
                    	fprintf(targetfile, "R%d, %s\n", q, t->right->varname);
                    }
                    else{
                        if(t->right->type == 4){
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
                        case '=' : fprintf(targetfile, "MOV [%d], R%d\n", s, q);
                                   freeReg();
                                   return s;
                                   break;
                    }
                    }
        else if (t->type == 6){
        if(t->left->left->type == 4){
            i = t->left->left->val;
            p = getReg();
            fprintf(targetfile, "MOV R%d, %d\n", p ,i);
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
                            fprintf(targetfile, "JZ C%d\n", l1);
                            i = CodeGen(t->right, targetfile);
                            l2 = l;
                            l++;
                            fprintf(targetfile, "JMP C%d\n", l2);
                            fprintf(targetfile, "C%d:\n", l1);
                            i = CodeGen(t->middle, targetfile);
                            fprintf(targetfile, "C%d:\n", l2);
                            freeReg();
                            return i;
                            }
        else if(*(t->left->op) == '<'){       fprintf(targetfile, "LT R%d, R%d\n", p, q);
                            l1 = l;
                            l++;
                            fprintf(targetfile, "JZ C%d\n", l1);
                            i = CodeGen(t->right, targetfile);
                            l2 = l;
                            l++;
                            fprintf(targetfile, "JMP C%d\n", l2);
                            fprintf(targetfile, "C%d:\n", l1);
                            i = CodeGen(t->middle, targetfile);
                            fprintf(targetfile, "C%d:\n", l2);
                            freeReg();
                            return i;
                            }
        else if(*(t->left->op) == 'E')      {fprintf(targetfile, "EQ R%d, R%d\n", p, q);
                            l1 = l;
                            l++;
                            fprintf(targetfile, "JZ C%d\n", l1);
                            i = CodeGen(t->right, targetfile);
                            l2 = l;
                            l++;
                            fprintf(targetfile, "JMP C%d\n", l2);
                            fprintf(targetfile, "C%d:\n", l1);
                            i = CodeGen(t->middle, targetfile);
                            fprintf(targetfile, "C%d:\n", l2);
                            freeReg();
                            return i;
                            }
        else if(*(t->left->op) == 'N')      {fprintf(targetfile, "NE R%d, R%d\n", p, q);
                            l1 = l;
                            l++;
                            fprintf(targetfile, "JZ C%d\n", l1);
                            i = CodeGen(t->right, targetfile);
                            l2 = l;
                            l++;
                            fprintf(targetfile, "JMP C%d\n", l2);
                            fprintf(targetfile, "C%d:\n", l1);
                            i = CodeGen(t->middle, targetfile);
                            fprintf(targetfile, "C%d:\n", l2);
                            freeReg();
                            return i;
                            }
            else if(*(t->left->op) == 'G')      {fprintf(targetfile, "GE R%d, R%d\n", p, q);
                            l1 = l;
                            l++;
                            fprintf(targetfile, "JZ C%d\n", l1);
                            i = CodeGen(t->right, targetfile);
                            l2 = l;
                            l++;
                            fprintf(targetfile, "JMP C%d\n", l2);
                            fprintf(targetfile, "C%d:\n", l1);
                            i = CodeGen(t->middle, targetfile);
                            fprintf(targetfile, "C%d:\n", l2);
                            freeReg();
                            return i;
                            }
            else if(*(t->left->op) == 'L')      {fprintf(targetfile, "LE R%d, R%d\n", p, q);
                            l1 = l;
                            l++;
                            fprintf(targetfile, "JZ C%d\n", l1);
                            i = CodeGen(t->right, targetfile);
                            l2 = l;
                            l++;
                            fprintf(targetfile, "JMP C%d\n", l2);
                            fprintf(targetfile, "C%d:\n", l1);
                            i = CodeGen(t->middle, targetfile);
                            fprintf(targetfile, "C%d:\n", l2);
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
                                fprintf(targetfile, "JZ C%d\n", l1);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "C%d:\n", l1);
                                freeReg();
                                return i;
                                }
            else if(*(t->left->op) == '<')       {fprintf(targetfile, "LT R%d, R%d\n", p, q);
                                l1 = l;
                                l++;
                                fprintf(targetfile, "JZ C%d\n", l1);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "C%d:\n", l1);
                                freeReg();
                                return i;
                                }
            else if(*(t->left->op) == 'E')      {fprintf(targetfile, "EQ R%d, R%d\n", p, q);
                                l1 = l;
                                l++;
                                fprintf(targetfile, "JZ C%d\n", l1);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "C%d:\n", l1);
                                freeReg();
                                return i;
                                }
            else if(*(t->left->op) == 'N')      {fprintf(targetfile, "NE R%d, R%d\n", p, q);
                                l1 = l;
                                l++;
                                fprintf(targetfile, "JZ C%d\n", l1);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "C%d:\n", l1);
                                freeReg();
                                return i;
                                }
            else if(*(t->left->op) == 'G')      {fprintf(targetfile, "GE R%d, R%d\n", p, q);
                                l1 = l;
                                l++;
                                fprintf(targetfile, "JZ C%d\n", l1);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "C%d:\n", l1);
                                freeReg();
                                return i;
                                }
            else if(*(t->left->op) == 'L') {fprintf(targetfile, "LE R%d, R%d\n", p, q);
                                l1 = l;
                                l++;
                                fprintf(targetfile, "JZ C%d\n", l1);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "C%d:\n", l1);
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
                                fprintf(targetfile, "JZ C%d\n", l2);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "JMP C%d\n", l1);
                                fprintf(targetfile, "C%d:\n", l2);
                                freeReg();
                                
                                }
            else if(*(t->left->op) == '<')       {
                                fprintf(targetfile, "LT R%d, R%d\n", p, q);
                                l2 = l;
                                l++;
                                fprintf(targetfile, "JZ C%d\n", l2);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "JMP C%d\n", l1);
                                fprintf(targetfile, "C%d:\n", l2);
                                freeReg();
                                
                                }
            else if(*(t->left->op) == 'E')      {
                                fprintf(targetfile, "EQ R%d, R%d\n", p, q);
                                l2 = l;
                                l++;
                                fprintf(targetfile, "JZ C%d\n", l2);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "JMP C%d\n", l1);
                                fprintf(targetfile, "C%d:\n", l2);
                                freeReg();
                                
                                }
            else if(*(t->left->op) == 'N')      {
                                fprintf(targetfile, "NE R%d, R%d\n", p, q);
                                l2 = l;
                                l++;
                                fprintf(targetfile, "JZ C%d\n", l2);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "JMP C%d\n", l1);
                                fprintf(targetfile, "C%d:\n", l2);
                                freeReg();
                                
                                }
            else if(*(t->left->op) == 'G')      {
                                fprintf(targetfile, "GE R%d, R%d\n", p, q);
                                l2 = l;
                                l++;
                                fprintf(targetfile, "JZ C%d\n", l2);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "JMP C%d\n", l1);
                                fprintf(targetfile, "C%d:\n", l2);
                                freeReg();
                                
                                }
            else if(*(t->left->op) == 'L')      {
                                fprintf(targetfile, "LE R%d, R%d\n", p, q);
                                l2 = l;
                                l++;
                                fprintf(targetfile, "JZ C%d\n", l2);
                                i = CodeGen(t->right, targetfile);
                                fprintf(targetfile, "JMP C%d\n", l1);
                                fprintf(targetfile, "C%d:\n", l2);
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

