//Program to delete files by using remove function(delete_files)
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	char file_name[15];
	cout<<"Enter the file name : ";
	cin>>file_name;
	if(remove(file_name)==0)
	{
		cout<<"File Deleted Successfully..";
	}
	else
	{
		cout<<"File Doesnot Deleted!!ERROR";
	}
	return 0;
}
