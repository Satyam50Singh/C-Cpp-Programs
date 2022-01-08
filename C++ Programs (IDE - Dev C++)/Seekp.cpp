//Seekp fn if a public member fn of istream class
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("tellp.txt",ios::ate);
	cout<<fout.tellp();
	fout<<"SATYAM";
	cout<<"\n"<<fout.tellp();
	fout.seekp(2,ios_base::beg);
	cout<<"\n"<<fout.tellp();
	fout.seekp(2,ios_base::cur);
	cout<<"\n"<<fout.tellp();
	fout.seekp(-2,ios_base::end);
	cout<<"\n"<<fout.tellp();
		fout.close();	

	return 0;
}
