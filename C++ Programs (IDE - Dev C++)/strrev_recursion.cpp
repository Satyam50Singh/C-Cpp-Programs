//Program to reverse a sentence using Recursion.(strrev_recursion)
#include <iostream>
#include <string.h>
using namespace std;

void reverse(char str[],int index, int size );
int main()
{
	char str[50];
	cout<<"Enter a string :";
	cin.getline(str,50);
	cout<<"String is -->";
	cout<<str;	
	reverse(str,0,(strlen(str)-1));
	cout<<"\nReverse string is -->"<<str;
	return 0;
}
void reverse(char str[],int index, int size)//2nd logic
{
	if(index>=size)
	{
		return;
	}	
	char temp=str[index];
	str[index]=str[size];
	str[size]=temp;
	reverse(str,index+1,size-1);
}

