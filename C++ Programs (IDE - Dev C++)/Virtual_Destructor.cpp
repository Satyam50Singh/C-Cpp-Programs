//Example Of Virtual Destructor
#include <iostream>
using namespace std;
class A
{
	public :
		A()
		{
			cout<<"Constructor of Base Class\n";
		}
		virtual ~A()
		{
			cout<<"Destructor of Base Class\n";
		}
};
class B :public A
{
	public :
		B()
		{
			cout<<"Constructor of Derived Class\n";
		}
		~B()
		{
			cout<<"Destructor of Derived Class\n";
		}
};
int main()
{
	B *y=new B();
	A *x=y;
	delete y;
	return 0;
}
