// Digit Operations
#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a number : ";
	cin >> num;
	
	int temp, rem=0, even=0, odd=0, c=0, sum=0, rev=0, seven=0, sodd=0, isPrime=0, prime=0;
	while(num > 0){
		c++;
		rem = num%10;
		if(rem%2 == 0) {
			even++;
			seven += rem;
		}
		else {
			sodd+=rem;
			odd++;
		}
		for(int i=2; i<rem/2; i++){
			if(rem%i == 0){				
				isPrime = 1;
			}
		}
		if(isPrime == 0){
			prime++;
		}
		isPrime=0;
		sum+=rem;
		rev = rev*10 + rem;
		num/=10;
	}
	
	cout << "\nTotal nmber of Digit = " <<  c;
	cout << "\nTotal number of Prime Digit = " << prime;
	cout << "\nEven number of Digit = " <<  even;
	cout << "\nOdd number of Digit = " <<  odd;
	cout << "\nSum of Even Digit = " <<  seven;
	cout << "\nSum of Odd Digit = " <<  sodd;
	cout << "\nReverse of Number = " <<  rev;
	cout << "\nSum of all Digits = " <<  sum;
	return 0;
}
