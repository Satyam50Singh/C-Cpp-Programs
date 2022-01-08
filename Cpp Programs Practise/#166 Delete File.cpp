// Program to delete files from folder.

#include <iostream>
using namespace std;

int main() {
	char filename[12];
	cout << "Enter file name : ";
	cin >> filename;
	cout << "File name is : " << filename << endl;
	if(remove(filename) == 0){
		cout << "\nFile deleted successfully\n";
	}else {
		cout << "\nFile not deleted!!\n";
	} 
}
