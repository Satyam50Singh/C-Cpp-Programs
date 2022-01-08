//Program to store a string in 2D-Array of string in reverse order(1D_Str_To_2D_str_reverse)
#include <iostream>
#include <string.h>

using namespace std;

class Reverse
{
	private :
		char str[100],arr[30][30],rev[30][30];
	public :
		void getdata()
		{
			cout<<"Enter your string :";
			cin.getline(str,100);
			cout<<"Your string is :"<<str;
		}
		void storing_in_reverse()
		{
			int s=0,c=0;
			for(int i=(strlen(str)-1); i>=0; i--)
			{
				if(str[i]==' ' )
				{
					rev[s++][c]='\0';
					c=0;
				}
				else
					rev[s][c++]=str[i];
			}
			cout<<"\nReverse storing of String to 2D array of string\n";
			for(int i=0; i<=s; i++)
				cout<<rev[i]<<endl;
		}
};
int main()
{
	Reverse x;
	x.getdata();
	x.storing_in_reverse();
return 0;
}

