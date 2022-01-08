#include <iostream>
using namespace std;

void sort(int arr[100], int n){
	if(n==1){
		return;
	}
	for(int i=0; i<n-1; i++){
		if(arr[i]>arr[i+1]){
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
	sort(arr, n-1);
}
int main() {
	// array
	int arr[]={12, 45, 6, 78, -3, 88};
	// value of n
	int n=6;
	
	// calling array for sort
	sort(arr, n);
	cout << endl;
	for(int i=0; i<6; i++){
		cout << arr[i] << "  ";
	}
	return 0;
} 
