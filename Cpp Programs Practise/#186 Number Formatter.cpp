#include <iostream>
using namespace std;

int main() {
	string num;
	cin>> num; // 	getting number
	int c=0;
	if(num.length() < 4){
		cout << "Number having less than 4 digit, so number cannot be format.";
	}else {
		string newNum = "";
		for(int i=num.length()-1; i>=0; i--){
			c++;
			if((c==4) || (c>4 && c%2==0)){
				newNum = newNum + "," + num[i];
			}else {
				newNum = newNum + num[i];
			}
		}
		cout << "\nFormatted Number is : ";
		for(int i=newNum.length()-1; i>=0; i--){
			cout << newNum[i];
		}
	}
	
	return 0;
}
