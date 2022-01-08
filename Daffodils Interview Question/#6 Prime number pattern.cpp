//Number Pattern

//1
//1 2
//1 2 3
//1 2 3 5
//1 2 3 5 7
//1 2 3 5 7 11
//1 2 3 5 7 11 13

#include <iostream>
using namespace std;

int main() {
	int n, arr[100];
	cout << "Enter n : ";
	cin >> n;
	arr[0]=1;	
	int j=1;
	int k=1, i2=1;
	while(j!=n){
		int p=0;
		for(int i=1; i<=k; i++){
			if(k%i==0){
				p++;
			}
		}
		if(p==2){
			arr[i2++] = k;
			j++;
		}
		k++;
	}
	
	cout << endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++)
		{
			cout << arr[j]<<"  ";
		}
		cout << endl;
	}
	return 0;
}
