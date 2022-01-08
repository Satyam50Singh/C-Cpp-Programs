#include <stdio.h>
int j=0,temp[30],arr[30],pos,val,n,i;
void getdata()
{
	printf("Enter %d entities\n",n);
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
}
void display()
{
	printf("Values stored in a array are :\n");
	for(i=0; i<n; i++)
		printf("%d  ",arr[i]);
}
void new_array()
{
	for (i=0; i<=n; i++)
	{
		if(i!=pos-1)
			temp[j++]=arr[i];
		else
		{			
			temp[j++]=val;
			temp[j++]=arr[i];
		}
	}
	printf("\nValues stored in a array are :\n");
	for(i=0; i<j-1; i++)
	printf("%d  ",temp[i]);
}
void main()
{
	printf("Enter the no.s of entities which u want to store in an array :");
	scanf("%d",&n);
	getdata();
	display();
	printf("\nEnter the position :");
	scanf("%d",&pos);
	printf("Enter the value u want to insert in that position :");
	scanf("%d",&val);
	new_array();	
}

