//Program to reverse a string using pointers.(str_rev_using_pointer)
#include <iostream>
using namespace std;
void reverse(char str[]);
int string_length(char *str);
int main()
{
	char str[50];
	cout<<"Enter your string :";
	cin.getline(str,50);
	system("cls");
	cout<<"Your string is  :-->"<<str<<endl;
	reverse(str);
	cout<<"\nReverse string is :"<<str;
	return 0;
}

void reverse(char str[])
{
	char *start,*end,temp;
	int len;
	len=string_length(str);
	start=str;
	end=str;
	for(int c=0; c<len-1; c++)
	end++;
	
	for(int c=0; c<len/2; c++)
	{
		temp=*start;
		*start=*end;
		*end=temp;		
		start++;
		end--;
	}
		
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
