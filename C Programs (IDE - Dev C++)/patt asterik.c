#include<stdio.h>
void main()
{
	int i,j,k,a=1,n;
	printf("Enter no. of rows :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=1;
		for(j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		if(i%2!=0)
		{
			for(k=0;k<i;k++)
			{
				printf("* ");
			}
		}
		else
		{
			for(k=0;k<i;k++)
			{
				printf("%d ",a);
				a++;
			}
		}
		printf("\n");
	}
}
