// Program to print all factors of a number .
#include <iostream>
using namespace std;

class Factors{
	private :
		int num;
	public : 
	display(){
		cout << "Enter a number : ";
		cin >> num;
		cout << "\n 1 * ";
		for( int i=2; i<=num; i++){
			if(num % i == 0){
				cout << i << " * ";
				num/=i;
				i = 1;
			}
		}	
	}
};

int main() {
	Factors A;
	A.display();
	return 0;
}
