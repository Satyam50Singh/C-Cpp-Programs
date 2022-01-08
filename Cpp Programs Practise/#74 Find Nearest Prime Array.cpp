// Program to store n numbers in an array and check whether the element is prime or not.
// If yes then display it.
// If no then display the nearest prime.
#include <iostream>
using namespace std;
class Prime{
	private :
		int arr[10];
	public :		
		getArray(int n) {
			cout << "\nEnter " << n << " values : \n";
			for(int i=0; i<n; i++){
				cin>>arr[i];
			}
			this -> showArray(n);
		}
		showArray(int n) {
			cout << "\nValues : ";
			for(int i=0; i<n; i++){
				cout<<arr[i] << " ";
			}
			cout << endl;
			checkPrimeArray(n);
		}
		checkPrimeArray(int n){
			cout << "\nPrime Numbers : -> ";
			int c=0,p=0;
			for(int i=0; i<n; i++){
				c=0,p=0;
				for(int j=1; j<=arr[i]; j++){
					if(arr[i]%j==0){
						c++;
					}
				}	
				if(c==2){
					cout << arr[i] << " ";
				}else {					
					while(1){
						arr[i]++;
						c=0;
						for(int j=1; j<=arr[i]; j++){
							if(arr[i]%j==0){
								c++;
							}
						}	
						if(c==2){
							cout << arr[i] << " ";
							p=1;
						}					
						if(p==1){
							break;
						}
					}
				}
			}
		}	
};

int main(){
	int n;
	Prime P1;
	cout << "Enter the value of n : ";
	cin >> n;
	P1.getArray(n);
	return 0;
}
