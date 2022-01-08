#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y)
{
	COORD c;
	c.X=x;		c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main()
{
	gotoxy(24,13);
	cout<<char(218)<<"-------------------------------"<<char(191);
	gotoxy(24,14);
	cout<<"|				|\n";
	gotoxy(24,15);
	cout<<"|	Timer :- 00:00:";
	gotoxy(24,16);
	cout<<"|				|";
	gotoxy(24,17);
	cout<<char(192)<<"-------------------------------"<<char(217)<<endl;
	for(int i=15; i>=1; i--)
	{
		for(int j=0; j<=250; j++)
			for(int jj=0; jj<=950; jj++)
				for(int jjj=0; jjj<2000; jjj++){ }
		gotoxy(47,15);
		if(i<=9)
			cout<<"0"<<i<<"sec	|"<<endl;
		else
			cout<<i<<"sec	|"<<endl;
	}
	return 0;
}
