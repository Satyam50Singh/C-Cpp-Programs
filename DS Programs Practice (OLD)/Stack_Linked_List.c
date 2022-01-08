#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node 
{
	int x;
	struct node *next;
}*top;
void main()
{
	int choice;
	while(1)
	{
		printf("\n\tStack Implemented by Linked list\n");
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n5.Enter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();		break;
			case 2: pop();		break;
			case 3: display();	break;
			case 4: printf("thanks");	getch(); 	exit(0);
			default :	printf("Wrong choice");	break;	
		}
	}
}

void push()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node ));
	printf("\nEnter a no. :");
	scanf("%d",&p->x);
	
	p->next=NULL;
	if(top==NULL)
		top=p;
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
		printf("\nStack is empty\n");
	}
	else
	{
		q=top;
		top=top->next;
		printf("\nNo. deleted is %d",q->x);
		free(q);
	}
}

void display()
{
	struct node *q;
	q=top;
	if(top==NULL)
	{
		printf("\nStack is empty\n");		
	}
	else
	{
		while(q!=NULL)
		{
			printf("%d  ",q->x);
			q=q->next;
		}
	}
}
