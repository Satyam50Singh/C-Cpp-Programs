// Program to calculate the percentage of student using multilevel inheritance.
// accepts the marks of three subjects in base class A . a class will drived from the above mention class 
// which include a function to find a total marks obtained and another class derived from thus class
// which calculates and displays the % of students.

#include <iostream>
#include <iomanip>
using namespace std;

class A{
	private :
	public : 
		int M1, M2, M3;
		void getValues() {
			cout << "Enter Marks of each subject : ";
			cin >> M1 >> M2 >> M3;
		}
};

class B : public A {
	private :
		int sum;
	public :
		B():sum(0) {
		}
		int calculateSum() {
			return M1+M2+M3;
		}
};

class C : public B {
	public :	
		void showPerc(double sum){
			double percentage = ((sum*100)/300);
			cout << fixed;
			cout << "\n\nPercentage is : " << setprecision(2) << percentage << endl;
		} 
};

int main() {
	C obj;
	obj.getValues();
	int sum = obj.calculateSum(); 
	obj.showPerc(sum);
}
