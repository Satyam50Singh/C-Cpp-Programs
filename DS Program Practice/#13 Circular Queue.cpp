// Circular Queue

#include <iostream>
using namespace std;

#define MAX 5

class CircularQueue {
	private :
		int rear, front, arr[MAX], choice;
	public :
		CircularQueue(): rear(-1),front(-1) {
			
		}
		void queueMain() {
			cout << "QUEUE OPERATIONS \n\n1. Insert an element\n2. Delete an element\n3. Display CircularQueue\n4. Exit\nEnter your choice: ";
			cin >> choice;
			switch(choice){
				case 1:{
					Insert();
					break;
				}
				case 2:{
					Delete();
					break;
				}
				case 3:{
					Display();
					break;
				}
				case 4:{
					exit(0);
					break;
				}
				default :{
					cout << "\nWrong Choice !!\n";		
					break;
				}
			}
		}
		void Insert() {
			if(front == 0 && rear == MAX-1 || front == rear+1){
				cout << "\nQueue Overflow\n\n";
				cout << "---------------------------------\n";
				return;
			}else {
				
				int num;
				cout << "\nEnter a number : ";
				cin >> num;
				if(front < 0 && rear < 0){
					front = rear = 0;
					arr[rear] = num;
					cout << "\nNumber Inserted is : " << arr[rear] << endl;
//					cout << "\nfront = " << front << "--------" << "rear = " << rear << endl;
				}else if(front > 0 && rear == MAX-1){
					rear = 0;
					arr[rear] = num;
					cout << "\nNumber Inserted is : " << arr[rear] << endl;
//					cout << "\nfront = " << front << "--------" << "rear = " << rear << endl;
				}else {
					arr[++rear] = num;
					cout << "\nNumber Inserted is : " << arr[rear] << endl;
//					cout << "\nfront = " << front << "--------" << "rear = " << rear << endl;			
				}
			}
		}
		
		void Delete() {
			if(front < 0 && rear < 0){
				cout << "\nQueue Underflow\n\n";
				rear = front = -1;
				cout << "---------------------------------\n";
				return;
			}else if(front == MAX-1) {
				cout << "\nNumber deleted is : " << arr[front] <<endl;
//				cout << "\nfront = " << front << "--------" << "rear = " << rear << endl;
				front = 0;
			}else if(front == rear) {
				cout << "\nNumber deleted is : " << arr[front] <<endl;
				front = rear = -1;
//				cout << "\nfront = " << front << "--------" << "rear = " << rear << endl;
			}else {
				cout << "\nNumber deleted is : " << arr[front++] <<endl;
//				cout << "\nfront = " << front << "--------" << "rear = " << rear << endl;
			}
		}
		
		void Display() {
			if(front < 0 && rear < 0){
				cout << "\nQueue Underflow\n\n";
				cout << "---------------------------------\n";
				return;
			}else if(front < rear){
				for(int j=front; j<=rear; j++){
					cout << arr[j] << endl;
				}
			}else {
				for(int j=front; j<=MAX-1; j++){
					cout << arr[j] << endl;
				}
				for(int j=0; j<=rear; j++){
					cout << arr[j] << endl;
				}				
			}
		}
};

int main() {
	CircularQueue q1;
	while(1){
		q1.queueMain();
	}
}
