//Program to sort square matrix
// (i) In ascending order - row wise sorting Left to Right
// (ii) In ascending order - column wise sorting Top to Bottom

#include <iostream>
using namespace std;

int r, c;
void showMatrix(int mat[4][4]){
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++)
			cout << "(" << i << "," << j << ")" << mat[i][j] << "  ";
		cout << endl;
	}
}

int main() {
	int mat[4][4], temp[4][4];
	cout << "Enter the value of r & c : ";
	cin >> r >> c;
	
	cout << "Enter Matrix \n";
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			cin >> mat[i][j];
	
	cout << "Matrix is : \n";
	showMatrix(mat);

	//Row wise sorting
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			for(int k=j+1; k<c; k++){
				if(mat[i][j] > mat[i][k]){
					int temp = mat[i][j];
					mat[i][j] = mat[i][k];
					mat[i][k] = temp;
				}
			}
		}
	}
//	cout << "\n\nMatrix is : \n";
//	showMatrix(mat);

	//column wise
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			for(int k=i+1; k<c; k++){
				if(mat[i][j] > mat[k][j]){
					int temp = mat[i][j];
					mat[i][j] = mat[k][j];
					mat[k][j] = temp;
				}
			}
		}
	}

	cout << "\n\nRequired sort Matrix is : \n";
	showMatrix(mat);

	return 0;
}

