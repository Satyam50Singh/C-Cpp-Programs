// Design Traperzium (2022)

//1 2 3 4 17 18 19 20
//  5 6 7 14 15 16
//    8 9 12 13
//     10 11

// indexing
//	00 01 02 03 
//	10 11 12 13
//	20 21 22 23
//	30 31 32 33
     
#include <iostream>
using namespace std;

int main() {
	int r=4, x=1, y=1, p=16;
	for(int i=0; i<r; i++){
		for(int j=0; j<r; j++){
			if(i>j)
				cout << " " << "  ";
			else{
				if(x>9)
				cout << x++ << " ";
				else
				cout << x++ << "  ";
			}
		}
		for(int j=0; j<r; j++){
			if(i+j >= 4)
				if(j==r-1)
					cout << "  ";
				else
					cout << "  " << "  ";
			else{
				cout << y+++p << "  ";
			}
		}
		p-=5;
		cout << endl;
	}
	return 0;
}
