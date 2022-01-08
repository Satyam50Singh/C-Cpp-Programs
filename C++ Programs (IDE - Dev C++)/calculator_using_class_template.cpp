//Program to make a small calculator by using class template(calculator_using_class_template)
#include <iostream>
using namespace std;

template <typename X> 
class calculator
{
	public :
		X a;
		X b;
		void add()		{	cout<<endl<<"Sum is : "<<a+b;	}
		void sub()		{	cout<<endl<<"Subtraction is : "<<a-b;	}
		X multiple()	{	return a*b;	}
		X divide()		{	return a/b;	}
		
		void display()
		{
		 	add();	
		 	sub(); 	
	 		cout<<"\nMutliply is : "<<multiple();	
			cout<<"\nDivide is : "<<divide();
		}
};

int main()
{
	calculator<int> obj;
	calculator<float> obj2;
	cout<<"Enter two no.s (Integers Value) :";
	cin>>obj.a>>obj.b;
	cout<<"\nFOR INTEGER VALUE"<<endl;
	obj.display();
	cout<<"\n\nEnter two no.s (Float Value) :";
	cin>>obj2.a>>obj2.b;
	cout<<"\nFOR FLOAT VALUE"<<endl;
	obj2.display();
	return 0;
}
