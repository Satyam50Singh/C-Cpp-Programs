// Program to print pattern.
//123456
//612345
//561234
//456123
//345612
//234561
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
		int p=0,q=r+2;
		for(int i=0; i<r; i++){
			q=q-1;
			for(int k=1; k<=i; k++){
				cout << q++;
			}
			for(int j=r; j>i; j--){
				cout << ++p;
			}
			cout << endl;			
			p=0;
			q=q-i;
		}		
	}
};

int main() {
	Pattern A;
	A.getNumberOfRows();
	A.display();
	return 0;
}
