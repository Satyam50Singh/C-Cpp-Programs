// Write a program to find if the given word is a keyword or not.

#include <iostream>
using namespace std;

int main() {
	string s;
	string str[] = { "break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "strict", "type", "var"};
	int i=0;
	int size = sizeof(str)/sizeof(str[0]);
	while(i<size) {
		cout << i+1 << ". " << str[i] << endl;
		i++;
	}	
	cout << "\nNumber of keyword : " << i << endl;
	cout << "\nEnter a word :";
	cin >> s;

	int p=1;
	for(int j=0; j<size; j++){
		if(s==str[j]){
			p=0;
			break;
		}
	}
	if(p==1) cout << "\nNot a keyword";
	else cout << "\nYes, It's a predefined keyword";	

	return 0;
}
