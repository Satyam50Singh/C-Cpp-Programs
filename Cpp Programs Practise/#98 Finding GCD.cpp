#include <iostream>
using namespace std;

class GCD {
	private :
		int n1, n2, gcd;
	public :
		GCD() : n1(0), n2(0), gcd(0){
		}
		setValues(int n1, int n2){
			this -> n1 = n1;
			this -> n2 = n2;
			cout << "Numbers are : " << n1 << " " << n2 << endl;
		}
		firstWay(){
			for(int i=1; i<=n1 && i<=n2; i++){
				if(n1%i==0 && n2%i==0){
					gcd=i; 
				}
			}
			cout << "\nFirst Way";
			cout <<"\nGCD of " << n1 << " & " << n2 << " is :" << gcd << endl;
		}
		secondWay(){
			while(n1!=n2){
				if(n1>n2){
					n1-=n2;
				}else{
					n2-=n1;
				}
			}
			cout << "\n\nSecond Way";
			cout <<"\nGCD is :" << n1 << endl;
		}
		thirdWay(){
			int temp1 = n1;
			int temp2 = n2;
			n1 = (n1>0) ? n1 : -n1;
			n2 = (n2>0) ? n2 : -n2;
			while(n1!=n2){
				if(n1>n2){
					n1-=n2;
				}else{
					n2-=n1;
				}
			}
			cout << "\n\nThird Way for both +ve and -ve no.s\n";
			cout <<"\nGCD of " << temp1 << " & " << temp2 << " is :" << n1 << endl;
		}
};

int main(){
	GCD obj;
	int n1, n2;
	cout << "Enter two integers : ";
	cin >> n1 >> n2;
	obj.setValues(n1, n2);
	if (n1>0 && n2>0){
		obj.firstWay(); // Using for loop and if statement.
		obj.secondWay(); //using while loop and if else
	}else{
		obj.thirdWay();
	}
	return 0;
}
