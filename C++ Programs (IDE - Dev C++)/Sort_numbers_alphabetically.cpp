/*Program to take input(N) and sorts alphabetically the no.s from 1 to N.	
INPUT :	5
OUTPUT:		Five 
			Four
			One
			Three
			Two
(Sort_numbers_alphabetically)*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
	int n,k=0,l=0;
	char ch;
	char arr[100][15];
	cout<<"Enter the no :";
	cin>>n;
	cout<<"No.s In words upto "<<n<<endl; 
	fstream file;
	file.open("Sorting.txt",ios::in);
	if(!file)
	{
		cout<<"Error!!!!";
		getch();
		exit(0);
	}	
	while(file.eof()==0)
	{
		if(k!=n)
		{
			ch=file.get();
			if(ch!='\n')
			{
				cout<<ch;
				arr[k][l++]=ch;
			}
			else
			{
				arr[k][l]='\0';
				k++;
				l=0;
				cout<<endl;
			}
		}
		else
		{
			break;
		}
	} 
	file.close();
	char temp[20];
	for(int j=0; j<n-1; j++)
	{
		for(int i=j+1; i<n; i++)
		{
			if(strcmp(arr[j],arr[i])>0)
			{
				strcpy(temp,arr[j]);
				strcpy(arr[j],arr[i]);
				strcpy(arr[i],temp);				
			}			
		}
	}
	cout<<endl;
	cout<<"\nSorted in Alphabetically order\n";
	for(int j=0; j<n; j++)
	cout<<arr[j]<<endl;
	
/*	char lasn[4][30];
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<n-1; i++)
		{
			if(arr[i][0]>arr[i+1][0])
			{
				strcpy(lasn[0],arr[i]);
				strcpy(arr[i],arr[i+1]);
				strcpy(arr[i+1],lasn[0]);
			}
		}
	}
	cout<<endl;
	for(int j=0; j<n; j++)
	cout<<arr[j]<<endl;
*///(2nd Logic)	
/*	
	string str[130];	
	for(int i=0; i<n;i++)
		str[i]=arr[i];
	string temp;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(str[i]<str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	cout<<"\nSorted in Alphabetically order\n";
	for(int i=0; i<n; i++)
	cout<<str[i]<<endl;
*/	return 0;
}
