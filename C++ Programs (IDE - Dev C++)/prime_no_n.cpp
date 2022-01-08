//Program to print all prime no.s upto n.(prime_no_n)
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a num :";
	cin>>n;
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
			cout<<i<<"  ";
		c=0;
	}
	return 0;
}

