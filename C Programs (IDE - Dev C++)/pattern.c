#include<stdio.h>
void main()
{
	int i,j,a=1;
	for(i=0;i<=5;i++)
	{
		if(i==5)
		{
			for(j=0;j<=2;j++)
			{
				printf("%d ",a);
				a++;
			}
		}
		else
		{
			for(j=0;j<i;j++)
			{
				printf("%d ",a);
				a++;
			}	
		}
		printf("\n");
	}
}
