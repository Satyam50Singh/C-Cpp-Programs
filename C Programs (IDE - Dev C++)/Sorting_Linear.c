#include <stdio.h>
#include <conio.h>
void main()
{
	int k,n,arr[20],i,j,temp;
	printf("Enter the no. of vales u want to insert :");
	scanf("%d",&n);
	printf("Enter %d no.s\n",n);
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);
	printf("Your Unsorted array is :");
	for(i=0; i<n; i++)
		printf("%d  ",arr[i]);
		printf("\n");
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		for(k=0; k<n; k++)
		printf("%d  ",arr[k]);
		printf("\n");
	}
	
	printf("\nYour Sorted array is :");
	for(i=0; i<n; i++)
		printf("%d  ",arr[i]);
	getch();
}
