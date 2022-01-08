#include <iostream>
using namespace std;

void callByReference(int *num){
	*num = *num+5;
	cout << "\nInside func : " << *num;
}

int main(){
	int num;
	cout << "Enter a num = ";
	cin >> num;
	cout << "\nNumber is :" <<num << endl;
	callByReference(&num);
	cout << "\nAfter function : " << num;
}
