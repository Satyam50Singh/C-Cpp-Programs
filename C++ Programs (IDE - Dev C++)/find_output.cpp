//Find the output ?? (find_output)
#include <iostream>
using namespace std;
int x=10;
void pass(int &a, int b,int &c)
{
	cout<<"-->::x  :"<<b<<endl;
	int x=4;
	c+=x;
	a*=::x;
	b=b+b;
}
int main()
{
	int y=1,x=2;
	pass(y,::x,x);
	cout<<x<<":"<<y<<":"<<::x;
	cout<<endl;
	
	pass(::x,x,y);
	cout<<x<<":"<<y<<":"<<::x;	
}
