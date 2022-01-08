#include <stdio.h>
#include <conio.h>
void main()
{
	int x=0,y=0,arr1[20],arr2[20],arr[40],i,j,n1,n2,temp,k;

	printf("Enter the no. of values u want to inert in 1st array :");
	scanf("%d",&n1);
	printf("Enter the %d values for 1st array :\n",n1);
	for(i=0; i<n1;i++)
	scanf("%d",&arr1[i]);

	printf("Enter the no. of values u want to inert in 2nd array :");
	scanf("%d",&n2);
	printf("\nEnter the %d values for 2nd array :\n",n1);
	for(i=0; i<n2;i++)
	scanf("%d",&arr2[i]);

	system("cls");

	printf("\nYour 1st Unsorted array is :");
	for(i=0; i<n1;i++)
	printf("%d  ",arr1[i]);
	printf("\nYour 2nd Unsorted array is :");
	for(i=0; i<n2;i++)
	printf("%d  ",arr2[i]);
	
	//2 4 7 9 16 17
	//1 6 8 12
	//1-->y=4	2-->x=4	4-->	6-->	7-->	8--> 9-->  12-->
	 
	for(i=0; i<(n1+n2); i++)
	{
		if(x<n1 && y<n2)
		{
			if(arr1[x]<=arr2[y])
				arr[i]=arr1[x++];
			else
				arr[i]=arr2[y++];
		}
		else
		{
			if(x<n1)
				arr[i]=arr1[x++];
			else
				arr[i]=arr2[y++];
		}
	}

	printf("\nYour Merged array is :\n");
	for(k=0; k<(n1+n2); k++)
	printf("%d  ",arr[k]);
	getch();	
}
