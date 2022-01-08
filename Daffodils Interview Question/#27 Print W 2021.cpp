#include <iostream>
using namespace std;

void pattern(int n) {
	cout << "-----------------------------------------\nUsing Five Loops\n\n";
	for(int i=0; i<n ;i++){
		for(int j=0;j<n; j++){
			if(i==j)
				cout << "\\";
			else
				cout<<" ";
		}
		if(i>0){
			for(int j=0;j<n-1; j++){
				if(i+j == n-1)
					cout << "/";
				else
					cout<<" ";
			}
			for(int j=0;j<n-1; j++){
				if(i-j == 1)
					cout << "\\";
				else
					cout<<" ";
			}
		}
		for(int j=0;j<n; j++){
			
			if(i+j == n-1)
				cout << "/";
			else if(i==0)
				cout<<"   ";
			else 
				cout << " ";
		}
		cout << endl;
	}
}
void patternTwoLoop(int n){
	cout << "\n\nUsing Only Two Loops\n\n";
	for(int i=0; i<n ;i++){
		for(int j=0;j<=n*(n-1)+1; j++){
			if(i==j && j<n)
				cout << "\\";
			else if(i>0 && j>=n && j<=n+(n-2)){
				if(i+j == n+(n-1))
					cout << "/";
				else
					cout<<" ";
			}
			else if(i>0 && j>=6 && j<=9){
				if(j-i == n+2)
					cout << "\\";
				else
					cout<<" ";
			}
			else if(j>9 && i+j == (n*(n-1)+1))
				cout << "/";
			else
				cout<<" ";
		}
		cout << endl;
	}
	
}

int main(){
	pattern(5);
	patternTwoLoop(4);
}


