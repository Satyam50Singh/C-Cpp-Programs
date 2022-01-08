// You are given an array A containing N elements you are also given two no.s X & Y it might be X or Y not present 
//in the array
// PERFORM THIS OPERATIONS
// i -> sort the array
// ii -> print the sum of all no.s less than X and greater than Y (X & Y exclude)

#include <iostream>
using namespace std;

int main() {
	int arr[10],n, X, Y;
	cout << "Enter the value of n : ";
	cin >> n;
	
	cout << "\nEnter " << n << " values : ";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	cout << "\nEnter two values : ";
	cin >> X >> Y;
	
	// Array sorting
	cout << "\nSorted Array : ";
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}		
		}
		cout << arr[i] << "  ";
	}
	
	int sumL=0, sumG=0;
	//sum greater and lesser
	for(int i=0; i<n; i++){
		if(arr[i] < X){
			sumL+=arr[i];
		}else if(arr[i] > Y){
			sumG+=arr[i];
		}	
	}
	
	cout << "\nSum of elements which are lesser than " << X << " : " << sumL << endl;
	cout << "\nSum of elements which are geater than " << Y << " : " << sumG << endl;
	return 0;
}
