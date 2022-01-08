#include<iostream>
using namespace std;
class Operator
{
	private :
		int num1,num2,num3;
	public :
		void Complement()
		{
			num1=12;
			cout<<"~ of "<<num1<<" is "<<(~num1)<<endl;
		}
		void Right_Shift()
		{
			num1=12;
			cout<<">> of "<<num1<<" is "<<(num1>>2)<<endl;
		}
		void Left_Shift()
		{
			num1=12;
			cout<<"<< of "<<num1<<" is "<<(num1<<2)<<endl;
		}
		void AND()
		{
			num1=10;
			num2=12;
			cout<<"& of "<<num1<<" and "<<num2<<" is "<<(num1&num2)<<endl;
		}
		void OR()
		{
			num1=10;
			num2=12;
			cout<<"| of "<<num1<<" and "<<num2<<" is "<<(num1|num2)<<endl;
		}
		void XOR()
		{
			num1=10;
			num2=12;
			cout<<"^ of "<<num1<<" and "<<num2<<" is "<<(num1^num2)<<endl;
		}
	};
int main()
{
	Operator x;
	x.Complement();
	x.Right_Shift();
	x.Left_Shift();
	x.AND();
	x.OR();
	x.XOR();
	return 0;
}
