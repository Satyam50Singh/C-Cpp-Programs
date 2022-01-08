// Program to remove all punctuation from string.

#include <iostream>
using namespace std;

int main() {
	char str[45], newStr[40];
	
	cout << "Enter a string : ";
	cin >> str;
	int j=0;
	cout << "\nRequired output : ";
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]>='a' && str[i]<='z'|| str[i]>='A' && str[i]<='Z'|| str[i]>='0' && str[i]<='9')
		{
			newStr[j]=str[i];
			cout<<newStr[j++];			
		}
	}
	return 0;
}
