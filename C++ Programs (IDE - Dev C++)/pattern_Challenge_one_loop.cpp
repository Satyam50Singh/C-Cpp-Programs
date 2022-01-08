/*Write a program that take input(N) and print following pattern
Input : 4
1		
22
333
4444
55555
Condition : Only one loop,no if else,no ternary Operator,no Recursion.(pattern_Challenge_one_loop)*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no. of rows :";
	cin>>n;
	/*
	1		
	22
	333
	4444
	55555
	*/
	int x=1;
	for(int i=1;i<=n;i++)
	{
		cout<<x*i<<endl;
		x=x*10+1;
	}
	/*
	*
	**
	***
	****
	*****
	*/
	string p="";
	for(int i=0; i<n; i++)
	{
		p+='*';
		cout<<p<<endl;
	}
	
	/*
	1    
	12   
	123  
	1234 
	12345
	*/
	 x=1;
	for(int i=1;i<=n;i++)
	{
		cout<<x<<endl;
		x=x*10+(i+1);
	}
	
	/*
	A
	AB
	ABC
	ABCD
	ABCDE
	*/
	string str="A";
	for(int i=1;i<=n;i++)
	{
		cout<<str<<endl;
		str+=(65+i);
	} 

	return 0;
}


