// Program to find the GCD using recursion.
#include <iostream>
using namespace std;

int gcd(int &num1,int &num2, int &i,int &g){
	if(num1 == i || num2 == i){
		return g;
	}else {
		if(num1%i == 0 && num2%i==0){
			g = i;
		}
		i++;
		gcd(num1, num2, i, g);
	}
}

int main() {
	int num1, num2;
	cout << "Enter 1st no. :";
	cin >> num1;
	cout << "\nEnter 2nd no. :";
	cin >> num2;
	int i=1,g=1;
	int res = gcd(num1, num2, i, g);
	cout << "\nGCD is :" << res;
}
