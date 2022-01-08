// Program to calculate the area of circle using copy constructor
#include <iostream>
using namespace std;

class Demo{
	private :
		float rad;
	public: 
	Demo(float m) {
		rad = m;
	}
	Demo( Demo &p){
		rad = p.rad;
	}
	display() {
		cout << "Hello Work!" << ", rad is " <<rad << endl;
	}
};

int main(){
	float r;
	cout << "Enter the radius : ";
	cin >> r;
	Demo x(r), y(x);
	x.display();
	y.display();
	return 0;
}
