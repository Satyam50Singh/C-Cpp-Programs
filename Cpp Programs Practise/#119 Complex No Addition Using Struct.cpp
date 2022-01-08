// Program to add complex no. by passing structure to function.

#include <iostream>
using namespace std;

struct complex{
	int real, img;
};

void add(complex c1, complex c2){
	cout << "\nAddition is : ";
	cout << c1.real+c2.real << " +i" << c1.img+c2.img << endl; 
}

int main() {
	complex c1, c2;
	cout << "Enter real value of 1st number : ";
	cin >> c1.real;
	cout << "Enter imaginery value of 1st number : ";
	cin >> c1.img;
	cout << "Enter real value of 2nd number : ";
	cin >> c2.real;
	cout << "Enter imaginery value of 2nd number : ";
	cin >> c2.img;
	
	cout << "\n1st Number is : " << c1.real << " + i" << c1.img << endl;
	cout << "\n2nd Number is : " << c2.real << " + i" << c2.img << endl;
	add(c1,c2);
	
	return 0;	
}

