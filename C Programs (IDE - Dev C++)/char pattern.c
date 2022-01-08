#include<stdio.h>
void main()
{
	int i,j,k;
	char a[8]={"*#@*#@*"};
	    printf("%c",177);
    
	for(i=0;i<=7;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%c ",a[j]);
		}
		printf("\n");
	}
	
}
