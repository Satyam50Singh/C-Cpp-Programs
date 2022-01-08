// Program to get a matrix from user and display it.
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

class Matix {
	private :
		int r, c, arr1[5][5], arr2[5][5], opr[5][5];
	public :
		getMatrices(){
			cout << "Enter the no. of rows and columns : ";
			cin >> r >> c;
			
			cout << "\nEnter matrix1 : ";
			for(int i=0; i <r; i++){
				for(int j=0; j<c; j++){
					cin>>arr1[i][j];
				}
			} 

			cout << "\nEnter matrix2 : ";
			for(int i=0; i <r; i++){
				for(int j=0; j<c; j++){
					cin>>arr2[i][j];
				}
			} 
		}
		showMatrices() {
			cout << "\nMatrix1 : \n";
			for(int i=0; i <r; i++){
				for(int j=0; j<c; j++){
					cout << arr1[i][j] << " ";
				}
				cout << endl;
			} 
			cout << "\nMatrix2 : \n";
			for(int i=0; i <r; i++){
				for(int j=0; j<c; j++){
					cout << arr2[i][j] << " ";
				}
				cout << endl;
			} 
		}
		addMatrices(){
			cout << "\nAddition of two Matrices is : \n";
			for(int i=0; i <r; i++){
				for(int j=0; j<c; j++){
					cout << arr1[i][j] + arr2[i][j] << " ";
				}
				cout << endl;
			} 
		}
		subMatrices(){
			cout << "\nSubtraction of two Matrices is : \n";
			for(int i=0; i <r; i++){
				for(int j=0; j<c; j++){
					cout << arr1[i][j] - arr2[i][j] << " ";
				}
				cout << endl;
			} 
		}
		mulMatrices(){
			int sum=0;
			cout << "\nMultiplication of two Matrices is : \n";
			for(int i=0; i<r; i++){ // r1
				for(int j=0; j<c; j++){ // c2
					for(int k=0; k<r; k++){ // r2
						sum = sum + arr1[i][k] * arr2[k][j];
					}
					cout << sum << " ";
					sum=0;
				}
				cout << endl;
			}			
		}
		divMatrices(){
			cout << "\nDivision of two Matrices is : \n";
			for(int i=0; i <r; i++){
				for(int j=0; j<c; j++){
					cout << arr1[i][j] / arr2[i][j] << " ";
				}
				cout << endl;
			} 
		}
};

int main() {
	Matix M1;
	M1.getMatrices();
	cout << "Press enter two see results\n";
	getch();
//	clrscr();
	M1.showMatrices();
	M1.addMatrices();
	M1.subMatrices();
	M1.mulMatrices();
	M1.divMatrices();
	
	return 0;	
}
