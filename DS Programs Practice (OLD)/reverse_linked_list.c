#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node 
{
	int data;
	struct node *next;
}*start,*p;
void main()
{
	p=(struct node *)malloc(sizeof(struct node));
	start=p;
	append(p);
	display(p);
	reverse(p);
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
	printf("\nValues are : ");
	while(q!=NULL)
	{
		printf("%d  ",q->data);
		q=q->next;
	}
}

reverse(struct node *a)
{
	int len=0,temp,k,i,j;
	struct node *p,*q,*flag;
	flag=p=q=a;
	while(a!=NULL)
	{
		len++;
		a=a->next;
	}
//	printf("NO.of nodes : %d",len);

	i=0;
	j=len-1;
	
	while(i<j)
	{
		k=0;
		while(k<j)
		{
			q=q->next;
			k++;
		}
		temp=p->data;
		p->data=q->data;
		q->data=temp;
		
		i++;
		j--;
		p=p->next;
		q=flag;
	}
	display(q);
}
