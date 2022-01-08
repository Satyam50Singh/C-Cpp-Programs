//Program to implementat the initializer list.(Initializer_List)
#include <iostream>
using namespace std;
class A
{
	private :
		int a;
		int const b;
		int &c;
	public :
		A(int &n):a(12),b(24),c(n)
		{
			cout<<"a-->"<<a<<endl;			
			cout<<"b-->"<<b<<endl;			
			cout<<"c-->"<<c<<endl;		
			c=89;	
		}
	
};
int main()
{
	int x=5;
	cout<<"x-->"<<x<<endl;
	A obj(x);
	cout<<"x-->"<<x<<endl;
	return 0;
};
