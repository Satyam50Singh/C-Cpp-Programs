#include <stdio.h>
int main() {
	
	int year = 0;
	
	printf("Enter a year : ");
	scanf("%d", &year);
	
	if(year % 400 == 0){
			printf("Given Year is leap year");
	}else if(year % 100 == 0){
			printf("Given Year is not an leap year");
	}else if(year % 4 == 0){
		printf("Given Year is leap year");
	}		
	else {
		printf("Given Year is not an leap year");
	}
	return 0;
}
