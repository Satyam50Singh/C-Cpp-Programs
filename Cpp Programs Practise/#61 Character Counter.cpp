// Program to count total no. of characters, vowels, consonants, and spaces and special characters.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin;
	fin.open("demo.txt", ios::in);
	int chars=0, v=0, c=0, s=0, sc=0; 
	while(!fin.eof()){
		char ch = fin.get();
		cout << ch;
		chars++;
		if(ch == ' '){
			s++;
		} else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U'){
			v++;			
		} else if( ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
			c++;
		}
	}
	cout << "\nTotal no. of characters : " << chars-1 << endl;
	cout << "Total no. of  spaces : "  << s << endl;
	cout << "Total no. of vowels :"  << v << endl;
	cout << "Total no. of consonants :"  << c << endl;
	cout << "Total no. of special character : "  << chars-1-v-s-c << endl;
	fin.close();
	return 0;
}
