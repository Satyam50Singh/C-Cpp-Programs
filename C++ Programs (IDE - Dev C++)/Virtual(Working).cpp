//Working of Virtual Function.
#include <iostream>
using namespace std;
class Base 
{
	public :
		void fun1(){
			cout<<"Non-Virtual Fun1 Function of Base Class\n";
		}
		virtual void fun2()
		{
			cout<<"Virtual Fun2 Function of Base Class\n";			
		}
		virtual void fun3()
		{
			cout<<"Virtual Fun3 Function of Base Class\n";
		}
		virtual void fun4()
		{
			cout<<"Virtual Fun4 Function of Base Class\n";
		}
};		

class Derived : public Base  
{
	public :
		void fun1(){
			cout<<"Non-Virtual Fun1 Function of Derived Class\n";
		}
		void fun3()
		{
			cout<<"Virtual Fun3 of Base Class which is defined in Derived Class\n";
		}
		void New_Fun()
		{
			cout<<"I'm Normal Function or Newly created fn.\n";
		}
};
int main()
{
	Base* p;	//When we create a pointer of Base class and initialise with the address of derived class object
				//when we create the object of derived class the compiler creates a pointer (VPTR) as a data member
				//of the class containg the add of VTABLE of derived class. 
	Derived obj;
	p=&obj;
	p->fun1();//Early Binding is Non-Virtual Fun Function
	p->fun2();//Late Binding bcoz it is Virtual Fun Function
	p->fun3();//Late Binding bcoz it is Virtual Fun Function
	obj.New_Fun();//Early Binding
	return 0;
}
