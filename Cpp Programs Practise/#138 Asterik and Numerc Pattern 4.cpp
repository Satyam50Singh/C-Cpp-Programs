// Program to print pattern

//        0
//	    *101*
//	   *21012*
//	  **21012**
//   ***21012***
   
#include <iostream>
using namespace std;

int main() {
	int n=5;
	for(int i=0; i<5; i++){
		for(int j=0; j<=n; j++){
			if(j==n){
				cout << '0';
			} else if(i+j <=3 ){
				cout << " ";
			}else if(j==4 && i!=0){
				cout << "1";
			}else if(j==4 && i==0){
				cout << " ";
			}else if(j==3 && !(i<=1)){
				cout << "2";
			}else{
				cout << "*";
			}
		}
		for(int j=0; j<n; j++){
			if(i==0 && j==0){
				cout << " ";
			}else if(j==0 && i!=0){
				cout <<"1";
			}else if(j==1 && i>=2){
				cout <<"2";
			} else if(i>=j){
				cout << "*";
			}else{
				cout <<" ";
			}
		}
		cout << endl;
	}
}   
  
