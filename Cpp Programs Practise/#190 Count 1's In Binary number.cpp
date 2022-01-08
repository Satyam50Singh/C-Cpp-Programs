#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	
	int c = 0; 
	while(num > 0) {
//		cout << num%2;
		if(num%2 == 1) {
			c++;
		}
		num = num/2;
	}
	cout << "\nNumber of 1's : " << c ;
	return 0;
}
