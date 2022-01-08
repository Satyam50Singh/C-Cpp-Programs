#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int top=-1,i,j,arr[15];
int const n=10;

void push();
void pop();
void display();

void main()
{
	while(1)
	{
		int choice;
		printf("\n\tStack Implementation using array\n1.Push()\n2.Pop()\n3.Display()\n4.Exit\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push(); break;
			case 2: pop();	break;
			case 3:	display();	break;
			case 4:	printf("\nThanks");	getch();  exit(0);
			default :	printf("\nWrong Choice.\n"); break;
		}
	}
}

void push()
{
	int num;
	if(top==n)
	{
		printf("\nStack Overflow\n");
	}
	else
	{
		printf("Enter a no.:");
		scanf("%d",&num);
		top++;
		arr[top]=num;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nStack Underflow\n");
	}
	else
	{
		printf("No. Deleted Successfully\n");
		top--;
	}
}
void display()
{
	for(i=top; i>=0; i--)
	printf("%d  ",arr[i]);
	printf("\n");
}
