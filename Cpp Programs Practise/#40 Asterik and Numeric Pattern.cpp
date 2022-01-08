// Program to print pattern.
//     *
//    1 2
//   * * *
//  1 2 3 4
// * * * * *


#include <iostream>
using namespace std;

class Pattern{
	private :
		int r;
	public : 
	getNumberOfRows(){
		cout << "Enter number of rows : ";
		cin >> r;
	}
	display(){
		for(int i=0; i<r; i++){
			for(int k=r-1; k>i; k--){
				cout << " ";
			}
			if(i%2 == 0){
				for(int l=0; l<=i; l++){
					cout << "* ";
				}
			}
			else {
				for(int l=0; l<=i; l++){
					cout << l+1 << " ";
				}
			}
			cout << endl;
		}
	}
};

int main() {
	Pattern A;
	A.getNumberOfRows();
	A.display();
	return 0;
}
