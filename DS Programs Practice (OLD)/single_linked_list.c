//Program to create a simple single linked list
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
	struct node *p,*q,*r,*start;
	start=(struct node *)malloc(sizeof(struct node));
	p=(struct node *)malloc(sizeof(struct node));
	q=(struct node *)malloc(sizeof(struct node));
	r=(struct node *)malloc(sizeof(struct node));
	start=p;
	p->next=q;

	p->data=12;
	q->next=r;
	q->data=34;
	r->data=89;	
	r->next=NULL;
	while(start!=NULL)
	{
		printf("%d  ",start->data);
		start=start->next;
	}
	getch();
}
