#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int t = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
}
void show(int arr[], int n) {
	for (int i=0; i<n; i++){
		cout << arr[i] << "  ";
	}
	cout << endl;
}
int main() {
	int arr[] =	{31,2,-3,24,5};
	int n = sizeof(arr)/sizeof(arr[0]);

	bubbleSort(arr, n);

	show(arr,n);	
	return 0;
}
