// Program to take input (N) and sort it alphabetically the no.s 1toN.

#include <iostream>
using namespace std;

int main() {
	int N;
	string str[10];
	char digitsInWords[][10] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
	cout << "Enter the value of N (0-9) : ";
	cin >> N;
	
	for(int i=0; i<N; i++){
		str[i] = digitsInWords[i];
		cout << str[i] << endl;
	}
	
	for(int k=0; k<N; k++){
		for(int l=k+1; l<N; l++){
			if(str[k]> str[l]){
				string temp;
				temp = str[k];
				str[k] = str[l];
				str[l] = temp;
			}
		}
	}
	cout << "\nRequired Output\n\n";
	for(int i=0; i<N; i++){
		cout << str[i] << endl;
	}

	return 0;
}

