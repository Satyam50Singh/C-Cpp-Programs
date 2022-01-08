#include<stdio.h>
#include<conio.h>
#include<process.h>

void push();
void pop();
void disp();

int front=-1,rear=-1,A[8],n,i;
int main()
{
	int ch;
	while(1)
	{
	
		printf("\n\n\t\tQUEUE MENU: \n");
		printf("******************************************************\n");
		printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT FROM THE PROGRAM: \n");
		printf("******************************************************\n");		
		printf("ENTER THE CHOICE:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push(); break;
			case 2:pop(); break;
			case 3:disp(); break;
			case 4:exit(0); break;
			default:printf("WRONG CHOICE:\n");		
		}
	
	}
	getch();
}

void push()
{
	if((front==0&&rear==7)||(front==rear+1))
	{
		printf("THE CIRCULAR QUEUE IS OVERFLOW: \n");
	}
	else
	{
		
		printf("ENTER THE ELEMENT: ");
		scanf("%d",&n);
		
		 	if(front==-1&&rear==-1)
			{
				rear++;
				front++;
				A[rear]=n;
			}
			else if(front>0&&rear==7)
			{
				rear=-1;
				rear++;
				A[rear]=n;
			}
			else 
			{
				rear++;
				A[rear]=n;
			}
	}
	
}

void pop()
{
	int temp;
	if(front==rear||front==-1)
	{
	front=rear=-1;	
	printf("CIRCULAR QUEUE UNDERFLOW : \n");
	}
	else if(front==7)
	{

	printf("EMEMENT %d HAS BEEN DELETED FROM THE LIST: \n",temp);
	front=0;	
	}
	else
	{
		temp=A[front];
		front++;
		printf("EMEMENT %d HAS BEEN DELETED FROM THE LIST: \n",temp);
	}
}

void disp()
{
	if(front<0 ||front==rear)
	{
		printf("THYE QUEUE IS EMPTY: \n");
	}
	else
	{
		if(rear>front)
		{
			printf("\nfront=%d\n",front);
			for(i=front;i<=rear;i++)
			{
				printf("%d ",A[i]);
			}
			printf("\nrear=%d\n",rear);

		}
		else 
		{

			printf("\nfront=%d\n",front);
			for(i=front;i<=7;i++)
			{
				printf("%d ",A[i]);
			}
			for(i=0;i<=rear;i++)
			{
				printf("%d ",A[i]);
			}
		

			printf("\nrear=%d\n",rear);
		}
	}
}
