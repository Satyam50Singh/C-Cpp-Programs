//program to check character is alphanumeric or not by using isalnum() fn in c++.(isalnum_fn_example)
#include <iostream>
#include <conio.h>
#include <ctype.h>
using namespace std;
int main()
{
	char c;
	cout<<"Enter any character :";
	cin>>c;
	if(isalnum(c))
		cout<<c<<" is an alphanumeric character"<<endl;
	else
		cout<<c<<" is not an alphanumeric character"<<endl;
	cout<<"Do u want to check another character :";
	char ch;
	cin>>ch;
	if(ch=='Y' || ch=='y')
	main();
	else
	{
		cout<<"Press ENTER to Exit :";
		getch();
		exit(0);
	}	
	return 0;
}

