//Program to create a single linked list by using recursion.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node 
{
	int data;
	struct node *next;
};
void main()
{
	struct node *start,*p;
	p=(struct node *)malloc(sizeof(struct node));
	start=p;
	append(p);
	display(start);
	
}
append(struct node *p)
{
	char ch;
	printf("Enter a no. : ");
	scanf("%d",&p->data);
	printf("\nDo u want to insert more no.s : ");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='Y' || ch=='y')
	{
		p->next=(struct node *)malloc(sizeof(struct node));
		append(p->next);
	}
	else
	{
		p->next=NULL;
	}
}

display(struct node *q)
{
	printf("Values are : ");
	while(q!=NULL)
	{
		printf("%d  ",q->data);
		q=q->next;
	}
}
