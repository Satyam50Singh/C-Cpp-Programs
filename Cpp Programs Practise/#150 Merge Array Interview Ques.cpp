// Program to get two array X & Y, and merge these two array in 4 different ways.
//1. All odd no.s of X from left to right are copied into Z(resultant array) from left to right.
//2. All even no.s of X from left to right are copied into Z(resultant array) from right to left.
//3. All odd no.s of Y from right to left are copied into Z(resultant array) from left to right.
//4. All even no.s of Y from right to left are copied into Z(resultant array) from right to left.

#include <iostream>
using namespace std;

class Merge {
	private :
		int X[10], Y[10], Z[10];
		int s1, s2;
	public :
		void getArrays() {
			cout << "Enter the length of array X :-";
			cin >> s1;
			cout << "Enter " << s1 << " values : \n";
			for(int i=0; i<s1; i++){
				cin >> X[i];
			}
			cout << "\nEnter the length of array Y :-";
			cin >> s2;
			cout << "Enter " << s2 << " values : \n";
			for(int i=0; i<s2; i++){
				cin >> Y[i];
			}
		}
		void showArrays() {
			cout << "Array X\n";
			for(int i=0; i<s1; i++){
				cout << X[i] << "  ";
			}
			cout << "\n\nArray Y\n";
			for(int i=0; i<s2; i++){
				cout << Y[i] << "  ";
			}
		}
		void mergeXToZ1() {
			cout << "\n\n(i) Required Array Z : ";
			int p=0;
			for(int i=0; i<s1; i++){
				if(X[i]%2!=0){
					Z[p++] = X[i];
					cout << X[i] << "  ";
				}
			}
		}
		void mergeXToZ2() {
			cout << "\n\n(ii) Required Array Z : ";
			int p=0;
			for(int i=0; i<s1; i++){
				if(X[i]%2==0){
					Z[p++] = X[i];
				}
			}
			for(int k=p-1; k>=0; k--){
				cout << Z[k] << "  ";
			}
		}
		void mergeYToZ1() {
			cout << "\n\n(iii) Required Array Z : ";
			int p=0;
			for(int i=s2-1; i>=0; i--){
				if(Y[i]%2!=0){
					Z[p++] = Y[i];
				}
			}
			for(int j=0; j<p; j++){
				cout << Z[j] << "  ";
			}
		}
		void mergeYToZ2() {
			cout << "\n\n(iv) Required Array Z : ";
			int p=0;
			for(int i=s2-1; i>=0; i--){
				if(Y[i]%2==0){
					Z[p++] = Y[i];
				}
			}
			for(int k=p-1; k>=0; k--){
				cout << Z[k] << "  ";
			}
		}
};

int main() {
	Merge M1;
	M1.getArrays();
	system("cls");
	M1.showArrays();
	M1.mergeXToZ1();
	M1.mergeXToZ2();
	M1.mergeYToZ1();
	M1.mergeYToZ2();
	return 0;
}
