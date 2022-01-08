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
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
