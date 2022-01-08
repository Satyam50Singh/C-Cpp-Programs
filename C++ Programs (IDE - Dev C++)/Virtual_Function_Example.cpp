//Virtual Fn Implementation and why we use the fn.
#include <iostream>
using namespace std;
class A
{
	public :
		virtual void fun()//Overridden fn
						  //Here Virtual is a keyword and it is used for late binding
						  //it is mainly used in the concept of fn overriding and Inheritance
		{
			cout<<"SATYAM SINGH\n";
		}	
};
class B:public A
{
	public :
		void fun()//Overriding fn
		{
			cout<<"satyam singh\n";
		}	
};

int main()
{
	A obj2; 
	A *p1,*p2;
	B obj;
	B *p;
	p=&obj;
	p1=&obj2;
	p2=&obj;
	//Object of class B and Function of B
	obj.fun();
	//Object of class A and Function of A
	obj2.A::fun();
	//Pointer of class B and Function of B	
	p->fun();
	//Pointer of class A and Function of A	
	p1->fun();
	//Pointer of class A and Function of B	
	
	p2->fun();	//Here p2 is a pointer of base class and it access the fun() of derived class by using virtual implementation.
	return 0;
}
