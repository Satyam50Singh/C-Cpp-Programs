//Tellg is a predefined fn which is used to find the current cursor position when file is opened at reading mode.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("Tellg.txt");
	int pos;
	char ch;
	pos=file.tellg();
	cout<<pos;
	file>>ch;
	cout<<ch<<"\n";
	pos=file.tellg();
	cout<<pos;
	file.close();
	return 0;	
}
