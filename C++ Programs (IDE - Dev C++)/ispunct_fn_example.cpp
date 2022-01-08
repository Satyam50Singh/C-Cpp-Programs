//program to check a given character is punctuation or not and also print all punctuations by using ispunct() fn in c++.(ispunct_fn_example)
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	char ch='>';
	if(ispunct(ch))
		cout<<ch<<" is a Punctuation.\n";
	else
		cout<<ch<<" is not a Punctuation.\n";

	cout<<"All punctuations are :";
	for(char i=0; i<127; i++)
		if(ispunct(i))
		    cout<<i<<"  ";
	return 0;
}
