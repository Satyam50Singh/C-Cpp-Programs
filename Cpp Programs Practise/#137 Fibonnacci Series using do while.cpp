// Program to print fibonnaci series using do while loop.

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n : ";
	cin >> n;
	int first=0, second=1,next; 	
	cout << "\nFibonnaci Series upto " << n << " :\n";
	cout << first << "  " << second << "  ";
	int j=2;
	do{
		next = first + second;
		cout << next << "  ";
		first = second;
		second = next;
		j++;
	}while(j<n);
}
