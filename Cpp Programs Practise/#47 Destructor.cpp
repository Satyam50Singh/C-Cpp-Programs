// Program to use destructor

#include <iostream>
using namespace std;

class Destructor{
	private :
	public : 
		Destructor() {
			cout << "We are in a constructor." << endl;	
		}	

		~Destructor() {
			cout << "We are in a destructor.";	
		}				
	}
;

int main() {
	Destructor A;
	return 0;
}
