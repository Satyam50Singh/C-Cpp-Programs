// Program to practice Binary Operator Overloading.

#include <iostream>
using namespace std;

class BinaryOpr{
	private :
		int a, b, c;
	public :
		BinaryOpr() : a(1),b(3),c(10) { }
		BinaryOpr(int x) : a(1),b(3) { this -> c = x; }
		void displayValues(){
			cout << "\na = " << a << "\nb = " << b << "\nc = " << c << endl;
		}
		BinaryOpr operator + (BinaryOpr obj2){
			BinaryOpr temp;
			temp.a = this -> a + obj2.a;
			temp.b = this -> b * obj2.b;
			temp.c = this -> c - obj2.c;
			return temp; 			
		}

};

int main() {

	BinaryOpr obj1;
	obj1.displayValues();

	BinaryOpr obj2(12);
	obj2.displayValues();

	BinaryOpr res;
	res = obj1 + obj2;

	res.displayValues();
	return 0;
}
