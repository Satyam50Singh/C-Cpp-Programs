// Pattern

#include <iostream>
using namespace std;

int main() {
	char a[] = "CPROGRAMMING";
	int size = (sizeof(a)/sizeof(a[0]));
	for(int i=0; i<size/2; i++){
		cout << "-+-";
	}
	cout << "\n";
	for(int i=0; i<size-1; i++){
		cout << " | ";
		for(int j=0; j<=i; j++)
		cout << a[j];
		if(i>3) cout << "	|";
		else cout << "		|";
		cout << endl ;
	}
	for(int i=1; i<size-1; i++){
		int k=0;
		cout << " | ";
		for(int j=size-2; j>=i; j--)
		cout << a[k++];
		if(i<=7) cout << "	|";
		else cout << "		|";
		cout << endl ;
	}
	for(int i=0; i<size/2; i++){
		cout << "-+-";
	}
	return 0;	
}
