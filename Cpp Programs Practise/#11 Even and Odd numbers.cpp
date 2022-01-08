// Program to print even and odd number from 1-100
#include <stdio.h>
void print(int);

int main() {
	printf("Even numbers : \n\n");
	print(2);
	printf("\n\nOdd numbers : \n\n");
	print(3);
	return 0;
}

void print(int tmp){
	int i;
	for(i=1; i<=100; i++){
		if(tmp == 2){
			if(i%tmp == 0 ){
				printf("%d  ", i);
			}
		}else {
			if(i%2 != 0 ){
				printf("%d  ", i);
			}
		}
	}	
}
