//Program to print Largest & Smallest possible word which is Palindrome in a string(small_large_palin_word)
#include <iostream>
#include <string.h>

using namespace std;

class Palin
{
	private :
		int len[15];
		char str[100],arr[30][30],rev[30][30],palin[30][30];
	public :
		int f,word;
		void getdata()
		{
			cout<<"Enter your string :";
			cin.getline(str,100);
			cout<<"Your string is :"<<str;
		}
		void no_word()
		{
			for(int i=0; str[i]!='\0'; i++)
				if(str[i]==' ' || str[i+1]=='\0')
					word++;
		}
		void Str_To_2D_array()
		{
			int s=0,c=0;
			for(int i=0; i<=strlen(str); i++)
			{
				if(str[i]==' ' || str[i+1]=='\n')
				{
					arr[s++][c]='\0';
					c=0;
				}
				else
					arr[s][c++]=str[i];
			}
					arr[s][c]='\0';
		}
		void storing_in_reverse()
		{
			int s=word-1,c=0;
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
					rev[s][c]='\0';
			
		}
		void palin_word()
		{
			int i=0;
			cout<<endl<<"Palindrome words are :\n";
			for(; i<word; i++)
			{
				if(strcmp(arr[i],rev[i])==0)
				{
					strcpy(palin[f],arr[i]);
					cout<<palin[f]<<endl;
					f++;
				}
			}	
		}
		void len_word()
		{
			int s2=0;
			for(int i=0; i<=f; i++)
			{
				len[i]=strlen(palin[i]);
			s2=i;
			}
			int max=len[0];
			int min=len[0];
			int max_in,min_in;
			for(int k=0; k<s2; k++)
			{
				if(len[k]>max)
				{
					max=len[k];
					max_in=k;
				}
				if(len[k]<=min)
				{
					min=len[k];
					min_in=k;
				}
			}
			cout<<"Longest Palindrome Word is :"<<palin[max_in]<<endl;
			cout<<"Smallest Palindrome Word is :"<<palin[min_in]<<endl;
		}		
};

int main()
{
	Palin x;
	x.f=0;
	x.word=0;		
	x.getdata();
	x.no_word();
	x.Str_To_2D_array();
	x.storing_in_reverse();
	x.palin_word();
	x.len_word();
	return 0;
}


