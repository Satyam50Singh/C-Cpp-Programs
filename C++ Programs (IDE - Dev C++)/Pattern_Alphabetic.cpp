/*
A1111111100000000A
ABA111111000000ABA
ABCBA11110000ABCBA
ABCDCBA1100ABCDCBA
ABCDEDCBAABCDEDCBA
ABCDCBA0011ABCDCBA
ABCBA00001111ABCBA
ABA000000111111ABA
A0000000011111111A
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter no. of rows :";
	cin>> n;
	cout<<endl;
/*-----------------Upper Half part--------------------------*/
	char ch=64;
	int x=n;
	for(int j=n; j>0; j--)
	{
		char c2=65;
		for(int i=n; i>=j; i--)
			cout<<c2++;
		x-=j;
		ch+=x;
		for(int i=n-1; i>=j; i--)
			cout<<ch--;
		x=n;
		
		if(j%2!=3)
		for(int l=1; l<j; l++)
			cout<<"00";
		 if(j%2==1)
		for(int l=1; l<j; l++)
			cout<<"11";
		else
		for(int l=1; l<j; l++)
		cout<<"11";

		char c3=65;
		for(int i=n; i>=j; i--)
			cout<<c3++;
		x-=j;
		ch+=x;
		for(int i=n-1; i>=j; i--)
			cout<<ch--;
		x=n;
		cout<<endl;
	}

/*-----------------Lower Half part--------------------------*/

		int X=n;
	for(int i=n-1; i>0; i--)
	{
	char Ch=65;
		for(int k=0; k<i; k++)
		cout<<Ch++;

	char Ch2=63;
	Ch2+=i;		
		for(int y=1; y<i; y++)
		cout<<Ch2--;
		X=n;

	if(i%2!=3)
		for(int l=n; l>i; l--)
			cout<<"11";
	if(i%2==1)
		for(int l=n; l>i; l--)
			cout<<"00";
	else
		for(int l=n; l>i; l--)
		cout<<"00";

	char Ch4=65;
		for(int k=0; k<i; k++)
		cout<<Ch4++;

	char Ch6=63;
	Ch6+=i;		
		for(int y=1; y<i; y++)
		cout<<Ch6--;
		X=n;
		cout<<endl;
	}
	return 0;
}
