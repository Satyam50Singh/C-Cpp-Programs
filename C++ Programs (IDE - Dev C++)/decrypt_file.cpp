//Program to decrypt the content of a text file.(decrypt_file)
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
	char ch;
	fstream afile,temp;
	afile.open("new2file.txt",ios::in);
	if(!afile)
	{
		exit(0);
	}
	temp.open("temp2.txt",ios::out);
	if(!temp)
	{
		exit(0);
	}
	while(afile.eof()==0)
	{
		afile>>ch;
		ch-=100;
		temp<<ch;
	}
	afile.close();
	temp.close();

	afile.open("new2file.txt",ios::out);
	if(!afile)
	{
		exit(0);
	}
	temp.open("temp2.txt",ios::in);
	if(!temp)
	{
		exit(0);
	}
	while(temp.eof()==0)
	{
		temp>>ch;
		afile<<ch;
	}
	afile.close();
	temp.close();
	cout<<"\nFile successfully decrypted\n";
	return 0;
}
