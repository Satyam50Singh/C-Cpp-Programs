// Program to move cursor at specified location.

#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int main() {
	int x=40,y=13;
	gotoxy(x, y);
	cout << "Satyam\n\n";
}
