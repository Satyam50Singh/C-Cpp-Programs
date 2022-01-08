//program that take input(N) and print Sum of odd and even no.s between 1 to N. 
//Example : Input : 10
//          Odd : 25
//         Even : 30
//(Without using Loops,If…..else,Switch case,Ternary Operator) (ceil_fn_even_odd_sum)
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float copy,half,o,osum,esum,num;
	cout<<"Enter the value of n :";
	cin>>num;
	copy=num;
	half=ceil(copy/2);
	o=num%2;
	o=o*2;
	osum=half*half;
	esum=osum-(half*(o-1));
	cout<<"Even sum :"<<esum<<endl;
	cout<<"Odd sum :"<<osum<<endl;
}
