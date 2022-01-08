// Program to find duplicates in an array.

#include <iostream>
using namespace std;

int main() {
	int a[] = {1, 2, 2, 3, 4, 5, 5, 6, 7, 7, 8 , 7};
	int size = (sizeof(a)/sizeof(a[0]));

	int duplicates[size];
	cout << "\nDuplicates in an array : ";
	int x=0;
	for(int i=0; i<size; i++){
		int temp = a[i], freq=1;;
		for(int j=i+1; j<size; j++){
			if(temp == a[j]){
				freq++;
			}
		}
		if(freq > 1){
			int check=1;
			for(int  k=0; k< i+1; k++){
				if(temp == duplicates[k]){
					check=0;
					break;
				}
			}
			if(check == 1){
				cout << temp << "  ";
				duplicates[x++] = temp;
			}
		}
	}	
	
}
