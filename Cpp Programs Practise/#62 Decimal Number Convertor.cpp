// Program to convert decimal no. into binary octal and hexadecimal. (menu-driven program)

#include <iostream>
#include <fstream>
using namespace std;

class Convertor {
	private :
		int rem, temp, arr[10],i;
		char arr2[10];
	public :		
		decimal_To_Binary(int num){
			i=0;
			cout << "\nDecimal Number is : " << num;
			cout << "\nBinary Number is : " ;
			while(num > 0){
				arr[i++] = num%2;
				num/=2;
			}	
			for(int k=i-1; k>=0; k--) {
				cout << arr[k];				
			}
		}
		
		decimal_To_Octal(int num){
			i=0;
			cout << "\nDecimal Number is : " << num;
			cout << "\nOctal Number is : " ;
			while(num > 0){
				arr[i++] = num%8;
				num/=8;
			}	
			for(int k=i-1; k>=0; k--) {
				cout << arr[k];				
			}
		}

		decimal_To_Hexadecimal(int num){
			i=0;
			int r;
			cout << "\nDecimal Number is : " << num;
			cout << "\nHexadecimal Number is : " ;
			while(num > 0){
				r = num%16;
				if(r < 10){
					r+=48;
				}else {
					r+=55;
				}
				arr2[i++]=r;
				num/=16;
			}	
			for(int k=i-1; k>=0; k--) {
				cout << arr2[k];				
			}
		}
};


int main() {
	int choice, num;

	
	Convertor obj;
	while(true) {
		cout << "\nDecimal Convertor \n";
		cout << "\n1. Decimal to Binary\n2. Decimal to Octal\n3. Decimal to HexaDecimal\n4. Exit\n\nEnter your choice : ";
		cin >> choice ;
		switch(choice){
			case 1:{
				cout << "\nEnter a number : ";
				cin >> num;
				obj.decimal_To_Binary(num);
				break;
			}
			case 2:{
				cout << "\nEnter a number : ";
				cin >> num;
				obj.decimal_To_Octal(num);
				break;
			}
			case 3:{
				cout << "\nEnter a number : ";
				cin >> num;
				obj.decimal_To_Hexadecimal(num);
				break;
			}
			case 4:{
				cout << "Thank you :)";
				exit(0);
				break;
			}
			default :{
				cout << "Enter wrong choice";
				break;
			}
		}
	}
	
	return 0;
}

