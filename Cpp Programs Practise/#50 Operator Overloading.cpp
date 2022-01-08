// EXample of Operator Overloading.
#include <iostream>
using namespace std;
class Box{
	private :
		double len, brh, hei;
	public :
		void setDimension(double l, double b, double h) {
			this -> len = l;
			this -> brh = b;
			this -> hei = h;
		}

		display() {
			cout << "\nLength = " << len << endl;			
			cout << "Breadth = " << brh << endl;			
			cout << "Height = " << hei << endl;			
		}

		Box operator + (Box obj2){
			obj2.len = len - obj2.len;
			obj2.brh = brh - obj2.brh;
			obj2.hei = hei - obj2.hei;
			return obj2;
		}
};

int main() {
	Box obj1, obj2;
	obj1.setDimension(12.2, 23.2, 12.2);
	obj1.display();
	obj2.setDimension(1.2, 3.2, 7.1);
	obj2.display();
	
	Box obj3;
	obj3 = obj1+obj2;
	obj3.display();
	
	return 0;
}
