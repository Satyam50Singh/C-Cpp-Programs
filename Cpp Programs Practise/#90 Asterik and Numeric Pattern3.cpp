#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the no. of rows : ";
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i+j<=n-2){
				cout<<" ";
			}else{
				if(j==n-1){
					cout << "0";
				}else if(j==n-2){
					cout << "1";
				}else if(j==n-3){
					cout << "2";
				}else{
					cout << "*";
				}
			}
		}
		for(int j=0; j<n-1; j++){
			if(i<=j){
				cout<<" ";
			}else{
				if(j==n-n){
					cout << "1";
				}else if(j==n-(n-1)){
					cout << "2";
				}else{
					cout << "*";
				}
			}
		}
		cout << endl;
	}
	return 0;
}
