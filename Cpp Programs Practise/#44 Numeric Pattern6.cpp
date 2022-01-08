// Program to print pattern.

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
		int p=1;
		for(int i=0; i<r; i++){
			for(int j=r; j>i; j--){
				if(j==i+1 || j==r || i==0){
					cout << p++ << " ";
				}else {
					p++;
					cout << "  ";
				}
			}
			p=i+2;
			cout <<endl<<endl;
		}		
	}
};

int main() {
	Pattern A;
	A.getNumberOfRows();
	A.display();
	return 0;
}
