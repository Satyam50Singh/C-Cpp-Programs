// Program to print 

#include <iostream>
#include <math.h>
using namespace std;
float n;
void print(){
	cout << "Pattern is \n\n";
	for(int i=0; i<=n; i++){
		for(int j=0; j<n; j++){
			if(j>1 && i<n)	cout << "  "; else cout << "* ";
		}
		cout << "* * ";
		for(int j=0; j<n; j++){
			if(i>1 && i<n)	cout << "  "; else cout << "* ";
		}
		cout << endl;
	}
	for(int i=0; i<=n; i++){
		for(int k=0; k<=1; k++){
			cout << "* ";
		}
		if(i==n) cout << endl;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==n-2 || i==n-1)	cout << "* "; else cout << "  ";
		}
		cout << "* * ";
		for(int j=0; j<n; j++){
			if(j==n-1 || j==n-2)	cout << "* "; else cout << "  ";
		}
		cout << endl;
	}
	
}
int main() {
	cout << "Enter the Value of n (only even no.) : ";
	cin >> n;
	print();
	return 0;	
}
