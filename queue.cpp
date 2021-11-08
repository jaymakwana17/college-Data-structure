/**********SpecInfo***************/

// Linear Queue using ARRAY


#include<stdio.h>
#define SIZE 10
void inqueue(int x);
void dequeue();
void display();

int FRONT=-1;
int REAR=-1;
int QUEUE[SIZE];
int main()
{
int x,ch;
while(1)
{
printf("\n1: Insert element in queue");
printf("\n2: Delete element in queue");
printf("\n3: Display queue");
printf("\n4: Exit \n=");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf("Enter elment:");
scanf("%d",&x);
inqueue(x);
break;

case 2:
dequeue();
break;

case 3:
display();
break;

case 4:
return 1;

}

}


}

/*....................functioons.................*/

void inqueue(int x)
{
if(REAR>SIZE-1)
printf("queue is Overflow");
else
{
REAR+=1; 
QUEUE[REAR]=x;

if(FRONT==-1)
FRONT=0;
}
}

void dequeue()
{
if(FRONT==-1)
printf("Queue is underflow");
else
{
printf("Deleted Element is %d",QUEUE[FRONT]);
if(FRONT==REAR)
{
FRONT=-1;
REAR=-1;
}
else
{
FRONT=FRONT+1;
}
}
}

void display()
{
int i;
if(FRONT==-1)
printf("Queue is empty");
else
{
for(i=FRONT;i<=REAR;i++)
{
printf("->%d",QUEUE[i]);

}
}
}
















