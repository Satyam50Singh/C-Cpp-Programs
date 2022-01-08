#include <iostream>
using namespace std;
int main()
{
	int n,x=7;
	cout<<"Enter no. of rows :";
	cin>>n;
	cout<<endl;
	
	for(int i=1; i<=n ; i++)
	{
	//1
		for(int j=1; j<=i; j++)
			cout<<((i%2==0)?"#":"*")<<" ";	
		for(int l=n; l>i; l--)
			cout<<"  ";
		for(int l=0; l<=n; l++)
			cout<<" ";
	//2
		for(int j=1; j<=n; j++)
			cout<<((i==j)?i:0)<<" ";				
		for(int l=0; l<=n; l++)
			cout<<" ";
	//3
		for(int j=1; j<=i; j++)
			cout<<((j%2!=0)?1:0)<<" ";	
		for(int l=n; l>i; l--)
			cout<<"  ";
		for(int l=0; l<=n; l++)
			cout<<" ";
	//4
		for(int j=1; j<=i ;j++)
		{
			cout<<x++<<" ";
		}
		x=7;
		x=x-(i+1);
		for(int l=n; l>i; l--)
			cout<<"  ";
		for(int l=0; l<=n; l++)
			cout<<" ";
	//21
		for(int j=1; j<=i; j++)
		{
			if(j%3==0)
				cout<<"* ";
		 	if(j%3==1)
		 		cout<<"# ";
		 	
			if((j%3)==2)
				cout<<"@ ";
		}	
		cout<<endl;
	}
/*------------------------------------------------------------*/	
	cout<<endl;
	for(int i=n; i>0; i--)
	{
	//5
		for(int j=0; j<i; j++)
		cout<<" ";
		for(int k=n; k>=i; k--)
			cout<<i<<" ";
		for(int l=1; l<i; l++)
			cout<<" ";
		for(int l=0; l<n; l++)
			cout<<" ";
	//6			
		for(int j=n; j>i; j--)
		cout<<" ";
		for(int k=0; k<i; k++)
		cout<<k+1<<" ";
		for(int l=n; l>i; l--)
			cout<<" ";
		for(int l=0; l<n; l++)
			cout<<" ";
	//7	
		for(int j=n; j>=i; j--)
		cout<<" ";
		for(int k=0; k<i; k++)
		cout<<"* ";
		for(int l=n; l>=i; l--)
			cout<<" ";
		for(int l=0; l<n; l++)
		cout<<" ";
	//8
	int y=1;
		for(int j=n; j>=i; j--)
			cout<<y++<<" ";
		for(int l=0; l<i; l++)
			cout<<"  ";
		for(int l=1; l<n; l++)
		cout<<" ";
	//22
	int t=1;
	for(int k=n; k>=i; k--)
	{
		if(k%2==0)
			cout<<"* ";
		if(k%2!=0)
			cout<<t++<<" ";
	}
		cout<<endl;
}
/*------------------------------------------------------------*/	
	cout<<endl;
	for(int i=0; i<n; i++)
	{
	//9
		for(int j=0; j<=i; j++)
			cout<<i+1<<" ";
		for(int l=n-1; l>i; l--)
			cout<<"  ";
		for(int l=0; l<=n; l++)
			cout<<" ";
	//10
		int k2=i+1;
		for(int j=0; j<=i; j++)
			cout<<k2--<<" ";
		for(int l=n-1; l>i; l--)
			cout<<"  ";
		for(int l=0; l<n; l++)
			cout<<" ";
	//11
		for(int j=n; j>i;j--)
		cout<<" ";
		for(int k=0; k<=i; k++)
		cout<<"* ";
		for(int l=n; l>i; l--)
			cout<<" ";
		for(int l=0; l<n; l++)
			cout<<" ";
	//12
	int t=1;
		for(int k=0; k<=i; k++)
		{
			if(i%2==0)
				cout<<"* ";
			else
				cout<<t++<<" ";
		}
		for(int k=n-1; k>i; k--)
		cout<<"  ";
		for(int l=0; l<=n; l++)
			cout<<" ";
	//23
		for(int j=1; j<=i; j++)
		cout<<"  ";
		for(int j=n; j>i;j--)
		cout<<"* ";
			cout<<endl;
	}
/*------------------------------------------------------------*/	
	cout<<endl;
	
	for(int i=0; i<n; i++)
	{
	//13
		for(int j=n; j>i; j--)
			cout<<"* ";
		for(int l=0; l<=i; l++)
		cout<<"  ";
		for(int k=0;k<n;k++)
		cout<<" ";
	//14
		for(int j=0; j<=i; j++)
		cout<<"* ";
		for(int l=n-1; l>i; l--)
		cout<<"  ";
		for(int u=0;u<n;u++)
		cout<<" ";
	//15
		for(int j=0; j<n; j++)
		cout<<"* ";
		for(int u=0;u<n;u++)
		cout<<" ";
	//16
		for(int j=n-1; j>i; j--)
		cout<<"  ";
		for(int k=0; k<=i; k++)
		cout<<" *";
		for(int u=0;u<n;u++)
		cout<<" ";
	//24
		for(int h=n; h>i; h--)
		cout<<" ";
		int p=((n/2)+1);
		char a=65;
		char A=97;
		for(int k=0; k<=i; k++)
		{
			if(i%2==0)
			cout<<a++<<" ";
			else
				cout<<A++<<" ";
		}
		cout<<endl;
	}
/*------------------------------------------------------------*/	
	cout<<endl;
	//17
	for(int i=1; i<=n ; i++)
	{
		if(i%2!=0)
		cout<<"*"<<" ";
		else
		cout<<i*i<<" ";
	}
	for(int l=0;l<n;l++)
		cout<<" ";
	//18
	for(int i=1; i<=n ; i++)
	{
		if(i%2!=0)
		cout<<i<<" ";
		else
		cout<<"$ ";
	}
	for(int l=0;l<n;l++)
		cout<<" ";
	//19
	for(int i=1; i<=n ; i++)
	{
		if(i%3==1)
		cout<<"* ";
		else if(i%3!=2)
		cout<<"# ";
		else
		cout<<"@ ";
	}
	
	//20
	char C=97,c=65;
	
	for(int l=0;l<n;l++)
		cout<<" ";
	for(int i=0; i<n; i++)
		cout<<c++<<" ";
	//25
	c=65;
	for(int l=0;l<n;l++)
		cout<<" ";
	for(int k=0; k<n; k++)
		if(k%2==0)
		cout<<c++<<" ";
		else
		cout<<C++<<" ";
		

/*	
	for(int i=0; i<n; i++)
	{
		cout<<endl;
	}
	//20
	int a=10,b=5,c=5;
	int d;
	d=a==(b+c);
	cout<<"\nValue of d is : "<<d<<endl;
	
	//21
	int t=9 + (5 * 9) / 3;
	cout<<"\nValue of t is :"<<t<<endl;
*/	return 0;
}
