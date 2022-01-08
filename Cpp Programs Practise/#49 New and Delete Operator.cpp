// Memory Allocation and Deallocation By using new and delete operator.
#include <iostream>
using namespace std;

int main() {
	int *ptr = NULL;
	ptr = new int(); // allocation
	int *var = new int(12);
	
	if(!ptr){
		cout << "Bad Allocation";
	}else {
		cout << "Memory Allocated";
	}
	double *myArray = NULL;
	myArray = new double[10];
	if(!myArray){
		cout << "Bad Allocation";
	}else {
		cout << "Memory Allocated" << endl;
		
		cout << "Enter 10 values : \n";
		
		for(int i=0; i<10; i++){
			cin >> myArray[i];
		}
		for(int i=0; i<10; i++){
			cout << myArray[i] << " ";
		}
		
	}
	
	delete var; //deallocation
	
	delete[] myArray;
	return 0;
}
