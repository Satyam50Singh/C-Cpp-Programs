//Program to swap the values of private data members of two different classes 
//by using friend fn and use the concept of call by refernce(Swap_using_friend_fn.) 
#include <iostream>
using namespace std;
class B;
class A
{
	private :
		int a;
	public :
		void getdata()
		{
			cout<<"Enter the first value : ";
			cin>>a;
			cout<<"\nValue of data member a is : "<<a<<endl;
		}
		friend void Swap(A &,B &);
};
class B
{
	private :
		int b;
	public :
		void getdata()
		{
			cout<<"\nEnter the Second value : ";
			cin>>b;
			cout<<"\nValue of data member b is : "<<b<<endl;
		}
		friend void Swap(A &,B &);
};

void Swap (A &x,B &y)
{
	int temp;
	temp=x.a;
	x.a=y.b;
	y.b=temp;
	cout<<"\nValues after swapping\na = "<<x.a<<"  b = "<<y.b;	
}
int main()
{
	A p;
	B q;
	p.getdata();
	q.getdata();
	Swap(p,q);
	return 0;		
}
