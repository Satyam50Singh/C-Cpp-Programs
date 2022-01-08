//Quad_Sides
/*
(x1,y1)-------------------(x3,y3)
 |                         |
 |	(20,10)--------(20,20) |
 |	 |        			|  |
 |	 |        			|  |
 |	(10,10)--------(20,10) |
 | 						   |
(y3,y3)-------------------(x2,y2)
*/
#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	int arr[10];
	cout<<"Enter Coordinates :\n";
	for(int i=1; i<=8; i++)
		cin>>arr[i];
/*
1	2	3	4	5	6	7	8
20	10	10	20	20	20	10	10	
*/	int val01,val02;
	int val11,val12;
	val01=arr[5]-arr[1];	
	val02=arr[6]-arr[2];	
	val11=arr[3]-arr[7];	
	val12=arr[4]-arr[8];
	
//	cout<<"Value is :"<<val01<<"	"<<val02<<"	"<<val11<<"	"<<val12;	
	
	if((val01+val02)==(val11+val12))
		cout<<"\nyes,Every line equals. ";
	else
		cout<<"\nNot,Every line not equal. ";
	
}
