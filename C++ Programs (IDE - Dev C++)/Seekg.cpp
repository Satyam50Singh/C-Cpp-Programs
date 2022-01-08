//Seekg fn if a public member fn of istream class
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("Seekg.txt");
	cout<<fin.tellg();
	cout<<"  "<<(char)fin.get();
	cout<<"\n"<<fin.tellg();
	
	fin.seekg(7);
	cout<<"\n"<<fin.tellg();
	cout<<"  "<<(char)fin.get();
	cout<<"\n"<<fin.tellg();
	
	fin.seekg(2,ios_base::beg);
	cout<<"\n"<<fin.tellg();	
	fin.seekg(-3,ios_base::end);
	cout<<"\n"<<fin.tellg();
	cout<<"  "<<(char)fin.get();
	fin.seekg(1,ios_base::cur);
	cout<<"\n"<<fin.tellg();	
	cout<<"  "<<(char)fin.get();
	return 0;
}
