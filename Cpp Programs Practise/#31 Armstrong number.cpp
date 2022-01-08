// Program to check a number is armstrong or not.
#include <iostream>
using namespace std;

class Armstrong{
	private : 
	int num, temp, sum, digit;
	public :
		checkArmstrong() {
			cout << "Enter a number : ";
			cin >> num;
			sum = 0;
			digit = 0;
			temp = num;
			while(num > 0){
				digit = num % 10;
				sum = sum + digit * digit * digit;
				num/=10;
			}	
			if(sum == temp){
				cout << "Number is Armstrong.";
			}else 
				cout << "Number is NOT an Armstrong.";

		}
};

int main() {
	Armstrong obj; 
	obj.checkArmstrong();
	return 0;
}
