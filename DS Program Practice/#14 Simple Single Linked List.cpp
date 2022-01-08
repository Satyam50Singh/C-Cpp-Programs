// Program to implement simple linked list.
#include <iostream>
using namespace std;

class Node {
	public :
		int data;
		Node *next;
};

int main() {
	Node *b, *end, *start;
	
//	 allocate 3 nodes in the heap
	start = new Node();
	b = new Node();	
	end = new Node();	

	cout << "Singly linked List\n\nEnter three different entities : \n";
	cin >> start->data; // assign data in first node
	start->next = b; // Link first node with second

	cin >> b->data;
	b->next = end;

	cin >> end->data;
	end->next = NULL;
	
	cout << "\nValues are :";
	while(start!=NULL){
		cout << start->data << " ";
		start = start->next;
	}
	return 0;
}
