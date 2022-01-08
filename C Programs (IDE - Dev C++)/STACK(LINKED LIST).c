#include<stdio.h>
#include<process.h>
#include<stdlib.h>
void push();
void pop();
void display();

struct node 
{
	int x;
	struct node *next;
};
struct node *top;

void main()
{

	int choice;
	while(1)
	{
		printf("\n\t\tOperation or functions on STACK By Using Linked List\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 	push(); 		break;
			case 2:		pop();			break;
			case 3:		display();		break;
			case 4:		printf("Thanks");	exit(0);
			default :	printf("\nWrong choice\n");  exit(0);
		}
	}
}

void push()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter a no.");
	scanf("%d",&p->x);
	if(top==NULL)
	{
		top=p;
		top->next =NULL;
	}
	else
	{
		p->next=top;
		top=p;
	}
}

void pop()
{
	struct node *q;
	if(top==NULL)
	{
		printf("Stack is Empty..");
	}
	else
	{
		q=top;
		top=top->next;
		printf("No. deleted is %d",q->x);
		free(q);
	}
}

void display()
{
	struct node *q;
	q=top;
	if(top==NULL)
	{
		printf("\nStack is Underflow.");
	}
	else
	{
		while(q!=NULL)
		{
			printf("%d",q->x);
			q=q->next;
		}
	}
}
