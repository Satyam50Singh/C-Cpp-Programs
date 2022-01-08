#include <iostream>

using namespace std;

#define MAX 5
int main() {
	for (int i=0; i<MAX; i++){
		for(int j=0; j<=i; j++){
			cout << "*";
		}		
		cout << endl;
	}	
	return 0;
}
