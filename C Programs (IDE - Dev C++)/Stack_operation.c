#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int arr[10],top=-1,i;
int const n=10;
int k=1;
void push();
void pop();
void display();

int main()
{
	while(1)
	{
		int choice;
		printf("\n\tStack Implementation using array\n1.Push()\n2.Display()\n3.Exit\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push(); break;
			case 2:	display();	break;
			case 3:	printf("\nThanks");	getch();  exit(0);
			default :	printf("\nWrong Choice.\n"); break;
		}
	}

}
void push()
{
	if(top>=n-1)
	{
		printf("Stack Overflow");
	}
	else
	{
		int num;
		printf("Enter the Quantity of the item 00%d :",k++);
		scanf("%d",&num);
		top++;
		arr[top]=num;
}
}
void display()
{
	int k=1;
	system("cls");
	printf("Item Code\tQuantity\n");
	for(i=0; i<=top; i++)
	{
		printf("00%d\t\t%d\n",k++,arr[i]);
	}
	
	printf("\nTable After deleting items which having 0 quantity\n");
	printf("Item Code\tQuantity\n");
	k=1;
	for(i=0; i<=top; i++)
	{
		if(arr[i]!=0)
		{
		printf("00%d\t\t%d\n",k,arr[i]);	
		}
		k++;
	}
	getch();
	exit(0);	
}

