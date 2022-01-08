//Program to list all files in current directory.(list_file_in_dir)
#include <iostream>
#include <dirent.h>
using namespace std;
int main()
{
	struct dirent *en;
	DIR *dir;
	dir=opendir(".");
	if(dir)
		while((en=readdir(dir))!=NULL)
			cout<<en->d_name<<endl;
	else
		cout<<"ERROR!!!.";	
	closedir(dir);
	return 0;
	
}
