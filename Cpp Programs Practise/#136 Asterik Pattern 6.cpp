// Program to print a asterik pattern using loop.

//        *
//       **
//      ***
//     ****
//    *****
//     ****
//      ***
//       **
//        *

#include <iostream>
using namespace std;
void pattern(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i+j >= n-1)
				cout << "*";
			else 
				cout << " ";
		}
		cout << endl;
	}
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n; j++){
			if(i >= j)
				cout << " ";
			else 
				cout << "*";
		}
		cout << endl;
	}

}

int main() {
	int n;
	cout << "Enter the value of n : ";
	cin >> n;
	pattern(n);
}
