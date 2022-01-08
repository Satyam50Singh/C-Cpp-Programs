//Priority Queue

#include <iostream>
using namespace std;
void printQueue();
class Node{
	public :
		int data, priority;
		Node *next;
};
Node *head = NULL;

void insertNode(){
	Node *newnode = new Node();
	cout << "Enter a number :";
	cin >> newnode->data;
	cout << "Enter priority :";
	cin >> newnode->priority;
	newnode->next;
	if(head == NULL || newnode->priority < head->priority){
		newnode->next = head;
		head = newnode;
	}else {
		Node *q = head;
		while(q->next != NULL && q->next->priority <= newnode->priority){
			q=q->next;
		}
		newnode->next = q->next;
		q->next = newnode;
	}
}
void deleteNode(){
	if(head == NULL){
		cout << "\nQUEUE IS EMPTY\n\n";
		return;
	}
	Node *q = head;
	head = head->next;
	delete(q);
	cout << "Successfully deleted\n";
	cout << endl;
	printQueue();
}
void printQueue(){
	if(head == NULL){
		cout << "\nQUEUE IS EMPTY\n\n";
		return;
	}
	Node *q = head;
	while(q!= NULL){
		cout << q->data << "  ";
		q=q->next;
	}
	cout << endl;
}
void priorityQueue(){
	int choice;
	while(true){
		cout << "PRIORITY QUEUE\n\n";
		cout << "1.Insert\n2.Delete\n3.Print Queue\n4.Exit\nEnter your choice :";
		cin >> choice;
		switch(choice){
			case 1:{
				insertNode();
				break;
			}		
			case 2:{
				deleteNode();
				break;
			}
			case 3:{
				printQueue();
				break;
			}
			case 4:{
				exit(0);
				break;
			}
			default:{
				break;
			}
		}
	}
}
int main() {
	priorityQueue();
	return 0;
}
