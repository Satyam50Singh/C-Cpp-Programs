// Program to reverse a sentence using recursion.

#include <iostream>
using namespace std;

void reverse(char str[],int len) {
	if(len < 0){
		return;
	}else {
		cout << str[len-1];
		len-=1;
		reverse(str, len);	
	}
}
int length(char str[]) {
	int i=0;
	for(i=0; i<str[i]!='\0'; i++){
	}
	return i;
}
int main() {
	char str[30];
	cout << "Enter a sentence : ";
	cin.getline(str, 30);
	cout << "\nSentence is : " << str << endl;
	int len = length(str);
	cout << "\nString is :";
	reverse(str, len);	
}
