int address = 4097;

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
    	temp->binding = address;
    	address++;
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