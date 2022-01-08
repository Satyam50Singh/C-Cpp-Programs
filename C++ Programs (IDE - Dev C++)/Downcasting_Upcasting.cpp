//Upcasting and down casting 
#include <iostream>
using namespace std;
class A
{
	private :
		int x,y;
	public :
		A()
		{
			x=2;
			y=4;
		}
		void display()
		{
			cout<<"A is : "<<x<<" B is "<<y<<endl;
		}
};

class B:public A
{
	public :
		void new_disp()
		{
			cout<<"I,m the derived class fn."<<endl;			
		}
};
int main()
{
	A obj1;
	B obj2;
	//First way of accessing fn
	obj1.display();
	obj2.new_disp();	
	
	//Second way of accessing fn
	A *p=&obj2;
	B *q= (B *)&obj1;
	p->display();
	q->new_disp();	
	q->display();
	return 0;
}
