// Program to find ASCII value of entered character.

#include <iostream>
using namespace std;

int main() {
	char ch;
	cout << "Enter a character : ";
	cin >> ch;
	cout << "ASCII Value of " << ch << " is " << int(ch) << endl;
	
	cout << "\n\nASCII VALUES OF LOWER CASE ALPHABETS : \n";
	for(char i='a'; i<='z'; i++){
		cout << i << " " << int(i) << "	";
	}

	cout << "\n\nASCII VALUES OF UPPER CASE ALPHABETS : \n";
	for(char i='A'; i<='Z'; i++){
		cout << i << " " << int(i) << "	";
	}
	return 0;
}
