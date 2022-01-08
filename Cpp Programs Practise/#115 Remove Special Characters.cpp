// Program to remove all characters from string except alphabets.

#include <iostream>
using namespace std;

int main() {
	char str[30],str2[30];
	int j=0;
	cout << "Enter a string : ";
	cin.getline(str,30);
	for(int i=0; i<str[i]!=0; i++)
		if(str[i]>='A' && str[i]<='Z'||str[i]>='a' && str[i]<='z')
			str2[j++]=str[i];
	
	str2[j]='\0';
	cout << "\nRequired String is : " << str2;

}
