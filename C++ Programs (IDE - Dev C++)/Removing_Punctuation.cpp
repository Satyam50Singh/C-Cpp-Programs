//Program To remove all the punctations from the strings.(Removing_Punctuation)
#include <iostream>
using namespace std;
int main()
{
	char str[50],str_new[50];
	cout<<"Enter a string :";
	cin.getline(str,50);
	cout<<"String is :"<<str<<"\nString after Removing punctuations"<<endl;
	int k=0;
	
	for(int i=0; str[i]!='\0'; i++)
		if(!ispunct(str[i]))
			cout<<str[i];
	return 0;
}
