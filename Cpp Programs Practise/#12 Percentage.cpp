// Program to calculate the percentage of student.

#include <stdio.h>
int main() {
	int i=0;
	int arr[10], totalSum=0;
	float percentage;
	
	printf("Enter the marks of 5 subjects : ");
	for(i; i<5; i++){
		scanf("%d", &arr[i]);
		totalSum+=arr[i];
	}
	percentage = ((totalSum*100)/500);
	printf("Percentage is : %f", percentage);
	return 0;
	
}
