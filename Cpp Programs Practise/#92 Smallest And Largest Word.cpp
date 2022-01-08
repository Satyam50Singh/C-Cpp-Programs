// Program to find smallest and largest word.
#include <iostream>
#include <string.h>
using namespace std;
class SmallestAndLargestWord{
	private :
		char str[50], arr[10][10], maxWord[10], minWord[10];
		int len,count, max, min;
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
		findMaxMinLength(){
			max=lenArr[0], min=lenArr[0];
			int i1=0,i2=0;
			for(int i=0; i<count; i++ ){
				if(max < lenArr[i]){
					max = lenArr[i];
					i1=i;
				}
				if(min > lenArr[i]){
					min = lenArr[i];
					i2=i;
				}
			}
			cout << "\nLength Of Maximum Word is :" << max << " and word is : " << arr[i1] << endl;
			cout << "\nLength Of Minimum Word is :" << min << " and word is : " << arr[i2] << endl;
		}
};
int main() {
	SmallestAndLargestWord obj;
	obj.getAndShowString();
	obj.findLength();
	obj.stringTo2DArray();
	obj.show2DArray();
	obj.findLengthOfWords();
	obj.findMaxMinLength();
	return 0;
}
