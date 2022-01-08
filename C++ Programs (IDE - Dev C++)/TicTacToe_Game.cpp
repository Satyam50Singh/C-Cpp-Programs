#include <iostream>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>

using namespace std;
void gotoxy(int x, int y)
{	
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);	
}
void load()
{
    gotoxy(36,14);
    printf("loading...");
    gotoxy(30,15);
    for(int r=1; r<=20; r++)
    {
        for(int q=0; q<=100000000; q++){} //to display the character slowly
        	cout<<(char)177;    	
	}
}

class TicTacToe
{
	private :
		char val,arr[10],name1[25],name2[25];
		int player,i1;
	public :
		int j;
	void intitaliseChar()
	{
		arr[0]='1';		arr[1]='2';
		arr[2]='3';		arr[3]='4';
		arr[4]='5';		arr[5]='6';
		arr[6]='7';		arr[7]='8';
		arr[8]='9';
	}
	void entryGate()
	{
		gotoxy(12,2);
    	cout<<"\n\n\t\t<---------------------------Tic-Tac-Toe--------------------------->\n\n";
  		cout<<"\n\tRULES FOR TIC-TAC-TOE\n\n";
  		cout<<"\t1. The game is played on a grid that's 3 squares by 3 squares.\n";
  		cout<<"\t2. You are X, your friend (or the computer in this case) is O. \n\t    Players take turns putting their marks in empty squares.\n";
  		cout<<"\t3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.\n";
  		cout<<"\t4. When all 9 squares are full, the game is over. \n\t    If no player has 3 marks in a row, the game ends in a tie.\n";
    	cout<<"\n\n\t\t<------------------------------------------------------------------>\n\n\t";
		system("pause");
		system("cls");
    	cout<<"\n\n\t\t<------------------------W E L C O M E------------------------>\n\n";
		cout<<"\n\n\t\tUser 1,\n\n\t\t\tEnter name : ";
		cin.getline(name1,15);
		cout<<"\n\n\t\t\tMarking Sign for User 1 : X\n\n";
		cout<<"\n\n\t\tUser 2,\n\n\t\t\tEnter name : ";
		cin.getline(name2,15);
		cout<<"\n\n\t\t\tMarking Sign for User 2 : 0\n\n";
    	cout<<"\n\n\t\t<------------------------------------------------------------------>\n\n\t";
		system("pause");
		system("cls");
		load();	
		system("cls");
	}
	void body()
	{
		system("cls");
    	cout<<"\n\n<------------------------------------------------------------------>\n\n";
		cout <<	"\n\t __________________________\n";
		cout <<	"\t|	 |  	  |	   |\n";
		cout << "\t|   "<<arr[0]<<"    |    "<<arr[1]<<"   |    "<<arr[2]	<<"   |"<<endl;
		cout <<	"\t|________|________|________|\n";
		cout <<	"\t|	 |	  |	   |\n";
		cout << "\t|   "<<arr[3]<<"    |    "<<arr[4]<<"   |    "<<arr[5]	<<"   |"<<endl;
		cout <<	"\t|________|________|________|\n";
		cout <<	"\t|	 |	  |	   |\n";
		cout << "\t|   "<<arr[6]<<"    |    "<<arr[7]<<"   |    "<<arr[8]	<<"   |"<<endl;
		cout <<	"\t|________|________|________|\n\n";
	}
	void play()
	{
		int res=0;
		i1=0;
		player=1;
		do
		{
			if(player)
			{
				cout<<"\n\n\tPlayer 1 : "<<name1<<" :: X\n";
				Answer();
				player=0;
			}
			else
			{
				cout<<"\n\n\tPlayer 2 : "<<name2<<" :: 0\n";
				Answer();
				player=1;				
			}
			res=checkResult();						
		}while(res!=1);
	}
	void Answer()
	{
		j=0;
		char ch;
		if(player)
			ch='X';
		else
			ch='0';
		cout<<"\n\n\tEnter the position number : ";
		cin>>val;
		for(char i=49; i<=57; i++)
		{
			if(arr[j]==val)
			{
				arr[j]=ch;
				body();					
			}
			j++;
		}				
	}
	int checkResult()
	{
		int n=0;
		if(arr[0]==arr[1] && arr[1]==arr[2])
			n=1;
		else if(arr[3]==arr[4] && arr[4]==arr[5])
			n=1;
		else if(arr[6]==arr[7] && arr[7]==arr[8])
			n=1;
		else if(arr[0]==arr[3] && arr[3]==arr[6])
			n=1;
		else if(arr[1]==arr[4] && arr[4]==arr[7])
			n=1;
		else if(arr[2]==arr[5] && arr[5]==arr[8])
			n=1;
		else if(arr[0]==arr[4] && arr[4]==arr[8])
			n=1;
		else if(arr[2]==arr[4] && arr[4]==arr[60])
			n=1;
		else if(arr[0]!='1' && arr[1]!='2' && arr[2]!='3' && arr[3]!='4' && arr[4]!='5' && arr[5]!='6' && arr[6]!='7' && arr[7]!='8' && arr[8]!='9')
		{			n=5;		}
		else
			n==-1;
		if(n==5)
		{
			system("pause");
			system("cls");
			cout<<"\n\n<---------------------R E S U L T-C A R D--------------------->\n\n";
			body();
			cout<<"\n\n\t!!MATCH-DRAW!!\n";
			Ending();
			getch();			
			exit(0);
		}
		else if(n==1)
		{
			system("cls");
			cout<<"\n\n<---------------------R E S U L T-C A R D--------------------->\n\n";
			body();
			if(player!=1)
				cout<<"\n\n\tWinner : "<<name1<<"\n";
			else
				cout<<"\n\n\tWinner : "<<name2<<"\n";
			Ending();						
		}
		return n;
	}
	void Ending()
	{
    	cout<<"\n\n<------------------------------------------------------------------>\n\n";
		cout<<"\n\n\tProgrammer :   Satyam Singh\n\t\t    BCA (II-nd Semester)\n\t\t    SGRR UNIVERSITY\n";
		cout<<"\n\t\t    Date : 27-06-2020";
    	cout<<"\n\n<------------------------------------------------------------------>\n\n";
	}
};

int main()
{
	TicTacToe T1;
	T1.j=0;	
	T1.intitaliseChar();
	T1.entryGate();
	T1.body();
	T1.play();	
	return 0;
}
