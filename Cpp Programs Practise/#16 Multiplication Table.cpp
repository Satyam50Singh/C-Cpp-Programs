// Program to print multiplication table of 3 consecutive number
#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a number : ";
	cin >> num;
	
	for(int i=num; i < num+3; i++){
		for(int j=1; j<=10; j++){
			cout << i << " * " << j << " = " << i*j << "	";
		}
		cout << endl << endl;
	}
	return 0;
}
