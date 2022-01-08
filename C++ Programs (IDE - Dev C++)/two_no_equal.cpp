//Program to check if two numbers are equal without using arithmetic operators or comparison operators.(two_no_equal)
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two no.s :";
	cin>>a>>b;
	if(!a^b)
		cout<<"\nBoth no.s are equal";
	else
		cout<<"\nBoth no.s are not equal";
	return 0;
}
