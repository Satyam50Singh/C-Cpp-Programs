// Program to string the reverse of each word into a string.
#include <iostream>
#include <string.h>
using namespace std;
class SmallestAndLargestWord{
	private :
		char str[50], arr[10][10];
		int len,count;
		int lenArr[10];
	public:
		getAndShowString() {
			cout << "Enter a string : ";
			cin.getline(str,50);
			cout << "\nString is :" << str << endl;
		}
		findLength() {
			for(int i=0; i<str[i]!='\0'; i++){
				len++;
			}
			cout << "\nLength of string is :" << len-1;
		}
		stringTo2DArray() {
			int x=0,y=0;

			for(int i=0; i<len; i++){
				if(str[i]==' ' || str[i+1] == '\0'){
					if(str[i+1] == '\0'){
						arr[x][y++] = str[i];
					}
					arr[x][y] = '\0';
					x++; y=0;
				}else {
					arr[x][y++] = str[i];
				}
			}
			count = x;
		}
		show2DArray() {
			cout << "\n\nArray Elements are : \n";
			for(int i=0; i<count; i++ )
				cout << arr[i] << endl;
		}
		findLengthOfWords(){
			cout << "\nLength and words : \n";
			for(int i=0; i<count; i++ ){
				lenArr[i] = strlen(arr[i]);
				cout << lenArr[i] << " --- " << arr[i] << endl;
			}
		}
		reverseWords(){
			cout << "\n\nArray Elements In Reverse are : \n";
			for(int i=0; i<count; i++ ){
				for(int j=lenArr[i]-1; j>=0; j--){
					cout << arr[i][j];
				}
				cout << endl;
			}
		}
};
int main() {
	SmallestAndLargestWord obj;
	obj.getAndShowString();
	obj.findLength();
	obj.stringTo2DArray();
	obj.show2DArray();
	obj.findLengthOfWords();
	obj.reverseWords();
	return 0;
}
