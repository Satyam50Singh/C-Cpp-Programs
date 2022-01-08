//Program to sort elements in Lexicographical Order(Dictionary Order).(lexicographical_sort)
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string str[10];
	int n;
	cout<<"Enter the no. of students :";
	cin>>n;
	cout<<"Enter the names of students :\n";
	cin.ignore();
	for(int i=0; i<n; i++)
	{
	cout<<i+1<<"\t";
	cin>>str[i];
	}
	system("cls");
	cout<<"Strings are :\n";
	for(int i=0; i<n; i++)
		cout<<str[i]<<endl;
	string temp;
	for(int i=0; i<n-1; i++)
	{		
		for(int j=i+1; j<n; j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}	
	}	
	cout<<"\nSorted array is :\n";
	for(int i=0; i<n; i++)
		cout<<str[i]<<endl;
	return 0;
}
