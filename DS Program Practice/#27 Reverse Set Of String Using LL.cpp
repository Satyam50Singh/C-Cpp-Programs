// Program to reverse set of strings using linked list.
#include <iostream>
#include <string.h>
using namespace std;

class Node {
	public :
		string str;
		Node *next;
};

Node *head = NULL, *temp;
int len=0;
void create() {
	char ch= 'y';
	while(ch == 'Y' || ch=='y'){
		Node *newnode = new Node();
		cout << "Enter string : ";
		cin >> newnode->str;
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
		cout << t->str << endl;
		t = t->next;
	}
	cout << endl;
}
void reverseString(){
	Node *t = head;
	cout << "\nString in reverse are \n";
	while(t != NULL){
		for(int i=t->str.length()-1; i>=0; i--)
			cout << t->str[i];
		t = t->next;
		cout << endl;
	}
}
int main() {
	cout << "\nProgram to reverse set of strings using singly linked list.\n\n";
	create();
	display();
	reverseString();
	return 0;
}
