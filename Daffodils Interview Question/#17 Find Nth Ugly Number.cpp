//Find nth ugly number
//link - https://www.geeksforgeeks.org/ugly-numbers/

// Ugly numbers are numbers whose only prime factors are 2, 3 or 5. 
// The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. 
// By convention, 1 is included. 
// Given a number n, the task is to find n’th Ugly number.

#include <iostream>
using namespace std;
int n;

int maxDivide(int no,int p){
	while(no%p == 0){
		no = no/p;
	}
	return no;
}
int isUgly(int n){
	n=maxDivide(n,2);
	n=maxDivide(n,3);
	n=maxDivide(n,5);
	return (n==1)?1:0;
}
int main() {
	cout << "Enter the value of n : ";
	cin >> n;
	cout << "\nUgly number at " << n << "th position is : ";
	int count=1, x=1;
	while(count != n){
		x++;
		if(isUgly(x)){
			count++;
		}
	}
	cout << x;
	return 0;
}
