//C++ program to find the smallest and the largest word in a string
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[50],str1[30][30];
	int i,j=0,k=0;
	int len[15];
	
	cout<<"Enter a string : ";
	cin.getline(str,50);
	cout<<"String is :"<<str<<endl;
	
	int len2=strlen(str);
	
	for(i=0;i<len2;i++)
	{
		if(str[i]==' ')
		{
		str1[k++][j]='\0';
		j=0;
		}
		else
			str1[k][j++]=str[i];		
	}
	str1[k][j]='\0';

	for(int i=0;i<=k;i++)
		len[i]=strlen(str1[i]);
	
	int max1=len[0];
	int min1=len[0];
	
	for(int i=1; i<=k;i++)
	{
		if(max1<len[i])
			max1=len[i];
		if(min1>len[i])
			min1=len[i];
	}
	
	for(i=0;i<=k;i++)
	{
		if(strlen(str1[i])==max1)
			cout<<"\nLargest word is :"<<str1[i];
		if(strlen(str1[i])==min1)
			cout<<"\nSmallest word is :"<<str1[i];
	}
	return 0;
}
