// Program to find the length of linked list and insert and delete node from nth position.

#include <iostream>
using namespace std;

class Node {
	public:
		int data;
		Node *next;
};

Node *head, *temp;
int len = 0;
 
void create(){
	char ch = 'Y';
	while(ch=='Y' || ch=='y'){
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
	newnode->next = NULL;
	if(head == NULL){
		head = temp = newnode;
	}else {
		Node *t = head;
		if(pos == 1){
			newnode->next = head;		
			head = newnode;
		}else {
			for(int i=1; i<pos-1; i++){
				t = t->next;
			}
			newnode->next = t->next;
			t->next = newnode;
		}
	}
	display();
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
		delete(t);
	}else {
		for(int i=1; i<pos-1; i++){
			t = t->next;
		}
		Node *temp2 = t->next;
		if(pos==len){
			t->next = NULL;
		}else{
			t->next = t->next->next;
		}
		delete(temp2);
	}
	display();
}

void linkedList(){
	int choice;	
	while(true){
		cout << "Singly Linked List\n\n1.Create or append\n2.Display\n3.Find Length\n4.Insert node at nth position\n5.Delete node from nth position\n6.Exit\nEnter your choice : ";
		cin >> choice;
		switch(choice){
			case 1:		create();		break;
			case 2:		display();		break;
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
