// Program to calculate the square, cube and square root of a number.

#include <stdio.h>
#include <math.h>
int main() {
	
	int num = 0;
	printf("Enter an number : ");
	scanf("%d", &num);


	
	printf("\nSquare of %d is %d", num, num*num);
	printf("\n\nCube of %d is %d", num, num*num*num);
	printf("\n\nSquare root of %d is %f", num, pow(num, 0.5));
	return 0;	
}
