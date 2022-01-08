// Pattern

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n :";
	cin >> n;
	cout << "\n";
	int p=0,p2=0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout << char(65+j);
		}
		for(int j=1; j<=i; j++){
			cout << char(65+p);
			p--;
		}
		p = i;
		for(int k=n-1; k>=i; k--){
			cout << "1";
		}
		for(int k=n-2; k>=i; k--){
			cout << "1";
		}
		for(int k=n-1; k>=i; k--){
			cout << "0";
		}
		for(int k=n-2; k>=i; k--){
			cout << "0";
		}
		for(int j=0; j<=i; j++){
			cout << char(65+j);
		}
		for(int j=1; j<=i; j++){
			cout << char(65+p2);
			p2--;
		}
		p2=i;
		cout << endl;
	}
	int ch2=65, ch3=65;
	p=0;
	for(int i=0; i<n; i++){
		int ch=65;
		for(int k=n-1; k>=i; k--){
			cout << char(ch++);
		}
		for(int k=n-2; k>=i; k--){
			cout << char(ch2+k);
		}
		ch2-=1;
		for(int j=0; j<=i; j++){
			cout << "0";
		}
		for(int j=1; j<=i; j++){
			cout << "0";
		}
		for(int j=0; j<=i; j++){
			cout << "1";
		}
		for(int j=1; j<=i; j++){
			cout << "1";
		}
		ch=65;
		for(int k=n-1; k>=i; k--){
			cout << char(ch++);
		}
		for(int k=n-2; k>=i; k--){
			cout << char(ch3+k);
		}
		ch3-=1;
//		for(int j=0; j<=i; j++){
//			cout << char(65+j);
//		}
//		for(int j=1; j<=i; j++){
//			cout << char(65+p);
//			p--;
//		}
//		p = i;
		cout <<endl;
	}
	return 0;
}
