// Program to store a string to 2D array
#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char str[30], arr[10][10];
	cout << "Enter a string : ";
	cin.getline(str,30);
	cout << "\nString is : " <<	str << endl;
	
	int x=0, p=0;
	for(int i=0; i<str[i]!='\0'; i++){
		if(str[i] == ' ' || str[i+1]=='\0'){
			if(str[i+1]=='\0'){
				arr[x][p++]=str[i];
			}
			arr[x][p]='\0';
			cout << arr[x] << endl;
			x++;
			p=0;
		}else {
			arr[x][p++]=str[i];
		}
	}
	
	return 0;
}
