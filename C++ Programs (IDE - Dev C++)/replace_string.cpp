//Program to replace a substring from a string(replace_string)
#include <iostream>
#include <string.h>
using namespace std;
class Replace 
{
	private :
		int s;
		char str[100],str2[15][10];
	public :
		void getstring()
		{
			cout<<"Enter a string :";
			cin.getline(str,100);
			system("cls");
			cout<<"Your string is :"<<str;
		}	
		void str_2D_string()
		{
			s=0;
			int j=0;
			for(int i=0;i<strlen(str);i++)
			{
				if(str[i]!=' ')
					str2[s][j++]=str[i];
				else
				{
					str2[s][j]='\0';
					s++;  j=0;
				}
			}
 		}
		void Change()
		{
			char temp[5][15];
			cout<<"\nEnter the word to replace : ";
			cin>>temp[0];
			cout<<"Enter the new word : ";
			cin>>temp[1];
 			cout<<endl<<temp[0]<<"-->"<<temp[1]<<endl;
 			int x;
			 for(int i=0; i<=s; i++)
			{
 				if(!strcmp(str2[i],temp[0]))
				{
					x=1;
					strcpy(str2[i],temp[1]);
				}
			}
			if(!x)
				cout<<endl<<"Word not found!!...\n";
			cout<<"\nString is : "<<endl;
			for(int i=0; i<=s; i++)
			cout<<str2[i]<<" ";

		}
		
};
int main()
{
	Replace x;
	x.getstring();
	x.str_2D_string();
	x.Change();
	return 0;
}
