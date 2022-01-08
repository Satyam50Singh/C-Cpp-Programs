//Program to make a histogram of an array
//Given an array of integers, print histogram of array values.
//
//Examples:
//
//Input : 0 11 2 13 5 12 8 11 12 9
//Output :                  
//13 |           x                   
//12 |           x     x        x    
//11 |     x     x     x     x  x    
//10 |     x     x     x     x  x    
// 9 |     x     x     x     x  x  x 
// 8 |     x     x     x  x  x  x  x 
// 7 |     x     x     x  x  x  x  x 
// 6 |     x     x     x  x  x  x  x 
// 5 |     x     x  x  x  x  x  x  x 
// 4 |     x     x  x  x  x  x  x  x 
// 3 |     x     x  x  x  x  x  x  x 
// 2 |     x  x  x  x  x  x  x  x  x 
// 1 |     x  x  x  x  x  x  x  x  x 
// 0 |  x  x  x  x  x  x  x  x  x  x 
//---------------------------------------
//      0 11  2 13  5 12  8 11 12  9 

#include <iostream>
using namespace std;
int maximum(int arr[100], int size){
	int max = arr[0];
	for(int i=1; i<size; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}
int main() {
	int arr[] = {0,11,2,13,5,12,8,11,12,9};
	int size = (sizeof(arr)/sizeof(arr[0]));
//	cout << size << "  ";
	int max = maximum(arr, size);
//	cout << max << endl;
	
	cout << "HISTOGRAM \n\n\n";
	int k=0;
	for(int i=max; i>=0; i--){
		if(i<10)
		cout << " " << i << "| " ;
		else
		cout << i << "| ";
		for(int j=0; j<size; j++){
			if(i<=arr[j]){
				cout << "a	";
			}else{
				cout << " 	";
			}
		}
		cout << endl;
	}
	for(int i=0; i<size+2; i++)
		cout << "-------"; 
	cout << endl << "   "; 
	for(int i=0; i<size; i++)
		cout << arr[i] << "	"; 
	
	return 0;
}
