//Program to create a single linked list for soring strings as data by using recursion.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node 
{
	char str[15];
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
	printf("Enter a String : ");
	fflush(stdin);
	gets(p->str);
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
	while(q!=NULL)
	{
		puts(q->str);
		q=q->next;
	}
}
