#include<stdio.h>
#include<stdlib.h>

typedef struct Node        // node structure 
{
	int data;
	struct Node *next;
}node;						// name of structure is node

node *front=NULL, *rear=NULL, *temp;

// Function prototype
void insert();
void del();
void display();

int main()
{
	int ch;
	do
	{
		printf("\n....Menu....");
		printf("\n1:Insert Node");
		printf("\n2:Delete Node");
		printf("\n3:Display");
		printf("\n4:Exit");
		
		printf("\n Select your Choice form above:");
		
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				insert();
				break;
				
			case 2:
				del();
				break;
				
			case 3:
				display();
				break;
				
			case 4:
				return 1;
				
			default:
				printf("\n INvalid choice, please check !!");
				
		}
	}while(1);
	return 0;
}

// function definition

void insert()
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter the node value:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	
	if(rear==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	
	rear->next=front;
}

void del()
{
	temp=front;
	if(front==NULL)
	printf("\n Underflow");
	else{
		if(front==rear)
		{
			front=rear=NULL;
		}
		else
		{
			front=front->next;
			rear->next=front;
		}
		printf("\n Node deleted:%d",front->data);
		temp->next=NULL;
		free(temp);
	}
}


void display()
{
	temp=front;
	if(front==NULL)
	{
		printf("\nLinked list is empty");
	}
	else
	{
		printf("\n");
		for(;temp!=rear; temp=temp->next)
		{
			printf("%d=>",temp->data);
		}
		printf("%d",temp->data);
	}
}




























