//Program to Getting string from user.
#include <iostream>
#include <string.h>
using namespace std;

int main() {	
	string myName;
	string line;
	
	cin >> myName;
	cout << "\n myName : - "<< myName;

	getline(cin, line);		
	cout << "\n line : - "<< line;
	return 0;
}
