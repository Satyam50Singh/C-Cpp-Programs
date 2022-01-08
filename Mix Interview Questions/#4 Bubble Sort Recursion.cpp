// Program to do bubble sort using recursion.

#include <iostream>
using namespace std;

void sorting(int arr[], int i, int size) {
	if(i == size) {
		return;
	}
	if(arr[i] > arr[i+1]){
		int t = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = t;
	}
	sorting(arr,i+1,size);
	
}
void bubbleSort(int arr[], int size){
	if(size == 0) {
		return;
	}
	sorting(arr,0, size);
	bubbleSort(arr,size-1);
	
}
void display(int arr[], int size){
	for (int i=0; i<size; i++ ){
		cout << arr[i] << " ";
	}
}
int main(){
	int arr[] = {112, -334, 29, 45, -34};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	bubbleSort(arr, size-1);
	display(arr, size);
	return 0;
}
