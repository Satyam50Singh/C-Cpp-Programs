// doubly linked list

#include <iostream>
using namespace std;
void doublyLinkedList();
int choice;

class Node {
	public :
		int data;
		Node *next, *prev;
};

Node *head = NULL;
Node *temp;o

void create(){
	char ch = 'y';
//	Node *temp;
	if(head != NULL){
		head = NULL;
	}
	while(ch == 'y' || ch == 'Y'){
		Node *newnode = new Node();
		cout << "Enter data : ";
		cin >> newnode->data;
		newnode->next = newnode->prev = NULL;
		
		if(head == NULL){
			head = temp = newnode;
		}else {
			temp->next = newnode;
			newnode->prev = temp;
			temp = newnode;
		}
		cout << "\nDo u want to add more data : ";
		cin >> ch;
	}
}
void display() {
	Node *temp = head;
	if(head == NULL){
		cout << "\nEmpty List\n";
		return;
	}
	cout << "\nValues :\n";
	while(temp != NULL){
		cout << temp->data << "  ";
		temp = temp->next;
	}
	cout << endl;
	
}
void reversePrint() {
	Node *temp = head;
	if(head == NULL){
		cout << "\nEmpty List\n";
		return;
	}
	cout << "\nValues In reverse :\n";
	while(temp->next != NULL){
		temp = temp->next;
	}
	while(temp->prev != NULL){
		cout << temp->data << "  ";
		temp = temp->prev;
	}
	cout << temp->data << "  ";
	cout << endl;
}

void insertAtBeg(){
	Node *newnode = new Node();
	cout << "Enter data : ";
	cin >> newnode->data;
	newnode->next = newnode->prev = NULL;
		
	if(head == NULL){
		head = newnode;
	}else {
		newnode->next = head;
		head->prev = newnode;
		head = newnode;
	}
	display();
}
void insertAtEnd(){
	Node *newnode = new Node();
	cout << "Enter data : ";
	cin >> newnode->data;
	newnode->next = newnode->prev = NULL;
		
	if(head == NULL){
		head = newnode;
	}else {
		temp->next = newnode;
		newnode->prev = temp;
		temp = newnode;
	}
	display();
}
void insertion(){
	system("cls");
	while(true){
		cout << "Insertion Operations \n\n";
		cout << "1.Insert At Beg\n2.Insert At End\n3.Exit\n4.Back\nEnter your choice : ";
		cin >> choice;
		switch(choice) {
			case 1:{	insertAtBeg();	break;	}
			case 2:{	insertAtEnd();	break;	}
			case 3:{	exit(0);	break;	}
			case 4: 	doublyLinkedList();	break;
			default:{	break;	}
		}
	}	
}

void deleteFromBeg(){
	if(head == NULL){
		cout << "Queue is Empty\n";
		return;
	}
	if(head->next == head->prev){
		cout << "\nQueue is Empty\n";
		Node *t=head;
		delete(t);
		head = NULL;
		return;
	}
	
	Node *t=head;
	head = head->next;
	head->prev = NULL;
	delete(t);
	display();
}
void deleteFromEnd(){
	if(head == NULL){
		cout << "\nQueue is Empty\n";
		return;
	}
	Node *t=temp;
	Node *p = temp;
	if(p->prev == NULL){
		cout << "\nQueue is Empty\n";
		delete(t);
		head = NULL;
		return;
	}
	
	p = temp->prev;
	p->next = NULL;	
	delete(t);
	temp = p;
	display();
}
void deletion(){
	system("cls");
	while(true){
		cout << "Deletion Operations \n\n";
		cout << "1.Delete from Beg\n2.Delete from End\n3.Exit\n4.Back\nEnter your choice : ";
		cin >> choice;
		switch(choice) {
			case 1:{	deleteFromBeg();	break;	}
			case 2:{	deleteFromEnd();	break;	}
			case 3:{	exit(0);	break;	}
			case 4: 	doublyLinkedList();	break;
			default:{	break;	}
		}
	}	
}

void doublyLinkedList() {
	system("cls");
	while(true){
	cout << "Doubly Linked List \n";
		cout << "\n1.Create\n2.Display\n3.Display in reverse\n4.Insertion Operation\n5.Deletion Operation\n6.Exit\nEnter your choice : ";
		cin >> choice;
		switch(choice) {
			case 1:{	create();	break;	}
			case 2:{	display();	break;	}
			case 3:{	reversePrint();	break;	}
			case 4:{	insertion();	break;	}
			case 5:{	deletion();	break;	}
			case 6:{	exit(0);	break;	}
			default:{	break;	}
		}
	}	
}

int main() {
	system("cls");
	doublyLinkedList();
	return 0;
}
