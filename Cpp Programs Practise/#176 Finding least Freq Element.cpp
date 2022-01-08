// Program to find the no. whose frequency is not 3.

#include <iostream>
using namespace std;

int main() {
	int arr[10],n;
	cout << "Enter the value of n : ";
	cin >> n;
	
	cout << "Enter " << n << " values : ";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	int c=1;
	for(int i=0; i<n; i++){
		c=0;
		for(int j=0; j<n; j++){
			if(arr[i] == arr[j]){
				c++;
			}
		}
		
		if(c==1){
			cout << "No. whose frequency is not 3 : " << arr[i];
		}	
	}
	
	return 0;
}
