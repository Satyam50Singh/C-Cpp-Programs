//Program to convert binary to octal number.(bin_oct_conversion)
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i=0,bin_num,oct_num=0,dec_num=0,rem;
	cout<<"Enter a no :";
	cin>>bin_num;
	while(bin_num>0)
	{
		rem=bin_num%10;
		dec_num=dec_num+rem*pow(2,i);
		i++;	
		bin_num=bin_num/10;
	}
	cout<<"Decimal no. is "<<dec_num;
	 i=1;
	while(dec_num>0)
	{
		rem=dec_num%8;
		oct_num=oct_num+rem*i;
		dec_num/=8;
		i=i*10;
	}
	cout<<endl<<"Octal no. is "<<oct_num;
	return 0;
}	
