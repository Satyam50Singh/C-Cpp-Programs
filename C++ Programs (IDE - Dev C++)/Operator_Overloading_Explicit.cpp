//Explicitly Conversion of Operator Overloading
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
		Complex operator /(Complex t)
		{
			Complex temp;
			temp.real=real+t.real;
			temp.image=image+t.image;
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
	c=a/65;
	c.display();
	return 0;
}
