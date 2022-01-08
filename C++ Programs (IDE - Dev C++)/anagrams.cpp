//Program to Check whether two strings are anagrams or not.(anagrams)
#include <iostream>
#include <string.h>
using namespace std;
void sort_string(char str[]);
int main()
{
	int x=0;
	char str[30],str1[30];
	cout<<"Enter 1st string :";
	cin.getline(str,30);
	cout<<"Enter 2nd string :";
	cin.getline(str1,30);
	system("cls");
	cout<<"1st String is :"<<str<<endl<<"2nd String is :"<<str1<<endl;
	if(strlen(str)!=strlen(str1))
		cout<<"\nboth strings are not anagrams.";
	else
	{
 		sort_string(str);
		sort_string(str1);		
		for(int i=0; i<strlen(str); i++)
		if(str[i]!=str1[i])
			x=5;
		if(x==5)
			cout<<"\nboth strings are not anagrams.";
		else
			cout<<"\nboth strings are anagrams.";		
	}
	return 0;
	
}

void sort_string(char str[])
{
	for(int i=0; i<strlen(str)-1; i++)
	{
		for(int j=i+1; j<strlen(str); j++)
		{
			if(str[i]>str[j])
			{
				char temp=str[j];
				str[j]=str[i];
				str[i]=temp;
			}
		}	
	}
}
