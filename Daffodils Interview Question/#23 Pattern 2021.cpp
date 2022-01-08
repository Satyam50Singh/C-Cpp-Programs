#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int arr[]={3, -4, 3, 5, 7 , -5, 1, -3, 2};
	
	int min = 0;
	int size = sizeof(arr)/sizeof(arr[0]);
//	cout << size << "\n";
	for(int i=0; i<size; i++){
		if(min > arr[i]) min = arr[i];
	}
	
//	cout << min;
	
	for(int i=0; i<size; i++){
		int temp = arr[i];
		
		if(temp > 0){
			for(int k=0; k<abs(min)-1; k++)
				cout << " ";
			for(int j=0; j<arr[i]; j++)
				cout << "*";
		}else {
			for(int k=0; k<(abs(min) + arr[i]); k++)
				cout << " ";
			for(int j=0; j<abs(arr[i]); j++)
				cout << "*";
		}	
		cout << endl;
	}
}
