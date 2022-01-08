// Program to print Fibonacci series.
#include <iostream>
using namespace std;

class Fibonacci{
	private :
		int n, first, second, next;
	public : 
	display(){
		cout << "Enter the value of n : ";
		cin >> n;
		first = 0;
		second = 1;
		cout << first << " " << second << " ";
		for(int i=0; i<n-2; i++){
			next = first + second;
			first = second;
			second = next;
			cout << next << " ";
		}
	}
};

int main() {
	Fibonacci A;
	A.display();
	return 0;
}
