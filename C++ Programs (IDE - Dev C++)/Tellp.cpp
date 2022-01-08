//Tellp is a predefined fn which is used to find the current cursor position when file is opened is writing mode.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream file;
	file.open("Tellp.txt",ios::app);
	cout<<file.tellp();
	file<<"ABC";
	cout<<file.tellp();
	file.close();
	return 0;	
}
