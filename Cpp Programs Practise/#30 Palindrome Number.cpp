//Program to check a number is palindrome or not.

#include <iostream>
using namespace std;

class checkPalindrome{
	private : 
	int num, rev;
	public :
	getNumber() {
		cout << "Enter a number : ";
		cin >> num;
	} 
	
	display(){
		rev = 0;
		int temp = num;
		while(num > 0){
			rev = rev * 10 + num%10;
			num/=10;
		}		
		cout << "Reverse of " << temp << " is : " << rev << endl;
		if(rev == temp){
			cout << temp  << " is Palindrome ";  
		}else  {
			cout << temp  << " is NOT Palindrome ";
		}
	};
};


int main(){
	checkPalindrome A;
	A.getNumber();	
	A.display();
	return 0;
}
