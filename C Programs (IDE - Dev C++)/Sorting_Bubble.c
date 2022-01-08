#include <stdio.h>
#include <conio.h>
void main()
{
	int n,arr[20],i,j,temp;
	printf("Enter the no. of vales u want to insert :");
	scanf("%d",&n);
	printf("Enter %d no.s\n",n);
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);
	printf("Your Unsorted array is :");
	for(i=0; i<n; i++)
		printf("%d  ",arr[i]);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nYour Sorted array is :");
	for(i=0; i<n; i++)
		printf("%d  ",arr[i]);
	getch();
}
