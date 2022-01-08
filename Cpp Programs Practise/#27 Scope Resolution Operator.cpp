// Scope Resolution Operator.
#include <iostream>
using namespace std;
int global = 10;
int main() {
	int global = 20;
	cout << global << endl;
	cout << ::global; //Scope Resolution Operator.
	return 0;
}
