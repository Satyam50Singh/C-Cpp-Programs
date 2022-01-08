// Program to print pattern.
//123456
//212345
//321234
//432123
//543212
//654321

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
		int p=1,q;
		for(int i=0; i<r; i++){
			q=i+1;
			for(int j=0; j<i; j++){
				cout << q--;
			}
			for(int k=r; k>i; k--){
				cout << p++;
			}
			cout <<endl;
			p=1;
		}		
	}
};

int main() {
	Pattern A;
	A.getNumberOfRows();
	A.display();
	return 0;
}
