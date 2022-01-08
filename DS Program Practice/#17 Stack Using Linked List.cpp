// Program to create stack using linked list.

#include <iostream>
using namespace std;

class Node {
	public :
		int data;
		Node *next;
};

Node *top;

void push(){
	Node *p = new Node();
	cout << "Enter a number : ";
	cin >> p->data;
	cout << "Value pushed in a stack is : " << p->data <<endl << endl;
 	p->next = NULL;		 

	if(top == NULL){
		top = p;
	}else {
		p->next = top;
		top = p;
	}
}

void pop() {
	if(top == NULL){
		cout << "\nStack Underflow\n";
		return;
	}
	cout << "Poped Value is " << top->data << endl << endl;
	Node *q = top;
	
	top = top->next;
	delete(q);
}

void peek() {
	if(top == NULL){
		cout << "\nStack Underflow\n";
		return;
	}
	cout << "\nValue at the top of stack is : " << top->data << endl;
}

void display() {
	if(top == NULL){
		cout << "\nStack Underflow\n";
		return;
	}
	cout << "\nAll values are : \n";
	Node *q = top;
	while(q!=NULL){
		cout << q->data << "  ";
		q = q->next;
	}
	cout << endl << endl;
}

int main() {
	int choice;
	while(true) {
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
	return 0;	
}
