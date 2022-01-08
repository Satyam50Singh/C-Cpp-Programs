// Pointers
#include <iostream>
using namespace std;

int main() {
	const char* const name = "Satyam Singh";
	cout << name;
	cout << endl << &name << endl;
	const char* age = "29";
	cout << age;
	cout << endl << &age;
	return 0;
}
