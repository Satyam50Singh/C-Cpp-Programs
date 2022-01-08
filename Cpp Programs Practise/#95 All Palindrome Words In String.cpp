// Program to string the reverse of each word into a string.
#include <iostream>
#include <string.h>
using namespace std;
class SmallestAndLargestWord{
	private :
		char str[50], arr[10][10],rev[10][10];
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
//			cout << "\nLength and words : \n";
			for(int i=0; i<count; i++ ){
				lenArr[i] = strlen(arr[i]);
//				cout << lenArr[i] << " --- " << arr[i] << endl;
			}
		}
		reverseWords(){
			cout << "\n\nArray Elements In Reverse are : \n";
			int x=0,y=0;
			for(int i=0; i<count; i++ ){
				y=0;
				for(int j=lenArr[i]-1; j>=0; j--){
					rev[i][y++] = arr[i][j];
					cout << arr[i][j];
				}
				cout << endl;
			}
		}
		checkPalindrome() {
			char palin[5][10];
			int x=0, pLen[10];
			cout << "\nPalindrome Words are : \n";
			for(int i=0; i<count; i++){
				if(strcmp(rev[i],arr[i]) == 0){
					pLen[x] = strlen(arr[i]);
					strcpy(palin[x++],arr[i]);
				}
			}
			int max=pLen[0], min = pLen[0], i1=0, i2=0;
			for(int i=0; i<x; i++){
				if(max < pLen[i]){
					i1=i;					
				}
				if(min > pLen[i]){
					i2=i;
				}
				cout << pLen[i] << "--------" << palin[i] <<  endl;
			}
			cout << "\nlargest palindrome word is : " << palin[i1] << endl;
			cout << "\nsmallest palindrome word is : " << palin[i2] << endl;
			
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
	obj.checkPalindrome();
	return 0;
}
