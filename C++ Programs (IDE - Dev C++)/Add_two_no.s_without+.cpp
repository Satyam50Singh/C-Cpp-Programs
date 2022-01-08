//Program to add two no.s without using any Arithematic Operator(Add_two_no.s_without+)
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two no.s :";
	cin>>a>>b;
	if(b>0)
	{
		while(b>0)
		{
			a++;
			b--;
		}
	cout<<"Sum is "<<a;
	}
	else //b=-12   a=7  
	{
		while(a>0)
		{
			a--;
			b++;
		}
	cout<<"Sum is "<<b;
	}
 }
 
