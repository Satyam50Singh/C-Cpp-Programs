//We cn access the private data memerbs of class by using Friend Function
#include <iostream>
using namespace std;
class B;
class A
{
	private :
		int data1;
	public :
		A()
		{
			data1=5;
		}
	friend void access(A,B);
};

class B
{
	private :
		int data2;
	public :
		B()
		{
			data2=7;
		}
	friend void access(A,B);	
};

void access(A p,B q)
{
	cout<<p.data1+q.data2;
}
int main()
{
	A x;
	B y;
	access(x,y);
	return 0;
}
