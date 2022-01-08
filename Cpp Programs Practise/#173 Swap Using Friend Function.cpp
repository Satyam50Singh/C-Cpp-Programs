// Program to swap the private data member of a class using friend function.

#include <iostream>
using namespace std;

class Swap{
	private :
		int a, b;
		
	public :
		void getValues() {
			cout << "Enter value of a & b :";
			cin >> a >> b;
		}
		void show() {
			cout << "Value a = " << a <<endl;
			cout << "Value b = " << b <<endl;
		}
		friend void swap(Swap &);
};

void swap(Swap &Obj){
	int temp = Obj.a;
	Obj.a=Obj.b;
	Obj.b=temp;
}
int main(){
	Swap S1;
	S1.getValues();
	cout << "\n\nValues Before Swapping \n";
	S1.show();
	swap(S1);
	cout << "\n\nValues After Swapping \n";
	S1.show();
	return 0;
}
