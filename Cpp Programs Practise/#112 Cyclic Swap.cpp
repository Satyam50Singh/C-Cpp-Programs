//C++ Program to Swap Numbers in Cyclic Order Using Temporary Variable
#include <iostream>
using namespace std;
class cyclicSwap{
	private : 
		int arr[3], size;		
	public :
		cyclicSwap():size(3){
			
		}
		void getNumbers() {
			cout << "Enter " << size << " values\n";
			for(int i=0; i<size; i++){
				cin >> arr[i];
			}
		}
		void showNumbers() {
			cout << "\nElements are : \n";
			for(int i=0; i<size; i++){
				cout << arr[i] << "  ";
			}
		}
		void swap() {
			cout << "\nElements After swap : \n";
			int t = arr[0];
			arr[0] = arr[1];				
			arr[1] = arr[2];				
			arr[2] = t;				
			for(int i=0; i<size; i++){
				cout << arr[i] << "  ";
			}
		}
};
int main() {
	cyclicSwap o1;
	o1.getNumbers();
	o1.showNumbers();
	o1.swap();
	return 0;
}
