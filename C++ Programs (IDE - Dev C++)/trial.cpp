
#include <iostream>

using namespace std;

int main()
{
	int n,k;
	cout<<"Enter a num :";
	cin>>n;
	int c=0;
//	for(k=0; k<=n; k++)
	int temp=n;
	for(int i=0; i<4; i++)
	{
	cout<<"HI sir.\n";
		if(temp%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		cout<<"NO. is prime :"<<n<<"  ";
	}
	else
	{
		cout<<"NO. is  non prime :"<<n<<"  ";
	
		
		c=0;
	}
	return 0;
}

