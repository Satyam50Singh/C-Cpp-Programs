//Bubble Sort and Binary Search in a Single Class using C++(bubble_binary_sin_class)
#include <iostream>
using namespace std;
class sort
{
	private :
	int n,arr[20];
	public :
		void getdata()
		{
			cout<<"Enter the no. of element in a array :";
			cin>>n;
			cout<<"Enter "<<n<<" elements\n";
			for(int i=0;i<n;i++)
			cin>>arr[i];
		}
		void display()
		{	
			cout<<"\nElements are :";
			for(int i=0;i<n;i++)
			cout<<arr[i]<<"  ";
		}
		void bubble_Sort()
		{
			for(int i=0; i<n-1; i++)
			{
				for( int j=0; j<n-i-1 ;j++)
				{
					if(arr[j]>arr[j+1])
					{
						int temp=arr[j+1];
						arr[j+1]=arr[j];
						arr[j]=temp;
					}
				}
			}
		}
		
		void binary_search()
		{
			int search,first,last,middle;

			cout<<"\n\nBinary Searching"<<endl;
			cout<<"Enter the element which u want to search :";
			cin>>search;
			first=0;
			last=n-1;
			middle=(first+last)/2;
			while(first<=last)
			{
				if(search==arr[middle])
				{
					cout<<search<<" is located at "<<middle+1<<" position.";
					break;
					}
				else
				{
					if(search<arr[middle])
						last=middle-1;
					else
						first=middle+1;
				middle=(first+last)/2;					
				}
				
			}
			if(first>last)
				cout<<"\nBinary Searching is not possible ....";
		}
};

int main()
{
	sort x;
	x.getdata();
	x.display();
	x.bubble_Sort();
	cout<<"\nAfter Bubble sort\n";
	x.display();
	x.binary_search();
	return 0;
}
