#include <stdio.h>
#include <conio.h>
void main()
{
	int arr[20],n,search,i,x=0;
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
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			x=1;
		printf("\n%d is located at %d position.\n",search,i+1);		
		}
	}
	if(!x)
	printf("\nSearch element is not found !!!.\n");
	getch();
}
