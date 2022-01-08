// Program to check number is equal or not..

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter two numbers : ";
	cin >> a >> b;
	if(!(a^b)){
		cout << "\nBoth are equal \n";
	}else {
		cout << "\nBoth are not equal \n";
	}	
	return 0;
}
