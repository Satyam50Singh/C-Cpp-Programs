//Program to add two distance (in inch-feet) System using Structure.(add_distance_inchfeet)
#include <iostream>
using namespace std;
struct distance
{
	int feet;
	int inch;
};
int main()
{
	 struct distance x,x2,nx;
	cout<<"Enter the information for 1st distance :\n";
	cout<<"Enter feet :";
	cin>>x.feet;
	cout<<"Enter inch :";
	cin>>x.inch;
	
	cout<<"Enter the information for 2nd distance :\n";
	cout<<"Enter feet :";
	cin>>x2.feet;
	cout<<"Enter inch :";
	cin>>x2.inch;
	nx.feet=x.feet+x2.feet;
	nx.inch=x.inch+x2.inch;
	
	if(nx.inch>12)
	{
		nx.feet++;
		nx.inch-=12;
	}
	
	cout<<endl<<"THE NEW DISTANCE IS :"<<endl;
	cout<<"Feet :"<<nx.feet<<endl<<"Inch :"<<nx.inch;	
	return 0;
}
