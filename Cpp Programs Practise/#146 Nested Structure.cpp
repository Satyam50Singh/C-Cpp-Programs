// Nesting of Structure.

#include <iostream>
using namespace std;

struct student {
	string name;
	struct age {
		int date, mon, year;		
	}a;
};

int main() {
	struct student s;
	cout << "Enter the name of student : ";
	cin >> s.name;
	cout << "Enter date of birth : \n";
	cout << "Date :-";
	cin >> s.a.date;
	cout << "Month :-";
	cin >> s.a.mon;
	cout << "Year :-";
	cin >> s.a.year;
	
	cout << "\nName : " << s.name << " \nAge : " << s.a.date  << "/" << s.a.mon<<"/" << s.a.year;
}
