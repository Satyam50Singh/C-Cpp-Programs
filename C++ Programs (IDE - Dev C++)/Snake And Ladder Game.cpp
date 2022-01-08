#include <iostream>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
#include <unistd.h>
#include <windows.h>
using namespace std;
HANDLE h=GetStdHandle( STD_OUTPUT_HANDLE );
void gotoxy(int x,int y)
{
	COORD C;
	C.X=x;
	C.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), C);
}
void drawLine(char sym,int time)
{
	cout<<"\n    ";
	for(int i=0; i<time; i++)
		cout<<sym<<"";
	cout<<"\n\n\t";
}
void load()
{
    int row,col,r,c,q;
    system("cls");
    gotoxy(36,14);
    printf("loading...");
    gotoxy(30,16);
	SetConsoleTextAttribute(h,7|FOREGROUND_INTENSITY);    
    for(r=1; r<=20; r++)
        for(q=0; q<=100000000; q++); 
	        cout<<(char)177;
	SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);    
	cout<<"\n\n\t\t\t    Press ENTER to start....";
    getch();
}

class SnakeAndLadder
{
	private :
		char agree,name1[20],name2[20];
		int choice,ran,arr[10][10],pos[3],a;	
	public :
		SnakeAndLadder()
		{
			pos[0]=0;
			pos[1]=0;
			a=0;
			for(int i=0; i<10; i++)
				for(int j=0; j<10; j++)
					arr[i][j]=++a;
		}
		void entryPage()
		{
			SetConsoleTextAttribute(h,BACKGROUND_BLUE|BACKGROUND_INTENSITY);
			system("cls");
			cout<<endl;
			drawLine('=',55);	
			cout<<"===============================================";
			cout<<"\n\n\n\t\t\t SNAKE & LADDER \n";
			cout<<"\n\n\t\t\t    G A M E"<<endl;
			cout<<"\n	===============================================\n";
			drawLine('=',55);
			system("pause");
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		}
		void mainMenu()
		{
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			while(1)
			{
				system("cls");
				SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
				drawLine('=',55);
				cout<<"\t	MAIN MENU\n";
				drawLine('=',55);
				cout<<"\n\n\t    1. PLay Game\n\n\t    2. Exit\n\n\n\tEnter your choice <1-2> :: ";
				cin>>choice;
				switch(choice)
				{
					case 1:	getPlayersInfo();	break;
					case 2: ending();	break;
					default :	cout<<"\n\n\t\tWRONG CHOICE!!";	break;
				};
			}
		}
		void getPlayersInfo()
		{
			char c1,c2;
			system("cls");
			drawLine('=',55);
			cout<<"\t\t  SNAKE & LADDER \n";
			drawLine('=',55);
			cout<<"\n\tEnter Name of Player 1 : ";
			fflush(stdin);
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin.getline(name1,25);
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tEnter Name of Player 2 : ";
			fflush(stdin);
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin.getline(name2,25);
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			drawLine('-',55);
			cout<<"\n\tHello ,\n\t	"<<name1;
			cout<<"\n\n\tAre you ready to play (Y/N) :: ";
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin>>c1;
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\n\tHello ,\n\t	"<<name2;
			cout<<"\n\n\tAre you ready to play (Y/N) :: ";
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin>>c2;
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			if((c1=='Y' || c1=='y') && (c2=='Y' || c2=='y'))
			{
				drawLine('=',55);
				system("pause");
				load();
				showBoard(0,1);
			}
			else
				mainMenu();
		}
		void showBoard(int x, int y)
		{
			system("cls");
			drawLine('=',66);
			cout<<"\t\t    SNAKE & LADDER \n";
			drawLine('=',66);
			cout<<"\t\t\tDenotations ::\n";
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<"\t\tSS-->Snake";
			SetConsoleTextAttribute(h,5|FOREGROUND_INTENSITY);
			cout<<"			LL-->Ladders\n";
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<endl;
			for(int j=9; j>=0; j--)
			{
				if(j%2==0)
				{
					if(j==0)
						cout<<" START-->";
					else
						cout<<"\t ";
					for(int i=0; i<10; i++)
					{
						if(pos[x]==arr[j][i] && pos[y]==arr[j][i])
						{
							SetConsoleTextAttribute(h,2|FOREGROUND_INTENSITY);
							cout<<"P1P2  ";
							SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);							
						}
						else if(pos[x]==arr[j][i])
						{
							SetConsoleTextAttribute(h,2|FOREGROUND_INTENSITY);
							cout<<"P1    ";
							SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
						}
						else if(pos[y]==arr[j][i])
						{
							SetConsoleTextAttribute(h,2|FOREGROUND_INTENSITY);
							cout<<"P2    ";
							SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
						}
						else
						{
							if(arr[j][i]==83 || arr[j][i]==27 || arr[j][i]==35 || arr[j][i]==39 ||
							 arr[j][i]==50 || arr[j][i]==59 || arr[j][i]==66 || arr[j][i]==89)
							{
								SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
								cout<<"SS    ";
								SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
							}
							else if(arr[j][i]==87 ||arr[j][i]==70 ||arr[j][i]==54 ||arr[j][i]==2 ||
							arr[j][i]==7 || arr[j][i]==22 || arr[j][i]==28 || arr[j][i]==30|| arr[j][i]==44)
							{
								SetConsoleTextAttribute(h,5|FOREGROUND_INTENSITY);
								cout<<"LL    ";
								SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);							
							}
							else
							{
								if(arr[j][i]<10)
									cout<<"0"<<arr[j][i]<<"    ";
								else
									cout<<""<<arr[j][i]<<"    ";							
							}
						}
						
					}
				}
				else
				{
					if(j!=9)
						cout<<"\t ";
					else
						cout<<"  END-->";
					for(int i=9; i>=0; i--)
					{
						if(pos[x]==arr[j][i] && pos[y]==arr[j][i])
						{
							SetConsoleTextAttribute(h,2|FOREGROUND_INTENSITY);
							cout<<"P1P2  ";
							SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
							
						}
						else if(pos[x]==arr[j][i])
						{
							SetConsoleTextAttribute(h,2|FOREGROUND_INTENSITY);
							cout<<"P1    ";
							SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
						}
						else if(pos[y]==arr[j][i])
						{
							SetConsoleTextAttribute(h,2|FOREGROUND_INTENSITY);
							cout<<"P2    ";
							SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
						}
						else
						{
							if(arr[j][i]==27 || arr[j][i]==35 || arr[j][i]==39 || arr[j][i]==50 ||
							 arr[j][i]==59 || arr[j][i]==73 || arr[j][i]==76 || arr[j][i]==97 || arr[j][i]==99)
							{
								SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
								cout<<"SS    ";
								SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);						
							}
							else if(arr[j][i]==54 || arr[j][i]==80)
							{
								SetConsoleTextAttribute(h,5|FOREGROUND_INTENSITY);
								cout<<"LL    ";
								SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);							
							}
							else{	cout<<arr[j][i]<<"    ";	}
						}
					}						
				}
				cout<<endl<<endl;
			}
			drawLine('=',66);
			system("pause");
			playGame();
		}
		void ladder()
		{
			SetConsoleTextAttribute(h,2|FOREGROUND_INTENSITY);			
			gotoxy(44,6);
			cout<<char(218)<<"---------------------------"<<char(191);
			gotoxy(44,7);
			cout<<"|				|\n";
			gotoxy(44,8);
			cout<<"|  	 Ladder's Postion	|";
			gotoxy(44,9);
			cout<<"|				|";
			gotoxy(44,10);
			cout<<"|	 1. From 2 to 23	|";
			gotoxy(44,11);
			cout<<"|	 2. From 7 to 29	|";
			gotoxy(44,12);
			cout<<"|	 3. From 22 to 41	|";
			gotoxy(44,13);
			cout<<"|	 4. From 28 to 77	|";
			gotoxy(44,14);
			cout<<"|	 5. From 30 to 32	|";
			gotoxy(44,15);
			cout<<"|	 6. From 44 to 58	|";
			gotoxy(44,16);
			cout<<"|	 7. From 54 to 69	|";
			gotoxy(44,17);
			cout<<"|	 8. From 70 to 90	|";
			gotoxy(44,18);
			cout<<"|	 9. From 80 to 83	|";
			gotoxy(44,19);
			cout<<"|	 10. From 87 to 93	|";
			gotoxy(44,20);
			cout<<char(192)<<"---------------------------"<<char(217)<<endl;
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		}
		void setSnake()
		{
			SetConsoleTextAttribute(h,2|FOREGROUND_INTENSITY);			
			gotoxy(6,6);
			cout<<char(218)<<"-------------------------"<<char(191);
			gotoxy(6,7);
			cout<<"|				|\n";
			gotoxy(6,8);
			cout<<"|    Snake's Postion	|";
			gotoxy(6,9);
			cout<<"|				|\n";
			gotoxy(6,10);
			cout<<"|	  1. At 27 to 7		|";
			gotoxy(6,11);
			cout<<"|	  2. At 35 to 5		|";
			gotoxy(6,12);
			cout<<"|	  3. At 39 to 3		|";
			gotoxy(6,13);
			cout<<"|	  4. At 50 to 34	|";
			gotoxy(6,14);
			cout<<"|	  5. At 59 to 46	|";
			gotoxy(6,15);
			cout<<"|	  6. At 66 to 24	|";
			gotoxy(6,16);
			cout<<"|	  7. At 73 to 12	|";
			gotoxy(6,17);
			cout<<"|	  8. At 76 to 63	|";
			gotoxy(6,18);
			cout<<"|	  9. At 89 to 67	|";
			gotoxy(6,19);
			cout<<"|	  10. At 97 to 86	|";
			gotoxy(6,20);
			cout<<"|	  11. At 99 to 26	|";
			gotoxy(6,21);
			cout<<char(192)<<"-------------------------"<<char(217)<<endl<<endl;
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
		}
		void playGame()
		{
			system("cls");
			drawLine('=',72);
			cout<<"\t\t    SNAKE & LADDER \n";
			drawLine('=',72);
			setSnake();
			ladder();
			drawLine('=',72);
			system("pause");
			startGame();
		}
		void startGame()
		{
			system("cls");
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			srand(time(0));
			drawLine('=',55);
			cout<<"\t\tSNAKE & LADDER \n";
			drawLine('=',55);
			cout<<"PLayer 1 :: ";
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<name1<<endl;
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tCurrent position is : "<<pos[0]<<endl;
			cout<<"\n\tpress ENTER to roll dice...";
			getch();
			ran=rand()%6+1;
			cout<<"\tYou got : "<<ran<<endl;
			cout<<"\n\tNow you are at position :: "<<returnPos(ran,0);
			drawLine('-',55);
			cout<<"PLayer 2 :: ";
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<name2<<endl;
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tCurrent position is : "<<pos[1]<<endl;
			cout<<"\n\tpress ENTER to roll dice...";
			getch();
			ran=rand()%6+1;
			cout<<"\tYou got : "<<ran<<endl;
			cout<<"\n\tNow you are at position :: "<<returnPos(ran,1);
			drawLine('-',55);
			system("pause");			
			if(pos[0]!=100 && pos[1]!=100 )
				showBoard(0,1);			
			else if(pos[0]>=100)
				winner(0);
			else if(pos[1]>=100)
				winner(1);
		}
		int returnPos(int ran,int i)
		{
			pos[i]+=ran;
			if(pos[i]==2 || pos[i]==7 || pos[i]==22 || pos[i]==28 || pos[i]==30 || 
			pos[i]==44 || pos[i]==55 || pos[i]==70 || pos[i]==80 || pos[i]==87 )
			{
				cout<<"\n\tYeahhh!!!You got a ladder's position.\n";
			}
			else if(pos[i]==27 || pos[i]==35 || pos[i]==39 || pos[i]==50 || pos[i]==59 || 
			pos[i]==66 || pos[i]==73 || pos[i]==76 || pos[i]==89 || pos[i]==97 || pos[i]==99 )
			{
				cout<<"\n\tOops!!!You have bitten by a snake...\n";				
			}
			switch(pos[i])
			{
				case 2: 	pos[i]=23;	break;
				case 7: 	pos[i]=29;	break;
				case 22:	pos[i]=41;	break;
				case 28:	pos[i]=77;	break;
				case 30:	pos[i]=32;	break;
				case 44:	pos[i]=58;	break;
				case 54:	pos[i]=69;	break;
				case 70:	pos[i]=90;	break;
				case 80:	pos[i]=83;	break;
				case 87:	pos[i]=93;	break;
				
				case 27:	pos[i]=7;	break;
				case 35:	pos[i]=5;	break;
				case 39:	pos[i]=3;	break;
				case 50:	pos[i]=34;	break;
				case 59:	pos[i]=46;	break;
				case 66:	pos[i]=24;	break;
				case 73:	pos[i]=12;	break;
				case 76:	pos[i]=63;	break;
				case 89:	pos[i]=67;	break;
				case 97:	pos[i]=86;	break;
				case 99:	pos[i]=26;	break;
			};
			return pos[i];
		}
		void winner(int a)
		{
			system("cls");
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			srand(time(0));
			drawLine('=',55);
			cout<<"\t\tSNAKE & LADDER \n";
			drawLine('=',55);
			cout<<"\n\n \t\t WINNER IS :: ";
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			if(a==0)
			cout<<name1<<endl;
			else
			cout<<name2<<endl;
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			drawLine('=',55);
			system("pause");
		}
		void ending()
		{
			system("cls");
			drawLine('=',65);
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<"\n\n\t\tProgrammer :   Satyam Singh\n\t\t\t    BCA (II-nd Semester)\n\t\t\t    SGRR UNIVERSITY\n";
			cout<<"\n\t\t\tDate : 19-07-2020\n\n";
			cout<<"\t\t\t Day : Sunday\n\n";
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			drawLine('=',65);
			exit(0);
		}
};
int main()
{
	
	SnakeAndLadder S1;
	S1.entryPage();
	S1.mainMenu();
	return 0;
}
