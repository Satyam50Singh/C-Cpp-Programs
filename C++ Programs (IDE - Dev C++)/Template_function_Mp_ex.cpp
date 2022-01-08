//Example of function template having Multiple template()
#include <iostream>
using namespace std;

template <class X,class Y>
void fun(X a,Y b)
{
	cout<<"Value of a : "<<a<<endl;	
	cout<<"Value of b : "<<b<<endl;
}

int main()
{
	cout<<"First Case : Integer & Float values\n";
	fun(15,12.3);	
	cout<<endl<<"Second Case : Char & string values\n";
	fun('d',"satyam");
	return 0;
}
