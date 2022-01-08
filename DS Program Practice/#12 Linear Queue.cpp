// Linear Queue

#include <iostream>
using namespace std;

#define MAX 5

class LinearQueue {
	private :
		int rear, front, arr[MAX], choice;
	public :
		LinearQueue(): rear(-1),front(-1) {
			
		}
		void queueMain() {
			cout << "QUEUE OPERATIONS \n\n1. Insert an element\n2. Delete an element\n3. Display Queue\n4. Exit\nEnter your choice: ";
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
			if(rear == MAX-1){
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
					cout << "\nfront = " << front << "--------" << "rear = " << rear << endl;
				}else {
					arr[++rear] = num;
					cout << "\nNumber Inserted is : " << arr[rear] << endl;
					cout << "\nfront = " << front << "--------" << "rear = " << rear << endl;
			}
			}
			
		}
		
		void Delete() {
			if(front < 0 && rear < 0 || front-1 == rear){
				cout << "\nQueue Underflow\n\n";
				rear = front = -1;
				cout << "---------------------------------\n";
				return;
			}else {
				cout << "\nNumber deleted is : " << arr[front++] <<endl;
				cout << "\nfront = " << front << "--------" << "rear = " << rear << endl;
			}
		}
		
		void Display() {
			if(front < 0 && rear < 0){
				cout << "\nQueue Underflow\n\n";
				cout << "---------------------------------\n";
				return;
			}else {
				for(int j=front; j<=rear; j++){
					cout << arr[j] << endl;
				}
			}
		}
};

int main() {
	LinearQueue q1;
	while(1){
		q1.queueMain();
	}
}
