//Program to display the size of current opened file.(size_of_file)
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream afile;
	afile.open("Newfile.txt",ios::app);
	if(!afile)
	{
		cout<<"Error";
	}
	for(int i=0; i<1000; i++)
	{
		afile<<i+1<<" ";
	}
	afile.seekg(0,ios::end);
	int res=afile.tellg();
	cout<<res<<" bytes";
	afile.close();
	return 0;
}
