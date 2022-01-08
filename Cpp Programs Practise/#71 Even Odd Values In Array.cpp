// Program to store 10 no.s in an array and show even and odd values 
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
	evenOddArray() {
		int even=0,odd=0;
		cout << "\nEven Values are : \n";
		for(int i=0; i<n; i++){
			if(arr[i]%2 == 0){
				cout << arr[i] << " ";
				even++;
			}
		}
		cout << "\nTotal no. of even elements are : " << even << endl;

		cout << "\nOdd Values are : \n";
		for(int i=0; i<n; i++){
			if(arr[i]%2 != 0){
				odd++;
				cout << arr[i] << " ";
			}
		}
		cout << "\nTotal no. of odd elements are : " << odd << endl;
	}
};
int main(){
	Array o1;
	o1.getLimit();
	o1.getArray();
	o1.showArray();
	o1.evenOddArray();
	return 0;
}
