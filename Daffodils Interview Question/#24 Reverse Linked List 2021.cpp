//Reverse Linked List.
#include <iostream>
using namespace std;

class Node {
	public :
		int data;
		Node *next;
};
Node *head = NULL, *temp;

void createList(){
	char ch='y';
	while(ch == 'y' || ch=='Y'){
		Node *newnode = new Node();
		cout << "\nEnter data : ";
		cin >> newnode->data;
		newnode->next = NULL;
		if(head == NULL){
			head = temp = newnode;
		}else{
			temp->next = newnode;
			temp= temp->next;
		}
		cout << "\nDo you want to enter more data : ";
		cin >> ch;
	}	
}
void showList(){
	Node *temp = head;
	while(temp != NULL){
		cout << temp->data << "  ";
		temp = temp->next;
	}
}
void reversePrint(){
	Node *curr = head;
	Node *prev = NULL, *next = NULL;
	
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
}
int main() {
	createList();
	showList();
	reversePrint();
	cout << "\nREverse\n";
	showList();
	return 0;
}
