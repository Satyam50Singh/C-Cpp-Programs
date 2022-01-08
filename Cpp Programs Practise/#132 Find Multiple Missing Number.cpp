// Program to find multiple numbers in array with duplicates.
// You have a =n array of some n size
// array contain no.s from 1 to n-1
//but some no.s are missing find all those no.s

#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "Enter the n : ";
	cin >> n;
	int a[n];
	
	cout << "Enter " << n << " Values : ";
	for(int i=0; i<n; i++)
		cin>>a[i];

	cout << "Missing Numbers are : ";
	int temp[n];
	for(int i=0; i<n; i++)
		temp[a[i]]  = 1;

	for(int i=1; i<n; i++)
		if(temp[i] != 1)
			cout << i << "  ";	
	return 0;
}
