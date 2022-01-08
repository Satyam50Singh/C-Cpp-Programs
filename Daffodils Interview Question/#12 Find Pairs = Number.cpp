//Find the pair in given array whose sum is equal to given number.

#include <iostream>
using namespace std;

int main() {
	int arr[15];
	cout << "Enter n : ";
	int n;
	cin >> n;
	cout << "\nEnter "<<n<<" numbers : ";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << "\nEnter number : ";
	int num;
	cin >> num;
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]+arr[j] == num){
				cout << "(" << arr[i] << " , " << arr[j] << ")" << endl;
			}
		}
	}
	return 0;
}
