//Program to Add N matrices.(add_N_matrix)
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void add_next();
void matrix();
void first_sum();
void add_n();
void display();
void second();
void add();

int m1[5][5],m2[5][5],nm[5][5],r,c;
int main()
{
	cout<<"Enter the no. of row & column :";
	cin >>r>>c;
	cout<<"Enter the element of first matrix :"<<endl;
	for(int i=0; i<r; i++)
		for(int j=0;j<c;j++)
			cin>>m1[i][j];
	second();
	display();
	add();
	matrix();
	return 0;
}
void second()
{
	cout<<"Enter the element of next matrix :"<<endl;
	for(int i=0; i<r; i++)
		for(int j=0;j<c;j++)
			cin>>m2[i][j];
}

void display()
{
	system("cls");
	cout<<"First matrix is :\n";
	for(int i=0; i<r; i++)
	{
		for(int j=0;j<c;j++)
			cout<<m1[i][j]<<"\t";
			cout<<endl;
	}
	cout<<"\nNext matrix is :\n";
	for(int i=0; i<r; i++)
	{
		for(int j=0;j<c;j++)
			cout<<m2[i][j]<<"\t";
			cout<<endl;
	}
}
void add()
{
	for(int i=0; i<r; i++)
		for(int j=0;j<c;j++)
			nm[i][j]=m1[i][j]+m2[i][j];
	cout<<"\nSum is :\n";
	for(int i=0; i<r; i++)
	{
		for(int j=0;j<c;j++)
			cout<<nm[i][j]<<"\t";
		cout<<endl;
	}
}
void matrix()
{
	char ch;
	cout<<"\nDo u want to add another matrix :";
	cin>>ch;
	if(ch=='Y' || ch=='y')
	{
			add_n();
			matrix();		
	}
	else
	{
		cout<<"\npress ENTER to exit....";
		getch();
		exit(0);
	}
}
void add_n()
{
		second();
		first_sum();
		add_next();
}
void first_sum()
{
	for(int i=0; i<r; i++)
		for(int j=0;j<c;j++)
			m1[i][j]=nm[i][j];
	
}
void add_next()
{
	for(int i=0; i<r; i++)
		for(int j=0;j<c;j++)
			nm[i][j]=m1[i][j]+m2[i][j];
	cout<<"\nSum is :\n";
	for(int i=0; i<r; i++)
	{
		for(int j=0;j<c;j++)
			cout<<nm[i][j]<<"\t";
			cout<<endl;
	}	
}
