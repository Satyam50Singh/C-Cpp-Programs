// Program to find all the words with the given character in a string.
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char str[50], ch;
	int temp=0, temp2;
	cout << "Enter a string : ";
	cin.getline(str, 50);	
	cout << "\nString is :" << str << endl;
	cout << "\nEnter a char: ";
	cin >> ch;
	
	cout << "\nWords :\n";
	for(int i=0; i<str[i]!='\0'; i++){
		if(str[i]==' ' && str[i-1]==ch || str[i]==ch && str[i-1]=='\0'){
			for(int j=temp2; j<i; j++){
				cout << str[j];
			}
			cout << endl;
			temp2 = i+1;
		} else {
			if(str[i] == ' '){
				temp2=i+1;
			}
		}
	}
	return 0;
}
