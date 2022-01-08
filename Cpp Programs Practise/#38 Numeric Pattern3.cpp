// Program to print pattern.
//       1
//      121
//     12321
//    1234321

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
			for(int j=r-1; j>i; j--){
				cout << " ";
			}
			for(int k=0; k<=i; k++){
				cout << k+1;
			}
			for(int l=i; l>0; l--){
				cout << l;
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
