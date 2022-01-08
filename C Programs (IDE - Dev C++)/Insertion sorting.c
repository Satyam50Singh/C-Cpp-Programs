#include<stdio.h>
void main()
{
	int a[20],i,n,j,temp;
	printf("Enter no. of entities u want in an array: ");
	scanf("%d",&n);
	printf("Enter %d elements :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}	
	printf("Your sorted array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	} 
}
