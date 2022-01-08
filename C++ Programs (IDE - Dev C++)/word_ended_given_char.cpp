//Program to find all the words ended with given character in a string.(word_ended_given_char)
#include <iostream>
#include <string.h>

using namespace std;
int main()
{
	char ch,str[200],m;
	int x2=0,temp;
	cout<<"Enter your string :\n";
	cin.getline(str,200);
	cout<<"String is :: ";
	puts(str);
	cout<<endl<<"Enter a character :";
	cin>>ch;
	int temp2=0;
	for(int i=0; i <= strlen(str); i++)
	{
		if((str[i]==' ' && str[i-1]==ch)||(str[i]=='\0' && str[i-1]==ch))
		{
				for(int k=temp2; k<i; k++)
				cout<<str[k];
				cout<<endl;
				temp2=i+1;
		}
		else
		{			
			if(str[i]==' ')
				temp2=i+1;
		}
	}
	return 0;
}
