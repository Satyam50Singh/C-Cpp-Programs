/*Given a non empty array of integer every element appear three times except for one. Which appear exactly once. Write a efficient program to find that single one. 
Example : Input ::{1,2,1,2,1,2,5,5,5,8}
          Output :: 8.
Your Algorithm should have a linear Runtime Complexiity.(find_single_one)*/
#include <iostream>
using namespace std;
int main()
{
	int arr[]={0,1,0,1,2,3,0,1,2,2,3,3,14,5,6,5,6,6,5};
	int c=0;
	for(int j=0; j<19;j++)
	{
		c=0;
		for(int i=0; i<19;i++)
			if(!(arr[j]^arr[i]))
				c++;						
		if(c!=3)
			cout<<arr[j];
	}	
return 0;
}
