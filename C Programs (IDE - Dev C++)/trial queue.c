#include<stdio.h>
#include<process.h>
int rear=-1,n,front=-1,a[5],i,j;
void push();
void pop();
void display();
void main()
{
	int choice;
	while(1)
	{
		printf("\n\t\tOperation or functions on CIRCULAR QUEUE\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Thanks and visit again...");
				exit(0);
			default :
				printf("\nWrong choice\n");
				exit(0);
		};
	}
}

void push()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(rear>=4)
	{
		printf("\nQUEUE OVERFLOW\n");
	}
	else if(rear<0 && front < 0)
	{
		front++;
		rear++;
		a[front]=n;
	}
	else if(front==0 && rear < 5)
	{
		rear++;
		a[rear]=n;
	}
	if(front>0 && rear==4)
	{
		rear=0;
		a[rear]=n;
	}
	else
	{
		rear++;
		a[rear]=n;
	}
}

void pop()
{
	
	if(front<0)
	{
		printf("\nQUEUE UNDERFLOW\n");
		rear=-1;
		front =-1;
	}	
	else if(front>=0 && rear <= 4)
	{
		n=a[front];
		front++;
		printf("\nNo. delelted is %d\n",n);
	}
	else if(front == 4)
	{
		n=a[front];
		front++;
		printf("\nNo. delelted is %d\n",n);
	}
	if(front == rear)
	{
		n=a[front];
		front++;
		printf("\nNo. delelted is %d\n",n);
	}
}
 void display()
 {
 	if(rear>front)
 	{
 		for(i=front; i<=rear ;i++)
 		{
 			printf("%d  ",a[i]);
		}
	}
	else
	{
			for(i=front;i<=4;i++)
			printf("%d  ",a[i]);
			for(i=0;i<=rear;i++)
			printf("%d  ",a[i]);
	}
 }
