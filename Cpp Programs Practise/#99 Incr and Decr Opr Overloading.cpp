#include <iostream>
using namespace std;

class Check{
	private :
		int i;	
	public :
		Check() : i(1) { }
		
//		void operator ++(){ //prefix
//			++i;
//		}
		
		Check operator ++(){
			Check temp;
			temp.i = ++i;
			return temp;
		}
		Check operator ++(int){
			Check temp;
			temp.i = i++;
			return temp;
		}
		void display() {
			cout << endl << "i = " << i << endl;
		}
		
};

int main() {
	Check obj, obj1;
	obj.display();
	obj1.display();
	cout << endl << "----------------------" << endl;	
//	++obj;  ++obj1;
//	obj.display();
//	obj1.display();
//	cout << endl << "----------------------" << endl;	
	
	obj = ++obj1;
	obj.display();
	obj1.display();
	cout << endl << "----------------------" << endl;	

	obj = obj1++;
	obj.display();
	obj1.display();
	cout << endl << "----------------------" << endl;	
}
