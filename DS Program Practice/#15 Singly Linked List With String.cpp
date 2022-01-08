// Program to implement singly linked list storing string as data.
#include <iostream>
using namespace std;

class Node {
	public :
		string data[3];
		Node *next;
};

int main() {
	Node *b, *end, *start;
	
//	 allocate 3 nodes in the heap
	start = new Node();
	b = new Node();	
	end = new Node();	

	cout << "Singly linked List\n\nEnter three different strings : \n";
	cin >> start->data[0]; // assign data in first node
	start->next = b; // Link first node with second

	cin >> b->data[1];
	b->next = end;

	cin >> end->data[2];
	end->next = NULL;
	
	int i=0;
	cout << "\nValues are :";
	while(start!=NULL){
		cout << start->data[i++] << " ";
		start = start->next;
	}
	return 0;
}
