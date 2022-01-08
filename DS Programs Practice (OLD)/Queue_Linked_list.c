#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void push();
void display();
void pop();
struct node 
{
	int x;
	struct node *next;
};
struct node *front,*rear,*start;
void main()
{
	front=NULL;
	rear=NULL;
	while(1)
	{
		int choice;
		printf("\n\tQueue implementstion by using linked list\n");
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();		break;
			case 2: pop();		break;
			case 3: display();	break;
			case 4: exit(0);
			default : printf("Wrong Choice\n");	break;
		}
	}
}

void push()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter a no. :");
	scanf("%d",&p->x);
	p->next=NULL;
	if(front==NULL && rear==NULL)
	{
		front=rear=p;
	}
	else
	{
		rear->next=p;
		rear=p;
	}
}

void pop()
{
	if(front==NULL && rear==NULL)
	{
		printf("Empty Queue\n");
	}
	else
	{
		struct node *temp;
		temp=(struct node *)malloc(sizeof(struct node));
		temp=front;
		front=front->next;
		printf("No. deleted is : %d",temp->x);
		free(temp);
	}
}
void display()
{
	if(front==NULL)
	{
		printf("Empty Queue\n");
	}
	else
	{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp=front;
		while(temp!=NULL)
		{
			printf("%d ",temp->x);
			temp=temp->next;
		}

	}
	
}
