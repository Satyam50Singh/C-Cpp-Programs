#include <iostream>
#include <string.h>
using namespace std;
int p=0;
void stringComparsion(char str[], char rev[], int len){
	for(int i=0; i<len; i++){
		if(str[i] != rev[i]){
			p=1;
		}
	}
	if(p == 0){
		cout << "\n\nString is palindrome.";
	}else {
		cout << "\n\nString is not palindrome.";
	}
	
}
int main() {
	int len=0;
	char str[30],rev[30];
	cout << "Enter a string : ";
	cin.getline(str,30);
	cout << "\nString is : "<<str;
	int x=0;
	for(int i=0; i<str[i]!='\0'; i++){
		len++;
	}
	for(int i=len-1 ; i>=0; i--){
		rev[x++]=str[i];
	}
	rev[x]='\0';
	cout << "\n\nReverse String is : "<< rev;
	
	stringComparsion(str, rev, len);
}

