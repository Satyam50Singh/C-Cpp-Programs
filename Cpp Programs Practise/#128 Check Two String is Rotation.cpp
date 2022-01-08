// Program to check two string are rotation of each other or not.
//for ex -
//1st - EnglandVsIndia
//2nd - VsIndiaEngland
//output - YES


#include <iostream>
using namespace std;

int main() {
	string s1, s2;
	cout << "Enter 1st string : ";
	cin >> s1;
	cout << "\nEnter 2nd string : ";
	cin >> s2;
	
	if(s1.length() != s2.length()){
		cout << "\nNO, Both string are not rotations to each other";
	}
	else {
		string temp = s1+s1;
		
		if(temp.find(s2) != string::npos){
			cout << "\nYES, Both string are rotations to each other";
		}else {
			cout << "\nNO, Both string are not rotations to each other";
		}
	}
	return 0;
}
