#include <iostream>
#include <conio.h>
#include <windows.h>
#include <unistd.h>

using namespace std;
void print();
void load();
void setup();
void draw();
void logic();
void input();
bool gameOver;

const int width=35;
const int height=20;
int x,y,fruitX,fruitY,score;
int tailX[100],tailY[100];
int nTail;
enum eDirection{ STOP=0,LEFT,RIGHT,UP,DOWN};
eDirection dir;

int main()
{
	print();
	load();
	setup(); 
	while(!gameOver)
	{
		draw();
		input();
		logic();
		sleep(1);	
	}
	return 0;
}


void print()//Done
{
	cout<<"\n\nWelcome to the mini Snake game.(press any key to continue)\n";
	cout<<"\n\tCode Writer : Satyam Singh";
	cout<<"\n\tUniversity : SGRR UNIVERSITY";
	cout<<"\n\tCourse : BCA IInd Sem/Ist year";
    getch();
    system("cls");
	cout<<"\n\tGame instructions:\n";
	cout<<"\n-> Use keys to move the snake.\n\tA-->LEFT\nD-->RIGHT\tW-->UP\n\tS-->DOWN\n\n\tX-->End Game\n\n-> You will be provided foods at the several coordinates of the screen which you have to eat.\nEverytime you eat a food the length of the snake will be increased by 1 element and thus the score.\n\n->Your life will decrease as you hit the wall or snake's body.\n\n-> If you want to exit press esc. \n";
	cout<<"\n\nPress any key to play game...";
    if(getch()==27)
        exit(0);
}
void gotoxy(int x, int y)
{

    COORD coord;

    coord.X = x;

    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
void load()
{
    int row,col,r,c,q;
    system("cls");
    gotoxy(36,14);
    printf("loading...");
    gotoxy(30,15);
    for(r=1; r<=20; r++)
    {
        for(q=0; q<=100000000; q++); //to display the character slowly
        printf("%c",177);
    }
    
	cout<<"\n\t\t\t\tPress ENTER to start.";
    getch();
}
void setup()
{
	gameOver=false;
	dir=STOP;
	x=width/2;
	y=height/2;
	fruitX=rand() % width;
	fruitY=rand() % height;
	score=0;
	
}
void draw()
{
	system("cls");
	cout<<"\n\nSNAKE GAME PROJECT IN C++ LANGUAGE";
	cout<<"\n\tBy:Satyam Singh\n\tBCA IInd Semester\n";
	for(int i=0;i<width+2;i++)
	cout<<"#";
	cout<<endl;
	
	for(int i=0;i<height;i++)
	{
		for(int j=0;j<width;j++)
		{
			if(j==0)
			cout<<"#";
		
			if(i==y && j==x)
			cout<<"0";
			else if(i==fruitY && j==fruitX)
			cout<< "F";
			else
			{
				bool print=false;
				
				for(int k=0; k<nTail;k++)
				{
					if(tailX[k]==j && tailY[k]==i)
					{
						cout<<"0";
						print=true;
					}
				}
					if(!print)
					cout<<" ";			
			}
			if(j==(width-1))
			cout<<"#";
		}
		cout<<endl;
	}
	
	for(int i=0;i<width+2;i++)
	cout<<"#";
	cout<<endl;
	
}
void input()
{
	if(_kbhit())
	{
		switch(_getch())
		{
			case 'a':	dir=LEFT;	 break;
			case 'd': 	dir=RIGHT;	 break;
			case 'w': 	dir=UP;		 break;
			case 's': 	dir=DOWN;	 break;
			case 'x': gameOver=true; break;
		}

	}
}
void logic()
{
	int prevX=tailX[0];
	int prevY=tailY[0];
	int prev2X,prev2Y;
	tailX[0]=x;
	tailY[0]=y;
	for(int i=1;i<nTail;i++)
	{
		prev2X=tailX[i];
		prev2Y=tailY[i];
		tailX[i]=prevX;
		tailY[i]=prevY;
		prevX=prev2X;
		prevY=prev2Y;
		
	}
	switch(dir)
	{
		case LEFT: 	x--; 	break;
		case RIGHT: x++;	break;
		case UP:	y--;	break;
		case DOWN:	y++;	break;
	}
	if(x>=width)
	x=0;
	else if(x<0)
	x=width-1;
	if(y>=height)
	y=0;
	else if(y<0)
	y=height-1;
	
	for(int i=0; i<nTail;i++)
	{
		if(tailX[i]==x && tailY[i]==y)
		{
			gameOver=true;
		}
	}
	if(x==fruitX && y==fruitY)
	{
		
		score+=10;
	fruitX=rand() % width;
	fruitY=rand() % height;
		nTail++;
	}
	cout<<"Score ="<<score<<endl;
}

