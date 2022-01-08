// Program to find the roots of quad eqns.

//equation : ax^2+bx^1+c
//formula : x = (-b +- root(b^2 - 4*a*c))/2*a;

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class QuadEqn {
	private :
		float a , b, c;
		float  r1, r2;
	public :
		QuadEqn() :a(0), b(0), c(0) {
			
		}		
		void getValues(){
			cout << "Enter value of a b c : ";
			cin >> a >> b >> c;
		}	
		void showEquation() {
			if(a > 0 && b > 0 && c > 0){
				cout << "\nEqn is : " << a << "x^2+" <<  b << "x+" << c << endl;
			}else if(b<0){
				cout << "\nEqn is : " << a << "x^2+(" <<  b << ")x+" << c << endl;
			}else if(c<0){
				cout << "\nEqn is : " << a << "x^2+" <<  b << "x+(" << c << ")" << endl;
			}
		}
		void calculate() {
			int d =  b*b - 4*a*c;
			cout << "\ndiscrimant is = " << d << "\n";
			if(d<0) {
				r1 = -b / (2.0 * a);
				r2 = (sqrt(abs(d))) / (2.0 * a);
				cout << fixed;
				cout << "\nx = " << setprecision(2) <<  r1 << " +i " << setprecision(2) << r2 << endl;
				cout << "\nx = " << setprecision(2) <<  r1 << " -i " << setprecision(2) << r2 << endl;
			}else if(d == 0){
				r1 = -b / (2.0 * a);
				r2 = r1;
				cout << "x = " <<  r1 << " & " << r2 << endl;
			}else {
				r1 = (-b + sqrt(d)) / (2.0 * a);
				r2 = (-b - sqrt(d)) / (2.0 * a);
				cout << "\n\nx = " <<  r1 << " & " << r2 << endl;
			}
		}
};

int main() {
	QuadEqn Q1;
	Q1.getValues();
	Q1.showEquation();
	Q1.calculate();
	return 0;	
}
