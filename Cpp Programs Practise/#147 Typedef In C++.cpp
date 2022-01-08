// Example of typedef

#include <iostream>
using namespace std;

typedef struct {
	string name;
	int age;
}PERSON;

int main() {
	PERSON P1;
	cout << "Enter Name : ";
	getline(cin, P1.name);
	cout << "Enter age :";
	cin >> P1.age;
	
	system("cls");
	cout <<"Details \nName : " << P1.name << "\nAge : " << P1.age ;		
	return 0;
}

