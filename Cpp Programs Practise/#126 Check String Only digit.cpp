// Check if string contain only digits
#include <iostream>
using namespace std;

bool check(string s1){
	for(int i=0; i<s1.length(); i++){
		if(!(s1[i] >= '0' && s1[i] <= '9')){
			return false;
		}
	}
	return true;
}
int main() {
	string s1;
	cout << "Enter a string : ";
	cin >> s1;
	
	if(check(s1)) {
		cout << "String only contain digit";
	}else {
		cout << "No string also contain other character";
	}
	return 0;
}
