//Example of This pointer
#include <iostream>
using namespace std;
class Complex
{
	private :
		int a,b;
	public :
		void add(int a,int b)
		{
			cout<<a<<" "<<b<<" = "<<a+b;
			this->a=12;
			this->b=23;
			
			cout<<endl<<this->a<<" "<<this->b<<" = "<<a+b;
		}
};
int main()
{
	Complex x;
	int a=7,b=7;
	x.add(a,b);
	return 0;
}
