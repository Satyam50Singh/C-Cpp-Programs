//Program to encrypt the content of a text file.(encrypt_file)
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
	fstream afile,temp;
	char ch;
//Encrypting data
	afile.open("new2file.txt",ios::in);
	if(!afile)
	{
		exit(0);
	}

	temp.open("temp.txt",ios::out);
	if(!temp)
	{
		exit(0);
	}
	while(afile.eof()==0)
	{
		afile>>ch;
		ch+=100;
		temp<<ch;
	}
	
	afile.close();
	temp.close();

	temp.open("temp.txt",ios::in);
	if(!temp)
	{
		exit(0);
	}
	afile.open("new2file.txt",ios::out);
	if(!afile)
	{
		exit(0);
	}
	while(temp.eof()==0)
	{
		temp>>ch;
		afile<<ch;
	}
	afile.close();
	
	cout<<"\nFile successfully encrypted\n";
	
	return 0;
}
