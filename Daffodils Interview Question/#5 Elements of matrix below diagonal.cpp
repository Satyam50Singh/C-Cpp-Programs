// print all the elements of matrix which are below the digonal.

#include <iostream>
using namespace std;
int main() {
	int mat[10][10],r,c;
	cout << "Enter r & c :";
	cin >> r >> c;
	if(r == c){
		cout << "Enter an atrix : ";
		for(int i=0; i<r; i++){
			for(int j=0; j<r; j++){
				cin >> mat[i][j];
			}
		}
		cout << "\nMatrix is : ";
		for(int i=0; i<r; i++){
			for(int j=0; j<r; j++){
				cout << mat[i][j] << "  ";
			}
			cout << endl;
		}
		cout << "\n\nRequired Matrix is : ";
		
		for(int i=0; i<r; i++){
			for(int j=0; j<r; j++){
				if(i>j){
					cout << mat[i][j] << "  ";
				}
			}
			cout << endl;
		}
	}else {
		cout << "Diagonal not formed";
	}
	return 0;
}

