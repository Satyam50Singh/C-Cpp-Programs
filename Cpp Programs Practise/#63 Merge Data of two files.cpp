// Program to merge the content of two files.
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream fin;
	ofstream fout;
	fout.open("merge.txt", ios::out);
	fin.open("demo.txt", ios::in);
	if(!fin){
		exit(0);
	}
	while(!fin.eof()){
		char ch = fin.get();
		fout << ch;
	}
	fin.close();
	
	fin.open("demo2.txt", ios::in);
	while(!fin.eof()){
		char ch = fin.get();
		fout << ch;
	}
	fin.close();
	
	fout.close();

	fin.open("merge.txt", ios::in);
	while(!fin.eof()){
		char ch = fin.get();
		cout << ch;
	}
	fin.close();
	
	return 0;
} 
