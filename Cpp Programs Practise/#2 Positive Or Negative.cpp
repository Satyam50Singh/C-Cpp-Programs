//Program to check a no. is +ve or -ve.

#include <stdio.h>
int main() {
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);

	if(num == 0 ){
		printf("Number is zero.");
	}
	else if(num > 0) {
		printf("Number is +ve.");
	}
	else {
		printf("Number is -ve.");
	}
	return 0;
}
