// Accenture (Incomplete)
// Program to print pattern.

#include <iostream>
using namespace std;
class Pattern{
	private :
		int n;
	public :
		display() {
			n=4;
			for(int i=0; i<n; i++){
				for(int j=n-1; j>i; j--){
					cout << "      ";
				}
				for(int k=i; k>=0; k--){
					cout << "    " << k+1;
				}
				for(int p=0; p<2*i; p++){
					cout << " ";
				}
				for(int k=1; k<=i; k++){
					cout << k << "   ";
				}
				cout << endl;
			}
		}
};
int main(){
	Pattern P1;
	P1.display();
	
	return 0;
}
