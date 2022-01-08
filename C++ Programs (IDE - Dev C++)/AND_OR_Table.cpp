//Program to display AND & OR table by using Bitwise Operator.(AND_OR_Table)
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b,n,x,temp;
	cout<<"A    |    B    |   a&b   |   a|b   |   a^b   "<<endl;
	for(int i=0; i<4; i++)
	{
		temp=i;
		b=i%2;
		temp/=2;
		a=temp%2;
		
		cout<<a<<"    |    "<<b<<"    |    ";
		x=a&b;
		cout<<x<<"    |    ";
		x=a|b;
		cout<<x<<"    |    ";
		x=a^b;
		cout<<x<<"    |    ";
		cout<<endl;
	}
	return 0;
}
