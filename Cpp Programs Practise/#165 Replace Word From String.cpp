// Program to replace a string a word from string.

// ex - My name is Rakesh yadav
// word to change - Rahul
// output - My name is Rahul yadav

#include <iostream>
#include <string.h>
using namespace std;

class ReplaceWord{
	private :
		string str, str1[10];
		char temp[10][10], word[10], newWord[10];
		int x;
	public :
		void getString() {
			cout << "Enter a string : ";
			getline(cin,str);	
		}		
		void getWord() {
			cout << "\nEnter a word : ";
			cin >> word;	
			cout << "\nEnter new word : ";
			cin >> newWord;	
		}
		void showString() {
			cout << "\nString is " << str << "\n\nWord is : " << word << endl;
			cout << "\nWord to replace is : " << newWord << endl;
		}
		void convertInto2dArray() {
			x=0;
			int j=0;
			for(int i=0; i<str.length(); i++){
				if(str[i]!=' '){
					temp[x][j++] = str[i];
				}else {
					temp[x][j] = '\0';
					x++; j=0;
				}
			}
		}
		void replaceWord() {
			convertInto2dArray();
			cout << "Required String : \n";
			for(int i=0; i<=x; i++){
				if(!strcmp(temp[i], word)){
					strcpy(temp[i], newWord);
				}
				cout << temp[i] <<  "  ";
			}
		}
};

int main() {
	ReplaceWord obj;
	obj.getString();
	obj.getWord();
	obj.showString();
	obj.replaceWord();
	return 0;
}
