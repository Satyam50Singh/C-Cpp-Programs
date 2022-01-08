//Binary Tree & Traversals.
// 1. Preorder Traversal
  //visit root node
  //visit left node
  //visit right node
// 1. Inorder Traversal
  //visit left node
  //visit root node
  //visit right node
// 1. Postorder Traversal
  //visit left node
  //visit right node
  //visit root node

#include <iostream>
using namespace std;

class Node {
	public :
	int data;
	Node *left, *right;
};

Node * create(){
	Node *newnode = new Node();
	int x;
	cout << "\nEnter the data (-1 for no node) : ";
	cin >> x;
	if(x == -1){
		return NULL;
	}
	newnode->data = x;
	cout << "\nEnter the left child of " << x << "\n";
	newnode->left = create();
	cout << "\nEnter the right child of " << x << "\n";
	newnode->right = create();
	
	return newnode;
} 
void preorder(Node *root){
	if(root == NULL){
		return ;
	}		
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node *root){
	if(root == NULL){
		return ;
	}		
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(Node *root){
	if(root == NULL){
		return ;
	}		
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

int main() {
	Node *root;
	root = NULL;
	root = create();
	cout << "\n\nPreorder Traversal is : \n";
	preorder(root);
	cout << "\n\nInorder Traversal is : \n";
	inorder(root);
	cout << "\n\nPostorder Traversal is : \n";
	postorder(root);
	return 0;
}
