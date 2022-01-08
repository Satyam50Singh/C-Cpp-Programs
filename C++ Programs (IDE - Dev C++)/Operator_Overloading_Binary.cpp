#include <iostream>
using namespace std;
class Complex
{
	private :
		int real,image;
	public :
		Complex(int a,int b)
		{
			real=a;
			image=b;
		}
		Complex()
		{}
		Complex operator + (Complex p)
		{
			cout<<"P.real = "<<p.real<<endl<<"P.image = "<<p.image<<endl;
			cout<<"real = "<<real<<endl<<"image = "<<image<<endl;
			Complex temp;
			temp.real=real+p.real;
			temp.image=image+p.image;
			return temp;
		}
		void display()
		{
			cout<<"Real Value of Object C is "<<real<<endl;
			cout<<"Image Value of Object C is "<<image<<endl;
		}
};
int main()
{
	Complex a(5,7),b(12,9),c;
	c=a+b;//a is implicitly moved 
	c.display();
	return 0;
}
