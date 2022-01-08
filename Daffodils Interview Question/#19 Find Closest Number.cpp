//	Find closest number in array
//	Difficulty Level : Medium
//	
//	Given an array of sorted integers. 
//	We need to find the closest value to the given number. 
//	Array may contain duplicate values and negative numbers. 
//
//	Examples:  
//
//	Input : arr[] = {1, 2, 4, 5, 6, 6, 8, 9}
//	             Target number = 11
//	Output : 9
//	9 is closest to 11 in given array
//
//	Input :arr[] = {2, 5, 6, 7, 8, 8, 9}; 
//	       Target number = 4
//	Output : 5

#include <iostream>
using namespace std;

int main() {
	int n, t, arr[100];
	cout << "Enter the value of n : ";
	cin >> n;
	cout << "Enter " << n << " values :\n";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << "\nEnter Target : ";
	cin >> t;
	
	cout << "\nValues :";
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << "\nTarget :" << t << endl;
	
	int index, min=t-arr[0];
	int sub;
	if(min<0){
		min = (min)-(min*2);
	}
	for(int i=1; i<n; i++){
		sub = t-arr[i];
		if(sub<0){
			sub = (sub)-(sub*2);
		}
		if(min> sub){
			min = sub;
			index = i;
		}
	}
	cout << "\nNumber is : " << arr[index];
	return 0;
}


