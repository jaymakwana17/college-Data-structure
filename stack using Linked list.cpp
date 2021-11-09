/**************** stack using linked list **************/
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *push(struct node*);
struct node *pop(struct node*);
struct node *display(struct node*);

int main()
{
	struct node *head=NULL;  //intializing empty stack
	int i,ch;
	

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
		
			head=push(head);
			break;
		case 2:
			head=pop(head);
			break;
		case 3:
			head=display(head);
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

struct node *push(struct node *top)
{
    struct node *new_node, *ptr;
    int num;
    printf("Enter -1 to stop linked list\n");
    printf("Enter the Data:");
    scanf("%d",&num);
    while (num!=-1){
        new_node= (struct node*)(malloc(sizeof(struct node)));
        new_node->data=num;

        if(top==NULL){
            new_node->next=NULL;
            top=new_node;
        }
        else{
            ptr=top;
            while(ptr->next!=NULL)
                ptr=ptr->next;
                ptr->next=new_node;
                new_node->next=NULL;
            }
            printf("Enter the data:");
            scanf("%d",&num);
        }
        
    return top;

}

//struct node *push(struct node *top, int ele)
//{
//	struct node *temp;
//	temp=(struct node*)malloc(sizeof (struct node));
//	if(top==NULL)
//	printf("overflow");
//	top=temp;
//	temp->data=ele;
//	temp->next=NULL;
//	return top;
//	
//}
struct node *pop(struct node *top)
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
	//top->next=NULL;
	free(temp);
	
	return top;
}

struct node *display(struct node *top)
{
   struct node *temp;
//   temp=top;
//    	while(temp!=NULL)
//			{
//			 		printf("->%d",temp->data);
//					 	temp=temp->next;
//			 }
   
//  if(top==NULL)   
// {
//     printf("underflow..!");
//	 	}

	//else{
	
	temp=top;
   
   while(temp!=NULL)
   {
	
	   printf("%d->",temp->data);
   			temp=temp->next;
	}
  //}
  return top;
}










