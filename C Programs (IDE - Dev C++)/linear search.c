#include<stdio.h>
void main()
{
	int a[20],i,j,n,search;
	printf("Enter no. of entities u want in an empty array : ");
	scanf("%d",&n);
	printf("\nEnter %d elements\n",n);
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
	for(j=0;j<n;j++)
	{
		if(a[j]==search)
		{
			printf("\nCongrats! NO. %d is found in %d position \n",search,j+1);
			break;
		}
		
	}	
	
}
