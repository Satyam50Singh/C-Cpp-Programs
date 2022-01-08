// Program to stored data in tabular form.

#include <iostream>
using namespace std;

struct Student {
	string name;
	int age;
	string address, phone;
};

int main() {
	Student s[5];
	cout << "Enter the details of 5 students : \n";
	for(int i=0; i<5; i++){
		fflush(stdin);
		cout << "\nEnter Name of " << i+1 << " student : ";
		getline(cin,s[i].name);
		fflush(stdin);
		cout << "\nEnter Age of " << i+1 << " student : ";
		cin >> s[i].age;
		fflush(stdin);
		cout << "\nEnter Phone Number of " << i+1 << " student : ";
		cin >> s[i].phone;
		fflush(stdin);
		cout << "\nEnter Address of " << i+1 << " student : ";
		cin >> s[i].address;		
	}
	
	cout << "\nDetails : \n\n";
	cout << "Name\t\tAge\tPhone No.\tAddress\n";
	for(int i=0; i<5; i++){
		cout << s[i].name << "\t" << s[i].age << "\t" << s[i].phone << "\t" << s[i].address << endl;
	}
	return 0;
}
