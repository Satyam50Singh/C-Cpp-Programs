// Manipulators
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int Basic = 96, Allowance = 98;
	cout << setw(10) << "Basic" << setw(10) << Basic << endl;
	cout << setw(10) << "Allowance" << setw(10) << Allowance << endl;
	float a = 32.23224;
	cout << a << endl;
	cout << fixed;
	cout << setprecision(2) << a;
	return 0;
}
