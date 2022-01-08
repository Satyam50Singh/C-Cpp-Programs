//Program to calcuate standard deviation
#include <iostream>
#include <iomanip>
#include <math.h> 
using namespace std;
class StandardDeviation{
	private : 
		int i;
		float data[10];
	public :
		StandardDeviation(){
			
		}
		void getValues() {
			cout << "Enter 10 no.s : ";
			for(int i=0; i<10; i++)
			cin >> data[i];
			cout << "\nValues are : ";
			for(int i=0; i<10; i++)
			cout << data[i] << " ";				
		}
		void calculate(){
			float sum = 0.0, mean, standardDeviation = 0.0;
			
			for(int i=0; i<10; i++){
				sum+=data[i];				
			}
			
			mean = sum/10;
			
			for(int i=0; i<10; i++){
				standardDeviation += pow(data[i] - mean, 2);
			}
			cout << fixed;
			cout << "\nStandard deviation is :" << setprecision(2) << sqrt(standardDeviation/10);			
		}		
};
int main() {
	StandardDeviation o1;
	o1.getValues();
	o1.calculate();
	return 0;
}
