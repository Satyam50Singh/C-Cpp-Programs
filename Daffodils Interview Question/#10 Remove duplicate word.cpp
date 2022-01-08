//Remove duplicate word from sentence.

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char str[100],word[20];
	cout << "Enter an string : ";
	cin.getline(str,100);
	
	cout << "Enter word : ";
	cin.getline(word,100);
	cout << "\n\nString is : " << str << endl << "Word is : " << word << endl << endl ;
	
	//convert string into words
	char arr[10][10], c=0,j=0;
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]==' '){
			arr[c][j]='\0';
			c++;	j=0;
		}else{
			arr[c][j]=str[i];
			j++;
		}
	}
	string newstr="";
	cout << "\n\nstring after removal : ";
	for(int i=0; i<=c; i++){
		if(strcmp(arr[i],word)){
			newstr+=arr[i];
			newstr+=" ";
		}
	}
	cout <<newstr;
	return 0;
}

