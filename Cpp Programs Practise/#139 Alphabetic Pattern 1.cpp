// program to print alphabetic pattern
//		A
//	   ABA
//	  ABCBA
//	 ABCDCBA
//	ABCDEDCBA

#include <iostream>
using namespace std;
int n;
void print(){
	cout << "\nPattern Using Array\n\n";
	int arr[n];
	int x=0;
	for(int i=65; i<65+n; i++){
		arr[x++] = i;
	}
	for(int i=0; i<n; i++){
		int k=65;
		for(int j=0; j<n; j++){
			if(i+j<n-1){
				cout << " ";
			}else {
				cout << char(k++);
			}
		}
		for(int j=i; j>=1; j--){
			cout << char(arr[j-1]);
		}
		cout << endl;
	}
}
void printWithOutArray(){
	cout << "\n\nPattern without Using Array\n\n";
	int arr[n];
	int x=0, temp=1;
	for(int i=65; i<65+n; i++){
		arr[x++] = i;
	}
	for(int i=0; i<n; i++){
		int k=65;
		for(int j=0; j<n; j++){
			if(i+j<n-1){
				cout << " ";
			}else {
				cout << char(k++);
			}
		}
		for(int j=temp-1; j>=1; j--){
			cout << char(64+j);
		}
		temp++;
		cout << endl;
	}
}
int main( ){
	cout << "Enter the value of n :";
	cin >> n;
	print();
	printWithOutArray();
	return 0;
}
