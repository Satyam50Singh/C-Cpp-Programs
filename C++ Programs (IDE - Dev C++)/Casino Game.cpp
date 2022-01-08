#include <iostream>
#include <conio.h>
#include <time.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

class Casino
{
	private :
		int choice,ran,guessNumber,temp,chance,bal[7],amount[8];
		char ch,name[7][15];
	public :
		void drawLine(char sym,int time)
		{
			cout<<"\n    ";
			for(int i=0; i<time; i++)
				cout<<sym<<"";
			cout<<"\n\n\t";
		}
		void entryPage()
		{			
			system("cls");
			cout<<endl;
			drawLine('=',55);	
			cout<<"\n\n\n\t\t\tCASINO GAME";
			cout<<"\n\n\n\t\t\t    or";
			cout<<"\n\n\n\t\t    NUMBER GUESSING GAME\n\n\n";
			drawLine('=',55);
			system("pause");
		}
		void noOfPlayers()
		{		
			while(1)
			{
			system("cls");
			drawLine('=',50);
			cout<<"\tSelect Number Of Player\n";
			drawLine('=',50);
			cout<<"\t1. Single Player\n\n\t\t2. Two Players\n\n\t\t3. Four Players\n\n\t\t4. Six Players\n\n\t    0 :: Home Page  \t9 :: Exit\n\n\n\tEnter Your Choice : ";
			cin>>choice;
				switch(choice)
				{
					case 0:   entryPage();		break;
					case 1: soloPlayer();		break;
					case 2:	doublePlayer();		break;
					case 3:	quadPlayer();		break;
					case 4:	hexaPlayer();		break;
					case 9:	ending();			break;
					default:	cout<<"\n\tWrong Choice\n"; 	drawLine('-',50);
								system("pause");	break;						
				};		
			}
		}
		void soloPlayer()
		{
			bal[0]=5000;
			system("cls");
			drawLine('=',50);
			cout<<"\t\tSingle Player\n";
			drawLine('=',50);
			cout<<"Enter Player Name : ";
			fflush(stdin);
			cin.getline(name[0],15);
			cout<<"\n\n\tYour Current Balance is : "<<bal[0]<<endl;
			drawLine('=',50);
			system("pause");
			system("cls");
			drawLine('=',50);
			cout<<"\t\tSingle Player\n";
			drawLine('=',50);
			amount[0]=1000;
			cout<<"\n\tHello , "<<name[0]<<"\n\n\tBetting amount is : "<<amount[0];
			bal[0]-=amount[0];
			temp=bal[0];
			cout<<"\n\n\tYour Current Balance is : "<<bal[0]<<endl;				
			drawLine('=',50);			
			cout<<"\tAre u ready to play (Y/N) :: ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{			
				system("cls");
				drawLine('=',46);
				cout<<"\t    "<<name[0]<<"\n";
				drawLine('=',46);
				chance=0;
				do{
					++chance;
					cout<<"\t   Chance - "<<chance<<endl;
					cout<<"\n\tGuess a number btw <01-05> : ";
					cin>>guessNumber;
					ran=randomVar();
					cout<<"\n\tLucky Number is : "<<ran<<endl;
					checkResult(guessNumber,ran,0);					
				}while(chance<3);
				drawLine('=',50);
			}
			else
				noOfPlayers();
			system("pause");
			result(1);
		}
		void doublePlayer()
		{
			system("cls");
			bal[0]=5000;
			bal[1]=5000;
			drawLine('=',50);
			cout<<"\t\tTwo Player\n";
			drawLine('=',50);
			cout<<"Enter Player1 Name : ";
			fflush(stdin);
			cin.getline(name[0],15);
			cout<<"\n\n\tYour Current Balance is : "<<bal[0]<<endl;
			drawLine('-',40);
			cout<<"Enter Player2 Name : ";
			fflush(stdin);
			cin.getline(name[1],15);
			cout<<"\n\n\tYour Current Balance is : "<<bal[1]<<endl;
			drawLine('=',50);
			system("pause");
			system("cls");
			drawLine('=',50);
			cout<<"\t\tTwo Player\n";
			drawLine('=',50);
			amount[0]=1000;
			cout<<"\n\tPlayer 1 ::\n\n\t\tHello , "<<name[0]<<"\n\n\tBetting amount is : "<<amount[0];
			bal[0]-=amount[0];
			temp=bal[0];
			cout<<"\n\n\tYour Current Balance is : "<<bal[0]<<endl;				
			
			drawLine('=',50);			
			cout<<"\tAre u ready to play (Y/N) :: ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{			
				system("cls");
				drawLine('=',46);
				cout<<"\t    "<<name[0]<<"\n";
				drawLine('=',46);
				
				chance=0;
				do{
					++chance;
					cout<<"\t   Chance - "<<chance<<endl;
					cout<<"\n\tGuess a number btw <01-05> : ";
					cin>>guessNumber;
					ran=randomVar();
					cout<<"\n\tLucky Number is : "<<ran<<endl;
					checkResult(guessNumber,ran,0);					
				}while(chance<3);
				drawLine('=',50);
				system("pause");
			}
			else
				noOfPlayers();
			system("cls");
			drawLine('=',50);
			cout<<"\t\tTwo Player\n";
			drawLine('=',50);			
			amount[1]=1000;
			cout<<"\n\tPlayer 2 ::\n\n\t\tHello , "<<name[1]<<"\n\n\tBetting amount is : "<<amount[1];
			bal[1]-=amount[1];
			temp=bal[1];
			cout<<"\n\n\tYour Current Balance is : "<<bal[1]<<endl;				
			
			drawLine('=',50);			
			cout<<"\tAre u ready to play (Y/N) :: ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{			
				system("cls");
				drawLine('=',46);
				cout<<"\t    "<<name[1]<<"\n";
				drawLine('=',46);				
				chance=0;
				do{
					++chance;
					cout<<"\t   Chance - "<<chance<<endl;
					cout<<"\n\tGuess a number btw <01-05> : ";
					cin>>guessNumber;
					ran=randomVar();
					cout<<"\n\tLucky Number is : "<<ran<<endl;
					checkResult(guessNumber,ran,1);					
				}while(chance<3);
				drawLine('=',50);
			}
			else
				noOfPlayers();
			system("pause");			
			result(2);
		}
		void quadPlayer()
		{
			bal[0]=5000;
			bal[1]=5000;
			bal[2]=5000;
			bal[3]=5000;
			system("cls");
			drawLine('=',50);
			cout<<"\t\tFour Player\n";
			drawLine('=',50);
			cout<<"Enter Player1 Name : ";
			fflush(stdin);
			cin.getline(name[0],15);
			cout<<"\n\n\tYour Current Balance is : "<<bal[0]<<endl;
			drawLine('-',40);
			cout<<"Enter Player2 Name : ";
			fflush(stdin);
			cin.getline(name[1],15);
			cout<<"\n\n\tYour Current Balance is : "<<bal[1]<<endl;
			drawLine('-',40);
			cout<<"Enter Player3 Name : ";
			fflush(stdin);
			cin.getline(name[2],15);
			cout<<"\n\n\tYour Current Balance is : "<<bal[2]<<endl;
			drawLine('-',40);
			cout<<"Enter Player4 Name : ";
			fflush(stdin);
			cin.getline(name[3],15);
			cout<<"\n\n\tYour Current Balance is : "<<bal[3]<<endl;
			drawLine('=',50);
			system("pause");
			system("cls");
			drawLine('=',50);
			cout<<"\t\tFour Player\n";
			drawLine('=',50);
			amount[0]=1000;
			cout<<"\n\tPlayer 1 ::\n\n\t\tHello , "<<name[0]<<"\n\n\tBetting amount is : "<<amount[0];
			bal[0]-=amount[0];
			temp=bal[0];
			cout<<"\n\n\tYour Current Balance is : "<<bal[0]<<endl;				
			drawLine('=',50);			
			cout<<"\tAre u ready to play (Y/N) :: ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{			
				system("cls");
				drawLine('=',46);
				cout<<"\t    "<<name[0]<<"\n";
				drawLine('=',46);
				chance=0;
				do{
					++chance;
					cout<<"\t   Chance - "<<chance<<endl;
					cout<<"\n\tGuess a number btw <01-05> : ";
					cin>>guessNumber;
					ran=randomVar();
					cout<<"\n\tLucky Number is : "<<ran<<endl;
					checkResult(guessNumber,ran,0);					
				}while(chance<3);
				drawLine('=',50);
			}
			else
				noOfPlayers();
			system("pause");
			system("cls");
			drawLine('=',50);
			cout<<"\t\tFour Player\n";
			drawLine('=',50);
			amount[1]=1000;
			cout<<"\n\tPlayer 2 ::\n\n\t\tHello , "<<name[1]<<"\n\n\tBetting amount is : "<<amount[1];
			bal[1]-=amount[1];
			temp=bal[1];
			cout<<"\n\n\tYour Current Balance is : "<<bal[1]<<endl;				
			drawLine('=',50);			
			cout<<"\tAre u ready to play (Y/N) :: ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{			
				system("cls");
				drawLine('=',46);
				cout<<"\t    "<<name[1]<<"\n";
				drawLine('=',46);
				chance=0;
				do{
					++chance;
					cout<<"\t   Chance - "<<chance<<endl;
					cout<<"\n\tGuess a number btw <01-05> : ";
					cin>>guessNumber;
					ran=randomVar();
					cout<<"\n\tLucky Number is : "<<ran<<endl;
					checkResult(guessNumber,ran,1);					
				}while(chance<3);
				drawLine('=',50);
			}
			else
				noOfPlayers();
			system("pause");
			system("cls");
			drawLine('=',50);
			cout<<"\t\tFour Player\n";
			drawLine('=',50);
			amount[2]=1000;
			cout<<"\n\tPlayer 3 ::\n\n\t\tHello , "<<name[2]<<"\n\n\tBetting amount is : "<<amount[2];
			bal[2]-=amount[2];
			temp=bal[2];
			cout<<"\n\n\tYour Current Balance is : "<<bal[2]<<endl;				
			drawLine('=',50);			
			cout<<"\tAre u ready to play (Y/N) :: ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{			
				system("cls");
				drawLine('=',46);
				cout<<"\t    "<<name[2]<<"\n";
				drawLine('=',46);				
				chance=0;
				do{
					++chance;
					cout<<"\t   Chance - "<<chance<<endl;
					cout<<"\n\tGuess a number btw <01-05> : ";
					cin>>guessNumber;
					ran=randomVar();
					cout<<"\n\tLucky Number is : "<<ran<<endl;
					checkResult(guessNumber,ran,2);					
				}while(chance<3);
				drawLine('=',50);
			}
			else
				noOfPlayers();
			system("pause");
			system("cls");
			drawLine('=',50);
			cout<<"\t\tFour Player\n";
			drawLine('=',50);			
			amount[3]=1000;
			cout<<"\n\tPlayer 4 ::\n\n\t\tHello , "<<name[3]<<"\n\n\tBetting amount is : "<<amount[3];
			bal[3]-=amount[3];
			temp=bal[3];
			cout<<"\n\n\tYour Current Balance is : "<<bal[3]<<endl;							
			drawLine('=',50);			
			cout<<"\tAre u ready to play (Y/N) :: ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{			
				system("cls");
				drawLine('=',46);
				cout<<"\t    "<<name[3]<<"\n";
				drawLine('=',46);
				
				chance=0;
				do{
					++chance;
					cout<<"\t   Chance - "<<chance<<endl;
					cout<<"\n\tGuess a number btw <01-05> : ";
					cin>>guessNumber;
					ran=randomVar();
					cout<<"\n\tLucky Number is : "<<ran<<endl;
					checkResult(guessNumber,ran,3);					
				}while(chance<3);
				drawLine('=',50);
			}
			else
				noOfPlayers();
			system("pause");			
			result(4);
		}
		void hexaPlayer()
		{
			bal[0]=5000;
			bal[1]=5000;
			bal[2]=5000;
			bal[3]=5000;
			bal[4]=5000;
			bal[5]=5000;
			system("cls");
			drawLine('=',50);
			cout<<"\t\tSix Player\n";
			drawLine('=',50);

			cout<<"Enter Player1 Name : ";
			fflush(stdin);
			cin.getline(name[0],15);
			cout<<"\n\n\tYour Current Balance is : "<<bal[0]<<endl;
			drawLine('-',40);
			cout<<"Enter Player2 Name : ";
			fflush(stdin);
			cin.getline(name[1],15);
			cout<<"\n\n\tYour Current Balance is : "<<bal[1]<<endl;
			drawLine('-',40);
			cout<<"Enter Player3 Name : ";
			fflush(stdin);
			cin.getline(name[2],15);
			cout<<"\n\n\tYour Current Balance is : "<<bal[2]<<endl;
			drawLine('-',40);
			cout<<"Enter Player4 Name : ";
			fflush(stdin);
			cin.getline(name[3],15);
			cout<<"\n\n\tYour Current Balance is : "<<bal[3]<<endl;
			drawLine('-',40);
			cout<<"Enter Player5 Name : ";
			fflush(stdin);
			cin.getline(name[4],15);
			cout<<"\n\n\tYour Current Balance is : "<<bal[4]<<endl;
			drawLine('-',40);
			cout<<"Enter Player6 Name : ";
			fflush(stdin);
			cin.getline(name[5],15);
			cout<<"\n\n\tYour Current Balance is : "<<bal[5]<<endl;
			drawLine('=',50);
			system("pause");
			system("cls");
			drawLine('=',50);
			cout<<"\t\tSix Player\n";
			drawLine('=',50);
			amount[0]=1000;
			cout<<"\n\tPlayer 1 ::\n\n\t\tHello , "<<name[0]<<"\n\n\tBetting amount is : "<<amount[0];
			bal[0]-=amount[0];
			temp=bal[0];
			cout<<"\n\n\tYour Current Balance is : "<<bal[0]<<endl;				
			drawLine('=',50);			
			cout<<"\tAre u ready to play (Y/N) :: ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{			
				system("cls");
				drawLine('=',46);
				cout<<"\t    "<<name[0]<<"\n";
				drawLine('=',46);
				chance=0;
				do{
					++chance;
					cout<<"\t   Chance - "<<chance<<endl;
					cout<<"\n\tGuess a number btw <01-05> : ";
					cin>>guessNumber;
					ran=randomVar();
					cout<<"\n\tLucky Number is : "<<ran<<endl;
					checkResult(guessNumber,ran,0);					
				}while(chance<3);
				drawLine('=',50);
			}
			else
				noOfPlayers();
			system("pause");
			system("cls");
			drawLine('=',50);
			cout<<"\t\tSix Player\n";
			drawLine('=',50);
			amount[1]=1000;
			cout<<"\n\tPlayer 2 ::\n\n\t\tHello , "<<name[1]<<"\n\n\tBetting amount is : "<<amount[1];
			bal[1]-=amount[1];
			temp=bal[1];
			cout<<"\n\n\tYour Current Balance is : "<<bal[1]<<endl;				
			drawLine('=',50);			
			cout<<"\tAre u ready to play (Y/N) :: ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{			
				system("cls");
				drawLine('=',46);
				cout<<"\t    "<<name[1]<<"\n";
				drawLine('=',46);				
				chance=0;
				do{
					++chance;
					cout<<"\t   Chance - "<<chance<<endl;
					cout<<"\n\tGuess a number btw <01-05> : ";
					cin>>guessNumber;
					ran=randomVar();
					cout<<"\n\tLucky Number is : "<<ran<<endl;
					checkResult(guessNumber,ran,1);					
				}while(chance<3);
				drawLine('=',50);
			}
			else
				noOfPlayers();
			system("pause");
			system("cls");
			drawLine('=',50);
			cout<<"\t\tSix Player\n";
			drawLine('=',50);
			amount[2]=1000;
			cout<<"\n\tPlayer 3 ::\n\n\t\tHello , "<<name[2]<<"\n\n\tBetting amount is : "<<amount[2];
			bal[2]-=amount[2];
			temp=bal[2];
			cout<<"\n\n\tYour Current Balance is : "<<bal[2]<<endl;				
			drawLine('=',50);			
			cout<<"\tAre u ready to play (Y/N) :: ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{			
				system("cls");
				drawLine('=',46);
				cout<<"\t    "<<name[2]<<"\n";
				drawLine('=',46);
				
				chance=0;
				do{
					++chance;
					cout<<"\t   Chance - "<<chance<<endl;
					cout<<"\n\tGuess a number btw <01-05> : ";
					cin>>guessNumber;
					ran=randomVar();
					cout<<"\n\tLucky Number is : "<<ran<<endl;
					checkResult(guessNumber,ran,2);					
				}while(chance<3);
				drawLine('=',50);
			}
			else
				noOfPlayers();
			system("pause");
			system("cls");
			drawLine('=',50);
			cout<<"\t\tSix Player\n";
			drawLine('=',50);			
			amount[3]=1000;
			cout<<"\n\tPlayer 4 ::\n\n\t\tHello , "<<name[3]<<"\n\n\tBetting amount is : "<<amount[3];
			bal[3]-=amount[3];
			temp=bal[3];
			cout<<"\n\n\tYour Current Balance is : "<<bal[3]<<endl;				
			drawLine('=',50);			
			cout<<"\tAre u ready to play (Y/N) :: ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{			
				system("cls");
				drawLine('=',46);
				cout<<"\t    "<<name[3]<<"\n";
				drawLine('=',46);
				
				chance=0;
				do{
					++chance;
					cout<<"\t   Chance - "<<chance<<endl;
					cout<<"\n\tGuess a number btw <01-05> : ";
					cin>>guessNumber;
					ran=randomVar();
					cout<<"\n\tLucky Number is : "<<ran<<endl;
					checkResult(guessNumber,ran,3);					
				}while(chance<3);
				drawLine('=',50);
			}
			else
				noOfPlayers();
			system("pause");
			system("cls");
			drawLine('=',50);
			cout<<"\t\tSix Player\n";
			drawLine('=',50);			
			amount[4]=1000;
			cout<<"\n\tPlayer 5 ::\n\n\t\tHello , "<<name[4]<<"\n\n\tBetting amount is : "<<amount[4];
			bal[4]-=amount[4];
			temp=bal[4];
			cout<<"\n\n\tYour Current Balance is : "<<bal[4]<<endl;				
			drawLine('=',50);			
			cout<<"\tAre u ready to play (Y/N) :: ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{			
				system("cls");
				drawLine('=',46);
				cout<<"\t    "<<name[4]<<"\n";
				drawLine('=',46);
				
				chance=0;
				do{
					++chance;
					cout<<"\t   Chance - "<<chance<<endl;
					cout<<"\n\tGuess a number btw <01-05> : ";
					cin>>guessNumber;
					ran=randomVar();
					cout<<"\n\tLucky Number is : "<<ran<<endl;
					checkResult(guessNumber,ran,4);					
				}while(chance<3);
				drawLine('=',50);
			}
			else
				noOfPlayers();
			system("pause");
			system("cls");
			drawLine('=',50);
			cout<<"\t\tSix Player\n";
			drawLine('=',50);			
			amount[5]=1000;
			cout<<"\n\tPlayer 6 ::\n\n\t\tHello , "<<name[5]<<"\n\n\tBetting amount is : "<<amount[5];
			bal[5]-=amount[5];
			temp=bal[5];
			cout<<"\n\n\tYour Current Balance is : "<<bal[5]<<endl;				
			drawLine('=',50);			
			cout<<"\tAre u ready to play (Y/N) :: ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{			
				system("cls");
				drawLine('=',46);
				cout<<"\t    "<<name[5]<<"\n";
				drawLine('=',46);
				
				chance=0;
				do{
					++chance;
					cout<<"\t   Chance - "<<chance<<endl;
					cout<<"\n\tGuess a number btw <01-05> : ";
					cin>>guessNumber;
					ran=randomVar();
					cout<<"\n\tLucky Number is : "<<ran<<endl;
					checkResult(guessNumber,ran,5);					
				}while(chance<3);
				drawLine('=',50);
			}
			else
				noOfPlayers();
			drawLine('=',50);
			system("pause");			
			result(6);
		}
		int randomVar()
		{
			srand(time(0));
			return ((rand()%5)+1);
		}
		void checkResult(int a, int b,int i)
		{
			if(a==b)
			{
				cout<<"\n\n\t\tCongrats!!You Won"<<endl;
				bal[i]=bal[i]*02;
				temp=bal[i];
				cout<<"\n\tCurrent Balance is : "<<bal[i]<<"\n";
				drawLine('-',50);
			}
			else{
				cout<<"\n\t\tOoops!! You Lose\n";
				bal[i]=temp;
				cout<<"\n\tCurrent Balance is : "<<bal[i]<<"\n\t\t";				
				drawLine('-',50);
			}
		}
		void result(int play)
		{
			system("cls");
			cout<<"\n\n\t\t    Score Board\n";
			cout<<"\t    -----------------------------\n";
			cout<<"\n\t\t      W I N N E R \n";
			drawLine('=',50);	
			cout<<"\tPlayer Name\t   Balance\n";
			if(play==1)
				cout<<"\n\t\t"<<name[0]<<"\t    "<<bal[0]<<endl;
			if(play==2)
			{
				if(bal[0]==bal[1])
				{
					cout<<"\n\t\t"<<name[0]<<"\t    "<<bal[0]<<endl;
					cout<<"\n\t\t"<<name[1]<<"\t    "<<bal[1]<<endl;					
					cout<<"\n\n\t\t  Match Draw\n";
				}
				else if(bal[0]>bal[1])
					cout<<"\n\t\t"<<name[0]<<"\t    "<<bal[0]<<endl;
				else			
					cout<<"\n\t\t"<<name[1]<<"\t    "<<bal[1]<<endl;					
			}
			if(play==4)
			{
				int p=0;
				int max=bal[0];
				for(int i=1; i<4; i++)
				{
					if(max<bal[i])
					{
						max=bal[i];
						p=i+1;
					}
				}
				switch(p)
				{
					case 1 : cout<<"\n\t\t"<<name[0]<<"\t    "<<bal[0]<<endl;	break;
					case 2 : cout<<"\n\t\t"<<name[1]<<"\t    "<<bal[1]<<endl;	break;
					case 3 : cout<<"\n\t\t"<<name[2]<<"\t    "<<bal[2]<<endl;	break;
					case 4 : cout<<"\n\t\t"<<name[3]<<"\t    "<<bal[3]<<endl;	break;
					default :	cout<<"\n\n\t\t  Match Draw\n"; break;
				};
			}
			if(play==6)
			{
				int p=1;
				int max=bal[0];
				for(int i=1; i<6; i++)
				{
					if(max<bal[i])
					{
						max=bal[i];
						p=i+1;
					}
				}
				switch(p)
				{
					case 1 : cout<<"\n\t\t"<<name[0]<<"\t    "<<bal[0]<<endl;	break;
					case 2 : cout<<"\n\t\t"<<name[1]<<"\t    "<<bal[1]<<endl;	break;
					case 3 : cout<<"\n\t\t"<<name[2]<<"\t    "<<bal[2]<<endl;	break;
					case 4 : cout<<"\n\t\t"<<name[3]<<"\t    "<<bal[3]<<endl;	break;
		 			case 5 : cout<<"\n\t\t"<<name[4]<<"\t    "<<bal[4]<<endl;	break;
					case 6 : cout<<"\n\t\t"<<name[5]<<"\t    "<<bal[5]<<endl;	break;			
					default :	cout<<"\n\n\t\t  Match Draw\n"; break;
				};
			}
			drawLine('=',50);			
			system("pause");
		}
		void ending()
		{
			system("cls");
			drawLine('-',70);	
			cout<<"\n\n\t\tProgrammer :   Satyam Singh\n\t\t\t    BCA (II-nd Semester)\n\t\t\t    SGRR UNIVERSITY\n";
			cout<<"\n\t\t\tDate : 13-07-2020\n\n";
			drawLine('-',70);	
			exit(0);
		}			
};
int main()
{
	Casino C1;
	C1.entryPage();
	C1.noOfPlayers();
	return 0;
}
