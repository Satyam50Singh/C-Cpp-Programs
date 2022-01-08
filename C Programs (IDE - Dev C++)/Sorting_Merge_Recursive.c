#include <stdio.h>
#include <conio.h>
void merge(int low, int mid, int high);
void merge_sort(int low,int high);
	int arr[20],n,i,j;
void main()
{
	printf("Enter the no. of value u want to insert in a array :");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);
	printf("Your Unsorted array is :\n");
	for(i=0; i<n; i++)
	printf("%d  ",arr[i]);
	merge_sort(0,n-1);
	printf("\nYour Sorted array is :\n");
	for(i=0; i<n; i++)
	printf("%d  ",arr[i]);
}


void merge_sort(int low,int high)
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

void merge(int low, int mid, int high)
{
	int temp[20];
	int i=low;
	int j=mid+1;
	int k=low;
	
	while(i<=mid && j<=high)
	{
		if(arr[i]<=arr[j])
		temp[k++]=arr[i++];
		else
		temp[k++]=arr[j++];
	}
	while(i<=mid)
		temp[k++]=arr[i++];
	while(j<=high)
		temp[k++]=arr[j++];
	for(i=0; i<=high; i++)
	arr[i]=temp[i];
}
