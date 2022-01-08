//Program to Swap the values of two variables without using any extra variable.(swap_wihout_var)
#include<iostream>
using namespace std;

class Swap
{
	private :
		int x,a,b;
	public:
	void getdata()
	{
		cout<<"Enter two differnt no.s :";
		cin>>a>>b;
	}
	void display()
	{
		if(x)
		cout<<"\nAfter swapping:\n";		
		else
		cout<<"Before swapping:\n";
		cout<<"First Number is :"<<a<<endl<<"Second Number is :"<<b<<endl;
	}
	void swapping()
	{			//a=2,b=5
		b=a+b;//b=7
		a=b-a;//a=7-2
		b=b-a;//a=7-5
		x=1;
	}
};

int main()
{
 	Swap x;
	x.getdata();
	x.display();
	x.swapping();
	x.display();
	return 0;
}
