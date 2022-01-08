// Program to remove all duplicates in an array.

#include <iostream>
using namespace std;
void fun(int a[], int size){
	cout << "\nAfter removing all duplicates from an array : ";
	for(int i=0; i<size; i++){
		int temp = a[i], freq=1;;
		for(int j=i+1; j<size; j++){
			if(temp == a[j]){
				freq++;
			}
		}
		if(freq == 1){
			cout << temp << "  ";
		}
	}
}

int main() {
	int a[] = {1, 2, 2, 3, 4, 5, 5, 6, 7, 7, 8 , 7};
	int size = (sizeof(a)/sizeof(a[0]));
	fun(a, size);
	
	cout << "\n--------------------\n";

	int a1[] = {1, 23, 42, 3, 42, 55, 54, 56, 17, 17, 8 , 7};
	int size1 = (sizeof(a1)/sizeof(a1[0]));
	fun(a1, size1);

	cout << "\n--------------------\n";

}
