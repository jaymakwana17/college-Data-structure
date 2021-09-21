// All functions of linked list

 // print function //
 void print()
 {
 	struct node *q;
 	while(q!=NULL)
 	{
 		printf("%d",q->data);
 		q=q->next;
	 }

 }

 // count the number of node //
 void count(struct node *q)
 {
 	int count=0;
 	while(q!=NULL)
 	{
 		count++;
 		q=q->next;
	}
	printf("count=%d",&count);
	 
 }
 
 // searching element //
 void search(struct node *q, int data)
 {
 	while(q!=NULL)
 	{
 		if(q->data==data)
 		{
 			printf("element found:%d",&data)
		}
		else
		{
			q=q->next;
		}
	 }
 }
 
 //  insert at end //
 void inend(struct node *q, int data)
 {
 	struct node *newnode;
 	
 	newnode=malloc(sizeof(struct node))
 	newnode->data=data;
 	newnode->next=NULL; 
 	
 	again:
 	while(q=NULL)
 	{
 		*q=newnode;
	}
	
	if(q!=NULL)
	{
		q=q->next;
		goto again;
	}
	 
 }
 
 // insert at beginnig //
 void inbeg(struct nide *q, int data)
 {
  struct node *temp, *newnode;
 
 newnode=malloc(sizeof(struct node));
 newnode->data=data; 
 newnode->next=q*;
 	*q=newnode;
 }
 
 // insert at middle //
 void inmid(struct node *q, int data, int loc)
 {
 	struct node *temp, *r, *newnode;
 	int i;
 	 
 	temp=q;
 	
 	for(i=0;i<loc-1;i++)
 	{
 		temp=temp->next;
 		r=temp
 		
 		if(temp==NULL)
 		{
 			printf("Location does not exit in list");
		 }
	 }
	 
	 newnode=malloc(sizeof(struct node));
	 newnode->data=data;
	 newnode->next=temp->next;
	 r->next=newnode;
	 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
