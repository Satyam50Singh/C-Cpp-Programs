//Example of function template having Multiple template()
#include <iostream>
using namespace std;

template <class X>
void fun(X c)
{
	cout<<"Value of c : "<<c<<endl;		
}
template <class X,class Y>
void fun(X a,Y b)
{
	cout<<"Value of a : "<<a<<endl;	
	cout<<"Value of b : "<<b<<endl;
}

int main()
{
	fun(20,"Satyam");
	fun(10.756);
	return 0;
}
