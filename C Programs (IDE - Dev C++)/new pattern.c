#include<stdio.h>
void main()
{
	int arr[10][10];
	int i,j,k,l,n;
	printf("Enter no of rowa: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	l=1;
	k=7;
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
			else
			{
				arr[i][j]=k;
				k--;								
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j || i<j)
			printf("%d",arr[i][j]);
			else
			printf("%d",arr[j][i]);
		}
		printf("\n");
	}
}
