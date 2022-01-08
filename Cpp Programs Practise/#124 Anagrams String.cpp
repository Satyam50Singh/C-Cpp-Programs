// Check two string are anagram or not.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string sort(string s1) {
	for(int i=0; i<s1.length(); i++){
		for(int j=0; j<s1.length(); j++){
			if(s1[i] < s1[j]){
				char t = s1[i];
				s1[i] = s1[j];
				s1[j] = t;
			}
		}
	}
	return s1;
}

bool areAnagrams(string s1, string s2){
	if(s1.length() != s2.length()){
		return false;
	}
		
	//  library
//	sort(s1.begin(), s1.end());
//	sort(s2.begin(), s2.end());

	//	Using functions
	s1 = sort(s1);
	s2 = sort(s2);

	cout << "Sorted : \n" << s1 << endl << s2 << endl;
	
	for(int i=0; i<s1.length(); i++){
		if(s1[i]!=s2[i]){
			return false;
		}
	}
	return true;
}

int main() {
	string s1,s2;
	cout << "Enter two strings:";
	cin >> s1 >> s2;
	if(areAnagrams(s1,s2)){
		cout << "\nBoth Strings are anagrams .";
	}else {
		cout << "\nBoth strings are not anagrams.";
	}
	return 0;
}
