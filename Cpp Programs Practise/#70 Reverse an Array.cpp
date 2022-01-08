// Program to store 10 no.s in an array and print in reverse
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
	reverseArray() {
		cout << "\nArray values in reverse : \n";
		for(int i=n-1; i>=0; i--){
			cout << arr[i] << " ";
		}
	}
};
int main(){
	Array o1;
	o1.getLimit();
	o1.getArray();
	o1.showArray();
	o1.reverseArray();
	return 0;
}
