// Data Structure in C++
// P1 - Linear Search
// Time Complexity - O(n)

#include <iostream>
using namespace std;

class LSearch{
	private :
		int arr[10], n,s;
	public :
		LSearch():n(0),s(0){
		}
		void getShowArray() {
			cout << "Enter the size of an array: ";
			cin >> n;
			cout << "\nEnter "<< n << " elements :";
			for(int i=0; i<n; i++){
				cin >> arr[i];
			}
			cout << "\nArray elements are : ";
			for(int i=0; i<n; i++){
				cout << arr[i] << "  ";
			}
		}
		int search() {
			int pos=-1;
			s = getNumber();
			for(int i=0; i<n; i++){
				if(arr[i] == s){
					pos=1;
					return i+1;
				}
			}
			if(pos < 0){
				return pos;
			}
		}
		int getNumber(){
			int s;
			cout << "\n\nEnter the no. to search : ";
			cin >> s;
			return s;
		}
};

int main() {
	LSearch o1;
	o1.getShowArray();
	int res = o1.search();
	if(res < 0){
		cout << "\nElement not found in an array.";
	}else {
		cout << "\nElement found in an array at location : " << res;
	}
	return 0;
}
