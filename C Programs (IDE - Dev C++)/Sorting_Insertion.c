#include <stdio.h>
#include <conio.h>
void main()
{
	int arr[20],k=1,i,n,j,temp,p;
	printf("Enter the no. of values u want to insert in array :");
	scanf("%d",&n);
	printf("Enter %d elements :\n",n);
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);
	printf("\nYour Unsorted array is  :");
	for(i=0; i<n; i++)
	printf("%d  ",arr[i]);
	
	for(i=0; i<n; i++)
	{
		temp=arr[i];
		j=i-1;
		while(temp<arr[j] && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("\nYour Sorted array is  :");
	for(i=0; i<n; i++)
	printf("%d  ",arr[i]);
	getch();	
}
