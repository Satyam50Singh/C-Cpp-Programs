// Program to implement stack using queue.(INCOMPLETE)

#include <iostream>
using namespace std;

int queue[10],front = -1, rear = -1;

void push(int data){
	if(front == -1 && rear == -1){
		front = rear = 0;
		queue[rear] = data;
	}else {
		queue[++rear] = data;		
	}	
}
void pop(){
	rear--;
}

int peek(){
	return queue[rear];	
}
int main() {
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	cout << peek()<< endl;
	pop();
	cout << peek()<< endl;
	push(20);
	push(30);
	cout << peek()<< endl;
}
