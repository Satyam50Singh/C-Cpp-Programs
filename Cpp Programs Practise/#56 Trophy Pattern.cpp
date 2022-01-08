#include <iostream>
using namespace std;

void display(int r) {
	for(int i=0; i<r-2; i++){
		for(int l=1; l<=i; l++){
			cout << "  ";
		}
		for(int j=r-2; j>i; j--){
			cout << "* ";
		}
		for(int j=r-3; j>i; j--){
			cout << "* ";
		}
		for(int l=1; l<=i; l++){
			cout << "  ";
		}
		for(int j=0; j<r; j++){
			if(j==0 || j==r-1){
				cout << "@ ";
			}else {
				cout << "  ";
			}
		}
		for(int l=1; l<=i; l++){
			cout << "  ";
		}
		for(int j=r-2; j>i; j--){
			cout << "* ";
		}
		for(int j=r-3; j>i; j--){
			cout << "* ";
		}
		cout << endl;		
	}	
	
	for(int i=0; i<r-3; i++){
		for(int j=0; j<2*r; j++){
			if(j== 2*r-1 || j==r){
				cout << "@ ";
			}else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	for(int i=0; i<=r; i++){
		for(int j=0; j<r; j++){
			cout << "  ";
		}
		if(i<3){
			for(int k=1; k<=2*i; k+=2){
				cout << "  ";
			}
			for(int k=r-2; k>i; k--){
				cout <<"@ ";
			}
			for(int k=r-3; k>i; k--){
				cout <<"@ ";
			}
		}else{
			for(int k=r; k>i; k--){
				cout <<"  ";
			}			
			for(int k=0; k<i-2; k++){
				cout <<"@ ";
			}
			for(int k=0; k<i-3; k++){
				cout <<"@ ";
			}
		}
		cout << endl;
	}
}

int main() {
	int r;
//	cout << "Enter the number of rows : (Odd Number >= 3) ";
//	cin >> r;
	display(5);
	
	return 0;
}
