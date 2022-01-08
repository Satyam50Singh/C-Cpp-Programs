// Program to swap values of different type of data by using the concept of template function.

#include <iostream>
using namespace std;

template<class X>
void swap(X *a, X *b) {
	X temp = *a;
	*a=*b;
	*b=temp;
}

int main() {
	int a1=12, b1=34;
	cout << "Type : Integer\n";
	cout << "\nValues BS : \nFirst : " << a1 << "\nsecond : " << b1 << endl; 
	swap(&a1, &b1);
	cout << "\nValues AS : \nFirst : " << a1 << "\nsecond : " << b1 << endl; 

	string s1="Apple", s2="Banana";
	cout << "\n\nType : String\n";
	cout << "\nValues BS : \nFirst : " << s1 << "\nsecond : " << s2 << endl; 
	swap(&s1, &s2);
	cout << "\nValues AS : \nFirst : " << s1 << "\nsecond : " << s2 << endl; 
}
