//Program to swap the Private data members of a class using friend fn(Swap_private_data_friend_fn)
#include <iostream>
using namespace std;
class A
{
	private :
		int a,b;
	public :
		A(int x,int y)
		{
			a=x;
			b=y;
			cout<<"Before Swapping\nFirst Value is : "<<a<<"\nSecond value is "<<b<<endl;
		}
	friend void Swap(A &);

};
void Swap(A &w)
 {
 	int temp;
	temp=w.a;
	w.a=w.b;
	w.b=temp;
	cout<<"After Swapping\nFirst Value is : "<<w.a<<"\nSecond value is "<<w.b<<endl;
	 	
 }

int main()
{
	A obj(12,89);
	Swap(obj);
	return 0;
}
