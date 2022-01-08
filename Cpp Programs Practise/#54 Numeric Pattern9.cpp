// Program to print pattern.

#include <iostream>
using namespace std;
int main(){
	int n=5,p=1;
	for(int i=0; i<n; i++){
		if(i==0 || i==1 || i==3){
			for(int j=0; j<=i; j++){
				if(p>=10){
					cout << " " << p++; 
				}else{
					cout << "  " << p++; 
				}
			}
		}else {
			int j=0;
			if(i==4){
				j=3*i+3;
				for(j; j>10; j--){
					cout << " " << j; 
				}
			}else {
				j=3*i;
				for(j; j>i+1; j--){
					
					cout << "  " << j; 
				}
			}
			p=3*i+1;
		}
		cout<<endl;
	}
	return 0;
}
