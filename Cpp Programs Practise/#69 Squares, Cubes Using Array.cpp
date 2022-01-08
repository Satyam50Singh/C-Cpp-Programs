// Program to calculate square and cube of each element of array.
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
	showSquare(){
		cout << "\n\nSquares : \n";
		for(int i=0; i<n; i++){
			cout << arr[i]*arr[i] << " ";
		}
	}
	showCube(){
		cout << "\n\nCubes : \n";
		for(int i=0; i<n; i++){
			cout << arr[i]*arr[i]*arr[i] << " ";
		}
	}
};
int main(){
	Array o1;
	o1.getLimit();
	o1.getArray();
	o1.showArray();
	o1.showSquare();
	o1.showCube();
	return 0;
}
