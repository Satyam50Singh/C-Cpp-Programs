// Program to calculate the power of number.
#include <iostream>
using namespace std;

int calculatePower(int base, int power){
	if(power!=0){
		return (base*calculatePower(base, (power-1)));
	}else{
		return 1;
	}
}

int main() {
	int base, power;
	
	cout << "Enter the base : ";
	cin	>> base;
	
	cout << "Enter the power number(+ve no.) : ";
	cin	>> power;
	
	int res = calculatePower(base, power);

	cout << "\nResult is :" << res;

	return 0;
}
