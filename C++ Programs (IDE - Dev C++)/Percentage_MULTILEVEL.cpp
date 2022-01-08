/*Write a Program to calculate the percentage of student using Multilevel Inheritance Accept the marks of three 
subjects in base classes a class will derived from the above mention class which includes a fn to find a total marks 
Obtained and another class derived from thus class which calculates and displays the percentage of student.(Percentage_MULTILEVEL)
*/#include <iostream>
using namespace std;
class A
{
	public :
		int m1,m2,m3;
		void getdata()
		{
			cout<<"Enter the Marks of Three Best Subjects :";
			cin>>m1>>m2>>m3;
		}
		
};
class B :public A
{
	public :
		int total;
		void Total_Marks()
		{
			cout<<"\nEnter the Total marks : ";
			cin>>total;
		}
		
};
class C :public B
{
	private:
		 
		double sum,percent;
	public :
		void Result()
		{
			sum=m1+m2+m3;
			percent=(sum*100)/total;
			cout<<"\nPercentage of student is :"<<percent;
		}
		
};
int main()
{
	C x;
	x.getdata();
	x.Total_Marks();
	x.Result();
	return 0;
}
