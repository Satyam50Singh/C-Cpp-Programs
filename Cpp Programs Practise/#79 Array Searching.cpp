#include <iostream>
using namespace std;
class Searching{
	private :
		int arr[20],n,num;
	public :
			
	getArray(){
		cout << "Enter the value of n : ";
		cin >> n;
		cout << "\nEnter " << n << " Values \n";
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		cout << "\nValues are : \n";
		for(int i=0; i<n; i++){
			cout << arr[i] << " ";
		}
		
		cout << "\nEnter the number two find : ";
		cin >> num;
		search(num);
	}
	
	search(int num) {
		int p=0;
		for(int i=0; i<n; i++){
			if(arr[i] == num){
				p=1;
				result(p, i);				
			}
		}
		if(p==0){
			result(0, 0);				
		}
	}
	result(int p, int i){
		if(p){
			cout << "\nFound!! at location " << i+1;
		}else {
			cout << "Not Found!!";
		}
	}
};

int main(){
	Searching s1;
	s1.getArray();
	return 0;
}
