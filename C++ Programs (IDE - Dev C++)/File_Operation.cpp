//Program to convert data in required form : One word  in one line,All letters are in Upper Case,Length of Word not exceded more than 6.(File_Operation)
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
	char ch;
	fstream file1,file2,file3;
	/*-------------------------------1st Operation-------------------*/
/*
	file1.open("Word.txt",ios::in);
	file2.open("NewText.txt",ios::out);
	if(!file1 || !file2)
	{
		cout<<"file doesn't open!!ERROR";
		getch();
		exit(0);
	}	
	
	while(file1.eof()==0)
	{
		file1>>ch;
		if(ch=='|')
		{
			file2<<'1'<<'\n';
		}
		else		
		file2<<ch;
	}
	
	file1.close();	
	file2.close();	
	
	file2.open("NewText.txt",ios::in);
	while(file2.eof()==0)
	{
		file2>>ch;
		if(ch=='1')
		cout<<' ';
		else
		cout<<ch;
	}
	file2.close();	
*/ 	
	/*-------------------------------2nd Operation-------------------*/
/*
	file1.open("NewText.txt",ios::in);
	file2.open("DocText.txt",ios::out);
	if(!file1 || !file2)
	{
		cout<<"file doesn't open!!ERROR";
		getch();
		exit(0);
	}	
	
	while(file1.eof()==0)
	{
		file1>>ch;
		if(ch>='a' && ch<='z')
		{
			ch=ch-32;
			file2<<ch;
		}
		else
			file2<<'1'<<'\n';
	}
	
	file1.close();	
	file2.close();	

	file2.open("DocText.txt",ios::in);
	int count=0;
	while(file2.eof()==0)
	{
		file2>>ch;
		if(ch=='1')
		{
			cout<<'\n';
			count++;			
		}
		else
		cout<<ch;
	}
	file2.close();	
	cout<<"\nNo.of words :"<<count;
*/
/*-------------------------------3rd Operation-------------------*/
/*
	file1.open("DocText.txt",ios::in);
	file2.open("Document.txt",ios::out);
	if(!file1 || !file2)
	{
		cout<<"file doesn't open!!ERROR";
		getch();
		exit(0);
	}	
	else
		cout<<"Both Files Open Successfully...";
	
	char str[10];
	int i=0;
	int j=0;
	while(file1.eof()==0)
	{
		file1>>ch;
		if(ch!='1')
		{
			str[i++]=ch;
		}
		else
		{
			str[i++]='1';
			str[i]='\0';
			cout<<j++<<endl;
			if(i<9)
			file2<<str<<'\n';
			i=0;			
		}			
	}
	file1.close();	
	file2.close();	
*/
	file2.open("Document.txt",ios::in);
	int count=0;
	while(file2.eof()==0)
	{
		file2>>ch;
		if(ch=='1')
		{
			cout<<'\n';
			count++;			
		}
		else
		cout<<ch;
	}
	file2.close();	
	cout<<"\nNo.of words :"<<count;

	return 0;
}

