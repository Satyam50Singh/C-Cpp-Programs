//Program to Swap two no.s by using Function template.(swap_using_fn_template)
#include <iostream>
using namespace std;
template <class X>
void Swap(X &a,X &b);

int main()
{
	int a,b;
	cout<<"Enter two integers no.s :";
	cin>>a>>b;
	cout<<"\nBefore Swapping(Interger Values)\nFirst no. is :"<<a<<"\nSecond no. is :"<<b<<endl;
	Swap(a,b);
	cout<<"\nAfter Swapping(Interger Values)\nFirst no. is :"<<a<<"\nSecond no. is :"<<b<<endl;

	float a2,b2;
	cout<<"\nEnter two Float no.s :";
	cin>>a2>>b2;
	cout<<"\nBefore Swapping(Float Values)\nFirst no. is :"<<a2<<"\nSecond no. is :"<<b2<<endl;
	Swap(a2,b2);
	cout<<"\nAfter Swapping(Float Values)\nFirst no. is :"<<a2<<"\nSecond no. is :"<<b2<<endl;

	string str1,str2;
	cout<<"\nEnter two Strings :";
	cin>>str1>>str2;
	cout<<"\nBefore Swapping(Strings Values)\nFirst no. is :"<<str1<<"\nSecond no. is :"<<str2<<endl;
	Swap(str1,str2);
	cout<<"\nAfter Swapping(strings Values)\nFirst no. is :"<<str1<<"\nSecond no. is :"<<str2<<endl;
	
	return 0;
}

template <class X>
void Swap(X &a,X &b)
{
	X temp=a;
	a=b;
	b=temp;
}

