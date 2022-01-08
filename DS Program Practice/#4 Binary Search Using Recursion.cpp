#include <iostream>
using namespace std;

class RecursiveBS{
	private :
		int arr[10], num, n;
	public :
		RecursiveBS() : n(0), num(0){
		}
		void getShowArray(){
			cout << "Enter size of array : ";
			cin >> n;
			cout << "\nEnter " << n << " elements : \n";
			for(int i=0; i<n; i++) cin >> arr[i];
			cout << "\nElements are : ";
			for(int i=0; i<n; i++) cout << arr[i] << "  ";
		}
		void getKey() {
			cout << "\n\nEnter the key value : ";
			cin >> num;
		}
		int search(int first, int last, int middle) {
			if(first <= last ){
				if(arr[middle] == num ){
					return middle+1;
				}else {
					if(num < arr[middle]){
						last = middle-1, middle = (first+last)/2;
						return search(first, last, middle);
					}else {
						first = middle+1, middle = (first+last)/2;
						return search(first, last, middle);
					}
				}			
			}else {
				return -1;
			}
		}
		void showResult(){
			int first = 0, last = n-1, middle = (first+last)/2;
			int pos = search(first, last, middle);
			if(pos < 0) cout << "\nNot found!!";
			else cout << "\nFound at " << pos <<" position!!";
		}
};

int main() {
	RecursiveBS o1;
	o1.getShowArray();
	o1.getKey();
	o1.showResult();
	return 0;
}
