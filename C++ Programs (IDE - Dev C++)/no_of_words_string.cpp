//program to count no. of words in a string.(no_of_words_string)
#include <iostream>
using namespace std;
class Palin
{
	private :
		char str[100];
	public :
			int word;
		void getdata()
		{
			cout<<"Enter your string :";
			cin.getline(str,100);
			cout<<"Your string is :"<<str;
		}
		void Count_word()
		{
			for(int i=0; str[i]!='\0'; i++)
				if(str[i]==' ' || str[i+1]=='\0')
					word++;
			cout<<"\nNo. of word in a string is :"<<word;
		}
};
int main()
{
	Palin x;
	x.word=0;		
	x.getdata();
	x.Count_word();	
	return 0;
}


