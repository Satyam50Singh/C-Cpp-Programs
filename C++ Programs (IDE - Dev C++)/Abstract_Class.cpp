//Example of Abstract class And Pure Virtual Function
#include <iostream>
using namespace std;
class Base
{
	public: 
	void Fun()
	{
		cout<<"Non-Virtual Function of Base Class\n";
	}
	virtual void Fun3()=0;//D-Nothing function of Base Class
};
class Derived :public Base 
{
	public :
	void Fun3()
	{
		cout<<"Do nothing fn of Base class which is defined in Derived Class\n";
	}
};
int main()
{
	Base *x;
	Derived y;
	x=&y;
	y.Fun();
	x->Fun3();
	return 0;
}
