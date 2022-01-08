//Program to print the pattern of b-day cake.

#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
int main()
{
	cout<<"\n	Birthday-Cake\n\n";
	cout<<"\n	   "<<(char)173<<"  "<<(char)173<<"  "<<(char)173;
	cout<<"\n	"<<(char)201;
	for(int i=0; i<11; i++)
	cout<<(char)205;
	cout<<(char)187<<"\n";
	for(int i=0; i<3; i++)
	{
		system("Color C0");
		if(i==0|| i==2)
		cout<<"	"<<(char)186<<"	    "<<(char)186<<"\n";
		else
		cout<<"	"<<(char)186<<" H.A.P.P.Y "<<(char)186<<"\n";
	}
	cout<<"     "<<(char)201;
	for(int i=0; i<2; i++)
	cout<<(char)205;
	cout<<(char)188<<"	    "<<(char)200;
	for(int i=0; i<2; i++)
	cout<<(char)205;		
	cout<<(char)187<<"\n";
	for(int i=0; i<3; i++)
		if(i==0 || i==2)
			cout<<"     "<<(char)186<<"		       "<<(char)186<<"\n";
		else
			cout<<"     "<<(char)186<<" B.I.R.T.H.D.A.Y "<<(char)186<<"\n";
	cout<<"  "<<(char) 201;
	for(int i=0; i<2; i++)
	cout<<(char)205;
	cout<<(char)188<<"		       "<<(char)200;
	for(int i=0; i<2; i++)
	cout<<(char)205;
	cout<<(char)187<<"\n";
	for(int i=0; i<4; i++)
	{
		if(i==0 )
		cout<<"  "<<(char)186<<"          T.O	  "<<(char)186<<"\n";
		else if(i==2)
		cout<<"  "<<(char)186<<" 	    Y.O.U	  "<<(char)186<<"\n";
		else
		cout<<"  "<<(char)186<<"             	  "<<(char)186<<"\n";
	}
	cout<<"  "<<(char)200;
	for(int j=0; j<23; j++)
		cout<<(char)205;
	cout<<(char)188<<"\n "<<(char)201;
	for(int i=0; i<25; i++)
		cout<<(char)205;
	cout<<(char)187<<"\n";
	for(int i=0; i<2; i++)
		cout<<" "<<(char)186<<"			   "<<(char)186<<"\n";
	getch();
	return 0;
}

