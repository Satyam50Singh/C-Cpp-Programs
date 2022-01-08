//Program to add two complex no.s(Add_complex no.s)
#include <iostream>
using namespace std;
struct complex
{
	float real,img;	
};
int main()
{
	complex x,y,nx;
	cout<<"Enter the first complex no. :"<<endl;
	cout<<"Enter real value : ";
	cin>>x.real;
	cout<<"Enter Imaginery Value : ";
	cin>>x.img;	
	cout<<"Enter the second complex no. :"<<endl;
	cout<<"Enter real value : ";
	cin>>y.real;
	cout<<"Enter Imaginery Value : ";
	cin>>y.img;
	
	nx.real=x.real+y.real;
	nx.img=x.img+y.img;
	
	if(nx.img>=0)
	cout<<endl<<"Sum is :"<<nx.real<<"+"<<nx.img<<"i"<<endl;
	else
	cout<<endl<<"Sum is :"<<nx.real<<""<<nx.img<<"i"<<endl;
	return 0;
}
