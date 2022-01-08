// Program to print pattern.
//1
//2 3 
//4 5 6
//7 8 9 10
#include <iostream>
using namespace std;

class Pattern{
	private :
		int r;
	public : 
	display(){
		int p=1;
		for(int i=0; i< 4; i++){
			for(int j=0; j<=i; j++){
				cout << p++ << " ";
			}
			cout << endl;
		}		
	}
};

int main() {
	Pattern A;
	A.display();
	return 0;
}
