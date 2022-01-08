// find the nth element which occur kth times.

//ex - 1 3 2 6 3 3 6 1 1 2 6

#include <iostream>
using namespace std;

int main() {
	int arr[] = {1,3,2,5,6,3,5,3,6,1,5,1,2,6};
	int n, k;
	int size = (sizeof(arr)/sizeof(arr[0]));
	cout << "Enter value of n and k : ";
	cin >> n >> k;

	int len=0,p=0;
	cout << n <<"th elements which occur " << k << " times is : ";
	for(int i=0; i<size; i++){
		len=0;
		for(int j=i; j<size; j++){
			if(arr[i] == arr[j]){
				len++;
			}
		}
		if(len == k){
			p++;
			if(p==n){
				cout <<  arr[i];
			}				
		}
	}
	return 0;
}
