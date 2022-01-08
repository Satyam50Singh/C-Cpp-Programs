// Program to subtract complex no. using operator overloading.
//complex no.s
//a+ib
//a-ib
//Here a and b are real values, and i is an imaginery value

#include <iostream>
using namespace std;

class Complex{
	private :
		float a, b, res;
	public :
		Complex() : a(0), b(0){
		}
		void getValues() {
			cout << "Enter the value of a and b: " ;
			cin >> a >> b;
		}
		Complex operator - (Complex temp){
			Complex res;
			res.a = this -> a - temp.a;
			res.b = this -> b - temp.b;
			return res;
		}
		void display(){
			cout << "Result is : "<< a ;
			if(b>0){
				cout << " + " << b ;
			}else {
				cout << b << "i";
			}
		}
};

int main() {
	Complex o1;
	o1.getValues();
	Complex o2;
	o2.getValues();
	
	Complex res;
	res = o1-o2;
	res.display();
	return 0;
}
