// program to find larger number among two numbers.

#include <stdio.h>
int main() {
	int num1, num2;
	printf("Enter two numbers :");
	scanf("%d%d", &num1, &num2);
	
	if(num1 == num2){	
		printf("both Numbers are same");
	}else if(num1 >num2){
		printf("num1 %d is greater", num1);
	}else {
		printf("num2 %d is greater", num2);
	}
	return 0;
}
