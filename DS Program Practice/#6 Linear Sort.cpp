//Linear sort

#include <iostream>
using namespace std;
class Sorting{
	private :
		int arr[10], n;
	public :
		Sorting():n(0){
		}
		void getArray(){
			cout << "Enter the value of n :";
			cin >> n;
			cout << "Enter " << n << " elements \n";
			for(int i=0; i<n; i++){
				cin >> arr[i];
			} 
		}
		void showArray() {
			cout << "\nArray elements :\n";
			for(int i=0; i<n; i++){
				cout << arr[i] << " ";
			} 
		}	
		void sort(){
			cout << "\n\nAscending Order\n";
			for(int i=1; i<n; i++){
				for(int j=0; j<i; j++){
					if(arr[i] < arr[j]){
						int t = arr[i];
						arr[i] = arr[j];
						arr[j] = t; 
 					}
				}
			}			
			showArray();
		}
};
int main(){
	Sorting o1;
	o1.getArray();
	o1.showArray();
	o1.sort();
	return 0;
}
