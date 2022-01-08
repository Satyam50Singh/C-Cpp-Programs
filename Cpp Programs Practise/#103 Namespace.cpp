// Program to find ASCII value of entered character.

#include <iostream>
using namespace std;

namespace demo{
	void fun(){
		cout << "\nInside Demo Namespace";	
	}
	class Demo{
		public :
			void d1(){
				cout << "\nInside Demo Class d1 method";
			}
	};
}

namespace demo1{
	void fun(){
		cout << "\nInside Demo1 Namespace";	
	}
	class Demo{
		public :
			void d1(){
				cout << "\nInside Demo1 Class d1 method";
			}
	};
}

using namespace demo;

int main() {
	cout << "Demo Namespace\n";
	fun();
	Demo obj;
	obj.d1();

	cout << "\n\nDemo1 Namespace\n";
	demo1::fun();
	demo1::Demo obj1;
	obj1.d1();
	return 0;
}
