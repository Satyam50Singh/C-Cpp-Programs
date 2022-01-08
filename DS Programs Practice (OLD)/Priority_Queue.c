#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void display();
void insert();
void del_data();
struct node 
{
	int info,priority;
	struct node *next;
}*front=NULL;
void main()
{
	int choice;
	while(1)
	{
		printf("\n\tPriority Queue \n1.Insert data\n2.Delete data\n3.Display Data\n4.Exit\nEnter Your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	insert();	break;
			case 2: del_data();	break;
			case 3:	display();	break;
			case 4: exit(0);
			default : printf("Wrong choice ");	break;
		}
	}	
}
void insert()
{
	struct node *temp,*q;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter Priority :");
	scanf("%d",&temp->priority);
	printf("Enter no. :");
	scanf("%d",&temp->info);
	
	if(front==NULL || temp->priority<front->priority)
	{
		temp->next=front;
		front=temp;
	}
	else
	{
		q=front;
		while(q->next!=NULL  && q->next->priority<=temp->priority)
		{
			q=q->next;
		}
		temp->next=q->next;
		q->next=temp;
	}
}
void del_data()
{
	if(front==NULL)
	{
		printf("Queue is empty");		
	}
	else
	{
		struct node *temp;
		temp=front;
		front=front->next;
		printf("No. deleted is %d",temp->info);
		free(temp);
	}
}
void display()
{
	if(front==NULL)
	{
		printf("Queue is empty");
	}
	else
	{
		struct node *temp;
		temp=front;
		while(temp!=NULL)
		{
			printf("%d ",temp->info);
			temp=temp->next;
		}
	}
}
