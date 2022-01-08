// Insertion Sort

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
			for(int i=1; i<n; i++){
				int t = arr[i];
				int j = i-1;
				for(j; t<arr[j] && j>=0; j--){
					arr[j+1] = arr[j];					
				}
				arr[j+1] = t;
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
