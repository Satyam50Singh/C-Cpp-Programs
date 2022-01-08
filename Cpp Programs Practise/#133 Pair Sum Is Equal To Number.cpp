// Program to find all pairs whose sum is equal to given no.

#include <iostream>
using namespace std;

int main() {
	int n, num;
	
	cout << "Enter the n : ";
	cin >> n;
	int a[n];
	
	cout << "\nEnter " << n << " Values : ";
	for(int i=0; i<n; i++)
		cin>>a[i];

	cout << "\nEnter the num : ";
	cin >> num;

	cout << "\nPairs are : \n";

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]+a[j] == num){
				cout << a[i] << " , " << a[j] << endl;
			}
		}
	}	
	return 0;
}
