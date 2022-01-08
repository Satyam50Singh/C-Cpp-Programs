// Program to print pattern.
//*
//*#
//*#@
//*#@*
//*#@*#
//*#@*#@

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
			for(int j=0; j<=i; j++){
				if(j==0 || j%3==0){
					cout << "*";
				}else if(j%2 == 0){					
					cout <<"@";
				}else {
					cout << "#";
				}
			}
			cout <<endl;
		}		
	}
};

int main() {
	Pattern A;
	A.getNumberOfRows();
	A.display();
	return 0;
}
