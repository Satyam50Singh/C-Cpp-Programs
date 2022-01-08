// Program to print pattern.
//     *
//    * *
//   * * *
//  *  *  *
// *   *   *
//*    *    *

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
			cout << "*";
			for(int k=1;k<i;k++){
				cout << " ";
			}
			if(i>0){
			cout<<"*";
			}
			for(int k=1;k<i;k++){
				cout << " ";
			}
			if(i>0){
			cout<<"*";
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
