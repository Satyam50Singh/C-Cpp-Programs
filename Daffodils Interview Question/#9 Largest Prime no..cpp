//Largest Prime no. from given array

#include <iostream> 
using namespace std;

int main() {
	int n,arr[100];
	cout << "Enter n : ";
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int p,max=0;
	cout << "Array is : ";
	for(int i=0; i<n; i++){
		int num = arr[i];
		cout << num << "  \n";
		p=0;
		for(int i=1; i<=num; i++){
			if(num%i==0)
				p++;
		}
		if(p==2){
			if(max<num){
				max = num;
			}
		}
	}	
	
	cout << "\nLargest Prime Number is : " << max;
	return 0;
}

