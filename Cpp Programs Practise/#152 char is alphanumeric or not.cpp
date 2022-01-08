// Program to check a character is alphanumeric or not.

#include <iostream>
using namespace std;

int main() {
	char ch;
	cout << "Enter char : ";
	cin >> ch;
	
	ch = '\t';
	if(isalnum(ch)){
		cout << ch << " is alphanumeric character .";
	}else if(isspace(ch)){
		cout << ch << " is special character .";
	} else {
		cout << ch << " is not an alphanumeric character.";
	}
		
	return 0;
}
