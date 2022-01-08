#include <iostream>
using namespace std;
class Complex
{
	private :
		int a;
	public :
		Complex(int p)
		{
			a=p;
		}
		Complex operator ++ ()
		{
			cout<<"a = "<<a<<endl;
			a*=5;
		}		
		void display()
		{
			cout<<"Real Value of Object x is "<<a<<endl;
		}
};
int main()
{
	Complex x(4);
	++x;
	x.display();
	return 0;
}
