// Reverse a word by swapping first and last element.

#include <iostream>
using namespace std;

string reverse(string s, int start, int end){
	if(start > end){
		return s;
	}

	char ch=s[start];
	s[start]=s[end];
	s[end]=ch;

	return reverse(s, start+1, end-1);	
}

int main() {
	string s="Satyam";
	cout << reverse(s, 0, s.length()-1);	
}

