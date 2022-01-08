#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
class Calender
{
	private :
		int date,month,year,days,choice,startingDate;
	public :
		void entryPage()
		{
			cout<<"\n\n\t===============================================\n";
			cout<<"\n\n\t\tC . A . L . E . N . D . A . R\n\n\n\t\t      B . O . O . K\n";
			cout<<"\n\n\t===============================================\n\n\t\t";
			system("pause");
			system("cls");
		}
		int return_WeakDay()
		{
			int temp=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
			return temp;
		}
		void mainMenu()
		{
			while(1)
			{
				system("cls");
				cout<<"\n\n\t\t\tMain Menu\n";
				cout<<"\n\t===============================================\n";
				cout<<"\n\t1.View Calender By Year\n\n\t2.View Calender Of Any Particular Month Of Any Year\n\n\t3.To Get Day By Date\n\n\t4.Exit\n\n\tEnter your choice :";
				cin>>choice;
				switch(choice)
				{
					case 1:	getYear(); 	break;
					case 2:{
						system("cls");
						cout<<"\n\n\t\t\t    C A L E N D A R\n";
						cout<<"\n\t=============================================\n";
						cout<<"\n\n\tEnter Year : ";
						cin>>year;
						cout<<"\n\tEnter Month : ";
						cin>>month;
						startingDate=return_WeakDay();
						cout<<startingDate;
						Calorie(month-1);
						cout<<"\n\n\t";
						system("pause");
						break;
					}
					case 3:{
						system("cls");
						char days[][20]={"Sunday","Monday","TuesDay","Wednesday","Thursday","Friday","Saturday"};
						cout<<"\n\n\t\t\tTo Get Day By Date\n";
						cout<<"\n\t===============================================\n";
						cout<<"\n\n\tEnter Year : ";
						cin>>year;
						cout<<"\n\tEnter Month : ";
						cin>>month;
						cout<<"\n\tEnter Date : ";
						cin>>date;
						int value=getDay(date,month,year);
						cout<<"\n\n\tDate :- "<<date<<"/"<<month<<"/"<<year<<endl;
						cout<<"\n\tDay :- "<<days[value]<<endl;						
						cout<<"\n\t===============================================\n";
						cout<<"\n\n\t";
						system("pause");
						break;
					}
					case 4:	ending();	break;
				}
				cout<<"\n\n\t===============================================\n";
			}
		}
		int getDay(int d,int m,int y)
		{
			int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
			y-=m<3;
			return ((y+y/4-y/100+y/400+t[m-1]+d)%7); 
		}
		void getYear()
		{
			system("cls");
			int i=0;
			char ch;
			cout<<"\n\n\t\t\t   C A L E N D A R\n";
			cout<<"\n\t===============================================\n";
			cout<<"\n\n\tEnter Year : ";
			cin>>year;
			startingDate=return_WeakDay();
			CalShift(i);
			while(1)
			{
				if(i>=11)
				{
					cout<<"\n\n\t";
					system("pause");
					break;
				}
				cout<<"\n\n\tPress::\t N : Next month\n\n\t\t P : Previous month\n\n\t\t B : Back To Menu \n\n\t\t--->";
				cin>>ch;
				ch=toupper(ch);
				if(ch=='N')
					CalShift(++i);
				else if(ch=='P')
					CalShift(--i);
				else if(ch=='B')
					break;
			}
		}
		void Calorie(int I)
		{
			char monthName[][20]={"January","Febuary","March","April","May","June","July","August","September","October","November","December"};			
			int j2=0;
			int noOfDaysInMonth[15]={31,28,31,30,31,30,31,31,30,31,30,31};
			system("cls");
			int k=0;
			if((year%4==0 && year%100!=0)||(year%400==0))
			{
				noOfDaysInMonth[1]=29;
			}
			cout<<"\n\n\t\t\t    C A L E N D E R\n";
			cout<<"\n\t======================================================\n";
			cout<<"\n\n\t--------------------"<<monthName[I]<<" , "<<year<<"--------------------\n";
			cout<<"\n\t Sun\tMon\tTue\tWed\tThurs\tFri\tSat\n";
			for(int l=0; l<=I; l++)
			{
				for(j2=0 ; j2<startingDate; j2++)
				if(l==I)
				cout<<"\t ";
				for(int j=1; j<=noOfDaysInMonth[k]; j++)
				{
					if(l==I)
					cout<<"\t "<<j;
					if(++j2>6)
					{
						if(l==I)					
						cout<<"\t "<<endl;
						j2=0;
					}
					startingDate=j2;
				}
				if(l==I)
				cout<<endl;
				k++;
			}
			cout<<"\n\n\t=======================================================\n";
		}
		void CalShift(int i)
		{
			char monthName[][20]={"January","Febuary","March","April","May","June","July","August","September","October","November","December"};			
			int j2=0;
			int noOfDaysInMonth[15]={31,28,31,30,31,30,31,31,30,31,30,31};
			system("cls");
			if((year%4==0 && year%100!=0)||(year%400==0))
			{
				noOfDaysInMonth[1]=29;
			}
			cout<<"\n\n\t\t\t    C A L E N D E R\n";
			cout<<"\n\t========================================================\n";
			cout<<"\n\n\t--------------------"<<monthName[i]<<" , "<<year<<"--------------------\n";
			cout<<"\n\t Sun\tMon\tTue\tWed\tThurs\tFri\tSat\n";
			for(j2=0 ; j2<startingDate; j2++)
			cout<<"\t ";
			for(int j=1; j<=noOfDaysInMonth[i]; j++)
			{
				for(int i=0; i<=30; i++)
					for(int ii=0; ii<=100; ii++)
						for(int iii=0; iii<=10000; iii++){}
				cout<<"\t "<<j;
				if(++j2>6)
				{
					cout<<"\t "<<endl;
					j2=0;
				}
				startingDate=j2;
			}
			cout<<"\n\n\t=======================================================\n";
		}
		void ending()
		{
			system("cls");
	    	cout<<"\n\n<------------------------------------------------------------------>\n\n";
			cout<<"\n\n\tProgrammer :   Satyam Singh\n\t\t    BCA (II-nd Semester)\n\t\t    SGRR UNIVERSITY\n";
			cout<<"\n\t\tDate : 11-07-2020";
	    	cout<<"\n\n<------------------------------------------------------------------>\n\n";
			exit(0);
		}			
};
int main()
{
	Calender C1;
	C1.entryPage();
	C1.mainMenu();
}
