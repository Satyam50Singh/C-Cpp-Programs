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
		matrix(){
			int sumr=0, sumc, sumd1=0, sumd2=0;
			for(int i=0; i <r; i++){
				sumr=0, sumc=0;
				for(int j=0; j<c; j++){
					sumr+=arr[i][j];
					sumc+=arr[j][i];
					if(i==j && r==c){
						sumd1+=arr[i][j];
					}
				}
				if(r==c)
				sumd2+=arr[i][r-i-1];
				cout << endl << "Sum of row " << i+1 << " : " << sumr << endl;
				cout << endl << "Sum of column " << i+1 << " : " << sumc<< endl;
			} 
			if(r==c){
				cout << endl << "Sum of diagonal 1 " << " : " << sumd1<< endl;
				cout << endl << "Sum of diagonal 2 " << " : " << sumd2<< endl;
			}else{
				cout << "\nDiagonal Addition is not possible!(r!=c)\n";
			}
		}
};

int main() {
	Matix M1;
	M1.getMatrix();
	M1.showMatrix();
	M1.matrix();	
	return 0;	
}
