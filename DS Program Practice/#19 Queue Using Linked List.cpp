// Program to create queue using linked list.

#include <iostream>
using namespace std;

class Node {
	public :
		int data;
		Node *next;
};

Node *front, *rear;
Node *head = NULL;
int choice;

void enQueue() {
	char flag = 'y';
	while(flag == 'y' || flag == 'Y') {
		Node *newnode = new Node();
		cout << "\nEnter the data : ";
		cin >> newnode->data;
		newnode->next = NULL;
		cout << "\nQueued Successfully\n\n";
		if(head == NULL){
			front = rear = newnode;
			head = front;
		}else {
			rear->next = newnode;
			rear = newnode;
		}
		cout << "Do u want to add more data : (Press y for 'YES' OR n for 'NO') : ";
		cin >> flag;
	}
	cout << endl;
}
void deQueue() {
	if(front == NULL){
		cout << "\nQUEUE IS EMPTY\n\n";
		return;
	}
	Node *temp;
	temp = front;
	front = front->next;
	delete(temp);	
	cout << "\nDeQueued Successfully\n\n";
}
void display() {
	if(front == NULL && rear == NULL){
		cout << "\nQUEUE IS EMPTY\n\n";
		return;
	}
	Node *temp = front;
	cout << "\nValues Inside Queue : ";
	while(temp!=NULL){
		cout << temp->data << "  ";
		temp = temp->next;
	}
	cout << endl << endl;
}

void queue() {
	cout << "Queue Using Linked List\n\n";
	while(true){
		cout <<"1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\nEnter choice : ";
		cin >> choice;
		switch(choice){
			case 1:{
				enQueue();
				break;
			}
			case 2:{
				deQueue();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				exit(0);
				break;
			}
			default: {
				cout << "\nWrong Choice!! \n";
				break;
			}
		}
	}
}
int main() {
	front = rear = NULL;
	queue();
}
