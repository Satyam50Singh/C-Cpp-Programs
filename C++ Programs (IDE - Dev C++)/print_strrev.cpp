//Program to print string in reverse order without changing it's original string using recursion.(print_strrev) 
#include <iostream>
#include <string.h>
using namespace std;
void reverse(char str[],int n);

int main()
{
	char str[50];
	cout<<"Enter a string :";
	cin.getline(str,50);
	cout<<"String is -->";
	cout<<str;
	cout<<"\nReverse string is -->";
	reverse(str,strlen(str));
	return 0;
}

void reverse(char str[],int n)
{
	if(n<0)
	{
		return;
	}
	cout<<str[n];
	reverse(str,n-1);
}
