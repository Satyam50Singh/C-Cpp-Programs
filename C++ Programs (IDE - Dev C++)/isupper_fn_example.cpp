//program to check character is a uppercase character or not by using isupper() fn in c++.(isupper_fn_example)
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	char ch,choice;
	cout<<"Enter a character :";
	cin>>ch;
	if(isupper(ch))
		cout<<ch<<" is a Uppercase character.\n";
	else
		cout<<ch<<" is not a Uppercase character.\n";
	cout<<"Do u want to check another character :";
	cin>>choice;
	if(choice=='y' || choice=='Y')
	main();
	else
	{
		exit(0);
	}
	return 0;
}

