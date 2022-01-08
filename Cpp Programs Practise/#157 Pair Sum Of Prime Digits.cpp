// Program to check whether a no. can be expressed as sum of two prime no. 
//ex - number -> 34
//output - 17 + 17 = 34
//	   -  5 + 29 = 34
//	   -  3 + 31 = 34
//	   - 11 + 23 = 34

#include <iostream>
using namespace std;
int main() {
	int N =48, prime[20] , p=1;
	int check = 0;
	prime[0] = 1;
	for	(int i=1; i<=N; i++){
		check = 0;
		for(int j=1; j<=i; j++){
			if(i%j == 0){
				check ++;
			}
		}
		if(check == 2){
			prime[p++] = i;
		}
	}
	cout << "Prime Numbers are : \n";
	for(int i=0; i<p; i++){
		cout << prime[i] << "  "; 
	}
	cout << endl;
	
	int psize = p;
	for(int k=0; k<psize; k++){
		int temp = prime[k];
		for(int j=k+1; j<psize; j++){
			if(prime[k] + prime[j] == N){
				cout << "\nPair is : " << prime[k] << " + " << prime[j] << endl; 
				break;
			}
		}
	}
} 
