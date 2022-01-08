//program to check character is any type of space key(such as tab,space,newline,carriage return)or not by using isspace() fn in c++.(isspace_fn_example)
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	char c='\t';
	if(isspace(c))
		cout<<c<<" is a type of space key.\n";
	else
		cout<<"ch is not a type of space key.\n";
return 0;
}

