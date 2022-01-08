// Passing structure into function.

#include <iostream>
using namespace std;

struct book {
	string name;
	string isbn;
	float price;
};

void getDetails(struct book *a, int index){
	cout << "\nStudent No. : " << index+1 << endl;
	fflush(stdin);
	cout << "Enter name : ";
	cin >> a->name;
	fflush(stdin);
	cout << "Enter ISBN : ";
	cin >> a->isbn;
	cout << "Enter price : ";
	cin >> a->price;
	cout << endl;
}
void showDetails(struct book a, int index){
	cout << a.name << "		" << a.isbn << "	" << a.price << endl;
}
int main() {
	struct book a[10];

	cout << "Enter the details of 5 students : \n";
	for(int i=0; i<5; i++){
		getDetails(&a[i], i);
	}

	cout << "\nShow Details :\n";
	cout << "NAME	 	ISBN	PRICE\n";
	for(int i=0; i<5; i++){
		showDetails(a[i], i);
	}

	return 0;
}
