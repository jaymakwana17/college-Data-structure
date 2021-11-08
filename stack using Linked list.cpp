/**************** stack usinf linked list **************/
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int push(struct node*, int);
int pop(struct node*);
int display(struct node*);

int main()
{
	struct node *head=NULL;  //intializing empty stack
	int i,ele,ch;
	
	
while(ch!=4)
{
	printf("\n1:Push");
	printf("\n2:Pop");
	printf("\n3:Display Stack");
	printf("\n4:Exit:");
	printf("\n Select you choice \n->");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Enter element to be insert:");
			scanf("%d",&ele);
			push(head,ele);
			break;
		case 2:
			pop(head);
			break;
		case 3:
			display(head);
			break;
		case 4:
			return 4;
			break;
		default:
			printf("Enter correct choice..!");
	}
}
return 0;
}

/****************** functions *********************/

int push(struct node *top, int ele)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof (struct node));
	if(temp==NULL)
	printf("overflow");
	temp->data=ele;
	temp->next=top;
	top=temp;
}
int pop(struct node *top)
{
	struct node *temp;
	int item;
	if(top==NULL)
	{
		printf("overflow..!");
		return NULL;
	}
	temp=top;
	item=temp->data;
	printf("Deleted Element:%d",item);
	top=temp->next;
	free(temp);
}

int display(struct node *top)
{
   struct node *temp;
   
   if(top==NULL)
   return ;
   /*{
     printf("underflow..!");
	}
	else{*/
	temp=top;
   
   while(temp!=NULL)
   {
   	printf("%d->",temp->data);
   	temp=temp->next;
	}
	 //}
}










