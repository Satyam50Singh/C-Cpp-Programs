//Program to Capitalize first & last letter of each word in a line/string.(capital_first_last)
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter string :";
	cin.getline(str,100);
	system("cls");
	cout<<"Your string is :\n";
	cout<<str;	
	str[0]=toupper(str[0]);
	for(int i=1; str[i]!='\0'; i++)
	{
		if(str[i+1]=='\0')
			str[i]=toupper(str[i]);
		else if(str[i]==' ')
		{
			str[i-1]=toupper(str[i-1]);
			str[i+1]=toupper(str[i+1]);
		}
	}

	cout<<"\nstring after changes :\n" <<str;
	return 0;
}
