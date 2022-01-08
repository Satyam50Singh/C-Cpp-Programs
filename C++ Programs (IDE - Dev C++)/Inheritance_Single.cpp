//Example of Single Inheritance
#include <iostream>
using namespace std;
class A
{
	public :
		int a;
		void display()
		{
		cout<<"This is a function of Base Class A\n";
		cout<<"The value of data member of Base class is : "<<a;		
		}
};
class B :public A
{	
	private :
		int b;
	public :
		void setdata2(int q)
		{
			b=q;
		}
		void display2()
		{
			cout<<"\nThis is a function of Derived Class B\n";
		cout<<"The value of data member of Derived class is : "<<b;		
		}
};
int main()
{
	B x;
	x.a=90;//Access the data members of base class by using the object of derived class	
	x.display();
	x.setdata2(45);
	x.display2();
	return 0;
}
