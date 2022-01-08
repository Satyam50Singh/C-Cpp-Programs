// Program a check a no. is even or odd using goto
#include <iostream>

void checkEvenOdd(int n){
	if(n%2==0){
		goto even;
	}else {
		goto odd;
	}
	even:
		std::cout << n << " is even\n";
		return;
	odd:
		std::cout << n << " is odd\n";
}

void printTenNumbers(){
	int a=1;
	loop:
	if(a>10){
		return;
	}
	checkEvenOdd(a);
	a++;
	goto loop;
}
int main(){
	int n=34;
	printTenNumbers();
	
}
