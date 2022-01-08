// Program to print 

//0 0 0 0 0
//0 1 0 0 0
//0 0 2 0 0 
//0 0 0 3 0
//0 0 0 0 4

#include <iostream>
using namespace std;
int n;
void print(){
	cout << "Pattern is \n\n";
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				cout << i;
			}else {
				cout << "0";
			}
		}
		cout << endl;
	}
}
int main() {
	cout << "Enter the Value of n : ";
	cin >> n;
	print();
	return 0;	
}
