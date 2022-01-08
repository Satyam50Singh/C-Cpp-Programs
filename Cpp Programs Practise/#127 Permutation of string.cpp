// Find all permutation of string.
// for ex - "123"
// output - "123" , "231", "312" , "132" , "213", "321";

#include <iostream>
using namespace std;

void swap(char *x, char *y){
	cout << x <<"====" << y <<endl;
	char t = *x;
	*x = *y;
	*y = t;
}

void permutation(string str, int l, int r){
	static int count;
	if(l==r){
		count++;
		cout << count << ". " << str << endl;
	}else {
		for(int i=l; i<=r; i++){
			swap(str[l], str[i]);
			permutation(str, l+1, r);	
			swap(str[l], str[i]);
		}
	}
}

int main() {
	string str;
	cout << "Enter a string :";
	cin >> str;
	permutation(str, 0, (str.length()-1));	
	return 0;
}
