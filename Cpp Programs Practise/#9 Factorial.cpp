// Program to calculate the factorial of a number.

#include <stdio.h>
	int main() {
	int i=0, j=0, sum=1, num=0;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	for(i=num ; i>=2; i--){
		sum*=i;
	}
	printf("Factorial number : %d",sum);
	return 0;
}
