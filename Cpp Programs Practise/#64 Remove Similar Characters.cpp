// Program to remove all the characters of second string which are also present in first string

// input :
// first string : Satyam
// second string : Raghav

//output
//Rghv

#include <iostream>
#include <string.h>
using namespace std;
class StringOpr{
	private : 
	char str1[30], str2[30], temp[30];
	public: 
	getStrings() {
		cout << "Enter first string : ";
		cin.getline(str1,30);
		cout << "Enter second string : ";
		cin.getline(str2,30);
		cout << "\nFirst string : " << str1; 
		cout << "\nSecond string : " << str2;
	}
	resultedString() {
		int len2=0;

		for(int j=0; j<str2[j]!='\0'; j++){
			len2++;
		}
		char temp[len2];
		int x=0;
		for(int i=0; i<str1[i]!='\0'; i++){
			for(int j=0; j<str2[j]!='\0'; j++){
				if(str1[i] != str2[j]){
					temp[x++] = str2[j];
				}
			}
			temp[x] = '\0';
			strcpy(str2,temp);
		}
		cout << endl << temp << endl;
	}
};

int main() {
	StringOpr obj;
	obj.getStrings();
	obj.resultedString();
}
