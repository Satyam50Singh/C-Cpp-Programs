//given string found the frequency of each character and represent in this way.
//
//ex - aaabsbbbeer
//o/p - 3a4b1s2e1r

#include <iostream>
using namespace std;

int main() {
	char str[100];
	cout << "Enter string : ";
	cin.getline(str,100);
	
	cout << "\nString is : " << str << endl;
	char newstr[30], temp[26];
	int x=0;
	cout << "\nReq. String is : ";
	for(int i=0; str[i]!='\0'; i++){
		char ch = str[i];
		int freq = 1;
		for(int j=i+1; str[j]!='\0'; j++){
			if(ch == str[j] && ch !='~'&& str[j] !='~'){
				str[j]='~';
				freq++;
			}
		}
		if(str[i]!='~')
			cout << freq << str[i];
	}
	return 0;
}
