#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void push();
void pop();
void display();
int front=-1,rear=-1;
int arr[10],i,num;
int const n=5;
void main()
{
	int choice;
	while(1)
	{
		printf("\n\tQueue Implementation by using array\n");
		printf("\n1.Push()\n2.Pop()\n3.Display()\n4.Exit\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	push();		break;
			case 2: pop();		break;
			case 3: display();	break;
			case 4: printf("\nThanks");	getch();	exit(0);
			default :	printf("Wrong choice.");	break;
		}
	}
}

void push()
{
	printf("Enter a no. :");
	scanf("%d",&num);
	if(rear>=n-1)
	{
		printf("Queue Overfolw.\n");
	}
	else if (front<0 && rear<0)
	{
		front++;
		rear++;
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
		printf("\nQueue Underflow\n");
	}
	else if(front==rear)
	{
		printf("\nNo. deleted is %d\n",arr[front++]);
		front=rear=-1;
	}
	else
	{
		printf("\nNo. deleted is %d\n",arr[front++]);
	}

}
void display()
{
	if(front==-1 && rear==-1)
	{
		printf("\nQueue Underflow\n");
	}
	else{
		for(i=front; i<=rear; i++)
		printf("%d  ",arr[i]);
		printf("\n");
	}

}
