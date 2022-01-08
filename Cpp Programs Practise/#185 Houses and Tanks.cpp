// Your task is to find the minimum number of water tanks needed to collect rainwater from all of the houses.
// For Example , given S="-H-HH--", you can collect rainwater from all three housesby using two water tanks you can position
// one water tank between the first and second houses and the other after the third house. This placement of water tanks can be 
// represented as "-HTHHT-", where T denotes a water tank. 

#include <iostream>
using namespace std;

int main() {
	// Taking String From User.
	string str;
	cin >> str;
	
	int size = str.length();	
	if(size == 1){
		cout << -1;
	}else {
		int x=0, res=0, p=1;
		for(int i=1; i<str.length(); i++){
			if((str[i] == 'H' && str[i-1] == 'H' && str[i+1] == 'H') || (str[0] == 'H' && str[1] =='H') || (str[size-1] == 'H' && str[size-2] =='H') ){
				cout << endl << -1;
				p=0;
				break;
			}
		}
		if(p==1){
			for(int i=0; i<str.length(); i++){
				if(str[i]=='-'){
					str[i] = 'T';
				}
			}
			for(int i=0; i<str.length(); i++){
				if(str[i] == 'H'){
					if(str[i+1] == 'T'){
						res++;
					}else if(str[i-1] == 'T'){
						res++;
					}
				}				
			}
			cout << "Numbers of tanks :- " << res; 
		}
	}	
	return 0;
}
