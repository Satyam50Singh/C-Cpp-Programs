#include <iostream>
using namespace std;
int main() {
	char str[30];
	cout << "Enter a string : ";
	cin.getline(str,30);
	cout << "\nString is : " << str;
	
	cout << "\nString in Upper Case :";
	for(int i=0; i<str[i]!='\0'; i++){
		if(str[i]>='a' && str[i]<='z'){
			cout << char(str[i]-32);
		}else {
			cout << str[i];
		}
	} 

	cout << "\nString in Lower Case :";
	for(int i=0; i<str[i]!='\0'; i++){
		if(str[i]>='A' && str[i]<='Z'){
			cout << char(str[i]+32);
		}else {
			cout << str[i];
		}
	} 

	cout << "\nString in Toggle Case :";
	for(int i=0; i<str[i]!='\0'; i++){
		if(str[i]>='a' && str[i]<='z'){
			cout << char(str[i]-32);
		}else if(str[i]>='A' && str[i]<='Z'){
			cout << char(str[i]+32);
		}else {
			cout << str[i];
		}
	} 

	cout << "\nAll first character of each word in capital letter Case :";
	for(int i=0; i<str[i]!='\0'; i++){
		if(str[i]>='A' && str[i]<='Z'){
			str[i] = char(str[i]+32);
		}
	}
	cout << char(str[0]-32);

	for(int i=1; i<str[i]!='\0'; i++){
		if(str[i] ==' '){
			cout << str[i];
			if(str[i+1]>='a' && str[i+1]<='z'){
				cout << char(str[i+1]-32);
				i++;
			}
		}else {			
			cout << str[i];
		}

	} 

	return 0;
	
}
