#include <iostream>
using namespace std;

class Node {
	public :
		int coef, exp;
		Node *next; 
};
char ch;
void append(Node *h){
	cout << "\nEnter Coefficient : ";
	cin >> h->coef;	
	cout << "\nEnter Exponent : ";
	cin >> h->exp;	
	cout << "Do u want to add more : ";
	cin >> ch;
	if(ch=='y' || ch=='Y'){
		h->next = new Node();
		append(h->next);
	}else {
		h->next = NULL;
	}
}

void display(Node *p){
	Node *t = p;
	while(p != NULL){
		if(p->exp == 0){
			if(p->coef< 0){
				cout << "(" << p->coef << ")"; 
			}else{
			cout << p->coef; 
			}
		}else if(p->coef < 0){
			cout << "(" << p->coef << "x^" << p->exp << ") " << "+"; 
		}else{
			cout << p->coef << "x^" << p->exp << "+"; 
		}
		p=p->next;
	}	
}
void addPolynomial(Node *h1, Node *h2){
	cout << "New Eqn is : \n";
	Node *p1=h1, *p2=h2;
	while(p1 != NULL || p2 !=NULL){
		if(p1->exp == p2->exp && p1->exp == 0 && p2->exp == 0){
			if(p1->coef+p2->coef < 0){
				cout << "(" << p1->coef+p2->coef << ")"; 
			}else{
				cout << p1->coef+p2->coef; 
			}
		p1=p1->next;
		p2=p2->next;
		} else if(p1->exp == p2->exp){
			if(p1->coef+p2->coef < 0){
				cout << "(" << (p1->coef+p2->coef) << ")x^" << p1->exp << "+"; 
			}else{
				cout << (p1->coef+p2->coef) << "x^" << p1->exp << "+"; 
			}
		p1=p1->next;
		p2=p2->next;
		}else if(p1->exp > p2->exp){
			cout << p1->coef<< "x^" << p1->exp << "+"; 
		p1=p1->next;
		}else{
			cout << p2->coef<< "x^" << p2->exp << "+"; 
		p2=p2->next;
		}
	}	
	// find the length of both polynomials.
	//	if both are equal then only addition will be possible.
	
}
int main() {
	cout << "Create 1st Eqn\n";
	Node *h1 = new Node();
	append(h1);
	system("cls");
	cout << "\nCreate 2nd Eqn\n";
	Node *h2 = new Node();
	append(h2);
	system("cls");
	cout << "\nFirst Eqn is :";
	display(h1);	
	cout << "\n\nSecond Eqn is :";
	display(h2);	
	cout << "\n\nAddition Of Two polynomial \n";
	addPolynomial(h1,h2);
	return 0;
}
