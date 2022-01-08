// Temperature Convertor
#include <iostream>
using namespace std;

int main() {
	cout << "Select\n\n1. Celsius to Fahrenheit\n2.Fahrenheit to celsius\n\nEnter your choice : ";
	int choice; 
	float temp;
	cin >> choice;
	cout<<"Enter temperature : ";
	cin >> temp;
	
	switch(choice){
		case 1:{
			cout << "Fahrenheit = " << (temp * 9/5)+32;
			break;
		} 
		case 2: {
			cout << "Celsius = " << (temp-32)* 5/9;
			break;
		}
		default :{
			cout << "Wrong Choice .";
			break;
		}
	}		
	return 0;
}
