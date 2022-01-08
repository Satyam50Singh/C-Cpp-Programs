// Pattern - Pascal Triangle

//1 
//121
//1331
//14641
//151051

//link - https://www.tutorialspoint.com/learn_c_by_examples/pascals_triangle_program_in_c.htm

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter number : ";
	cin >> n;
	for(int i=0; i<n; i++){
		int p=1;
		for(int k=0; k<=i; k++){
			cout << p << " ";
			p=(p*(i-k))/(k+1);
		}
		cout << endl;
	}
	return 0;
}
