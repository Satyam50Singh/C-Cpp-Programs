//Function Overloading
#include <iostream>
using namespace std;
int add(int, int b);
int add(int , float b, int);

int main(){
	cout << (add(10, 20)) << endl;
	cout << (add(40, 70.67, 90));
	return 0;
}

int add(int a, int b) {
	return a+b;
}

int add(int a, float b, int c){
	return a+b+c;
}

