// Program to calculate sum of two number and using constructor.
#include <iostream>
using namespace std;

class Demo{
	private :
		int len, brh;
	public :
	Demo(){
		cout << "Using Constructor \n";
	}
	Demo(int l, int b) {
		this -> len = l;
		this -> brh = b;
	} 
	int display(){
		return len+brh;
	}
};

int main() {
	
	Demo A(12, 56), B;
	int res = A.display();
	cout << res; 
	return 0;
}
