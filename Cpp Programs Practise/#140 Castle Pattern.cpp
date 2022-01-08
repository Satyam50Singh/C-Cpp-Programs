// Program to print 

#include <iostream>
using namespace std;
int n;
void print(){
	cout << "Castle Pattern is \n\n";
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if((i+j) <= (n-2)) {
				cout << " ";
			}else{
				cout << "1";
			}
		}
		for(int j=1; j<n; j++){
			if(j>i) {
				cout << " ";
			}else{
				cout << "1";
			}
		}
		for(int j=0; j<n/2; j++){
			if((i+j) <= (n-2)) {
				cout << " ";
			}else{
				cout << "1";
			}
		}
		
		for(int j=n/2+1; j<n; j++){
			if(j>i) {
				cout << " ";
			}else{
				cout << "1";
			}
		}
		cout << endl;
	}
	for(int i=0; i<n/2; i++){
		for(int j=0; j<(n*3- n/2); j++){
			if(j<=n/2-1 || (j>=n+2 && j<=n+n-1)){
				cout << " ";
			}else{
				cout << "1";
			}
		}
		cout << endl;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<(n*3-1); j++){
				cout << "1";
		}
		cout << endl;
	}
}
int main() {
	n=6;
	print();
	return 0;	
}
