// Program to access data member of different class using friend function.

#include <iostream>
using namespace std;
class b;
class c;
class a{
	private :
		int x;
	public:
		a(int j){
			cout << "First Value is : "<<j<<endl;
			x=j;
		}		
	
	friend float result(a, b, c);
};

class b{
	private :
		float y;
	public : 
	b(int a) {
		y=a;
			cout << "Second value is : "<<y<<endl;
	}
	
	friend float result(a, b, c);
};

class c{
	private :
		int z;
		float h;
	public :
		c(int x, float y){
			cout << "Third value is : "<<x<<endl;
			cout << "Fourth value is : "<<y<<endl;
			z=x;
			h=y;
		}
	
	friend float result(a, b, c);
};

	
float result(a m , b n , c p){
	return (m.x + n.y + p.h + p.z);
}


int main(){
	a obj1(2);
	b obj2(3);
	c obj3(12, 8.90);
	cout << "Additon is : " << result(obj1, obj2, obj3);	
	return 0;
}
