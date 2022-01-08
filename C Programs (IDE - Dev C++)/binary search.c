#include<stdio.h>
void main()
{
	int a[20],i,j,n,search,first,middle,last;
	printf("Enter no. of entities u want in an empty array : ");
	scanf("%d",&n);
	printf("\nEnter %d elements in a array in sorted manner (Ascending order).\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	system("cls");
	printf("Your array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nEnter the element which have to be search : ");
	scanf("%d",&search);
	
	first=0;
	last=n-1;
	middle=(first+last)/2;
	
	while(first<=last)
	{
		if(a[middle]==search)
		{	
			printf("\nNo. %d is found at %d position\n",search,middle+1);
			break;
		}
		else
		{
			if(a[middle]<search)
			{
				first=middle+1;
			}
			else
			{
				last=middle-1;
			}
		
		}
		middle=(first+last)/2;
	}
}
