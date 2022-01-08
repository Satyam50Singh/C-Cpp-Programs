//progam to find all palindrome word in a string(All_palindrome_word_str) 
#include <iostream>
#include <string.h>
using namespace std;
class Palin
{
	private :
		char str[100],arr[30][30],rev[30][30],palin[30][30];
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
			int c=0;
			for(int i=0; i<=strlen(str); i++)
			{
				if(str[i]==' ' || str[i+1]=='\n')
				{
					arr[word++][c]='\0';
					c=0;
				}
				else
					arr[word][c++]=str[i];
			}
		}
		void storing_in_reverse()
		{
			int s=word;
			int c=0;
			for(int i=(strlen(str)-1); i>=0; i--)
			{
				if(str[i]==' ' )
				{
					rev[s--][c]='\0';
					c=0;
				}
				else
					rev[s][c++]=str[i];
			}
			
		}
		void palin_word()
		{
			int f=0,i=0;
			cout<<endl<<"Palindrome words in 2D string are :\n";
				for(i=0; i<=word; i++)
				{
					if(strcmp(arr[i],rev[i])==0)
					{
						strcpy(palin[f],arr[i]);
						cout<<palin[f]<<endl;
						f++;
					}
				}	
		}

};

int main()
{
	Palin x;
	x.word=0;
	x.getdata();
	x.Str_To_2D_array();
	x.storing_in_reverse();
	x.palin_word();
	return 0;
}
