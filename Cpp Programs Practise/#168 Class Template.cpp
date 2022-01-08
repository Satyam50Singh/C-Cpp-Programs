// Template class

#include <iostream>
using namespace std;

template <class X>
class Add {
	private :
		X a1, a2;
	public :
		Add(X a1, X a2){
			this->a1 = a1;
			this->a2 = a1;
		}
		X add(){
			return a1+a2;
		}
};

int main() {
	int a1=12, a2=23;
	Add<int> A1(a1, a2);
	cout << "Addition of Integer is : " << A1.add() << endl;

	float b1=12.7, b2=3.8;
	Add<float> A2(b1, b2);
	cout << "Addition of Float is : " << A2.add() << endl;
	
	return 0;
}
