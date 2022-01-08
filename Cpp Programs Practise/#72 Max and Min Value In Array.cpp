// Program to find max and min values in an array
#include <iostream>
using namespace std;
class Array{
	private :
		int n, arr[20];
	public :
	getLimit() {
		cout << "ENTER THE VALUE OF N : ";
		cin >> n;
	}
	getArray(){
		cout << "Enter " << n << " values : \n";
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
	}
	showArray(){
		cout << "\nValues are : \n";
		for(int i=0; i<n; i++){
			cout << arr[i] << " ";
		}
	}
	maxMinValue() {
		int max=arr[0];
		cout << "\nMaximum Value is :";
		for(int i=0; i<n; i++){
			if(max < arr[i]){
				max=arr[i];
			}
		}		
		cout << max << endl;

		int min=arr[0];
		cout << "\nMinimum Value is :";
		for(int i=0; i<n; i++){
			if(min > arr[i]){
				min=arr[i];
			}
		}		
		cout << min << endl;
	}
};
int main(){
	Array o1;
	o1.getLimit();
	o1.getArray();
	o1.showArray();
	o1.maxMinValue();
	return 0;
}
