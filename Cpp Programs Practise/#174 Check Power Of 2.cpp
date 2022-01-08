// Check whether a no. is power of 2.

#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter the value of num : ";
	cin >> num;
	int c=0, count=0;
	int temp=num;
	while(temp>0){
		if(temp%2 != 0){
			c=0; break;
		}else{
			c=1;
			count++;
		}
		temp/=2;
		if(temp==1){
			break;
		}
	}
	
	if(c){
		cout << "\nNumber is power of 2. \nPower is : "<<count;
	}else {
		cout << "\nNumber is not a power of 2.";
	}
	return 0;
	
}
