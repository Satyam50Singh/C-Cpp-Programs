// Program to check two matrix are equal or not.
#include <iostream>
#include <conio.h>
using namespace std;
#define MAX 3

class Check{
		int mat[MAX][MAX],mat2[MAX][MAX];
		int r1, r2, c1, c2;
	public : 
		Check(): r1(0) , r2(0) , c1(0) , c2(0) {
		}  
		void getMatrix() {
			cout << "Enter the value of r & c for 1st matrix : ";
			cin >> r1 >> c1;			
			cout << "Enter matrix : ";
			for(int i=0; i<r1; i++)
				for(int j=0; j<c1; j++)
					cin >> mat[i][j];
			cout << "\nEnter the value of r & c for 2nd matrix : ";
			cin >> r2 >> c2;
			cout << "Enter matrix : ";
			for(int i=0; i<r2; i++)
				for(int j=0; j<c2; j++)
					cin >> mat2[i][j];
		}
		void showMatrix() {
			cout << "Matrix 1: \n";
			for(int i=0; i<r1; i++){
				for(int j=0; j<c1; j++)
					cout << mat[i][j] << "  ";
				cout << endl;
			}
			cout << "Matrix 1: \n";
			for(int i=0; i<r2; i++){
				for(int j=0; j<c2; j++)
					cout << mat2[i][j] << "  ";
				cout << endl;
			}
		}
		bool checkEquality(){
			if(r1!=r2 || c1!=c2)
				return false;
			for(int i=0; i<r2; i++)
				for(int j=0; j<c2; j++)
					if(mat[i][j] != mat[i][j])
						return false;					
			return true;
		}
};

int main() {
	Check c1;
	c1.getMatrix();
	cout << "Press Enter to move .";
	getch();
	system("cls");
	c1.showMatrix();
	bool res = c1.checkEquality();
	if(res == true)
		cout << "\n\nBoth ARE EQUAL";
	else
		cout << "\n\nBoth ARE NOT EQUAL";
	
	return 0;
}
