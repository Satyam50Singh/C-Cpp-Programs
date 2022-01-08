// Program to calculate difference between two time period.

#include <iostream>
using namespace std;

struct Time {
	int hour, minute, second;
};

struct Time subtract(struct Time T1, struct Time T2){
	struct Time temp;
	cout << "\nTime 1 is : " << T1.hour << ":" << T1.minute << ":" << T1.second;
	cout << "\nTime 2 is : " << T2.hour << ":" << T2.minute << ":" << T2.second;
	
	if(T2.second > T1.second){
		--T1.minute;
		T1.second+=60;
	}
	temp.second = T1.second - T2.second;

	if(T2.minute > T1.minute){
		--T1.hour;
		T1.minute+=60;
	}
	temp.minute = T1.minute - T2.minute;
	temp.hour = T1.hour - T2.hour;
	return temp;
}

int main() {
	struct Time T1, T2, result;
	cout << "Enter First Time : \n";
	cout << "Hours : ";
	cin >> T1.hour;
	cout << "Minutes : ";
	cin >> T1.minute;
	cout << "Seconds : ";
	cin >> T1.second;

	cout << "Enter Second Time : \n";
	cout << "Hours : ";
	cin >> T2.hour;
	cout << "Minutes : ";
	cin >> T2.minute;
	cout << "Seconds : ";
	cin >> T2.second;
	
	struct Time diff = subtract(T1, T2);
	
	cout << "\nSubtraction is : " << diff.hour << ":" << diff.minute << ":" << diff.second;
	return 0;	
}
