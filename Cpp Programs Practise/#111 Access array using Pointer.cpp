//Program to access element of array using pointer
#include <iostream>
using namespace std;
class PointerAccessing{
	private : 
		int arr[10];
	public :
		int size;
		PointerAccessing(): size(0){
			
		}
		void getSize() {
			cout << "Enter the length of an array : ";
			cin >> size;
		}
		void showArray(int *arr) {
			cout << "\nElements are : \n";
			for(int i=0; i<size; i++){
				cout << *arr++ << "  ";
			}
		}
	
};
int main() {
	PointerAccessing o1;
	int arr[10], size;
	o1.getSize();

	cout << "\nEnter " << o1.size << " values\n";
	for(int i=0; i<o1.size; i++){
		cin >> arr[i];
	}

	o1.showArray(&arr[0]);
	
	return 0;
}
