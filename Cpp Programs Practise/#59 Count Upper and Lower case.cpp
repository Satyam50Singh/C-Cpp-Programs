// Program to count upper and lower letter in a file and total no. of lines.
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream ofile;
	ofile.open("demo.txt", ios::out);
	ofile << "Hii I am Satyam Singh. 124\nHello";
	ofile.close(); 
	
	ifstream ifile;
	ifile.open("demo.txt", ios::in);
	int lines=1,u=0,l=0;
	while(!ifile.eof()){
		char ch = ifile.get();
		if (ch >= 65 && ch <= 90){
			u++;
		}else if (ch >= 97 && ch <= 122){
			l++;
		} else if(ch == '\n'){
			lines++;
		}
		
		cout << ch;
	}
	ifile.close();
	
	cout << "\n\nTotal No. of upper case characters : " << u;
	cout << "\n\nTotal No. of lower case characters : " << l;
	cout << "\n\nTotal No. of lines : " << lines;
	
	return 0;
}
