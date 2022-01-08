// program to sort an array in this way.

// array -> 81 22 63 9 12 18 7 5
// sorted array -> 81 63 9 7 5 12 18 22

#include <iostream>
using namespace std;

int main() {
	int arr[] = {81, 22, 63, 9, 12, 18, 7, 5};
	int size = (sizeof(arr)/sizeof(arr[0]));
	int res[size];
	//sort an array
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(arr[i] < arr[j]){
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	int k=0, m=size-1;
	cout << "Array \n\n";
	for(int i=0; i<size; i++){
		if(arr[i] % 2 != 0){
			res[k++] = arr[i];
		}else {
			res[m--] = arr[i];
		}
		cout << arr[i] << "  ";
	}
	
	cout << "\n\nRequired Output \n";
	for(int i=0; i<size; i++){
		cout << res[i] << "  ";
	}
}
