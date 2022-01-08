// Program to get a matrix from user and display it.
#include <iostream>
using namespace std;

class Matix {
	private :
		int r, c, i, j, arr[3][3];
	public :
		getMatrix(){
			cout << "Enter the no. of rows and columns : ";
			cin >> r >> c;
			
			cout << "\nEnter a matrix : ";
			for(int i=0; i <r; i++){
				for(int j=0; j<c; j++){
					cin>>arr[i][j];
				}
			} 
		}
		showMatrix() {
			cout << "\nMatrix : \n";
			for(int i=0; i <r; i++){
				for(int j=0; j<c; j++){
					cout << arr[i][j] << "	";
				}
				cout << endl;
			} 
		}
		multiplyByNumber(){
			int n;
			cout << "\n\nEnter a number : ";
			cin >> n;
			cout << "\nMatrix After Multiplication : \n";
			for(int i=0; i <r; i++){
				for(int j=0; j<c; j++){
					cout << arr[i][j] * n << "	";
				}
				cout << endl;
			} 
		}
};

int main() {
	Matix M1;
	M1.getMatrix();
	M1.showMatrix();
	M1.multiplyByNumber();	
	return 0;	
}
