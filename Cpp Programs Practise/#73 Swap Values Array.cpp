// Program to swap first and last element of array and replace all -ve no.s with 0.
#include <iostream>
using namespace std;
class Array{
	private :
		int n, arr[20],c;
	public :
	getLimit() {
		cout << "ENTER THE VALUE OF N : ";
		cin >> n;
	}
	getArray(){
		cout << "Enter " << n << " values : \n";
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
	}
	showArrayAndReplaceNegative(){
		c=0;
		cout << "\nValues are : \n";
		for(int i=0; i<n; i++){
			cout << arr[i] << " ";
			c++;
			if(arr[i] < 0){
				arr[i]=0;
			}
		}
	}
	reverseIndex(){
		int t = arr[0];
		arr[0] = arr[c-1];
		arr[c-1] = t;
		cout << "\n\nvalues after swap : \n";
		for(int i=0; i<n; i++){
			cout << arr[i] << " ";
		}
	}
};
int main(){
	Array o1;
	o1.getLimit();
	o1.getArray();
	o1.showArrayAndReplaceNegative();
	o1.reverseIndex();
	return 0;
}
