#include <iostream>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <windows.h>

using namespace std;
void drawLine(char sym,int time);
int V=1;
void gotoxy(int x, int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void drawLine(char sym,int time)
{
	cout<<"\n    ";
	for(int i=0; i<time; i++)
		cout<<sym<<"";
	cout<<"\n\n\t";
}

class QuizGame
{
	private :
		string str[19],str2[19];
		int val,choice,TEMP,times;
		char ch,temp,ans,name[20];
	public :
		QuizGame()
		{
			times=0;
			val=0;
		}
		void entryPage()
		{			
			system("cls");
			cout<<endl;
			drawLine('=',55);	
			cout<<"===============================================";
			cout<<"\n\n\n\t\tQ . U . I . Z  --  G . A . M . E\n";
			cout<<"\n\n\t\t\t     --OR--"<<endl;
			cout<<"\n\n\t	     KAUN BANEGA CROREPATI\n\n";
			cout<<"\n	===============================================\n";
			drawLine('=',55);
			system("pause");
		}
		void mainMenu()
		{
			while(1)
			{
				system("cls");
				drawLine('=',55);
				cout<<"\t	MAIN MENU\n";
				drawLine('=',55);
				cout<<"\n\n\t    1. PLay Game\n\n\t    2. View Records\n\n\t    3. Clear Player's Record\n\n\t    4. Exit\n\n\n\tEnter your choice <1-4> :: ";
				cin>>choice;
				switch(choice)
				{
					case 1:	getPlayerInfo();	break;
					case 2:	viewRecord(); break;
					case 3:	clearRecord(); 	break;
					case 4: ending();	break;
					default :	cout<<"\n\n\t\tWRONG CHOICE!!";	break;
				};
			}
		}		
		void getPlayerInfo()
		{	
			char c;
			system("cls");
			drawLine('=',55);
			cout<<"	Q . U . I . Z  --  G . A . M . E\n";
			drawLine('=',55);
			cout<<"\n\tEnter Name : ";
			fflush(stdin);
			cin.getline(name,25);
			cout<<"\n\n\tHello ,\n\t	"<<name;
			cout<<"\n\n\tAre you ready to play (Y/N) :: ";
			cin>>c;
			if(c=='Y' || c=='y')
			{
				drawLine('=',55);
				system("pause");
				getQues();		
			}
			else
				mainMenu();
		}
		void questionSeries(int y)
		{			
			str[14]="	15	10 Crore";		str[13]="	14	7 Crore";
			str[12]="	13	3 Crore";		str[11]="	12	1 Crore";
			str[10]="	11 	50,00,000";		str[9]="	10	25,00,000";
			str[8]="	9	12,50,000";		str[7]="	8	6,40,000";
			str[6]="	7	3,20,000";		str[5]="	6	1,60,000";
			str[4]="	5	80,000";		str[3]="	4	40,000";
			str[2]="	3	20,000";		str[1]="	2	10,000";
			str[0]="	1	5,000";
			system("cls");
			drawLine('=',55);
			cout<<"\tQuestion-Series\n";
			drawLine('=',55);
			for(int l=14; l>=0; l--)
			{
				if(y-1==l)
					cout<<"\t"<<str[l]<<"    <----YOU-ARE-HERE";
				else if(l==14)
					cout<<str[l]<<"\t";
				else
					cout<<"\t"<<str[l]<<"\t";
				cout<<endl;			
			}
			drawLine('=',55);
			system("pause");			
		}
		void getQues()
		{
			srand(time(0));
			for(int A=0; A<15; A++)
			{
				++times;
				int ran=rand()%33+1;
				if(V==0)
					break;
				fstream inFile;
				inFile.open("Question.txt",ios::in);
				if(!inFile)
				{
					cout<<"\n\nFile Doesn't Open properly!!\n";
					getch();
					exit(0);
				}
				questionSeries(V);
				system("cls");
				cout<<"\n\n\t\t  	"<<name<<endl;
				drawLine('=',65);
				cout<<"\t	Question No."<<V<<"\n\n\t"; 	
				val=0;
				while(inFile.eof()==0)
				{
					inFile.get(ch);
					if(ch=='Q')
						val++;	
					if(val==ran)
					{
						if(ch=='(')
							cout<<"\t";
						cout<<ch;
					}
				}
				inFile.close();
				timer();
				getAnswer(ran);							
			}
			if(times==15)
			{
				system("cls");
				cout<<"\n\n\t\t  	"<<name<<endl;
				drawLine('=',65);
				cout<<"\n\n\t	Congrats!You Won...\n\n\t";
				cout<<"\n\n\tTotal Winning Amount is : "<<str2[TEMP-1]<<endl;
				system("pause");
				createRecord();				
			}
		}
		void timer()
		{
			gotoxy(20,15);
			cout<<"<---Time To Think--->";
			gotoxy(21,16);
			cout<<"Timer :- 00:00:";
			for(int i=15; i>=0; i--)
			{
				for(int j=0; j<=250; j++)
				for(int jj=0; jj<=950; jj++)
				for(int jjj=0; jjj<2000; jjj++){}
				gotoxy(36,16);
				if(i<=9)
					cout<<"0"<<i<<"Sec";
				else
					cout<<i<<"sec"<<endl;
			}
		}
		void getAnswer(int ran)
		{
			cout<<"\n\n\tChoose the Correct one : ";
			fflush(stdin);
			cin>>ans;
			cout<<"\n\tCorrect Answer : ";
			fstream inFile;
			inFile.open("Answer.txt",ios::in);
			if(!inFile)
			{
				cout<<"\n\nFile Doesn't Open properly!!\n";
				getch();
				exit(0);
			}
			int t=0,I=0;
			char ch;
			while(inFile.eof()==0)
			{
				inFile>>ch;
				if(ch==':')
					t++;
				if(t==ran)
				{
					if(ch!=':')
					{
						temp=ch;
						cout<<ch;						
					}
				}
			}
			inFile.close();
			checkResult();
		}
		void checkResult()
		{
			str2[14]="10 Crore";		str2[13]="7 Crore";
			str2[12]="3 Crore";			str2[11]="1 Crore";
			str2[10]="50,00,000";		str2[9]="25,00,000";
			str2[8]="12,50,000";		str2[7]="6,40,000";
			str2[6]="3,20,000";			str2[5]="1,60,000";
			str2[4]="80,000";			str2[3]="40,000";
			str2[2]="20,000";			str2[1]="10,000";
			str2[0]="5,000";			str2[-1]="Null";
			if(temp==ans)
			{
				cout<<"\n\n\t	Congrats!You Won...\n\n\t";
				TEMP=V;
				V++;
			}
			else 
			{
				cout<<"\n\n\t	Oops!!You Lose!!\n\t";
				V=0;
				cout<<"\n\n\tTotal Winning Amount is : "<<str2[TEMP-1];
				createRecord();
			}
			cout<<"\n\t";
			drawLine('=',55);
			system("pause");			
		}
		int createRecord()
		{
			fstream file;
			file.open("QuizRecord.txt",ios::app);
			if(!file)
			{
				cout<<"\n\tFile Doesn't Opened Succesfully!!\n";
				getch();
				exit(0);
			}
			file<<"\t"<<name<<"\t\t"<<str2[TEMP-1]<<endl;
			file<<"\n\t--------------------------------\n";
			file.close();
			return 1;
		}
		void viewRecord()
		{
			system("cls");
			cout<<"\n\n\t	TOP SCORER LIST\n";
			drawLine('=',50);
			fstream file;
			file.open("QuizRecord.txt",ios::in);
			if(!file)
			{
				cout<<"\n\tFile Doesn't Opened Succesfully!!\n";
				getch();
				exit(0);
			}
			cout<<"\n\tPlayers\t\t    Winning Amt\n\n";
			char c;
			while(file.eof()==0)
			{
				file.get(c);
				cout<<c;
			}
			file.close();
			drawLine('=',50);
			system("pause");			
		}
		void clearRecord()
		{
			system("cls");
			cout<<"\n\n\t	Clear History\n";
			drawLine('=',50);
			fstream file;
			file.open("QuizRecord.txt",ios::out);
			if(!file)
			{
				cout<<"\n\tFile Doesn't Opened Succesfully!!\n";
				getch();
				exit(0);
			}
			file.close();
			cout<<"\n\t   Record Clear Successfully\n";
			drawLine('=',50);
			system("pause");			
		}
		void ending()
		{
			system("cls");
			drawLine('=',55);
			cout<<"\n\n\t\tProgrammer :   Satyam Singh\n\t\t\t    BCA (II-nd Semester)\n\t\t\t    SGRR UNIVERSITY\n";
			cout<<"\n\t\t\tDate : 17-07-2020\n\n";
			cout<<"\t\t\t Day : Friday\n\n";
			drawLine('=',55);
			exit(0);
		}		
};
int main()
{
	QuizGame Q1;
	Q1.entryPage();
	Q1.mainMenu();
	return 0;
}
