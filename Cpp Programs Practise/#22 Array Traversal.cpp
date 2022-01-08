//Program to reverse a string
#include <iostream>

using namespace std;

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	char name[][10] = {"Satyam", "Anuj", "Aditya"};

	for(int i=0; i < sizeof(arr)/sizeof(arr[0]); i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	for(int i=0; i < sizeof(name)/sizeof(name[0]); i++){
		cout << name[i] << " ";
	}
		
	return 0;
}
