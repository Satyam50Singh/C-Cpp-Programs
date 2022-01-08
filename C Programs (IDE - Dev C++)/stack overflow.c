#include<stdio.h>
#include<process.h>
int top=-1,a[5],i,j;
void push();
void pop();
void display();
void main()
{
	int choice;
	while(1)
	{
		printf("\t\tOperation or functions on STACK\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
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
	while(1)
	{
		printf("Enter a no. : ");
		scanf("%d",&j);
		if(top==4)
		{
			printf("STACK OVERFLOW\n");
			break;
		}
		else
		{
			top++;
			a[top]=j;
		}
	}
}
void pop()
{
	if(top<0)
	{
		printf("STACK UNDERFLOW\n");
	}
	else
	{
		top--;
		printf("NO. SUCCESSFULLY DELETED\n");
	}
}
void display()
{
	for(i=0;i<=top;i++)
	{
		printf("%d.%d\n",i+1,a[i]);
	}
	printf("\n");
}
