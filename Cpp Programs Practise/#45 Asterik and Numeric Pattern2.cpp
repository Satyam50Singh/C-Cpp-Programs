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
		int arr[] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		for(int i=0; i<r; i++){
			for(int j=r-1; j>i; j--){
				cout << " ";
			}
			for(int l=2*i; l>=0; l--){
				if(l%2 == 0){
					cout << p++;
				}else {
					cout << "*";
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
