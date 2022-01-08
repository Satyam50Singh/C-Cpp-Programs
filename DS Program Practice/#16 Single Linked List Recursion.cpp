// Singly Linked List Recursion.

#include <iostream>
using namespace std;

class Node {
	public :
		int data;
		Node* next;
};

void append(Node *p){
	cout <<"Enter a number : ";	
	cin >> p->data;
	char ch;
	cout << "\nDo you want to add more numbers : ";
	cin >> ch;
	
	if(ch == 'y' || ch == 'Y'){
		p->next = new Node();
		append(p->next);
	}else {
		p->next = NULL;
	}
}

void display(Node *start) {
	cout << "\nValues is : \n";
	while(start != NULL){
		cout << start->data << "\n";
		start = start->next; 
	}	
}

int main() {
	Node *start, *p;
	cout << "Singly Linked List using recursion\n\n";
	
	start = new Node();
	p = new Node();
	start = p;
	
	append(p);
	display(p);
	return 0;
}

