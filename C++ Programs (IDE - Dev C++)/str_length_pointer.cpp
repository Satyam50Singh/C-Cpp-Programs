//Program to find the length of string using pointer.(str_length_pointer)
#include <iostream>
using namespace std;
int string_length(char *str);
int main()
{
	int len;
	char str[50];
	cout<<"Enter your string :";
	cin.getline(str,50);
	system("cls");
	cout<<"Your string is  :-->"<<str<<endl;
	len=string_length(str);
	cout<<len<<" is the length of string.  ";

	return 0;
}
int string_length(char *str)//string length using pointers
{
	int c=0;
	while(*(str+c)!='\0')
	{
		c++;
	}
	return c;
}
