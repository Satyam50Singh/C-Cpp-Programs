// Program to print 

#include <iostream>
using namespace std;
int n,p=1;
void print(){
	cout << "Pattern is \n\n";
	for(int i=0; i<n; i++){
		p=1;
		for(int k=0; k<n; k++){
			if(i>k) cout << "  ";
			else cout << p++ << " ";
		}
		for(int l=n-2; l>=i; l--){
			cout << l+1 << " ";
		}
		cout << endl;
	}
	int temp=1;
	for(int i=0; i<n; i++){
		p=1;
		for(int k=0; k<n; k++){
			if(i+k < n-1) cout << "  ";
			else cout << p++ << " ";
		}
		for(int j=temp-1; j>=1; j--){
			cout << j << " ";
		}
		temp++;
		cout << endl;
	}
}
int main() {
	cout << "Enter the Value of n : ";
	cin >> n;
	print();
	return 0;	
}
