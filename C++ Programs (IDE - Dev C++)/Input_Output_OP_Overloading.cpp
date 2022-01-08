//Program to overload input and output operator
#include <iostream>
using namespace std;
class A
{
	private :
		int x,y;
	public :
		void setdata(int a, int b)
		{
			x=a;	y=b;
		}
		A operator << (A obj2)
		{
			
			A temp;
			temp.x=x*obj2.x;
			temp.y=y*obj2.y;
			return temp;
		}
		A operator >> (A obj2)
		{
			A temp;
			temp.x=x-obj2.x;
			temp.y=y-obj2.y;
			return temp;
		}
		void display()
		{
			cout<<endl<<"Input output operator overloading :"<<endl;
		cout<<endl<<x<<endl<<y;	
		}
};
int main()
{
	A obj1,obj2,obj3;
	obj1.setdata(2,4);
	obj2.setdata(3,5);
	
	obj3=obj1 << obj2;
	obj3.display();
	
	obj3=obj1 >> obj2;
	obj3.display();
	return 0;	
}
