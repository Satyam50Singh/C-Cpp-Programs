//quick sort program by using recursion.
#include<stdio.h>
int a[50],p,r;
int partition(int a[],int p,int r);
void qsort (int a[],int ,int );
void main()
{
	int i,r;
	p=0;
	r=4;
	printf("Enter 5 no.s : \n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	qsort(a,p,r);
	
	printf("\nSorted array :\n");
	for(i=0;i<5;i++)
		printf("%d\n",a[i]);
}
void qsort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r);
		qsort(a,p,q-1);
		qsort(a,q+1,r);
	}
}
int partition(int a[],int p,int r)
{
	int x,i,j,temp;
	i=p-1;
	x=a[r];
	for(j=p;j<r;j++)
	{
		temp=a[j];
		if(a[j]<=x)
		{
			i++;
			a[j]=a[i];
			a[i]=temp;
		}
	}
	a[r]=a[i+1];
	a[i+1]=x;
	return i+1;
}
