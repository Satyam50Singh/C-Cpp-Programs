//Exception Handling
#include <iostream>
using namespace std;

int main()
{
	int a=5;
	cout<<"\tEXCEPTION HANDLING\n";
	try{
		cout<<"\n1st Try Block\n";
		if(a==4)
		{
			cout<<"\tthrowed value is :0"<<endl;
			throw 0;		
		}
		else
		{
			cout<<"\tthrowed value is :1"<<endl;
			throw 1;
		}
	}
	catch(int val){
		cout<<"1st Catch Block\n";
		if(val==0)
			cout<<"\tFalse";
		else
			cout<<"\tTrue";
	}
	cout<<"\nCatch block Ends"<<endl;
	
	int x=7;
	try{
		cout<<"\n2nd Try Block\n";		
		if(x!=7)
		{
			cout<<"\tthrowed value is :17"<<endl;			
			throw 17;
		}
		else
		{
		cout<<"\tthrowed value is :Satya"<<endl;			
		throw "Satya";
		}
	}
	catch(...){
		cout<<"2nd Catch Block\n";
		cout<<"\tx=7";
	}
	cout<<"\nCatch block Ends";
	return 0;
}
