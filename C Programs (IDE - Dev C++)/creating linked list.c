#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int x;
	struct node *next;
};
void main()
{
	struct node *q,*start,*p;
	p=(struct node *)malloc(sizeof(struct node));
	start=p;
	append(p);
	display(start);
}
display(struct node *q)
		{
			int i=1;
			system("cls");
			printf("\n\tValues stored in a list at different address\n\n");
			while(q!=NULL)
			{
				printf("\t\t%d  --> %d\n",i,q->x);
				q=q->next;
				i++;
			}
}
append(struct node *q)
{
	char ch;
	printf("Enter a no.:");
	scanf("%d",&q->x);
	printf("\nFor inserting more values Press ('Y' for Yes / 'N' for No)  : ");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='Y'||ch=='y')
	{
		q->next=(struct node *)malloc(sizeof(struct node));
		append(q->next);
	}
	else
	{
		q->next = NULL;
	}
	
	
}
