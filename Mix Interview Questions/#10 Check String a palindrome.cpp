#include <iostream>
using namespace std;
void reverse(string str){
	int start = 0;
	int end = str.length()-1;
	string temp = str;
	while(start<end) {
		char ch = str[start];
		str[start] = str[end];
		str[end] = ch;
		start++;
		end--;
	}
	cout << str;
	if (str == temp){
		cout << "\n\nBoth are palindrome";
	}
}

int main() {
	string str;
	cout << "Enter a string :";
	getline(cin,str);
	cout << "String is : " << str << endl;
	reverse(str);
	return 0;
}
