#include <stdio.h>
#include <conio.h>
void main()
{
	int arr[20],min,k,i,n,j,temp,p;
	printf("Enter the no. of values u want to insert in array :");
	scanf("%d",&n);
	printf("Enter %d elements :\n",n);
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);
	printf("\nYour Unsorted array is  :");
	for(i=0; i<n; i++)
	printf("%d  ",arr[i]);
	
	for(i=0; i < n-1; i++)
	{
		min=arr[i];
		p=i;
		for(j=i+1;j < n; j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				p=j;
			}
		}
		if(p!=i)
		{
			arr[p]=arr[i];
			arr[i]=min;
		}
	printf("\n-------------------\n");
	for(k=0; k<n; k++)
	printf("%d  ",arr[k]);
	}
	printf("\nYour Sorted array is  :");
	for(i=0; i<n; i++)
	printf("%d  ",arr[i]);
	getch();	
}
