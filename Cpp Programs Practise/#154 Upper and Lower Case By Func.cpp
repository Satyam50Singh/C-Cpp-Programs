// Program to character is in which case by using predefined function.

#include <iostream>
using namespace std;

int main() {
	char ch;
	cout << "Enter char : ";
	cin >> ch;
	if(isupper(ch)){
		cout << ch << " is uppercase character .";
	}else if(islower(ch)){
		cout << ch << " is lowercase character .";
	} else {
		cout << ch << " is special character.";
	}
	return 0;
}
