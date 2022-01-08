//Print duplicate character from string
// Example - satyamsingh
// Output - 
// a - 2
// s - 2

#include <iostream>
using namespace std;

int main() {
	string str;
	cout << "Enter a string : ";
	cin >> str;
	
	for(int i=0; i<str.length(); i++){
		char ch = str[i], t;
		if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
			int freq = 1 , index;
			
			for(int j=i+1; j<str.length(); j++){
				if(ch == str[j]){
					++freq;
					index = j;
					t = str[index];
					str[j] = ' ';
				}
			}
			if(freq > 1){
				cout << t << "  - -  " << freq << endl; 
			}
		}
	}
	return 0;
}

