#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <windows.h>
#define MAX 9
HANDLE h=GetStdHandle( STD_OUTPUT_HANDLE );

using namespace std;
class Sudoku
{
	private :
	int ran,arr[10][10];
	char name[15],ch;
	public :
		void enrtyPage()
		{
			system("cls");
			cout<<"\n\n\t==================================================\n";
			cout<<"\n\n\t\t\t    S U D O K U\t\t\t\n";
			cout<<"\n\n\t===================================================\n\t";
			system("pause");
		}
		void createTable()
		{
			char ch;
			system("cls");
			cout<<"\n\t===================================================\n";
			cout<<"\n\t\t    S U D O K U--G A M E\n";
			cout<<"\n\t===================================================\n\t";
			cout<<"\n\n\tEnter your name : ";
			cin.getline(name,15);
			cout<<"\n\tAre You above more than 3 years old : ";
			cin>>ch;
			if(ch=='y'|| ch=='Y')
			{
				cout<<"\n\tHello,\n\n\t   "<<name<<"\n";
				cout<<"\n\tAre you ready to play (Y/N) :: ";
				cin>>ch;
				if(ch=='Y' || ch=='y')
				{
					showBoard();
				}
				else
				{
//					mainMenu();
				}
			}
			else
			{
				cout<<"\t\tSorry, But u are not applicable..... ";
				cout<<"\n\n\t========================================================\n\t";
				exit(0);
			}
		}
		showBoard()
		{
			system("cls");
			cout<<"\n\t===================================================\n";
			cout<<"\n\t\t    S U D O K U--G A M E\n";
			cout<<"\n\t===================================================\n\t";
			fstream file;
			file.open("SudoNumber.txt",ios::in);
			int ch;
			int j=0;
			int i=0;
			while(file.eof()==0)
			{
				file>>ch;
				arr[i][j++]=ch;
				if(j==9)
				{
					i++;
					j=0;
				}
			}
			file.close();
			
			cout<<"\n\t   1   2   3   4   5   6   7   8   9\n";
			cout<<"\t "<<char(218)<<"-----------------------------------"<<char(191)<<endl;
			for(int i=0; i<9; i++)
			{
				cout<<"\t"<<(i+1)<<"| ";
				for(int j=0; j<9; j++)
				{
					cout<<arr[i][j]<<" | ";
				}
			if(i!=8)
			
			cout<<"\n\t |---|---|---|---|---|---|---|---|---|\n";	
			}
			cout<<"\n\t "<<char(192)<<"-----------------------------------"<<char(217)<<endl;

		}
		void play()
		{
			cout<<"\n\tEnter the rowth position no : ";
			cout<<"\n\tEnter the column position no : ";
			cout<<"\n\tEnter the no. which u have to put at this location : ";
		}
};
int main ()
{
	Sudoku S1;
	S1.enrtyPage();
	S1.createTable();
	S1.play();
	

	return 0;
}
