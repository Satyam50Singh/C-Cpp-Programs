// Program to swap adjacent character of string and print new string 
//ex- geek
//o/p- egke

#include <iostream>
using namespace std;

int main() {
	char str[100];
	int c;
	cout << "Enter an string : ";
	cin.getline(str, 100);
	cout << "\nString : " << str << endl;
	for(c=0; str[c]!='\0'; ++c);
	if(c%2 == 0){
		for(int i=0; str[i]!='\0'; i+=2){
			char ch = str[i];
			str[i] = str[i+1];
			str[i+1] = ch;
		}
	
		cout << "\n\nString : " << str << endl;
	}else{
		cout << "\nRequired string of even length.";
	}
	
	return 0;
}
