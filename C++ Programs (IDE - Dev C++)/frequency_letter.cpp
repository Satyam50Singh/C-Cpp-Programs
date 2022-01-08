//Program to print frequency of letters in a string.(frequency_letter)
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int freq[20];
	char str[100];
	cout<<"Enter string :";
	cin.getline(str,100);
	
	for(int i=0; str[i]!='\0'; i++)
	{
		freq[i]=1;
		for(int j=i+1; str[j]!='\0'; j++)
		{
			if(str[i]==str[j])
			{
				freq[i]++;
				str[j]='0';
			}
		}	
	}	
	for(int i=0; i<strlen(str); i++)
		if(str[i]!=' ' && str[i]!='0')
			cout<<str[i]<<"-->"<<freq[i]<<endl;	
	return 0;
}
