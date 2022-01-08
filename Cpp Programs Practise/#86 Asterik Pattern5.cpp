// Program to print sandclock pattern.

#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter the no. of rows : ";
	cin >> n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(i+j>=n){
				cout<<" ";
			}else{
				cout<<"*";
			}
		}
		for(int j=0; j<n; j++){
			if(i>j){
				cout<<" ";
			}else{
				cout<<"*";
			}
		}
		cout << endl;
	}
	for(int i=1; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(i>=j){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		for(int j=0; j<n; j++){
			if(i+j>=n-1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout << endl;
	}
	return 0;
}
