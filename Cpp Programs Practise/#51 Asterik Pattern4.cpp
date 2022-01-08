// Program to print pattern.

#include <iostream>
using namespace std;
class Pattern{
	private :
		int n;
	public:
		display(){
			n=7;
		
			for(int i=0; i<n; i++){
				for(int j=n-1; j>i; j--){
					cout << " ";
				}
				cout << "*";
				for(int k=0; k<i; k++){
					cout << " ";
				}
				for(int j=0; j<n-2; j++){
					if(i==0){
					cout << "*";
					}
					else {
					cout << " ";
					}
				}
				for(int k=0; k<i; k++){
					cout << " ";
				}
				cout << "*";
				cout << endl;
			}
			
			for(int i=0; i<n; i++){
				for(int k=1; k<=i; k++){
					cout << " ";
				}
				cout << "*";
				for(int j=n-1; j>i; j--){
					if(i==n-1){
					cout << "*";
					}
					else {
					cout << " ";
					}
				}
				for(int j=0; j<n-2; j++){
					if(i==n-1){
					cout << "*";
					}
					else {
					cout << " ";
					}
				}
				for(int j=n-1; j>i; j--){
					if(i==n-1){
					cout << "*";
					}
					else {
					cout << " ";
					}
				}
				cout << "*";
				cout << endl;
			}
			for(int i=0; i< n; i++){
				for(int j=0; j<n+6; j++){
					if(j==9){
						cout << "*";
					}
					else if(i==3 && j>5){
						cout << "*";
					}
					else if(j>=6){
						cout << " ";
					}else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}	
};
int main(){
	Pattern p1;
	p1.display();
	return 0;
}
