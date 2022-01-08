// Progran to print many pattern by using only one loop and without using ifelse, ternary and recursion

//1 
//22
//333
//4444
//55555

#include <iostream>
using namespace std;

int n=5;
int t=1, a=1;
string space="     ";
string asterik="";
int main() {
	for(int i=1; i<=n; i++) {
		cout << t*i << endl;; 
		t=(t*10)+1;
	}
	for(int i=1; i<=n; i++) {
		asterik+='*';
		cout << asterik <<endl;
	}
	for(int i=1; i<=n; i++) {
		cout << a << endl;
		a=(a*10)+i+1;	
	}
	string str="A";
	for(int i=1; i<=n; i++) {
		cout << str << endl;
		str+=(65+i);	
	}
	
}

