//Program to find roots of a Quadratic Equation(ax^2+bx+c).(root_quad_eq_shdcrya)
#include <iostream>
#include <math.h>
using namespace std;
void shreedhrayacharya(int a,int b,int c);
int main()
{
	int a,b,c,d;
	cout<<"Enter the value of a,b,c ::";
	cin>>a>>b>>c;
	if(a!=0 && b!=0 && c!=0)
	{
		if(c<0)
			cout<<"Quadratic eqation is :"<<a<<"x^2+"<<b<<"x+"<<"("<<c<<")"<<endl;
			else if(b<0) 	
			cout<<"Quadratic eqation is :"<<a<<"x^2+"<<"("<<b<<"x)+"<<c<<endl;
			else
			cout<<"Quadratic eqation is :"<<a<<"x^2+"<<b<<"x+"<<c<<endl; 	
			shreedhrayacharya(a,b,c);		
	}
	else
		cout<<"Coefficients have 0's so Quad eqns cannot form"<<endl;
	return 0;
}

void shreedhrayacharya(int a,int b,int c)
{
	
	float x1,x2;
		int d=b*b-4*a*c;//discriminant
		if(d<0)
		{
			float real=-b/(2.0*a);
			float imaginery = (sqrt(abs((d))))/(2*a);
			cout<<"x = "<<real<<" +i "<<imaginery<<endl;
			cout<<"x = "<<real<<" -i "<<imaginery<<endl;
		}
		else if(d==0)
		{
			x1=-b/(2*a);
			x2=x1;
			cout<<"\nRoots are :\n";
			cout<<"x = "<<x1;
			cout<<"\nx = "<<x2;		
		}
		else if(d>0)
		{
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			cout<<"\nRoots are :\n";
			cout<<"x = "<<x1;
			cout<<"\nx = "<<x2;
		}
}
