// Structure in cpp.

#include <iostream>
using namespace std;

struct student{
	string name;
	int age;
	int phone;
};

int main() {
	student s1;
	cout << "Enter student details : \n";
	cout << "\nEnter name : ";
	getline(cin,s1.name);
	cout << "\nEnter age : ";
	cin >> s1.age;
	cout << "\nEnter phone no. : ";
	cin >> s1.phone;
	cout << "\nDetails \n\nName : " << s1.name << "\nAge : " << s1.age << "\nPhone Number : " << s1.phone << endl;
}
