// Program to encrypt and decrypt the data of file.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin;
	ofstream fout;
	fin.open("demo.txt",ios::in);
	fout.open("temp.txt",ios::out);
	
	cout << "Data from file \n";
	while(!fin.eof()){
		char ch = fin.get();
		cout << ch;
		ch+=100;
		fout << ch;
	}
	cout << "\nData encrypted \n\n";	
	fin.close();
	fout.close();
	
	cout << "Data from temp file \n";
	fin.open("temp.txt",ios::in);
	while(!fin.eof()){
		char ch = fin.get();
		ch = ch-100;
		cout << ch;
	}
	fin.close();
	cout << "\nData decrypted \n\n";	

	return 0;
}
