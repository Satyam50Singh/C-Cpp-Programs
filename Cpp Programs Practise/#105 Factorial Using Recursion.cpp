// Program to find the factorial using recursion.
#include <iostream>
using namespace std;

int fact(int &num,int &i, int &f){
	if(num < 2){
		return f;
	}else {
		f = f*num;
		num-=1;
		fact(num, i, f);
	}
}

int main() {
	int num;
	cout << "Enter a no. :";
	cin >> num;
	int i=2, f=1;
	int res = fact(num, i, f);
	cout << "\nFactorial is :" << res;
}
