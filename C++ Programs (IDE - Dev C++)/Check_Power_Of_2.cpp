//Program to check whether a no. is power of 2.(Check_Power_Of_2)
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a no. :";
	cin>>num;//2*2*2*2*2*2=>2^6=>64
	int j=1,k=1;
	for(int i=1; i<num/2; i++)
	{
			j=pow(2,i);
			if(j==num)
			{
			cout<<"Yes "<<num<<" is a power of 2"<<endl;
				cout<<"Power is : "<<k;
				break;				
			}
			else
			{
				k++;
			}
	}
 } 
