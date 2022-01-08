// Insertion and deletion Operation on linked list.

#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
void linkedList();
void display();

class Node {
	public:
		int data;
		Node* next;
};

int choice;
Node *start, *p;

void insertAtBegin(){
	Node *a = new Node();
	cout << "\nEnter a number : ";
	cin >> a->data;
	a->next = p;
	p = a;
	display();
}

void insertAtSecond() {
	Node *a = new Node();
	cout << "\nEnter a number : ";
	cin >> a->data;
	a->next = p->next;
	p->next = a;
	display();
}

void insertAtSecondLast() {
	Node *a = new Node();
	cout << "\nEnter a number : ";
	cin >> a->data;
	Node *temp = p;
	while(temp->next->next->next != NULL){
		temp = temp->next;
	}
	a->next = temp->next->next;
	temp->next->next = a;
	display();
}

void deleteFromBegin(){
	Node *t = p;
	p = p->next;
	delete(t);
	cout << "Element Deleted Successfully\n";
	display();	
}

void deleteFromSecond() {
	Node *t = p->next;
	p->next = p->next->next;
	delete(t);
	cout << "Element Deleted Successfully\n";
	display();	
}

void deleteFromSecondLast() {
	Node *t = p, *temp;
	while(t->next->next->next!=NULL){
		t = t->next;
	}
	temp = t->next;
	t->next = t->next->next; 
	delete(temp);
	cout << "Element Deleted Successfully\n";
	display();	
}

void createList(Node *q){
	char ch;
	cout << "\nEnter a number : ";
	cin >> q->data;
	cout << "\nDo you want to add one more node : ";
	cin >> ch;
	if(ch == 'y' || ch == 'Y'){
		q->next = new Node();
		createList(q->next);
	}else {
		q->next = NULL;
		display();
	}
}

void display(){
	cout << "\nValues Stored In A list\n";
	Node *temp = p;
	while(temp!=NULL){
		cout << temp->data << "  ";
		temp = temp->next;
	}
	cout << "\n\n";
}

void insertion(){
	system("cls");
	while(true){
		cout << "Insertion Operation\n\n1.Create Linked List\n2.Display Linked List\n3.Insert at beginning\n4.Insert at 2nd pos\n5.Insert at 2nd last pos\n6.Back\n7.Exit\n\nEnter your choice : ";
		cin >> choice;
		switch(choice){
			case 1: createList(p);	break; 
			case 2: display();	break; 
			case 3: insertAtBegin();	break;
			case 4: insertAtSecond();	break;
			case 5: insertAtSecondLast();	break;
			case 6: linkedList();	break;
			case 7: exit(0);
			default: cout << "Wrong Choice !!"; 	break; 			
		}
	}
}

void deletion(){
	system("cls");
	while(true){
		cout << "Deletion Operation\n\n1.Display linked list\n2.Delete From beginning\n3.Delete From 2nd pos\n4.Delete From 2nd last pos\n5.Back\n6.Exit\n\nEnter your choice : ";
		cin >> choice;
		switch(choice){
			case 1: display();	break; 
			case 2: deleteFromBegin();	break;
			case 3: deleteFromSecond();	break;
			case 4: deleteFromSecondLast();	break;
			case 5: linkedList();	break;
			case 6: exit(0);
			default: cout << "Wrong Choice !!"; 	break; 			
		}
	}
}

void linkedList() {
	system("cls");
	while(true){
		cout << "Singly Linked List\n\n1.Insertion Operation\n2.Deletion Operation\n3.Display linked list\n4.Exit\nEnter your choice :";
		cin >> choice;
		switch(choice){
			case 1: insertion();	break;
			case 2:	deletion();		break;
			case 3: display();		break;
			case 4: exit(0);
			default: cout << "Wrong Choice !!"; 	break; 
		}
	}
}

int main() {
	p = new Node();
	start = p;
	linkedList();
	return 0;
} 
