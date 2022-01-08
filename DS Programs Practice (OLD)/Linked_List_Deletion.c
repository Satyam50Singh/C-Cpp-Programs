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
		printf("\n\tStack Operations by Linked list\n");
		printf("1.Append Data\n2.Delete Data from Beginning\n3.Delete Data from Second position\n4.Delete Data from Second Last Position\n5.Exit\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: append(p);		break;
			case 2: beginning_del();	break;
			case 3: second_del();		break;
			case 4: second_last_del();	break;
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
	printf("Values are :");
	start=temp;
	while(temp!=NULL)
	{
		printf("%d ",temp->x);
		temp=temp->next;
	}
	
}
beginning_del()
{
	struct node *temp;
	temp=start;
	printf("No. Deleted is %d\n",temp->x);
	start=start->next;
	free(temp);
	display(start);
}
second_del()
{
	struct node *temp;
	temp=start->next;
	printf("No. Deleted is %d\n",temp->x);
	start->next=start->next->next;
	free(temp);
	display(start);	
}
second_last_del()
{
	struct node *temp,*temp2;
	temp2=start;
	while(start->next->next->next!=NULL)
	{
		start=start->next;
	}
	temp=start->next;
	start->next=start->next->next;
	printf("No. Deleted is %d\n",temp->x);
	free(temp);
	display(temp2);
}


