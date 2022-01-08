//Program to sort elements in lexicographical order
#include <iostream>
using namespace std;

int main() {
	string str[10];
	cout << "Enter 5 names : \n\n";
	for(int i=0; i<5; i++){
		cin >> str[i];
	}
	
	cout << "\n\nNames : \n";
	for(int i=0; i<5; i++){
		cout << i+1 << ". " << str[i] << endl;
	}
	
	char ch[10][10];
	cout << "\n\nSorted list : \n";
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if(str[i]>str[j]){
				string temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}		
		}
	}

	for(int i=0; i<5; i++){
		cout << i+1 << ". " << str[i] << endl;
	}

	return 0;
}
