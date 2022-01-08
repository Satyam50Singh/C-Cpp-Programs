#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the no. of rows : ";
	cin >> n;
	int p=1;
	for(int i=0; i<n; i++){
		for(int j=n-1; j>=i; j--){
			cout << "  ";
		}
		for(int k=0; k<=i; k++){
			if(p<10){
				cout << " " << p++ << "  ";
			}else {
			cout << " " << p++ << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}
