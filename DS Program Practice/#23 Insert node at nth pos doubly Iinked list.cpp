// Program to find the length of doubly linked list, insert and delete node at nth position.

#include <iostream>
using namespace std;

class Node {
	public:
		int data;
		Node *next, *prev;
};

Node *head, *temp ;
int len = 0;
 
void create(){
	char ch = 'Y';
	while(ch=='Y' || ch=='y'){
		Node *newnode = new Node();
		cout << "Enter a no : ";
		cin >> newnode->data;
		newnode->next = newnode->prev = NULL;
		if(head == NULL){
			head = temp = newnode;
		}else {
			newnode->prev = temp;
			temp->next = newnode;
			temp = newnode;
		}
		cout << "Do you want to create more node :\n";
		cin >> ch;
	}
}

void display() {
	Node *t = head;
	cout << "\nValues Inside Linked list are :\n";
	while(t!=NULL){
		cout << t->data << "  ";
		t=t->next;
	}	
	cout << endl;
}

void length(){
	Node *t = head;
	len = 0;
	while(t!=NULL){
		++len;
		t=t->next;
	}
	cout << "\nTotal Node Count is : " << len << endl << endl;
}

void insertAtNthPos(){
	length();
	int pos = 0;
	cout << "Enter position : ";
	cin >> pos;
	if(pos > len+1){
		cout << "\nPosition Not Exist\n\n";
		return;
	}	
	Node *newnode = new Node();
	cout << "Enter a no : ";
	cin >> newnode->data;
	newnode->next = newnode->prev = NULL;
	if(head == NULL){
		head = temp = newnode;
	}else {
		Node *t = head;
		if(pos == 1){
			newnode->next = t;
			t->prev = newnode;		
			head = newnode;
		}else {
			for(int i=1; i<pos-1; i++){
				t = t->next;
			}
			if(t->next == NULL){
				t->next = newnode;
				newnode->prev = t;
			}else{
				t->next->prev = newnode;
				newnode->next = t->next;
				newnode->prev = t;
				t->next = newnode;
			}
		}
	}
	display();
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

void deleteFromNthPos(){
	length();
	if(len == 0){
		cout << "List is empty\n\n";
		return;
	}
	int pos = 0;
	cout << "Enter position : ";
	cin >> pos;
	if(pos > len || pos<1){
		cout << "\nPosition Not Exist\n\n";
		return;
	}	
	Node *t = head;
	if(pos == 1){
		head = head->next;
		head->prev = NULL;
		delete(t);
	}else {
		for(int i=1; i<pos-1; i++){
			t = t->next;
		}
		Node *temp2 = t->next;
		if(pos==len){
			temp = t;
			t->next = NULL;
		}else{
			t->next->next->prev = t;
			t->next = t->next->next;
		}
		delete(temp2);
	}
	display();
}

void linkedList(){
	int choice;	
	while(true){
		cout << "Doubly Linked List\n\n1.Create or append\n2.Display\n3.Find Length\n4.Insert node at nth position\n5.Delete node from nth position\n6.Exit\nEnter your choice : ";
		cin >> choice;
		switch(choice){
			case 1:		create();		break;
			case 2:	{	display(); reversePrint();}	break;
			case 3:		length();		break;
			case 4:		insertAtNthPos();	break;
			case 5:		deleteFromNthPos();	break;
			case 6:		exit(0);		break;
			default:	break;			
		}
	}	
}

int main() {
	linkedList();
	return 0;
}
