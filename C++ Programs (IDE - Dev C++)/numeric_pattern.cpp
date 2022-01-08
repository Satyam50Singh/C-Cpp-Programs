//Progam to print a numeric pattern(numeric_pattern)
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no. of rows :";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		int x=i;
		for(int j=n-2; j>=i; j--)
			cout<<"  ";
		for(int k=0; k<=i; k++)
			cout<<k+1<<" ";
		for(int l=1; l<=i; l++)
			cout<<x--<<" ";
		cout<<endl;
	}
		int temp=n;
	for(int i=0; i<n; i++)
	{
		int y=temp-(i+2);
		int x=1;
		for(int k=0; k<=i; k++)
			cout<<"  ";
		for(int j=n-2; j>=i; j--)
			cout<<x++<<" ";			
		for(int k=n-2; k>i; k--)
			cout<<y--<<" ";
			cout<<endl;		
	}
	return 0;
}
