// Program to convert a -ve no. by using predefined () or not.

#include <iostream>
#include <math.h>
using namespace std;

void convert(int num){
	if(num < 0){
		num = num - 2*num;
	}
	cout << "\nNumber is Converted : " << num << endl;
}
void convertByFunc(int num){
	if(num < 0){
		num = abs(num);
	}
	cout << "\nNumber is Converted by () : " << num << endl;
}
int main(){
	int num;
	cout << "Enter number : ";
	cin >> num;
	cout << "\nNumber is : " << num <<  endl;
	convert(num);
	convertByFunc(num);
	return 0;
}
