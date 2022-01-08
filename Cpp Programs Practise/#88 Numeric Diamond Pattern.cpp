// Numeric Diamond Pattern
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n";
	cin >> n;
	for(int i=0; i<n; i++){
		int p=1;
		for(int j=n-1; j>i; j--){
			cout << " ";
		}
		for(int k=0; k<=i; k++){
			cout << p++;
		}
		for(int j=i; j>=1; j--){
			cout << j;
		}
		cout << endl;
	}
	int q=n-1;
	for(int i=0; i<n; i++){
		int p=1;
		for(int k=0; k<=i; k++){
			cout << " ";
		}
		for(int j=n-1; j>i; j--){
			cout << p++;
		}
		for(int k=q-1; k>=1; k--){
			cout << k;
		}
		q--;
		cout << endl;
	}
	
}
