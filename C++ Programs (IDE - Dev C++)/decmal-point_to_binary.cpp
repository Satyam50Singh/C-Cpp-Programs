//Program to convert point-decimal to Binary.(decmal-point_to_binary)
#include <iostream>
using namespace std;
int Integral(double n)
{
	return (int) n;
}
double Float(double n)
{
	return n-(int) n;
}
int main()
{
	double n,Float_part;
	int temp1,temp2,a,b,Int_part;
	cout<<"Enter a no.: ";
	cin>>n;
	temp1=n;
	cout<<"No. is :"<<n;
	Float_part=Float(n);
	Int_part=Integral(n);
	cout<<endl<<"Integral part is :"<<Int_part;
	cout<<"\nFloat_part is : "<<Float_part;
/*
2	24	0
2	12	0
2	6	0
2	3	1
	1
*/	
	cout<<"\n\nBinary Conversion is :";
	int i=0,rem,x=Int_part;
	int arr[10];
	while(Int_part!=0)
	{
		rem=Int_part%2;
		arr[i++]=rem;
		Int_part/=2;
	}
	for(int j=i-1; j>=0; j--)
		cout<<arr[j];
		cout<<".";	
/*
0.43*2=0+0.96
0.96*2=1+0.92
*/	
	int c=0;
	while(c!=2)
	{
		Float_part=Float_part*2;
		cout<<(int) Float_part;
		c++;
		if(Float_part>1)
		{
			Float_part-=1;
		}
	}
	return 0;
}

