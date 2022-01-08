//Using Macros for printing nos from 1 to 10

#include <iostream>
using namespace std;

#define COUT(i) cout << i << "  ";
#define LEVEL(N) N N N N N N N N N N
#define PRINT(i) LEVEL(LEVEL(COUT(i)))

int main() {
	int i=1;
	PRINT(i++);
	return 0;
}pp
