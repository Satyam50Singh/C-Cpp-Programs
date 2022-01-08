//Program to implement Const member function
#include <iostream>
using namespace std;
class A
{
	private :
		int n,i,j;
	public :
		A(int x)
		{
			n=x;
		}
		int setvalue() const{
			return n;
		}
		void display()
		{
			cout<<"no.of rows is :"<<setvalue()<<endl;
			for (int i=0; i<n; i++)
			{
				for (int j=0; j<=i; j++)
				cout<<"*";
				cout<<endl;
			}
		}
};

int main()
{
	A obj(10);
	obj.display();
	return 0;
}
