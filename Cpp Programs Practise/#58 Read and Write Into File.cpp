// Program to read and write data from file.
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string name, age;
	ofstream ofile;
	ofile.open("demo.txt", ios::out); // open a file.
	cout << "Enter your name : ";
	getline(cin,name);
	
	cout << "Enter your age : ";
	getline(cin,age);
	
	ofile << "Name is : " << name << endl;
	ofile << "Age is : " << age << endl;
	ofile.close(); // close a file
	
	ifstream ifile;
	ifile.open("demo.txt", ios::in);
	cout << "\n\nContent reading from file : \n";
	char ch;
	while(!ifile.eof()){
		ch = ifile.get();
		cout << ch;
	}
	
	ifile.close();	
	return 0;
}
