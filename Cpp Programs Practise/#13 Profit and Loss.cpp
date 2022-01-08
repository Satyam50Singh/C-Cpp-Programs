// Program to calculate profit and loss.

#include <stdio.h>
int main() {
	int cp=0, sp=0;
	printf("Enter the cost price : ");
	scanf("%d", &cp);
	printf("\nEnter the sell price : ");
	scanf("%d", &sp);
	
	if(cp > sp) {
		printf("\nLoss :- %d", cp-sp);
	}else {
		printf("\nProfit :- %d", sp-cp);
	}
	return 0;
}
