// Program to print pattern.

#include <iostream>
using namespace std;

int main(){
	int r;
	cout << "Enter a number : ";
	cin >> r;
	for(int i=0; i<r; i++){
		for(int j=0; j<r; j++){
			if(i==j) cout << "0";
			else cout<<"1";
		}
		cout << endl;
	}
	return 0;
}
