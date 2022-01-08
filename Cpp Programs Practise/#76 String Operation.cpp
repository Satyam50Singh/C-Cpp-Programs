#include <iostream>
using namespace std;
class StringOperation{
	private :
		char str[50];
		int len;
	public :
		getAndShowString(){
			cout << "Enter a string : ";
			cin.getline(str,50);
			cout << "\nString is : "<<str <<endl;
		}
		lengthString() {
		cout << "\nLength of string is : " ;
			for(int i=0; i<str[i]!='\0'; i++){
				len++;
			}
			cout << len;
		}
		reverseString(){
			cout << "\n\nReverse String is : ";
			for(int i=len - 1; i>=0; i--){
				cout << str[i];
			}
		}
		countWords(){
			int words=1;
			cout << "\n\nTotal No. of Words : ";
			for(int i=0; i<len; i++){
				if(str[i] == ' '){
					words++;
				}
			}	
			cout << words;	
		}
		countLetterRepetition(){
			int count=0;
			char ch;
			cout << "\n\nEnter a letter : ";
			cin >> ch;
			cout << "\nTotal No. of Repetition : ";
			for(int i=0; i<len; i++){
				if(str[i] == ch){
					count++;
				}
			}	
			cout << count;	
		}
};

int main() {
	StringOperation obj;
	obj.getAndShowString();
	obj.lengthString();
	obj.reverseString();
	obj.countWords();
	obj.countLetterRepetition();
	return 0;
}
