//C++ program to implement function overidding : Same name member functions in different classes.(over_riding_example)
#include <iostream>
using namespace std;
class A
{
	private :
		int x,y;
	public :
		int add(int p,int q)//overridden fn
		{
			x=p;	y=q;
			return x+y;
		}
};
class B :public A
{
	private :
		int p,q;
	public :
		int add(int p,int q)//overridding fn
		{
			return p-q;
		}
};

int main()
{
	B obj2;
	
	int res2=obj2.add(12,78);
	int res1=obj2.A::add(12,78);
	cout<<"Addition of 12 & 78 is :"<<res1<<endl;
	cout<<"Addition of 12 & 78 is :"<<res2<<endl;
	return 0;
}
