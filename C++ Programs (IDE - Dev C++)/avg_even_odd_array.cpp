//Program to print average of no.s in array at even & odd position.(avg_even_odd_array)
#include <iostream>
using namespace std;
int main()
{
	int n,esum=0,osum=0,e=0,o=0;
	int arr[50];
 	cout<<"Enter the value of n :";
	cin>>n;
	cout<<"Enter "<<n<<" no.s :\n";
	for(int i=0; i<n; i++)
 		cin>>arr[i];
	cout<<"Values are :";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"  ";
		if(i%2==0)
		{
			e++;
			esum+=arr[i];
		}
		else
		{		
			o++;
			osum+=arr[i];
		}
	}
	float res=esum/e;
	float res1=osum/o;
	
	cout<<"Average of no.s at even position upto "<<n<<" is :"<<res<<endl;
	cout<<"Average of no.s at odd position upto "<<n<<" is :"<<res1<<endl;
	return 0;
}
