//Explaining the concept of Friend class 
#include <iostream>
using namespace std;
class PQR
{
	private :
		int x;
	
	protected :
		int y;

	public :
		void Manage()
		{
			cout<<"Satyam Singh"<<endl;	
		}
	friend class XYZ; 	
};

class XYZ
{
	public :		
	void setdata(PQR &);	
};

void XYZ::setdata(PQR &A)
{
	A.x=12;
	A.y=13;
	cout<<"Value of x is : "<<A.x<<" and y is :"<<A.y<<endl;
}

int main()
{
	PQR obj1;
	XYZ obj2;
	obj1.Manage();
	obj2.setdata(obj1);
	return 0;
}
