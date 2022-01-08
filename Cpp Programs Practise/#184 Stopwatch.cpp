// StopWatch

#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y){
	COORD C;
	C.X = x;
	C.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
}

int main() {
	gotoxy(24,13);
	cout << (char)218 << "-----------------------" << (char)191;
	gotoxy(24,14);
	cout << "|		    	|\n";
	gotoxy(24,15);
	cout << "| Timer :- 00:00:";
	gotoxy(24,16);
	cout << "|		    	|\n";
	gotoxy(24,17);
	cout << (char)192 << "-----------------------" << (char)217;
	for(int i=15; i>=0; i--){
		for(int j=0; j<=250; j++){
			for(int jj=0; jj<=950; jj++){
				for(int jjj=0; jjj<=2000; jjj++){
				}	
			}
		}
		gotoxy(41,15);
		if(i<10)
			cout << "0" << i << "sec  |\n"; 
		else
			cout << i << "sec  |\n"; 			
	}
	cout << endl << endl;
	cout << endl << endl;
	cout << endl << endl;
	return 0;
}
