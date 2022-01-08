#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int arr[10],front,rear;
int const n=10;

void push_front();
void pop_end();
void display();
void push_end();
void pop_front();

void main()
{
	int choice;
	front=rear=-1;
	while(1)
	{
		printf("\n\tDequeue implementated by using array\n");
		printf("1.Insert at Beginnning\n2.Insert at End\n3.Delete From Beginning\n4.Delete from End\n5.Display\n6.Exit\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	push_front();	break;
			case 2:	push_end();		break;
			case 3:	pop_front();	break;
			case 4:	pop_end();		break;
			case 5:	display();		break;
			case 6:	exit(0);	
			default: printf("Wrong Choice\n");	break;	
		}
	}
}

void push_front()
{
	int num;
	printf("Enter a no. :");
	scanf("%d",&num);
	if((front<0 && rear<0) || front==0)
	{
		printf("DeQueue is empty");
	}
	else 
	{
		front--;
		arr[front]=num;
	}
}
void push_end()
{
	int num;
	printf("Enter a no. :");
	scanf("%d",&num);

	if(front<0 && rear<0)
	{
		front++;	rear++;
		arr[rear]=num;
	} 
	else
	{
		rear++;
		arr[rear]=num;
	}
}

void display()
{
	if(front<0 && rear<0)
		printf("Dequeue is empty\n");
	else
	{
		int i;
		for(i=front; i<=rear; i++)
		printf("%d  ",arr[i]);
		
	}
}

void pop_front()
{
	if((front<0 && rear<0)||(front-1==rear))
		printf("Dequeue is empty\n");
	else
	{
		printf("No. deleted is %d\n",arr[front]);
		front++;
	}
	
	
}
void pop_end()
{
	if((front<0 && rear<0)||(front-1==rear))
	{
		printf("Dequeue is empty\n");
	}
	else
	{
		printf("No. deleted is %d\n",arr[rear]);
		rear--;
	}

}

