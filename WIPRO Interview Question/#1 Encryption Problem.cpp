//Encryption Problem
//Wipro-2021

// example-1
// encrypted string/number is 39631
//then decrypted string will be 93361

// example-2
// encrypted string/number is 87621810
//then decrypted string will be 78268101

#include <iostream>
using namespace std;
int main() {
	string arr;
	getline(cin,arr);
		cout << arr;
	for(int i=0; i<arr.length(); i+=2){
		if((arr.length()-1)%2 == 0 && i==arr.length()-1){
		}else {
			char temp = arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	cout << "\nRequired Output : ";
	cout << arr;
}
