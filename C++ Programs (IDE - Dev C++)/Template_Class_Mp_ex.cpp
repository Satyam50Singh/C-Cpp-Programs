#include <iostream>
using namespace std;
template <class X,class Y>
class A
{
		X a;
		Y b;
	public :
		A(X p,Y q)
		{
			a=p;
			b=q;
		}
		void display()
		{
			cout<<"Values of a & b is :"<<a<<","<<b<<endl;
		}
};
int main()
{
	A<int,float> d(3,7.8);
	A<int,char> d3(3,'d');
	A<string,float> d2("satyam",7.8);
	
	d.display();
	d2.display();
	d3.display();
	return 0;
}
