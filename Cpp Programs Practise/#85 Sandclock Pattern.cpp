// Program to print sandclock pattern.

#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter the no. of rows : ";
	cin >> n;
	
	for(int i=0; i<n; i++){
		for(int j=1; j<=i; j++){
			cout << "  ";
		}
		for(int k=n-1; k>=i; k--){
			cout <<"* ";
		}
		for(int k=n-2; k>=i; k--){
			cout <<"* ";
		}
		cout << endl;
	}
	for(int i=0; i<n; i++){
		for(int k=n-2; k>=i; k--){
			cout <<"  ";
		}
		for(int j=0; j<=i; j++){
			cout << "* ";
		}
		for(int j=1; j<=i; j++){
			cout << "* ";
		}
		cout << endl;
	}
	
	return 0;
}
