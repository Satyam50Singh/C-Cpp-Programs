#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node *doubled(struct node *q);
void append(struct node *q);
void display2(struct node *q);
struct node 
{
	int x;
	struct node *prev;
	struct node *next;
};
void main()
{
	struct node *start,*p,*temp;
	p=(struct node *)malloc(sizeof(struct node));
	start=p;
	p->prev=NULL;
	append(p);
	display(start);
	temp=doubled(start);
	display2(temp);
}

void display2(struct node *q)
{
	while(q->prev!=NULL)
	{
		printf("%d  ",q->prev->x);
		q=q->prev;
	}
}
struct node *doubled(struct node *q)
{
	while(q!=NULL)
	{
		q->next->prev=q;
		q=q->next;
	}
	return q;
}
void append(struct node *q)
{
	char ch;
	printf("Enter a no. :");
	scanf("%d",&q->x);
	printf("Do u wamt to insert more data :");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='y' || ch=='Y')
	{
		q->next=(struct node *)malloc(sizeof(struct node));
		append(q->next);
	}
	else
	q->next=NULL;
}

display(struct node *t)
{
	
	printf("Values are :");
	while(t!=NULL)
	{
		printf("%d  ",t->x);
		t=t->next;
	}
}
