// Program to convert digits of number to equivalent word.
#include <iostream>
using namespace std;

int main() {
	int sum,num,digit;
	cout << "Enter a number : ";
	cin >> num;
	while(num > 0){
		digit = num%10;
		sum = sum*10 + digit;
		num/=10;
	}
	while(sum > 0){
		digit = sum%10;
		
		switch(digit){
			case 1:{
				cout << digit << " --> One";
				cout << endl;
				break;
			}
			case 2:{
				cout << digit << " --> Two";
				cout << endl;
				break;
			}
			case 3:{
				cout << digit << " --> Three";
				cout << endl;
				break;
			}
			case 4:{
				cout << digit << " --> Four";
				cout << endl;
				break;
			}
			case 5:{
				cout << digit << " --> Five";
				cout << endl;
				break;
			}
			case 6:{
				cout << digit << " --> Six";
				cout << endl;
				break;
			}
			case 7:{
				cout << digit << " --> Seven";
				cout << endl;
				break;
			}
			case 8:{
				cout << digit << " --> Eight";
				cout << endl;
				break;
			}
			case 9:{
				cout << digit << " --> Nine";
				cout << endl;
				break;
			}
			case 0:{
				cout << digit << " --> Zero";
				cout << endl;
				break;
			}
		}
		sum/=10;
	}	
	return 0;
}
