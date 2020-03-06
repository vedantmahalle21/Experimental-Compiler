int adrs = 4097;

struct Gsymbol *head = NULL;

struct Paramstruct *head1 = NULL;

void makeNull()
{
    head1= NULL;
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
            return temp1->next;
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
        return head1;
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

struct Paramstruct *LookupParam(char* name1)
    {
        struct Paramstruct *temp = head1;
        if(head1 == NULL)
        {
            return head1;
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

void Display1(struct Paramstruct *t)
    {
        struct Paramstruct *temp4 = t;
        while(temp4 != NULL)
        {
            printf("%s\n", temp4->name);
            temp4 = temp4->next;
        }
        printf("...\n");
    }

