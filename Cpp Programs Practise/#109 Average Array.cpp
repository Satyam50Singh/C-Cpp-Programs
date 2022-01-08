//Average of an array
#include <iostream>
using namespace std;
class Average{
	private : 
		float arr[10], size, sum;
	public :
		Average():size(0), sum(0){
			
		}
		void getSize() {
			cout << "Enter the length of an array : ";
			cin >> size;
		}
		void getArray() {
			cout << "\nEnter " << size << " values\n";
			for(int i=0; i<size; i++){
				cin >> arr[i];
			}
		}
		void showArray() {
			cout << "\nElements are : \n";
			for(int i=0; i<size; i++){
				cout << arr[i] << "  ";
				sum+=arr[i];
			}
		}
		float calculateAvg(){
			return sum/size;
		}
	
};
int main() {
	Average o1;
	o1.getSize();
	o1.getArray();
	o1.showArray();
	cout << "\nAverage is : " << o1.calculateAvg();
	return 0;
}
