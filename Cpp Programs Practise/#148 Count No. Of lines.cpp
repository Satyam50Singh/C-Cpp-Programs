// count no. of lines.

#include <iostream>
using namespace std;

int main() {
	char s[400];
	cout << "Enter a paragraph : \n";
	cin.getline(s,400);
	char ch;
	int c = 0, line=1;
	int static p=1;
	for(int i=0; s[i]!='\0'; i++){
		ch = s[i];
		c++;
		if(c >= p*80){
			line++;
		}
		if(c%80 == 0){
			p++;
		}
	}
	cout << "\nParagraph : \n";
	cout << s;
	cout << "\nLines : " << line;
	return 0;	
}
