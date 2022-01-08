//#A-B;

#include <iostream>
using namespace std;

int main() {
	int arr1[]={ 2, 3, 5, 6, 7, 8, 9, 10};
	int arr2[]={ 1, 3, 4, 6, 11, 9};
	
	int size1=(sizeof(arr1)/sizeof(arr1[0]));
	int size2=(sizeof(arr2)/sizeof(arr2[0]));

	int k=0, arr3[100]; 
	for(int i=0; i<size1; i++){
		int check = 1;
		for(int j=0; j<size2; j++){
			if(arr1[i] == arr2[j])
			{
				check = 0;
				break;
			}
		}
		if(check == 1){
			arr3[k] = arr1[i];
			cout << arr3[k++] << "  "; 
		}
	}
	return 0;
}
