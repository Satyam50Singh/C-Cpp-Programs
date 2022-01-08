#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node *insert(struct node *,int );
void preorder(struct node *q);
void inorder(struct node *q);
void postorder(struct node *q);
struct node 
{
	int info;
	struct node *left,*right;
	
}*root;

void main()
{
	int choice;
	root=NULL;
	while(1)
	{
		printf("\n\tBINARY SEARCH TREE\n1.Insert data\n2.Preorder\n3.Inorder\n4Postorder\n5.Exit\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	
			{
				int v;
				printf("Enter a Value :");
				scanf("%d",&v);
				root=insert(root,v);	
				break;
			}
			case 2:	preorder(root);		break;
			case 3:	inorder(root);		break;
			case 4:	postorder(root);		break;
			case 5: exit(0);
			default :	printf("Wrong Choice\n");	break;
		}
	}
}

struct node *insert(struct node *q,int v)
{
	if(q==NULL)
	{
		q=(struct node *)malloc(sizeof(struct node));
		q->left=NULL;
		q->right=NULL;
		q->info=v;
	}
	else if(v<q->info)
	{
		q->left=insert(q->left,v);
	}
	else
	{
		q->right=insert(q->right,v);
	}
	
	return q;
}

void preorder(struct node *q)
{
	if(q==NULL)
	{
		return ;
	}
	else
	{
		printf("%d ",q->info);
		preorder(q->left);
		preorder(q->right);
	}
}
void inorder(struct node *q)
{
	if(q==NULL)
	{
		return ;
	}
	else
	{
		inorder(q->left);
		printf("%d ",q->info);
		inorder(q->right);
	}	
}
void postorder(struct node *q)
{
	if(q==NULL)
	{
		return ;
	}
	else
	{
		postorder(q->left);
		postorder(q->right);
		printf("%d ",q->info);
	}	
}
