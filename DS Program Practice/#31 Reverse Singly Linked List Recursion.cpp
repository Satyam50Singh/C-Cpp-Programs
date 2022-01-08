// Program to reverse singly linked list.

#include <iostream>
using namespace std;

class Node {
	public :
	int data;
	Node *next;
};

Node *temp, *head = NULL;

void createLinkedList(){
	char ch = 'Y';
	while(ch == 'Y' || ch == 'y'){
		Node *p = new Node();
		cout << "Enter data : ";
		cin >> p->data;
		p->next = NULL;
		if(head == NULL){
			head = temp = p;
		}else {
			temp->next = p;
			temp = temp->next;
		}
		cout << "Do you want to create more node : ";
		cin >> ch;
	}
}
void print(){
	Node *t = head;
	cout << "\nValues : \n";
	while(t != NULL){
		cout << t->data <<  endl;
		t=t->next;
	}
}
void displayPrint(Node *head){
	if(head == NULL){
		return;
	}else {
		displayPrint(head->next);
	}
	cout << head->data <<  endl;
}
int main() {
	createLinkedList();
	print();
	cout << "\nReverse printing\n";
	displayPrint(head); 	
	return 0;
}
