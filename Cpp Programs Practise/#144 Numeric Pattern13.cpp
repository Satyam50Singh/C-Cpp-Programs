// Program to print 

#include <iostream>
using namespace std;
int n;
void print(){
	cout << "Pattern is \n\n";
	int p=1;
	for(int i=0; i<n*2; i++){
		if(i < n){
			p=1;
			for(int j=0; j<=i; j++){
				cout << p++;
			}
		}else {
			p=1;
			for(int j=n*2-1; j>i; j--){
				cout << p++;
			}
		}
		cout << endl;
	}
}
int main() {
	cout << "Enter the Value of n : ";
	cin >> n;
	print();
	return 0;	
}
