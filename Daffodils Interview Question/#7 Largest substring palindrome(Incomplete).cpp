// Find largest substring palindrome.

//link - https://www.javatpoint.com/daa-longest-palindrome-subsequence
//link 2 - https://www.journaldev.com/530/longest-palindrome-substring-string-java

#include <iostream>
using namespace std;
char str[100];

bool isEqual(int i, int p){
	if(str[i-p]==str[i+p]){	
		return true;
	}else {
		return false;
	}
}

int main() {
	cout << "Enter an string : ";
	cin.getline(str, 100);
	cout << "String is : " << str << endl;
	int p=1, index=0;
	int count=0,max=0;
	for(int i=1; str[i]!='\0'; i++){
		p=1;
		while(isEqual(i, p)){
			p++;
			count++;
			index=i;
		}
		if(max < count){
			max = count;
		}
	}
	cout << "\n\nLargest Palindrome is : ";
	int l = index-max+1;
	for(int i=0; i<2*max-1; i++)
	cout <<str[l++];
	return 0;
}
