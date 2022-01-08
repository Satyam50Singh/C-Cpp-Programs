// calculator

#include <stdio.h>
int main() {
	int choice=0, num1, num2;

	printf("Calculator \n\n");
	printf("Enter two numbers : ");
	scanf("%d%d",&num1, &num2);
	
	printf("1. Add\n2. Subtract\n3. Multiplication\n4. Division\nEnter your choice : ");
	scanf("%d", &choice);
	
	switch(choice) {
		case 1: {
			printf("Sum is :- %d", num1 + num2);
			break;
		}
		case 2: {
			printf("Sum is :- %d", num1 - num2);
			break;
		}
		case 3: {
			printf("Sum is :- %d", num1 * num2);
			break;
		}
		case 4: {
			printf("Sum is :- %d", num1 / num2);
			break;
		}
		default :{
			printf("Wrong Choice !!");
			break;
		}
	}
	return 0;
}
