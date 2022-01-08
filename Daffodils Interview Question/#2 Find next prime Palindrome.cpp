// Number Problem
// C program to find next prime palindrome

// link - https://www.programmingsimplified.com/c/source-code/c-program-find-next-prime-palindrome

#include <iostream>
using namespace std;
void palindrome(int num);
int flag=0;
void prime(int n){
	int p=0;
	for(int i=1; i<=n; i++){
		if(n%i==0){	p++;	}
	}
	if(p==2){
		cout << n;
	}else {
		palindrome(n+1);
	}
}
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
		prime(num);
	}else {
		palindrome(num+1);
	}
}

int main(){
	int n;
	cout << "Enter a number : ";
	cin >> n;
	cout << "\nNext Prime Palindrome is : ";
	palindrome(n+1);
	return 0;
}
