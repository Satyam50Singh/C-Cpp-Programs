/*Program to check whether a no. can be expressed as Sum of Two prime no. (no_exp_sum_2_prime)
Example : Enter a positive no. :34
34=3+31
34=5+29
34=11+23
34=17+17*/
#include <iostream>
using namespace std;
int main()
{
	int n,arr[120],x=0;
	cout<<"Enter a num :";
	cin>>n;
	int num=n;
	int c=0;
	cout<<"\nPrime no.s are :";
	for(int i=2; i<=n; i++)
	{			
		for(int k=1; k<=i; k++)
		{
			if(i%k==0)
			c++;
		}
		if(c==2)
		{
			cout<<i<<"  ";
			arr[x++]=i;
		}
		c=0;
	}
	cout<<"\n";
	for(int j=0; j<x; j++)
	{
		for(int k=x-1; k>=0; k--)
		{
			int temp=arr[j]+arr[k];
			if(temp==n)
				cout<<arr[j]<<"+"<<arr[k]<<" = "<<temp<<endl;			
			if(arr[j]==arr[k])
				break;
		}
	}
	return 0;
}

