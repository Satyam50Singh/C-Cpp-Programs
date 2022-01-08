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
	printf("Your sorted array is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		printf("%d ",a[j]);
	}
}
