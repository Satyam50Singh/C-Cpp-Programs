//Scrable Game
#include <iostream>
#include <conio.h>
#include <time.h>
#include <cstdlib>
#include <ctype.h>
#include <fstream>
#include <string.h>
using namespace std;
class Game
{
	private :
		char name1[15],name2[15],str[15],ch,user1[15];
		int tScore,TotalScoreOfUser1,TotalScoreOfUser2;
		int max,random,len,counter,temp,count;
		int data[12];
		fstream file1;
	public :
		void entryGate()
		{
			tScore=0,TotalScoreOfUser1=0,TotalScoreOfUser2=0;
			cout<<"\n-----------------------------------------------------------------------\n";
			cout<<"\n\n\n\t\t----------SCRABBLE GAME------------\n";
			cout<<"\n\n\tUser 1 \n\tEnter your name : ";
			cin.getline(name1,15);	
			for(int i=0; name1[i]!='\0'; i++)
				if(name1[i]>='a' && name1[i]<='z')
					name1[i]=name1[i]-32;
		
			cout<<"\n\n\tUser 2 \n\tEnter your name : ";
			cin.getline(name2,15);
			for(int i=0; name2[i]!='\0'; i++)
				if(name2[i]>='a' && name2[i]<='z')
					name2[i]=name2[i]-32;
			cout<<"\n\n\tpress ENTER to continue.......";			
			cout<<"\n\n-----------------------------------------------------------------------\n";
			getch();
			system("cls");
		}	
		void start()
		{
			cout<<"\n-----------------------------------------------------------------------\n";
			cout<<"\n\n\tHello,\n\n\t\t User 1 :: "<<name1<<",\n\n\tAre u ready to play...press ENTER \n\n";
			getch();
			jumble(650);
			TotalScoreOfUser1=tScore;
			getch();
			tScore=0;
			system("cls");
			cout<<"\n\n-----------------------------------------------------------------------\n";
			cout<<"\n\n\tHello,\n\n\t\t User 2 :: "<<name2<<"\n\n\tAre u ready to play...press ENTER \n\n";
			getch();
			jumble(550);
			getch();
			TotalScoreOfUser2=tScore;
		}
		void scoreAndWinner()
		{
			system("cls");
			cout<<"\n\n-----------------------------------------------------------------------\n";
			cout<<"\n\n\t\tSCORE CARD\n\n\tUser\t\tScore\n";
			cout<<"\t"<<name1<<"\t\t"<<TotalScoreOfUser1<<endl;
			cout<<"\t"<<name2<<"\t\t"<<TotalScoreOfUser2<<endl;
				if(TotalScoreOfUser1==TotalScoreOfUser2)
				{
					cout<<"\n\n\t!!Match draw!!\n";
				}
				else if(TotalScoreOfUser1>TotalScoreOfUser2)
				cout<<"\n\n\tWinner is  : "<<name1<<"\n\n\tCONGRATS!";
			else
				cout<<"\n\n\tWinner is  : "<<name2<<"\n\n\tCONGRATS!";
			cout<<"\n\n-----------------------------------------------------------------------\n";
		}
		void jumble(int n)
		{
			max=n;
			srand(time(0));
			random= (rand()%max)+1; //Generating a random no to get random string.

			file1.open("GameFile.txt",ios::in);
			if(!file1)	//file checking
			{
				cout<<"file does not open..";
				getch();
				exit(0);
			}
			
			int i=0,j=0;
			count=1;

			while(file1.eof()==0)	//getting string from file.
			{
				file1>>ch;
				if(ch=='1')
				{
					count++;
					if(count==random)
					{
						for(int i=0; i<7; i++)
						{
							file1>>ch;
							if(ch!='1')
								str[j++]=ch;
							else
							{
								str[j]='\0';
								break;
							}
						}				
					}
				}
			}
			file1.close();
		
//			cout<<"\nRandom string is : "<<str;
		
			Sort(str);
			cout<<"\n\n\tWORDS : ";//Display jumbling string for user.
			for(int k=len-1; k>=0; k--)
			{
				cout<<str[k]<<"  ";	
			}
			
			int nextw=7-len;
			
			srand((unsigned)time(0));
	//Generating remaining random words		
			for(int  l=0; l<nextw; l++)
			{
				int res=(rand()%90)+1;
				if(res>=65 && res<=90)
				{
					cout<<(char)res<<"  ";
				}
				else if(res>=39 && res<=64)
				{
					res+=26;
					cout<<(char)res<<"  ";			
				}
				else if(res>=14 && res<=39)
				{
					res+=52;
					cout<<(char)res<<"  ";			
				}
				else if(res>=0 && res<=14)
				{
					res+=76;
					cout<<(char)res<<"  ";			
				}
			}
			
				
			cout<<"\n\n\tEnter Correct Word : ";
			cin.getline(user1,10);
			Sort(user1);
		
			if(strcmp(str,user1)==0)
			{
				cout<<"\n\n\t\tGREAT!!\n";
				scoreCalculation();
				cout<<"\n\n\tYes,correct answer.....";
				cout<<"\n\n  You got a new chance...";
				jumble(560);
			}
			else
				cout<<"\n\tYou lose.."<<"\n\n\tTotal Score is : "<<tScore;				
		}
		
		void scoreCalculation()
		{
			file1.open("GameScore.txt",ios::in);
			counter=0;
			temp=0;
	
			for(int i=0; i<strlen(user1); i++)
			{
				int I=i;
				char t=user1[i];
				while(file1.eof()==0)
				{
				file1>>ch;
					if(user1[i]!=user1[i-1])
					{
						if(ch==t)
						{					
							data[i]=(counter);//+temp);
							temp=data[i];
							//counter=0;
							break;
						}
						else if(ch=='1')
							counter++;
					}
					else
					{
						data[I]=temp;
						break;
					}				
				}
			}
			file1.close();
		
				
				for(int i=0; i<strlen(user1); i++)
				{
					tScore+=data[i];
				}
				cout<<"\n\n\tScore : "<<tScore;
			
		}
		void Sort(char str[])
		{
			len=0;
			for(int k=0; str[k]!='\0'; k++)
			{
				len++;
			}
			for(int i=0; i<len; i++)
			{
				for(int j=0; j<len-i-1; j++)
				{
					if(str[j]>str[j+1])
					{
						char ch=str[j];
						str[j]=str[j+1];
						str[j+1]=ch;
					}
				}
			}	
		}
		void Ending()
		{
			cout<<"\n\n-----------------------------------------------------------------------\n";
			cout<<"\n\n\tProgrammer :   Satyam Singh\n\t\t    BCA (II-nd Semester)\n\t\t    SGRR UNIVERSITY\n";
		}
};

int main()
{
	Game G1;
	G1.entryGate();
	G1.start();
	G1.scoreAndWinner();
	G1.Ending();
	return 0;	
}
