// Program to reverse singly linked list.
#include <iostream>
using namespace std;

class Node {
	public :
		int data;
		Node *next;
};

Node *head = NULL, *temp;
void create() {
	char ch= 'y';
	while(ch == 'Y' || ch=='y'){
		Node *newnode = new Node();
		cout << "Enter a no : ";
		cin >> newnode->data;
		newnode->next = NULL;
		if(head == NULL){
			head = temp = newnode;
		}else {
			temp->next = newnode;
			temp = newnode;
		}
		cout << "Do u want to add more data : ";
		cin >>ch;
	}	
}
void display() {
	Node *t = head;
	cout << "Values are \n";
	while(t != NULL){
		cout << t->data << "  ";
		t = t->next;
	}
	cout << endl;
}
void reversePrint(){
	Node *next = NULL;
	Node *curr = head;
	Node *prev = NULL;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	display();
}
int main() {
	cout << "\nProgram to reverse singly linked list.\n\n";
	create();
	display();
	cout << "\n\nReverse\n";
	reversePrint();
	return 0;
}

