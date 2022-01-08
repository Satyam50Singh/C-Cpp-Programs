// Calculate maximum border.

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int output[10];
int n, m;
int testcases;
int static p=0;

void calculate(char mat[][15]){
int max=0;
	for(int i=0; i<n; i++){
		int c=0;
		for(int j=0; j<m; j++){
			if(mat[i][j] == '#'){
				c++;				
			}
		}
		if(c>max){
			max=c;
		}
	}
	output[p++]=max;
}
void showResult() {
	cout << "\nOutputs \n\n";
	for(int i=0; i<testcases; i++){
		cout << output[i] << endl;
	}
}
int main(){
	cout << "\nEnter no. of testcases : ";
	cin >> testcases; // no. of test cases
	
	for(int i=0; i<testcases; i++){
		cout << "Test Case : " << i+1  <<endl;;
		cout << "\nEnter n and m : ";
		cin >> n >> m; // no. of n rows and no. of m columns
		char mat[15][15];
		for(int i=0; i<n; i++){
			cin >> mat[i];
		}
		calculate(mat);
		cout <<endl;
	}
	showResult();
	return 0;
}
