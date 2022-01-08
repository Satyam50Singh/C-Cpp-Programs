// Program to print all even number fron 150 to 200 in reverse sequence.
#include <iostream>
using namespace std;
int main() {
	int n=200;
	cout << "even numbers : "
	do{
		if(n%2==0){
			cout << n << " ";	
		}	
		n--;
	}while(n>=150);
	return 0;
}
