#include <iostream>
using namespace std;

class MaxMinArray {
	public :
		int n;
		int arr[100];
		void getArray() {
			cout << "Enter the value of n :";
			cin >> n;
			cout << "\nEnter Array : ";
			for(int i=0; i<n; i++){
				cin >> arr[i];				
			}
			cout << "\nArray : ";
			for(int i=0; i<n; i++){
				cout << arr[i] << "  ";				
			}
		}
		void findMinMax() {
			int max = arr[0];
			int min = arr[0];
			for(int i=1; i<n; i++){
				if(max < arr[i]) {
					max = arr[i];
				}
				if(min > arr[i]){
					min = arr[i];
				}
			}
			cout << "\n\nMax : " << max << endl << "Min : " << min << endl;
		}
};

int main() {
	MaxMinArray A1;
	A1.getArray();
	A1.findMinMax();
	return 0;
}
