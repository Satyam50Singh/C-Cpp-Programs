#include <stdio.h>
#include <conio.h>
void q_Sort(int arr[],int p, int r);
int partition(int arr[],int p, int r);
void main()
{
	int arr[20],n,i;
	printf("Enter the no. of value of u want to insert :");
	scanf("%d",&n);
	printf("Enter %d elements \n",n);
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);
	printf("Your Unsorted array is :\n");
	for(i=0; i<n; i++)
	printf("%d  ",arr[i]);
	q_Sort(arr,0,n-1);
	printf("\nYour Sorted array is :\n");
	for(i=0; i<n; i++)
	printf("%d  ",arr[i]);
	getch();
}
//In this program firstly we set a pivot value to variable which is always be the last index.
//then sorted in a way that all lesser values than pivot are arrange un the left side of pivot.
//& greater values willbe arranged right side of pivot elements  
void q_Sort(int arr[],int p, int r)
{
	int q;
	if(p<r)
	{
		q=partition(arr,p,r);
		q_Sort(arr,p,q-1);
		q_Sort(arr,q+1,r);
	}
}

int partition(int arr[],int p, int r)
{
	int x,i,j,temp;
	i=p-1;
	x=arr[r];//pivot
	for(j=p; j<r; j++)
	{
		temp=arr[j];
		if(arr[j]<=x)
		{
			i++;
			arr[j]=arr[i];
			arr[i]=temp;
		}
	}
	arr[r]=arr[i+1];
	arr[i+1]=x;
	return i+1;
}
