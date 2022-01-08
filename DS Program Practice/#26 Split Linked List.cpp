// Program to split linked list.
#include <iostream>
using namespace std;

class Node {
	public :
		int data;
		Node *next;
};

Node *head = NULL, *temp;
int len=0;
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
	cout << "\nValues are \n";
	while(t != NULL){
		cout << t->data << "  ";
		t = t->next;
	}
	cout << endl;
}
void splitList(){
	Node *t = head;
	int pos;
	while(t != NULL){
		len++;
		t = t->next;
	}
	cout << "\nEnter a position : ";
	cin >> pos;
	if(pos > len){
		cout << "\nSplitting is not possible with this position.\n";
		return;
	}
	cout << "First part of list is : ";
	Node *p = head;
	int j=0;
	while(j<pos){
		cout << p->data << "  ";
		p=p->next;
		j++;
	}
	cout << "\nSecond part of list is : ";
	while(p!=NULL){
		cout << p->data << "  ";
		p=p->next;
	}
}
int main() {
	cout << "\nProgram to split singly linked list.\n\n";
	create();
	display();
	splitList();
	return 0;
}
