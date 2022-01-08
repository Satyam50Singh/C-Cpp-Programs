#include <iostream>
using namespace std;

void printPascal(int n){
	for(int i=0; i<n; i++){
		int p=1;
		for(int k=0; k<=i; k++){
			cout << p;
			p=(p*(i-k))/(k+1);
		}
		cout <<endl;
	}
}
int main() {
	int n;
	cout << "Enter no. of rows : ";
	cin >> n;
	printPascal(n);
	return 0;
}
