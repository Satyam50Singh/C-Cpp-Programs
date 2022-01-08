//Operator Overloading by using Friend Function
#include <iostream>
using namespace std;
class Complex
{
	private :
		int real,image;
	public :
		Complex() 
		{}
		Complex(int q)
		{
			real=q;
			image=q;
		}
		Complex(int a,int b)
		{
			real=a;
			image=b;
		}
		friend Complex operator /(Complex m,Complex r)
		{
			Complex temp;
			temp.real=m.real+r.real;
			temp.image=m.image+r.image;
			return temp;
		}
		void display()
		{
			cout<<"Real of c is "<<real<<endl;			
			cout<<"Image of c is "<<image<<endl;
		}
};
int main()
{
	Complex a(4,8),c;
	c=65/a;
	c.display();
	return 0;
}
