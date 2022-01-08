#include <stdio.h>
#include <conio.h>
void main()
{
	int arr[20],x=0,i,search,n,middle,last,first;
	printf("Enter the no. of elements u want to insert in a array : ");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Your array is :");
	for(i=0;i<n;i++)
	printf("%d  ",arr[i]);
	printf("\nEnter the element u want to search :");
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(search==arr[middle])
		{
			x=1;
			printf("\n%d is located at %d position\n",search,middle+1);
			break;
		}
		else
		{
			if(search<arr[middle])
				last=middle-1;
			else
				first=middle+1;
				middle=(first+last)/2;
		}
	}		
	if(first>last)
	printf("No. is not found in Array");
 	getch();
}
