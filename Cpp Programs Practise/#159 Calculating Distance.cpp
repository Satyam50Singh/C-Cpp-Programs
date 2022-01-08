//Program to calculate total distances

#include <iostream>
using namespace std;

struct distance {
	int feet, inch;
};

class Distance {
	private :
		struct distance d1, d2;
		int resFeet, resInch;
	public :
		Distance(): resFeet(0), resInch(0){
		}
		void getDistance () {
			cout << "Enter distance 1 : \nFeet : ";
			cin >> d1.feet;
			cout << "Inch : ";
			cin >> d1.inch; 	
			cout << "\nEnter distance 2 : \nFeet : ";
			cin >> d2.feet;
			cout << "Inch : ";
			cin >> d2.inch; 	
		}	
		void showDistance() {
			cout << "\nDistance 1 : " << d1.feet << " feets and " << d1.inch << " inches \n\n";	
			cout << "\nDistance 2 : " << d2.feet << " feets and " << d2.inch << " inches \n\n";	
		}
		void calDistance() {
			resInch = d1.inch + d2.inch;
			resFeet = d1.feet+d2.feet;
			if(resInch<12) {
				cout << "\nCalculated Distance : " << resFeet << " feets and " << resInch << " inches \n\n";	
			}else{
				resInch = resInch-12;
				resFeet++;
				cout << "\nCalculated Distance : " << resFeet << " feets and " << resInch << " inches \n\n";	
			}
		}
};

int main() {
	Distance D1;
	D1.getDistance();
	D1.showDistance();
	D1.calDistance();
	return 0;
}
