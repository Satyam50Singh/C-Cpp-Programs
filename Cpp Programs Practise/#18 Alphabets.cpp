// Print Alphabets in upper and lower case.
#include <iostream>
using namespace std;

int main() {
	cout << "Upper Case :- \n\n";
	for(int i=65; i<=90; i++)
	cout << (char)i << " ";
	cout <<endl;
	
	cout << "\nLower Case :- \n\n";
	for(int i=97; i<=122; i++)
	cout << (char)i << " ";
	cout <<endl;
	
	return 0;
}
