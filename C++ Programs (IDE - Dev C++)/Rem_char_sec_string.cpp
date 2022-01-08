//program to remove all the similar character of second string which are also present in a first string.(Rem_char_sec_string)
#include<iostream>
#include <string.h>
using namespace std;
class str
{
	private :
		char str1[30],str2[30],ch;
		int i,j;
	public :
		void getstr()
		{
			cout<<"Enter first string :";
			cin.getline(str1,30);
			cout<<"Enter second string :";
			cin.getline(str2,30);
			cout<<"\n1st String is : "<<str1<<endl;
			cout<<"2nd String is : "<<str2<<endl;
		} 
		void remove()
		{
			int len1=strlen(str1);
			int len2=strlen(str2);
			char temp[len2];
			int x=0;
			for(int k=0;k<len1;k++)
			{
				for(int j=0; j < len2 ; j++)
					if(str1[k]!=str2[j])
						temp[x++]=str2[j];
				temp[x]='\0';
				strcpy(str2,temp);//main logic
				x=0;
			}
			cout<<endl<<"Second string after removing similar characters"<<endl;			
			cout<<str2<<endl;
		}
};
int main()
{
	str obj;
	obj.getstr();
	obj.remove();
	return 0;  
}
