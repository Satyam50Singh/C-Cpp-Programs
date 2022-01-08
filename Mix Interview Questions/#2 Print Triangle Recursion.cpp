#include <iostream>

using namespace std;

int MAX=5;
#define INDEX 0
void pattern(int range);
void printRow(int j, int range);

void printRow(int num){
	if(num==-1){
		return;
	}	
	cout << "*";
	printRow(num-1);
}

void pattern(int range, int i) {
	if (range == -1) {
		return;
	}
	printRow(i);
	cout << endl;
	pattern(range-1, i+1);
}

int main() {
	pattern(MAX-1, 0);
}
