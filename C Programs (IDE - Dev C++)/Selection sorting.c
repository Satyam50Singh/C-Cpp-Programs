#include<stdio.h>
void main()
{
	int temp,k,a[50],min,p,i,n,j;
	printf("Enter no. of entities u want in an array: ");
	scanf("%d",&n);
	printf("Enter %d elements :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		p=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				p=j;
			}
		}
		if(p!=i)
		{
			a[p]=a[i];
			a[i]=min;
		}
	
	}
	printf("Your sorted array is :\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
