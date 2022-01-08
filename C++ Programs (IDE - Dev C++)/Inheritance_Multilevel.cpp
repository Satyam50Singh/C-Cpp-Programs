//Example of multilevel Inheritance
#include <iostream>
using namespace std;
class A
{
		int a;
	public :
		void setdata(int q)
		{
			a=q;
		}
		void display()
		{
		cout<<"This is a function of Base Class A\n";
		cout<<"The value of data member of Base class is : "<<a;		
		}
};
class B :public A
{
		int b;
	public :
		void setdata2(int q)
		{
			b=q;
		}
		void display2()
		{
		cout<<"\nThis is a function of Base Class B\n";
		cout<<"The value of data member of Base class is : "<<b;		
		}
};

class C :public B 
{	
	private :
		int c;
	public :
		void setdata3(int q)
		{
			c=q;
		}
		void display3()
		{
			cout<<"\nThis is a function of Derived Class C\n";
		cout<<"The value of data member of Derived class is : "<<c;
		}
};
int main()
{
	B y;
	C x;
	y.setdata(1245);
	y.display();
	y.setdata2(34);
	y.display2();
	cout<<"\n\n";
	x.setdata(12);
	x.display();
	x.setdata2(45);
	x.display2();
	x.setdata3(56);
	x.display3();
	return 0;
}
