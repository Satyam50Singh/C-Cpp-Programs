// Program to print a simple pattern.
 
#include <iostream>
using namespace std;

int n=1;
void printColumn(int row, int i, int j) {
	if(i == j) {
		return;
	}
	cout << "* ";
	printColumn(row, i, j+1);
}
void printColumn2(int row, int i, int j) {
	if(i == j) {
		return;
	}
	cout << "* ";
	printColumn(row, i, j+1);
}
void printBlankTriangle(int row, int i) {
	if(i == row) {
		return;
	}
	cout << "  ";
	printBlankTriangle(row-1, i);
}
void pattern(int row, int i) {
	if(i == row) {
		return;
	}
	printBlankTriangle(row-1,i);
	printColumn(row, i, 0);
	printColumn2(row, i, -1);
	cout << endl;
	pattern(row, i+1);
}
int main(){
	int rows = 5;
	int i = 0;
	pattern(rows, i);
	return 0;
}
