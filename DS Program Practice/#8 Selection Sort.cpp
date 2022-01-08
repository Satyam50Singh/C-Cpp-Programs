// Selection Sort
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
//			32 5 76 9 43
//			5 32 76 9 43
			int min, p;
			for(int i=0; i<n; i++){
				min = arr[i],p=i;
				for(int j=i+1; j<n; j++){
					if(min > arr[j]){
						min = arr[j];
						p=j;	
					}
				}
				if(p!=i){
					arr[p] = arr[i];
					arr[i] = min;
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
