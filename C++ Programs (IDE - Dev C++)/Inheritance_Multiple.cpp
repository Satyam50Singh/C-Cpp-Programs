//Example of multiple Inheritance
#include <iostream>
using namespace std;
class A
{
	public :
		int a;
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
class B
{
	public :
		int b;
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

class C :public A,public B 
{	
	private :
		int c;
	public :
		int add;
		void setdata3(int q)
		{
			c=q;
			add=a+b+c;//Using the data members of Base Classes A and B in the function of Derived class C  
		}
		void display3()
		{
			cout<<"\nThis is a function of Derived Class C\n";
		cout<<"The value of data member of Derived class is : "<<c;
		cout<<"\n"<<"Addition of data members of all classes is :"<<add;		
		}
};
int main()
{
	C x;
//Access the data members of base class by using the object of derived class	
	x.setdata(23);
	x.display();
	x.setdata2(45);
	x.display2();
	x.setdata3(56);
	x.display3();
	return 0;
}
