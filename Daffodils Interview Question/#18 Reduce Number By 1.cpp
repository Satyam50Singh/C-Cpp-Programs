// Reduce a number to 1 by performing given operations
// link - https://www.geeksforgeeks.org/reduce-a-number-to-1-by-performing-given-operations/

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number : ";
	cin >> n;
	int c=0;
	while(n!=1){
		cout << n << endl;
		c++;
		if(n%2 == 0){
			n/=2;
		}else {
			n-=1;
		}
	}
	cout << "The no. of iterations : " << c << endl;
	return 0;
}
