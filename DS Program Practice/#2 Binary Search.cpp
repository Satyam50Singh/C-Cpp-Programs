// P2 - Binary Search
// Time Complexity - O(log n)

#include <iostream>
using namespace std;

class BSearch{
	private :
		int arr[10], n,s;
		int first,last,middle;
	public :
		BSearch():n(0),s(0){
		}
		void getShowArray() {
			cout << "Enter the size of an array: ";
			cin >> n;
			cout << "\nEnter "<< n << " elements in ascending order only :";
			for(int i=0; i<n; i++){
				cin >> arr[i];
			}
			cout << "\nArray elements are : ";
			for(int i=0; i<n; i++){
				cout << arr[i] << "  ";
			}
		}
		int getNumber(){
			int s;
			cout << "\n\nEnter the no. to search : ";
			cin >> s;
			return s;
		}
		int search() {
			int pos=-1;
			s = getNumber();

			first = 0;
			last = n-1;
			middle = (first+last)/2;
			
			while(first <= last){
				if(arr[middle] == s){
					return middle+1;
				}else {
					if(s > arr[middle]){
						first = middle+1;
					}
					else {
						last = middle - 1;
					}
				}
				middle = (first+last)/2;
			}
			return pos;
		}
};

int main() {
	BSearch o1;
	o1.getShowArray();
	int res = o1.search();
	if(res < 0){
		cout << "\nElement not found in an array.";
	}else {
		cout << "\nElement found in an array at location : " << res;
	}
	return 0;
}
