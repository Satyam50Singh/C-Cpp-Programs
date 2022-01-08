#include<stdio.h>
void main()
{
	int k,h,x=0,a[20],b[30],c[55],i=0,j,num,num1;
	
	printf("Enter the no. of elements in 1st array : ");
	scanf("%d",&num);
	
	printf("Enter elements of first array :\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the no. of elements in 2nd array : ");
	scanf("%d",&num1);
	
	printf("Enter elements of Second array :\n");
	for(i=0;i<num1;i++)
	scanf("%d",&b[i]);
	
	printf("Array after sorted :\n");
	i=0;
	h=num+num1;
	for(j=0;j<h;j++)
	{
		if(i<num && x<num1)
		{
			
			if(a[i]<=b[x])
			{
				c[j]=a[i];
				i++;
			}
			else 
			{
				c[j]=b[x];
				x++;
			}
		}
		else
		{
			if(i>=num)
			{
				c[j]=b[x];
				x++;
			}
			else
			{
				c[j]=a[i];
				i++;
			}
		}
		
	}
	
	for(k=0;k<h;k++)
	printf("%d ",c[k]);
	
}
