#include <iostream>
using namespace std;

int range = 10;

void printSeries(int first, int second, int i) {
	if(range-2 == i)
		return;
	int t = first + second;
	first = second;
	second = t;
	cout << t << " ";
	printSeries(first, second, i+1);
}
int main() {
	int first = 0,
	second = 1,
	 next;
	cout <<first << " " << second << " ";
	printSeries(first, second, 0);
	return 0;
}
