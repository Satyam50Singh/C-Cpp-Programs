#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream fout;
	ifstream fin;
	fin.open("demo.txt", ios::in);
	fout.open("demo2.txt", ios::out);
	cout << "Data from the 1st file : "<< endl;	
	while(!fin.eof()){
		char ch = fin.get();
		cout << ch;
		fout << ch;
	}
	cout << "\n\nDATA COPIED!\n";
	fin.close();
	fout.close();
	
	cout << "Data from the 2nd file : "<< endl;	
	fin.open("demo2.txt", ios::in);
	while(!fin.eof()){
		char ch = fin.get();
		cout << ch;
	}
	fin.close();	
	return 0;
}
