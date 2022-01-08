// Reference Variable
#include <iostream>
using namespace std;

int main() {
	string name = "Satyam Singh";
	string &alias = name; // Reference Variable.
	cout << name << endl; 
	cout << alias << endl; 
	alias = "Rahul Shrinivas";
	cout << name << endl; 
	cout << alias << endl; 
	
	return 0;
}
