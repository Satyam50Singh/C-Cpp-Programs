#include<stdio.h>
void main()
{
	int arr[10][10],i,j,k,l,n,x;
	printf("Enter no of row: ");
	scanf("%d",&n);
	x=n+1;
	k=0;
	for(i=0;i<n;i++)
	{
		l=1;
		x=x-k;
				
			for(j=0;j<n;j++)
			{
			if(i==j || i<j)
			{
				if(l<=7)
				{
				arr[i][j]=l;
				l++;
				}
			}
			else if(i > j)
			{
				arr[i][j]=x;
				x++;
			}
		}		
	k++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d",arr[i][j]);
		printf("\n");
	}
}
