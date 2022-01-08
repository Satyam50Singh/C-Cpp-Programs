// Program to convert point-decimal to Binary.

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	float num, fpart;
	int ipart;
	cout << "Enter a number : ";
	cin >> num;
	cout << "\nNumber is : " <<num << endl;
	ipart = abs(num);
	cout << "\nInteger Part is :"<< ipart << endl; 
	cout << fixed;
	fpart = (num = num - (int) num);
	cout << "\nFloat Part is :"<< setprecision(3) << fpart << endl; 
	cout <<"\n\nBinary Number is : ";
	int arr1[10], i=0;
	while(ipart > 0){
		arr1[i++] = ipart%2;
		ipart/=2;
	}
	for(int j=i-1; j>=0; j--){
		cout << arr1[j];
	}
	int digit=0, arr2[10], k=0;
	cout << ".";
	while(digit != 1){
		fpart = fpart*2;
		digit = abs(fpart);
//		cout << "apple";
		arr2[k]=digit;
		cout << arr2[k++];
		fpart = fpart - abs(fpart);
	}
	return 0;
}
