// Program to implement circular queue using linked list.
#include <iostream>
using namespace std;
class Node {
	public :
		int data;
		Node *next;
};

Node *front = NULL, *rear = NULL;
void push(){
	char ch= 'y';
	while(ch == 'Y' || ch=='y'){
		Node *newnode = new Node();
		cout << "Enter a no : ";
		cin >> newnode->data;
		if(front == NULL && rear == NULL){
			front = rear = newnode;
			rear->next = newnode;
		}else {			
			rear->next = newnode;
			rear = rear->next;
			rear->next = front;
		}
		cout << "Do u want to add more data : ";
		cin >> ch;
	}	
}
void pop(){
	if(front == NULL && rear == NULL){
		cout << "\nList Is Empty!!\n\n";
		return;
	}else {				
		Node *t = front;
		front = front->next;			
		rear->next = front;
		delete(t);
		cout << "\nSuccessfully Deleted\n";
	}	
}
void display(){
	if(front == NULL && rear == NULL || front == rear){
		cout << "\nList Is Empty!!\n\n";
		return;
	}
	Node *i = front;
	cout << "\n\nValues are : ";
	while(i->next != front){
		cout << i->data << "  ";
		i = i->next;
	}
	cout << i->data << "  ";
	cout << endl;
}

void circularLinkedList() {
	system("cls");
	int choice;
	while(true){
	cout << "Circular Linked List \n";
		cout << "\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice : ";
		cin >> choice;
		switch(choice) {
			case 1:{	push();		break;	}
			case 2:{	pop();		break;	}
			case 3:{	display();	break;	}
			case 4:{	exit(0);	break;	}
			default:{	break;	}
		}
	}	
}

int main() {
	circularLinkedList();
	return 0;
}
