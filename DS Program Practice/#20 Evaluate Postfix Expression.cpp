//program to evaluate postfix expression.

#include <iostream>
#include <math.h>
using namespace std;
#define MAX 20

int top = -1;

int evaluate(string exp, int n){
	int stack[MAX];
	for(int i=0; i<n; i++){
		if(exp[i] >= '0' && exp[i] <= '9'){ //operand
			stack[++top] = (int(exp[i]) - 48);
		}
		else { // operator
			int a = stack[top];
			int b = stack[--top];
			int res;
			switch(exp[i]){
				case '^':{
					res = pow(b, a);
					cout << endl << b << "^" << a << ": " << res << endl;
					break;
				}
				case '+':{
					res = b + a;
					cout << endl << b << "+" << a << ": " << res << endl;
					break;
				}
				case '-':{
					res = b - a;
					cout << endl << b << "-" << a << ": " << res << endl;
					break;
				}
				case '*':{
					res = b * a;
					cout << endl << b << "*" << a << ": " << res << endl;
					break;
				}
				case '/':{
					res = b / a;
					cout << endl << b << "/" << a << ": " << res << endl;
					break;
				}
				default	:{
					break;
				}
			}
			stack[top] = res;
		}
	}

	return stack[top];
}

int main() {
	string exp;
	cout << "Enter a expression : ";
	cin >> exp;
	cout << "\nResult : " << evaluate(exp, exp.length());
}
