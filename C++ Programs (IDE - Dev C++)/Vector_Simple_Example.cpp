//A simple Example to illustrate Vector
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;
int main()
{
	//Declaration of vector in different ways.
	cout<<"-------------------------------------------------\n";
	cout<<"Declarations\n";
	vector <int> v1;		//1 
	cout<<endl;
	cout<<"Size of v1 is :"<<v1.size()<<endl;
	cout<<"Capacity of v1 is :"<<v1.capacity()<<endl;

	vector <int> v2(5);		//2
	cout<<endl;
	cout<<"Size of v2 is :"<<v2.size()<<endl;
	cout<<"Capacity of v2 is :"<<v2.capacity()<<endl;
	for (int i=0; i<v2.size(); i++)
	cout<<v2[i]<<" ";
	cout<<endl;

	vector <string> v3(6,"Hii");	//3
	cout<<endl;
	cout<<"Size of v3 is :"<<v3.size()<<endl;
	cout<<"Capacity of v3 is :"<<v3.capacity()<<endl;
	for (int i=0; i<v3.size(); i++)
	cout<<v3[i]<<" ";
	cout<<endl;
	cout<<"-------------------------------------------------\n";
	//Commomly used fns of vectors
	
	vector <int> v;
	cout<<"Using push_back() fn\n";
	cout<<"\nCapacity of v is :"<<v.capacity()<<endl;
	v.push_back(10);	//1.Push_back function
	cout<<"Capacity of v is :"<<v.capacity()<<endl;
	v.push_back(10);	//1.Push_back function
	cout<<"Capacity of v is :"<<v.capacity()<<endl;
	v.push_back(10);	//1.Push_back function
	cout<<"Capacity of v is :"<<v.capacity()<<endl;
	v.push_back(10);	//1.Push_back function
	cout<<"Size of v is :"<<v.size()<<endl;
	cout<<"Capacity of v is :"<<v.capacity();
	cout<<"\n-------------------------------------------------\n";
	
	cout<<"Using pop_back() fn\n";
	v.pop_back();		//2.Pop_back function
	v.pop_back();		//2.Pop_back function
	cout<<"\nSize of v is :"<<v.size()<<endl;
	cout<<"Capacity of v is :"<<v.capacity();
	cout<<"\n-------------------------------------------------\n";
	
	cout<<"Using clear() fn\n";
	v.clear();			//3.clear function
	cout<<"\nSize of v is :"<<v.size()<<endl;
	cout<<"Capacity of v is :"<<v.capacity();
	cout<<"\n-------------------------------------------------\n";
	
	cout<<"Inserting new 10 Values\n";
	for(int i=0; i<=9; i++)
	v.push_back(10*(i+1));
	cout<<"\nSize of v is :"<<v.size()<<endl;
	cout<<"Capacity of v is :"<<v.capacity();
	
	cout<<"\n-------------------------------------------------\n";
	cout<<"Using at() fn\n";	//4.at function
	cout<<"Value at position 4 :"<<v.at(4);
	cout<<"\nSize of v is :"<<v.size()<<endl;
	cout<<"Capacity of v is :"<<v.capacity();
	
	cout<<"\n-------------------------------------------------\n";
	cout<<"Using front() and back()\n";	//5.front function
										//6.back function
	cout<<"Front Value is :"<<v.front();
	cout<<"\nLast Value is :"<<v.back();

	cout<<"\n-------------------------------------------------\n";
	cout<<"Using empty()\n";
	if(v.empty())
	cout<<"Vector v is empty!\n";	
	else
	cout<<"Vector v is not empty!";
	cout<<"\n-------------------------------------------------\n";

	cout<<"Performing insertion at nth position(Using Iterators)"<<endl;
	cout<<"Position is 3"<<endl;
	
	vector <int>:: iterator itr=v.begin();
	v.insert(itr+2,35);
	for(int i=0; i<v.size(); i++)
	cout<<v[i]<<" ";
	getch();
	return 0;
}


/*	vector <string> s1;
	s1.push_back("javaTpoint");
	s1.push_back("tutorial");
	for ( vector <string>::iterator itr=s1.begin(); itr!=s1.end(); ++itr)
	cout<<*itr;
	s1.pop_back();
	cout<<"\n";
	for ( vector <string>::iterator itr=s1.begin(); itr!=s1.end(); ++itr)
	cout<<*itr;
	cout<<"\nSize is :"<<s1.size();
	cout<<"\nCapacity is :"<<s1.capacity();
*/
