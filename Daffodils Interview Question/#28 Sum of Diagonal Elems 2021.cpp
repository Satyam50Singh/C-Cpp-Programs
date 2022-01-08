#include <iostream>
using namespace std;

int main() {
	int r, c;
	int mat[10][10];
	cin >> r >> c;
	if(r==c){
		for(int i=0; i<r; i++)	
			for(int j=0; j<r; j++)	
				cin >> mat[i][j];
		cout << endl << "Elements\n";
		for(int i=0; i<r; i++){
			for(int j=0; j<r; j++)	
				cout << mat[i][j] <<"  ";
			cout << endl;
		}	
		cout << endl;
		cout << endl;
			
		int sum = 0;
		for(int i=0;i<r;i++){
			if(i!=(r-((r+1)/2)))
				sum+=mat[i][i]+mat[i][r-i-1];
			else 
				sum+=mat[i][i];
		}
		cout << sum ;
	}
	return 0;
}
