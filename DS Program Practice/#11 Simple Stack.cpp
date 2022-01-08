#include <iostream>
using namespace std;

#define MAX 5

class Stack {
	private :
		int top, arr[MAX], choice;
	public :
		Stack(): top(-1) {
			
		}
		void stackMain() {
			cout << "STACK OPERATIONS \n\n1. Push an element\n2. Pop an element\n3. Peek \n4. Display All Elements Of Stack\n5. Exit\nEnter your choice: ";
			cin >> choice;
			switch(choice){
				case 1:{
					push();
					break;
				}
				case 2:{
					pop();
					break;
				}
				case 3:{
					peek();
					break;
				}
				case 4: {
					display();
					break;
				}
				case 5:{
					exit(0);
					break;
				}
				default :{
					cout << "\nWrong Choice !!\n";					
					break;
				}
			}
		}
		void push() {
			int num;
			if(top == MAX-1){
				cout << "\nStack Overflow\n\n-----------------------------------------\n";
				return;
			}else {
				cout << "\nEnter a number : ";
				cin >> num;
				arr[++top] = num;
				cout << "\nPushed\n\n";
			}
			
		}
		
		void pop() {
			if(top < 0){
				cout << "\nStack Is Empty\n\n-----------------------------------------\n";
				return;
			}else {
				top--;
				cout << "\nPoped\n\n";
			}
		}
		
		void peek() {
			if(top < 0){
				cout << "\nStack Is Empty\n\n-----------------------------------------\n";
				return;
			}else {
				cout << "\nTop element of stack is : "<< arr[top] << endl; 
			}
		}
		
		void display() {
			if(top < 0){
				cout << "\nStack Is Empty\n\n-----------------------------------------\n";
				return;
			}else {
				cout << "\nElements in Stack\n";
				for(int i=top; i>=0; i--){
					cout << arr[i] << endl;
				}
				cout << "\n";
			}
		}
};

int main() {
	Stack s1;
	while(1){
		s1.stackMain();
	}
}
