//Virtual Destructor.

#include <iostream>
using namespace std;

class VDestructor{
	public :
		VDestructor(){
			cout << "Constructor \n\n";
		}
		virtual ~VDestructor() {
			cout << "\nVDestructor \n\n";
		}
		template <class X>
		X add (X a, X b){
			return a+b;
		}
};

int main() {
	VDestructor V1;
	cout << "Main function.\n";
	cout << "\nAddition is : " << V1.add(23,34) << endl;
	return 0;
}
