// Program to concatenate two strings.

#include <iostream>
using namespace std;

int main(){
	char str[30],str2[30];
	int j=0;
	cout << "Enter 1st string : ";
	cin.getline(str,30);
	cout << "Enter 2nd string : ";
	cin.getline(str2,30);
	char temp[60];
	for(int i=0; i<str[i]!=0; i++){
		temp[j++] = str[i];
	}
	for(int i=0; i<str2[i]!=0; i++){
		temp[j++] = str2[i];
	}

	temp[j]='\0';
	cout << "\nRequired String is : " << temp;
}
