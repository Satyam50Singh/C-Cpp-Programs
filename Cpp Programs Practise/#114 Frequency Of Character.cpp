// Program to find the frequency of character.

#include <iostream>
using namespace std;

int main() {
	char str[30],ch;
	int freq = 0;
	cout << "Enter a string : ";
	cin.getline(str,30);
	cout << "\nEnter a character : ";
	cin >> ch;
	cout << "\nFrequency of '" << ch << "'' in \""	<< str << "\" is : ";
	for(int i=0; i<str[i]!=0; i++)
		if(ch == str[i])
			freq++;
			
	cout << freq;
	return 0;
}
