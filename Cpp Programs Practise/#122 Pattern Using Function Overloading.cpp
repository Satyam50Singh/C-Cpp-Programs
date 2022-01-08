// Print any pattern using function overloading.
#include <iostream>
using namespace std;
class Pattern {
	private :
	int i;
	public :
		display(int n){
			for(i=0; i<n; i++){
				for(int j=n; j>i; j--){
					cout << " ";
				}
				display();
				cout << endl;
			}
		}
		display() {
			for(int k=0; k<=2*i; k++){
				cout << "*";
			}
		}
}; 

int main() {
	Pattern P1;
	int n;
	cout << "Enter the value of n : ";
	cin >> n;
	P1.display(n);
}
