#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node 
{
	int x;
	struct node *next;
};
struct node *start,*p;
void main()
{
	int choice;
	p=(struct node *)malloc(sizeof(struct node));
	start=p;
	while(1)
	{
		printf("\n\n\tStack Operations by Linked list\n");
		printf("1.Append Data\n2.Insert Data at Beginning\n3.Insert Data at Second position\n4.Insert Data at Second Last Position\n5.Exit\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: append(p);		break;
			case 2: beginning();	break;
			case 3: second(start);		break;
			case 4: second_last(start);	break;
			case 5: printf("thanks");	getch(); 	exit(0);
			default :	printf("Wrong choice");	break;	
		}
	}
}

append(struct node *p)
{
	char ch;
	printf("Enter a no. :");
	scanf("%d",&p->x);
	printf("Do u want to add more data :");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='y' || ch=='Y')
	{
		p->next=(struct node *)malloc(sizeof(struct node));
		append(p->next);
	}
	else
	{
		p->next=NULL;
		display(start);
	}
}
display(struct node *temp)
{
	printf("\nValues are :");
	start=temp;
	while(temp!=NULL)
	{
		printf("%d ",temp->x);
		temp=temp->next;
	}
	
}
beginning()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter a no. :");
	scanf("%d",&temp->x);
	temp->next=start;	
	start=temp;
	display(start);
}
second(struct node *q)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter a no. :");
	scanf("%d",&temp->x);
	temp->next=q->next;
	q->next=temp;	
	display(start);
}
second_last(struct node *q)
{
	struct node *temp,*temp2;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter a no. :");
	scanf("%d",&temp->x);
	while(q->next!=NULL)
	{
		temp2=q;
		q=q->next;
	}
	
	temp->next=temp2->next;
	temp2->next=temp;
	display(start);
}


