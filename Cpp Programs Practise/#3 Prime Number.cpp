//Program to check whether a number is prime or not

// What are prime no.s ? 
// Ans ->  A number greater than 1, has two factors, 1 and itself.

#include <stdio.h>
int main() {
	int num, temp=0, i, c=0;
	
	printf("Enter a no. : ");
	scanf("%d", &num);
	
	for(i=2; i<num/2; i++)
	{
		printf("------------\n");
		if(num%i==0){
			c++;
			break;
		}
	}
	
	if(c==0){
		printf("No. is Prime.");
	}else {
		printf("No. is non-prime.");
	}
	return 0;
}
