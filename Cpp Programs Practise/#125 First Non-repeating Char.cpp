// Find the first non-repeating character of a string.

#include <iostream>
using namespace std;

int main() {
	string s1;
	cout << "Enter a string : ";
	cin >> s1;
	cout << "\nFirst non-repeating character is : " ;
	int freq=1, index;
	for(int i=0; i<s1.length(); i++){
		freq=1;
		for(int j=i+1; j<s1.length(); j++){
			if(s1[i] == s1[j]){
				freq++;
			}else {
				index = i;
			}
		}
		if(freq==1){
			cout << s1[index];
			break;
		}
	}
	return 0;	
}
