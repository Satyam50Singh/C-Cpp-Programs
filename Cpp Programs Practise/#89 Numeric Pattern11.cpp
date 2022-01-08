// Numeric Diamond Pattern Using Less loops

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n";
	cin >> n;
	for(int i=0; i<n; i++){
		int p=1;
		for(int j=n-1; j>=i; j--){
			cout << " ";
		}
		for(int k=0; k<=2*i; k++){
			cout << p++;
		}
		cout << endl;
	}
	int q=n-1;
	int x=3;
	for(int i=0; i<n; i++){
		int p=1;
		for(int k=-1; k<=i; k++){
			cout << " ";
		}
		for(int j=(2*n)-x; j>i; j--){
			cout << p++;
		}
		cout << endl;
		x++;
	}
	
}
