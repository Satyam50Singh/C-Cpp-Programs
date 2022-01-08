//Example of Virtual Base Class 
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
class B : virtual public A
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

class C : virtual public A
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

class D :public B,public C
{
		private :
		int d;
	public :
		void setdata4(int q)
		{
			d=q;
		}
		void display4()
		{
			cout<<"\nThis is a function of Derived Class D\n";
		cout<<"The value of data member of Derived class is : "<<d;
		}

};
int main()
{
	A w;
	B x;
	C y;
	D z;
	
	w.setdata(12);
	w.display();
	cout<<"\n\n";
	x.setdata(123);
	x.display();
	x.setdata2(34);
	x.display2();
	cout<<"\n\n";
	y.setdata(123);
	y.display();
	y.setdata3(56);
	y.display3();
	cout<<"\n\n";
	z.setdata(1);
	z.setdata2(2);
	z.setdata4(4);
	z.setdata3(3);
	z.display();
	z.display2();
	z.display3();
	z.display4();
	return 0;
}
