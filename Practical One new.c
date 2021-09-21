#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head=NULL, *ptr;

void begin(int value)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
}

void endin(int value)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	head=ptr; 
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=newnode;

}

void midin(int value, int elementname)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	if (head==NULL)
	{
		head=newnode;
	}
	else
	{
		ptr=head;
		while(ptr->data!=elementname)
		{
			ptr=ptr->next;
		}
		newnode->next=ptr->next;
		ptr->next=newnode;
	}
}

void begdel()
{
	if(head==NULL)
	{
		printf("LINKED LIST is empty !!");
	}
	else
	{
	  ptr=head->next;
	  head=head->next;
	  ptr->next=NULL;
	  free(ptr);
	}
}

void enddel()
{
	if(head==NULL)
	{
		printf("LINKED LIST is empty !!");
	}
	else
	{
		struct node *preptr;
		ptr=head;
		preptr=ptr;
		while(ptr!=NULL)
		{
			preptr=ptr;
			ptr=ptr->next;
		}
		preptr->next=NULL;
		free(ptr);
		
	}
}

void middel(int elementname)
{
	if (head==NULL)
	{
		printf("LINKED LIST is empty !!");
	}
	else
	{
		struct node *preptr;
		ptr=head;
		preptr=ptr;
		while(ptr->data!=elementname)
		{
			preptr=ptr;
			ptr=ptr->next;
		}
		preptr->next=ptr->next;
		free(ptr);
	}
}

void display()
{
	if (head==NULL)
	{
		printf("LINKED LIST is empty !!");
	}
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			printf("=>%d", &ptr->data);
			ptr=ptr->next;
		}
	}
	
}

void main()
{
	int choice;
	printf("1:Insert begging \n");
	printf("2:Insert end \n");
	printf("3:Insert middle \n");
	printf("4:Delte begging \n");
	printf("5:Delete end \n");
	printf("6:Delete middle \n");
	printf("7:Display  \n");	
	printf("8:Exit \n");
	
	do
	{
		printf("Enter your choice form above :");
		scanf("%d",&choice);
		
		int value, elementname;
		
		switch(choice)
	{
		case 1:
		printf("Enter value:");
		scanf("%d",&value);
		begin(value);
		break;
		
		case 2:
		printf("Enter value:");
		scanf("%d",&value);
		endin(value);
		break;
		
		case 3:
		printf("Enter value:");
		scanf("%d",&value);
		printf("Enter value after which you want to add:");
		scanf("%d",&elementname);
		midin(value,elementname);
		break;
		
		case 4:
		begdel();
		break;
		
		case 5:
		printf("Enter value:");
		scanf("%d",&value);
		enddel();
		break;
		
		case 6:
		printf("Enter value after which you want tp delete:");
		scanf("%d",&elementname);
		endmid(elementname);
		break;
		
		case 7:
		display();
		break;
		
		case 8:
			exit(0);
			break;
		
		default:
			printf("Please ENTER correct choice");
		
	}	
	}
	while(choice !=8);
	
}

















