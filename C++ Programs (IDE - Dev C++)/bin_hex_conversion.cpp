//Program to convert binary to hexadecimal(bin_hex_conversion)
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int hex_num[40];
	long int num,dec_num=0,rem;
	cout<<"Enter a Binary No. :";
	cin>>num;
	int i=0;
	while(num!=0)
	{
		rem=num%10;
		dec_num=dec_num+rem*pow(2,i);
		i++;
		num/=10;
	}
	
	i=0;
	int j=0;
	while(dec_num!=0)
	{
		rem=dec_num%16;
		hex_num[j]=rem;
		j++;
		dec_num/=16;
	}
	cout<<"\nHexadecimal conversion is :";
	for(int k=j-1; k>=0; k--)
	{
		if(hex_num[k]<9)
			cout<<hex_num[k];
			else
			cout<<(char)(hex_num[k]+55);
	}
	return 0;
}
