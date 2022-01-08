// Example of Virtual function

#include <iostream>
using namespace std;

class Base {
	public:
	virtual void fun() {
		cout << "\nBase Class fun()\n";
	}
	virtual void fun2() {
		cout << "\nBase Class fun2()\n";
	}
};

class Derived : public Base {
	void fun() {
		cout << "\nDerived Class fun()\n";
	}
};

int main() {
	Base *p;
	Derived Obj;
	p=&Obj;
	p->fun();
	p->fun2();
	return 0;
}
