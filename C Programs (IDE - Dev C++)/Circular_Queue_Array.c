#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void push();
void pop();
void display();
int arr[20];
int const n=5;
	int num;
	int front=-1,rear=-1;

void main()
{
	int choice;
	while(1)
	{
		printf("\n\tCircular Queue Implementation by using array\n");
		printf("1.Push()\n2.Pop()\n3.Display()\n4.Exit\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	push();	break;
			case 2:	pop();	break;
			case 3: display();	break;
			case 4: printf("Thanks"); getch();	exit(0);
			default :	printf("Wrong Choice.");	break;
		}
	}
}
//	2	4	6	8	10
//  0	1	2	3	4
void push()
{
	printf("\nEnter  a number :");
	scanf("%d",&num);
	if((front<=0 && rear>=n-1)|| front==rear+1)
	{
		printf("\nQueue Overflow\n");
	}	
	else if (front==-1 && rear==-1)
	{
		front++;
		rear++;
		arr[rear]=num;
	}
	else if(front>0 && rear==4)
	{
		rear=0;
		arr[rear]=num;
	}
	else
	{
		rear++;
		arr[rear]=num;
	}
}
void pop()
{
	if(front==-1 && rear==-1) 
	{
		printf("\nQueue is empty\n");
		front=rear=-1;
	}
	else if(front==rear-1)
	{
		printf("\nNo. Deleted is %d",arr[front]);
		rear=front=-1;
	}	
	else if(front==n-1)
	{
		printf("No. deleted is %d",arr[front]);
		front=0;
	}
	else
	{
				printf("No. deleted is %d",arr[front++]);

	}
}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("\nQueue is empty\n");
	}
	else if(front<=rear)
	{
		printf("\nFront=%d\n",front);
		for(i=front; i<=rear; i++)
		printf("%d  ",arr[i]);
		printf("\nRear=%d\n",rear);
	}
	else
	{
		printf("\nFront=%d\n",front);
		for(i=front; i<=n-1; i++)
		printf("%d  ",arr[i]);
		for(i=0; i<=rear; i++)
		printf("%d  ",arr[i]);		
		printf("\nRear=%d\n",rear);
	}
	
}
