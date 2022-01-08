//Program to add N matrices.

#include <iostream>
using namespace std;

class AddMatrix {
	private :
		int r, c;
		int mat[4][4], mat2[4][4], res[4][4];
	public :
		void getSize(){
			cout << "Enter the value of r and c : \n";
			cin >> r >> c;
		}
		void getMatrix() {
			cout << "Enter 1st Matrix : ";
			for(int i=0; i<r; i++){
				for(int j=0; j<c; j++){
					cin >> mat[i][j];
				}
			}
		}
		void getMatrix2() {
			cout << "Enter 2nd Matrix : ";
			for(int i=0; i<r; i++){
				for(int j=0; j<c; j++){
					cin >> mat2[i][j];
				}
			}
		}
		void showMatrix() {
			cout << "\nMatrix 1 : \n";
			for(int i=0; i<r; i++){
				for(int j=0; j<c; j++){
					cout << mat[i][j] << "  ";
				}
				cout << endl;
			}
			cout << "\nMatrix 2 : \n";
			for(int i=0; i<r; i++){
				for(int j=0; j<c; j++){
					cout << mat2[i][j] << "  ";
				}
				cout << endl;
			}
		}
		void addMatrix() {
			for(int i=0; i<r; i++){
				for(int j=0; j<c; j++){
					res[i][j] = mat[i][j]+mat2[i][j];
				}
			}
			cout << "\nResultant Matrix : \n";
			for(int i=0; i<r; i++){
				for(int j=0; j<c; j++){
					cout << res[i][j] << "  ";
				}
				cout << endl;
			}
		}
		void swapFirstAndResult() {
			for(int i=0; i<r; i++){
				for(int j=0; j<c; j++){
					mat[i][j] = res[i][j];
				}
			}
		}
};

int main() {
	AddMatrix A1;
	A1.getSize();
	A1.getMatrix();
	A1.getMatrix2();
	A1.showMatrix();
	A1.addMatrix();
	char ch;
	while(true){
		cout << "Do you want to add more matrix : ";
		cin >> ch;
		if(ch == 'Y' || ch=='y'){
			A1.getMatrix2();
			A1.swapFirstAndResult();
			A1.showMatrix();
			A1.addMatrix();
		}else {
			break;
		}
	}
	return 0;
}
