#include <iostream>
using namespace std;

class RecursiveLS{
	private :
		int arr[10], num, n;
	public :
		RecursiveLS() : n(0), num(0){
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
		int search(int i) {
			if(i<n){
				if(num == arr[i]){
					return i+1;
				}else {
					return search(++i);
				}
			}else{
				return -1;
			}
		}
		void showResult(){
			int i=0;
			int pos = search(i);
			if(pos < 0) cout << "\nNot found!!";
			else cout << "\nFound at " << pos <<" position!!";
		}
};

int main() {
	RecursiveLS o1;
	o1.getShowArray();
	o1.getKey();
	o1.showResult();
	return 0;
}
