/*You are given an array A containing N elements You are Also given Two no.s X and Y, it might be X or Y not present in the array
You have to perform the following steps in given order
a.	Sort the array.
b.	Print the sum of all no.s less than X and greater than Y (X and Y exclude)(Sort_Sum_upto_X_Y)*/
#include <iostream>
using namespace std;
int arr[12],n,X,Y;
int main()
{
	cout<<"Enter the value of n :";
	cin>>n;
	cout<<"Enter "<<n<<" no.s :";
	for(int i=0; i<n; i++)
		cin>>arr[i];
	cout<<"\nEnter any two Values :";
	cin>>X>>Y;

	cout<<"Values Stored in an Array is :"<<endl;
	for(int i=0; i<n; i++)
		cout<<arr[i]<<"  ";
	
	cout<<"\nTwo No.s are : "<<X<<" & "<<Y;
	
	//a.Sort the array
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nValues Stored in an Array(Sorted) is :"<<endl;
	for(int i=0; i<n; i++)
		cout<<arr[i]<<"  ";
	//b.Print the sum of all no.s less than X and greater than Y (X and Y exclude)
	int sum_low=0,sum_high=0;
	for(int i=0; i<n; i++)
	{
		if(arr[i]<X)
		{
			sum_low+=arr[i];
		}
		if(arr[i]>Y)
		{
			sum_high+=arr[i];
		}
	}
	
	cout<<"\n\nSum of those no.s which are lesser than X is :"<<sum_low<<endl;	
	cout<<"Sum of those no.s which are greater than Y is :"<<sum_high<<endl;
	
	return 0;
}
