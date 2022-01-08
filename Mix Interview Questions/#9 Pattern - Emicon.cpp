//            5
//          3  3
//	      1  1  1
// 	   -1 -1 -1 -1
//   -5 -5 -5 -5 -5

#include <iostream>
using namespace std;
class Pattern {
	private :
		int size,p;
	public :
		Pattern(int row) {
			size = row;
		}
		void display() {
			p=5;
			for (int i=0; i<size; i++){
				for (int j=size-1; j>i; j--) {
					cout << "  ";
				}
				for(int k=0; k<=2*i; k+=2) {
					if (p>0)
					cout << p << "  ";
					else 
					cout << p << " ";
				}
				p-=2;
				cout << endl;
			}
		}
};
int main() {
	int r = 6;
	Pattern P1(r);
	P1.display();
	return 0;
}   
