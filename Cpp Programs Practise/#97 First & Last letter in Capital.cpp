#include <iostream>
#include <string.h>
//#include <conio.h>
using namespace std;
int main() {
	char str[30];
	cout << "Enter a string :";
	cin.getline(str, 30);
	cout << "\nString is :" << str << endl;
	cout << "\nRequired String :\n";

	str[0] = toupper(str[0]);
	for(int i=1; i<str[i]!='\0'; i++){
		if(str[i+1] == '\0'){
			str[i] = toupper(str[i]);
		}else if(str[i] == ' '){
			str[i-1] = toupper(str[i-1]);
			str[i+1] = toupper(str[i+1]);
		}
	}

	cout << "\nString is : " << str;

	return 0;
}
