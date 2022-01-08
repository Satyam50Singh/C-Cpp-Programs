// Program to calculate the area of 2D-shapes.

#include <stdio.h>
int main() {
	int side, len, brh, base, hei;

	printf("1. Square\n");	
	printf("Enter the length of side of square : ");
	scanf("%d", &side);
	
	printf("Area of square is : %d\n\n", side*side);
	
	printf("2. Rectangle\n");	
	printf("Enter the length and breadth of Rectangle : ");
	scanf("%d%d", &len, &brh);

	printf("Area of Rectangle is : %d\n\n", len*brh);

	printf("3. Triangle\n");	
	printf("Enter the base and height of Triangle : ");
	scanf("%d%d", &base, &hei);

	printf("Area of Triangle is : %f\n\n", 0.5 * base * hei);
	return 0;	
}
