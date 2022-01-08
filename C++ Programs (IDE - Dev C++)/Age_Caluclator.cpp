//Program to calculate the accurate age if the date of birth is given in DD -MM -YYYY..(Age_Caluclator)
#include <iostream>
using namespace std;
struct current_Date
{
	int dd,mm,yy;
	struct date_Of_Birth
	{
		int dd2,mm2,yy2;
	}x2;
	struct new_age
	{
		int ndd,nmm,nyy;
	}x3;
}x1;
class age
{
	public :
		void get_Current_Date()
		{			
			cout<<"Enter Current date (DD_MM_YYYY):\n";
			cout<<"Enter Date : ";
			cin>>x1.dd;
			cout<<"Enter Month : ";
			cin>>x1.mm;			
			cout<<"Enter Year : ";
			cin>>x1.yy;
		}
		void get_date_Of_Birth()
		{
			cin.ignore();
			cout<<"Enter Date of Birth (DD_MM_YYYY):\n";
			cout<<"Enter Date : ";
			cin>>x1.x2.dd2; 
			cin.ignore();
			cout<<"Enter Month : ";
			cin>>x1.x2.mm2;			
			cin.ignore();
			cout<<"Enter Year : ";
			cin>>x1.x2.yy2;			
		}
		void disp_Current_Date()
		{
			cout<<"Current Date is : ";
			if(x1.dd<=9)
			cout<<"0"<<x1.dd<<"-";
			else
			cout<<x1.dd<<"-";
			if(x1.mm<9)
			cout<<"0"<<x1.mm;
			else
			cout<<x1.mm;
			cout<<"-"<<x1.yy<<endl;	
		}
		void disp_date_Of_Birth()
 		{
			cout<<"Date Of Birth is : ";
			if(x1.x2.dd2<=9)
			cout<<"0"<<x1.x2.dd2<<"-";
			else
			cout<<x1.x2.dd2<<"-";
			if(x1.x2.mm2<9)
			cout<<"0"<<x1.x2.mm2;
			else
			cout<<x1.x2.mm2;
			cout<<"-"<<x1.x2.yy2<<endl;	
 		}
		void age_calculate()
		{
			x1.x3.ndd=x1.dd-x1.x2.dd2;
			x1.x3.nmm=x1.mm-x1.x2.mm2;
			x1.x3.nyy=x1.yy-x1.x2.yy2;
			
			if(x1.x3.ndd<0)
			{
				x1.x3.ndd+=30;
				x1.x3.nmm-=1;
			}
			if(x1.x3.nmm<0)
			{
				x1.x3.nmm+=12;
				x1.x3.nyy-=1;
			}
			else
			{
				x1.x3.ndd++;
			}
		}
		void dis_Age()
		{
			cout<<"You are "<<x1.x3.nyy<<" Years "<<x1.x3.nmm<<" Months & "<<x1.x3.ndd<<" Days Old"<<endl; 						
		}
};
int main()
{
	age obj;
	obj.get_Current_Date();
	obj.get_date_Of_Birth();
	system("cls");
	obj.disp_Current_Date();
	obj.disp_date_Of_Birth();
	obj.age_calculate();
	obj.dis_Age();	
	return 0;
	
}
