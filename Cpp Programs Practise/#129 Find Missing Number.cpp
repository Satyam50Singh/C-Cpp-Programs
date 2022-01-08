// Program to find a missing no. of an array.

#include <iostream>
using namespace std;
int arr[100];

void check(int a[], int n) {
	int total = (n*(n+1))/2;
	int sum = 0;
	cout <<"\nArray : ";
	for(int i=0; i<=n-2; i++){
		cout << a[i] << "  ";
		sum+=a[i];
	}
	cout << "\nMissing Number is :" << (total-sum) << endl;
}

int main() {
	int arr[] = {1, 2, 3, 4, 6, 7};
	check(arr, 7);
	int arr2[] = {1, 2, 3, 4, 5, 6, 7, 9 ,10};
	check(arr2, 10);
	int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13};
	check(arr3, 13);
	return 0;
}
