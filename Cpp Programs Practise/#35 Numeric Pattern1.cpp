// Program to print pattern.
//1
//1 2 
//1 2 3
//1 2 3 4
//1 2 3 4 5
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
		for( int i=0; i<r; i++){
			for(int j=0; j <= i; j++){
				cout << j+1 << " ";
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
