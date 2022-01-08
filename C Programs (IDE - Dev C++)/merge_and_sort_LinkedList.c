/*Given K sorted Linked Lists,write an efficient program to merge K sorted linked list into one sorted list.
Example :List[1] :4->5->6->7
	      List[2]:1->2 
      List[3]:11->15
	Output: List[]=1->2->4->5->6->7->11->15.(merge_and_sort_LinkedList)*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node 
{
	int x;
	struct node *next;
};
void append(struct node *);
void display(struct node *);
void Merge_And_Sort(struct node *p,struct node *p2);
void main()
{
	struct node *p,*start,*p2,*start2;
	p=(struct node *)malloc(sizeof(struct node));
	start=p;
	printf("Creating 1st linked list\n");
	append(p);
	printf("\nDisplay 1st Linked List\n");
	display(p);
	p2=(struct node *)malloc(sizeof(struct node));
	start2=p2;
	printf("\nCreating 2nd linked list\n");
	append(p2);
	printf("\nDisplay 2nd Linked List\n");
	display(p2);
	Merge_And_Sort(p,p2);
	
}
void Merge_And_Sort(struct node *p,struct node *q)
{
	struct node *new_node,*temp;
	new_node=(struct node *)malloc(sizeof(struct node));
	temp=new_node;
	while(p!=NULL && q!=NULL)
	{
		if(p->x < q->x)
		{
			new_node->x=p->x;
			p=p->next;
			new_node->next=(struct node *)malloc(sizeof(struct node));
		}
		else{
			new_node->x=q->x;
			q=q->next;
			new_node->next=(struct node *)malloc(sizeof(struct node));
		}		
	}
	while(p!=NULL)
	{
		new_node->x=p->x;
		new_node->next=(struct node *)malloc(sizeof(struct node));		
	}
	new_node->next=NULL;
	printf("\nNew list \n");
	display(temp);
	
}
void append(struct node *q)
{
	char ch;
	printf("Enter a no. :");
	scanf("%d",&q->x);
	printf("Do u want to insert more no.s :");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='Y' || ch=='y')
	{
		q->next=(struct node *)malloc(sizeof(struct node));
		append(q->next);
	}
	else
	{
		q->next=NULL;
	}
}

void display(struct node *q)
{
	while(q!=NULL)
	{
		printf("%d  ",q->x);
		q=q->next;
	}
}
