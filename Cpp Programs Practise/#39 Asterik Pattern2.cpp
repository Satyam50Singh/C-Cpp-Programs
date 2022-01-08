// Program to print pattern.
//  *
// *#* 
//*#*#*

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
			for(int k=0; k<=2*i; k++){
				if(k%2==0){
					cout<< "*";
				}else {
					cout << "#";
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
