// Program to calculate the current age , if the date of birth is given in dd-mm-yyyy format.

#include <iostream>
using namespace std;

struct Age{
	int dd1, mm1, yyyy1;
	int dd2, mm2, yyyy2;
	int rdd, rmm, ryyyy;
};

class AgeCalculator{
	private:
		struct Age age;
	public :
		void getCurrentAge() {
			system("cls");
			cout << "Enter Current Date : ";
			cout << "\nEnter Date : ";
			cin >> age.dd1;
			if(age.dd1>0 && age.dd1<=31){
				cout << "\nEnter Month : ";
				cin >> age.mm1;
				if(age.mm1>0 && age.mm1<=12){
					cout << "\nEnter Year : ";
					cin >> age.yyyy1;
					if(age.yyyy1>=1900 && age.yyyy1<=2021){
						cout << "\n\nEnter Date of Birth : ";
						cout << "\nEnter Date : ";
						cin >> age.dd2;
						if(age.dd2>0 && age.dd2<=31){
							cout << "\nEnter Month : ";
							cin >> age.mm2;
							if(age.mm2>0 && age.mm2<=12){
								cout << "\nEnter Year : ";
								cin >> age.yyyy2;
								if(age.yyyy2>=1900 && age.yyyy2<=2021){}
								else {
									cout << "Invalid Data!!";
									exit(0);
								}
							}
							else {
								cout << "Invalid Data!!";
								exit(0);
							}
						}
						else {
							cout << "Invalid Data!!";
							exit(0);
						}
					}
					else {
						cout << "Invalid Data!!";
						exit(0);
					}
				}
				else {
					cout << "Invalid Data!!";
					exit(0);
				}
			}
			else {
				cout << "Invalid Data!!";
				exit(0);
			}				
		}
		void showDates() {
			cout << "\nCurrent Date : " << age.dd1 << "/" << age.mm1 << "/" << age.yyyy1 << endl;
			cout << "\nDate of Birth : " << age.dd2 << "/" << age.mm2 << "/" << age.yyyy2 << endl;
		}
		
		void calculateAge() {
			age.rdd = age.dd1-age.dd2;
			age.rmm = age.mm1-age.mm2;
			age.ryyyy = age.yyyy1-age.yyyy2;
			
			if(age.rdd < 0){
				age.rdd += 30;
				age.rmm --; 
			}
			if(age.rmm < 0) {
				age.rmm += 12;
				age.ryyyy --; 
			}
			if(age.rmm >0){
				age.rdd++;
			}

			cout << "\nAge : " << age.rdd << " days " << age.rmm << " months " << age.ryyyy << " years" << endl;
			
		}
};

int main() {
	AgeCalculator A1;
	A1.getCurrentAge();
	A1.showDates();
	A1.calculateAge();
	return 0;
}
