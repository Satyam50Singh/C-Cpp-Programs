// Program to add two no.s without using arithmetic operator.

#include <iostream>
using namespace std;

int main() {
	int a,b;
	cout << "Enter a no. : ";
	cin >> a >> b;
	if(a>b){
		while(b>0){
			a++; b--;
		}
	cout << a;
	}else {
		while(a>0){
			a--; b++;
		}
	cout << b;
	}
	return 0;
}



