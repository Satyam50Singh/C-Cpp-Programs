#include<stdio.h>
#include<process.h>
#include<stdlib.h>
struct node 
{
	int x;
	struct node *next;
};
void main()
{
	struct node *p,*q,*start,*r;
	p=(struct node *)malloc(sizeof(struct node));
	q=(struct node *)malloc(sizeof(struct node));
	r=(struct node *)malloc(sizeof(struct node));
	start=(struct node *)malloc(sizeof(struct node));
	char ch;
	start=p;
	p->next=q;
	printf("Enter two values :");
	scanf("%d%d",&p->x,&q->x);
	printf("Values stored in a list :\n");
	r->next=start;
	while(start!=NULL)
	{
		printf("%d ",start->x);
		start=start->next;
	}
	printf("Do you want to add no. at begaining (y/n). :");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='Y'||ch=='y')
	{
		printf("Enter a number. :");
		scanf("%d",&r->x);
		start=r;
		printf("Values stored in a list :\n");
		while(start!=NULL)
		{
			printf("%d ",start->x);
			start=start->next;
		}
	
	}
}

