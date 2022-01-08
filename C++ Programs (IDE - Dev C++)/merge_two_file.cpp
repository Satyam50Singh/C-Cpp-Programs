//Program to merge the data of two files.(merge_two_file)
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	char str1[15],ch,str2[15];
	fstream file1,file2,file3;
	cout<<"Enter the name of first file :";
	cin>>str1;
	cout<<"Enter the name of Second file :";
	cin>>str2;
	
	file1.open(str1,ios::in);
	file2.open(str2,ios::in);
	if(!file1 || !file2)
	{
		cout<<"file doesn't open!!ERROR";
		getch();
		exit(0);
	}	
	file3.open("Merge.txt",ios::out);
	if(!file3)
	{
		cout<<"Merge file doesn't create!!ERROR";
		getch();
		exit(0);
	}
	
	while(file1.eof()==0)
	{
		file1>>ch;
		file3<<ch;
	}
	
	while(file2.eof()==0)
	{
		file2>>ch;
		file3<<ch;
	}
	file1.close();	
	file2.close();	
	file3.close();
	
	cout<<endl<<"Data of "<<str1<<" & "<<"Data of "<<str2<<" is successfully merged "<<endl;
 	return 0;
}
