// Program to find the Sum of natural no. using recurison.

#include <iostream>
using namespace std;
int sum(int &s, int &e, int &add) {
	if(s<e){
		add+=s;
		++s;
		sum(s,e,add);
	}else {
		return add;
	}
}

int main() {
	int s,e,add=0;
	cout << "Enter the limit : ";
	cin >> s >> e;
	int res = sum(s, e,add);
	cout << "Result is : " << res << endl;
} 
