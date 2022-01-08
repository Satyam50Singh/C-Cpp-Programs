// Example of tellp function

//tellp() -> this function tell the put pointer location.
//tellg() -> this function tell the get pointer location.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream file;
	
	file.open("demo.txt", ios::app);
	if(!file) {
		cout <<"\n!error\n";
		exit(0);
	}
	cout << "\nprev put pointer location : " << file.tellp() << endl;
	file << "\nNew Data : 1, 2, 3, 4";
	cout << "\nmiddle put pointer location : " << file.tellp() << endl;
	file << "5, 6, 7, 8";
	cout << "\nafter appending data, put pointer location : " << file.tellp() << endl;

	file.close();
	cout << "\n-----------------------------------------\n";
	ifstream file1;
	file1.open("demo.txt");
	cout << "\nprev get pointer location : " << file1.tellg() << endl;
	char ch;
	file1 >> ch;
	cout << ch;
	cout << "\nafter getting data, put pointer location : " << file1.tellg() << endl;
	file1.close();
	return 0;
}
