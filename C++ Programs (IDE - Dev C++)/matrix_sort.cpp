/*1.	Write an efficient Algorithm that searches for a value in an mxn matrix.
This matrix has the following properties:
a.	Integers in each row are sorted in ascending from left to right.
b.	Integers in each column are sorted in ascending from top to bottom.(matrix_sort)*/

#include <iostream>
using namespace std;
int r,c;
int arr[10][10],search;
void display()
{
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<r; j++)
			cout<<arr[i][j]<<"\t";
			cout<<endl;		
	}	
}
int main()
{
	cout<<"Enter the no. of rows & column :";
	cin>>r>>c;
	
	cout<<"Enter the element for the matrix \n";
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			cin>>arr[i][j];
	
	cout<<"\n\nMatrix before Sorting \n";
	display();

	for(int i=0; i<r; i++)
	{
		for(int k=0; k<c; k++)
		{
			for(int j=0; j<c-1; j++)
			{
				if(arr[i][j]>arr[i][j+1])
				{
					int temp=arr[i][j];
					arr[i][j]=arr[i][j+1];
					arr[i][j+1]=temp;
				}					
			}
		}
	}
	cout<<"\n\n";
	display();
	for(int j=0; j<r; j++)
	{
		for(int k=0; k<c; k++)
		{
			for(int i=0; i<r-1; i++)
			{
				if(arr[i][j]>=arr[i+1][j])
				{
					int temp=arr[i][j];
					arr[i][j]=arr[i+1][j];
					arr[i+1][j]=temp;
				}
			}
		}
	}

	cout<<"\nMatrix after Sorting \n";
	display();
	
	cout<<"\nEnter the no. to be searched :";
	cin>>search;
	int o=0;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<r; j++)
		{
			if(arr[i][j]==search)
			{
				o=1;
				cout<<endl;
				cout<<search<<" is stored at "<<i<<"x"<<j<<" (INDEXES)";
			}
		}
	}
	if(!o)
		cout<<"No. is not found !!!..";
	return 0;
}
