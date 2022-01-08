// Number Problem
// Given a number, find the next smallest palindrome

//link - https://www.geeksforgeeks.org/given-a-number-find-next-smallest-palindrome-larger-than-this-number/

#include <iostream>
using namespace std;
int flag=0;
void palindrome(int num){
	if(flag == 1){
		return;
	}
	int temp = num;
	int rev=0;
	while(temp > 0){
		rev = (rev*10) + (temp%10);
		temp/=10;
	}
	if(num == rev){
		flag=1;
		cout << num;
	}else {
		palindrome(num+1);
	}
}

int main(){
	int n;
	cout << "Enter a number : ";
	cin >> n;
	cout << "\nNext Palindrome is : ";
	palindrome(n+1);
	return 0;
}

