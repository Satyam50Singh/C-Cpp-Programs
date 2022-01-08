#include<stdio.h>
void merge_sort(int low, int high);
void merge(int low,int mid,int high);
int i,j,a[5];
void main()
{
	printf("Enter 5 no.s :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	merge_sort(0,4);
	
	printf("Your sorted array is :");
	for(j=0;j<5;j++)
	{
		printf("%d ",a[j]);
	}
}

void merge_sort(int low, int high)
{
	int mid;
	if(low!=high)
	{
		mid=(low+high)/2;
		merge_sort(low,mid);
		merge_sort(mid+1,high);
		merge(low,mid,high);
	}
}

void merge(int low,int mid,int high)
{
	int temp[5];
	int i=low,j=mid+1,k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		temp[k++]=a[i++];
		else
		temp[k++]=a[j++];
	}
	
	while(i<=mid)
	temp[k++]=a[i++];
	while(j<=high)
	temp[k++]=a[j++];
	
	for(i=low;i<=high;i++)
	{
		a[i]=temp[i];
		
	}
}
