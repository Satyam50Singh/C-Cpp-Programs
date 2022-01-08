// Program to find largest between three using ternary operator.

#include <stdio.h>
int main() {
	
	printf("Program to find largest between three or 4 using ternary operator\n\n");
	
	int a = 12, b = 498, c = 81;
	printf("a = %d\nb = %d\nc = %d\n\n", a, b, c);
	printf(a>b && a>c ? "A is greater" : b>c && b>a ? "B is greater" : "C is greater"); 

	int a2 = 12, b2 = 49, c2 = 81, d = 76;
	printf("\n\na = %d\nb = %d\nc = %d\nd = %d\n", a2, b2, c2, d);
	printf(a2>b2 && a2>c2 && a2>d ? "A is greater" : b2>c2 && b2>a2 && b2>d ? "B is greater" : d>c2 && d>a2 && d>b2 ?  "D is greater" : "C is greater"); 
	return 0;
}
