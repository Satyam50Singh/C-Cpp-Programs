//Program to store a simple string in 2D array of string(Str_To_2D_array)
#include <iostream>
#include <string.h>
using namespace std;
class Palin
{
	private :
		char str[100],arr[30][30];
	public :
			int word;
		void getdata()
		{
			cout<<"Enter your string :";
			cin.getline(str,100);
			cout<<"Your string is :"<<str;
		}
		void Str_To_2D_array()
		{
			int s=0,c=0;
			for(int i=0; i<(strlen(str)); i++)
			{
				if(str[i]==' ' || str[i+1]=='\n')
				{
					arr[s][c]='\0';
					c=0;
					s++;
				}
				else
				{
					arr[s][c]=str[i];
					c++;
				}
			}
			cout<<"\nString is stored in 2D-Array of string\n";
			for(int i=0; i<=s; i++)
				cout<<arr[i]<<endl;
		}
};

int main()
{
	Palin x;
	x.word=0;		
	x.getdata();
	x.Str_To_2D_array();
	return 0;
}
