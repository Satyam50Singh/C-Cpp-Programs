//program to print all punctuations . . . 

#include <iostream>
using namespace std;

int main() {
	cout << "All punctuation are :\n";
	for(int i=33; i<127; i++){
		if(ispunct(i)){
			cout << i  << " -> " << char(i) << endl; 
		}
	}
	return 0;
}

