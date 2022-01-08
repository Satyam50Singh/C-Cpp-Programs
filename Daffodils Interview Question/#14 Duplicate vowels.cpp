// Program to double or duplicate character in string.

//ex - helloworld
//o/p - heelloowoordld
#include <iostream>
using namespace std;

int main() {
	char str[100];
	cout << "Enter a string : ";
	cin.getline(str, 100);
	cout << "\nString is : " << str << endl;
	
	
	char str1[30];
	int p=0;
	for(int i=0; str[i]!='\0'; i++){
		char ch = str[i];
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
			str1[p++] = ch;
			str1[p] = ch;
		}
		else {
			str1[p] = ch;
		}
		p++;
	}
	cout << "\nReq. String is : " << str1 << endl;
	return 0;
}
