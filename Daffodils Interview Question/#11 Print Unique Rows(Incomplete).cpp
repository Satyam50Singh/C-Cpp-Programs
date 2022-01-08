// Program to print all unique rows.
//ex - 
//MAT[ROWS][COLS] = 
//[{1,2,3,4}
//{4,8,13,24}
//{1,2,3,4}]

//OUTPUT -> 
//[{1,2,3,4}
//{4,8,13,24}]
#include <iostream>
using namespace std;

int main() {
	int mat[10][10],r ,c;
	cout << "Enter r & c :";
	cin >> r >> c;
	
	cout << "\nEnter mat : \n";
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin >> mat[i][j];
		}
	}
	cout << "\nMat : \n";
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	
//	00 01 02 03
//	10 11 12 13
//	20 21 22 23
	
	cout << "\nReq. Mat : \n";
	int p=1, x = 0;
	for(int i=0; i<r; i++){
		p=1;
		for(int j=0; j<c; j++){
			cout << mat[i][j] << "   " << mat[i+1][j] << endl;
			if(i+1==r){
				int l=i-r;
				if(mat[i][j] == mat[l][j]){
					p=0;
				}else {
					p=1;
				}
			}else {
				if(mat[i][j] == mat[i+1][j]){
					p=0;
				}else {
					p=1;
				}
			}
		}
		if(p==1){
			for(int j=0; j<c; j++){
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
	}
	
	return 0;
}
