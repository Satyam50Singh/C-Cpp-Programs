#include <iostream>
using namespace std;

int main() {
	int arr1[100];
	int arr2[100];
	int n1, n2;
	cout << "Enter the value of n1 : ";
	cin >> n1;
	
	cout << "\n\nEnter " << n1 << " elements \n";
	for(int i=0; i<n1; i++){
		cin >> arr1[i];
	}
	cout << "\nEnter the value of n2 : ";
	cin >> n2;
	
	cout << "\n\nEnter " << n2 << " elements \n";
	for(int i=0; i<n2; i++){
		cin >> arr2[i];
	}
	
	int newArr[100];
	int x=0;
	for(int i=0; i<n1; i++){
		newArr[x++] = arr1[i];
	}
	for(int i=0; i<n2; i++){
		newArr[x++] = arr2[i];
	}
	cout << "\nElements after merging\n\n";
	for(int i=0; i<x; i++){
		cout << newArr[i] << "  ";
	}
	
	// Using linear sort
	for(int i=0; i<x; i++){
		for(int j=i; j<x; j++){
			if(newArr[i] > newArr[j]){
				int temp = newArr[i];
				newArr[i] = newArr[j];
				newArr[j] = temp; 
			}
		}
	}
	cout << "\n\nElements after sorting\n\n";
	for(int i=0; i<x; i++){
		cout << newArr[i] << "  ";
	}
	return 0;
}
