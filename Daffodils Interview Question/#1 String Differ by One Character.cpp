// String Program
// check if two strings differ by one character.

//link - https://kalkicode.com/check-two-strings-differ-one-character

#include <iostream>
using namespace std;
int s1, s2;
bool check(char str[30], char str1[30]){
	if(s1 != s2){
		return false;
	}
	for(int i=0; i<s1; i++){
		if(str[i]!=str1[i]){
			return true;
		}
	}
	return false;
}

int main() {
	int i=0;
	char str[30]="i love to eat banana";
	char str1[30];

	cout << "Enter a string :";
	cin.getline(str1,30);

	for(i; str[i]!='\0'; ++i);
	s1 = i;
	for(i=0; str1[i]!='\0'; ++i);
	s2 = i;
	
	bool result = check(str,str1);
	if(result){
		cout << "\nResult : true" << endl;
	}else {
		cout << "\nResult : false" << endl;
	}
	return 0;
}
