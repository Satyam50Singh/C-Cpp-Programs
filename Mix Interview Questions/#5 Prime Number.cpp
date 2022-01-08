// Program to print prime number.

#include <iostream>
using namespace std;

int p=0;
void checkPrime(int num, int i) {
	if (i==num+1) {
		return;
	}
	if(num%i == 0){
		p++;
	}
	checkPrime(num, i+1);
	
}
int main() {
	const int num = 7;
	checkPrime(num,1);
	if(p==2){
		cout << "Number is Prime.";
	}
	else {
		cout << "Number is not prime";
	}
	return 0;
}
