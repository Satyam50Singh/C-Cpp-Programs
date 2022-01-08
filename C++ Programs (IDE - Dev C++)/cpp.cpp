//Explaining Minor & basic program of C++.
//Including those topics which are not properly wiorking in turbo c++ comlier. 
#include<iostream>//no need to write the extension of files
using namespace std;//all the function are defined in this using namespace std;
int  main()//retur type of main fn is int. 
{
	int a=4,b=78;
	char ch='s',ch2='s';
	char str[7]="Satyam";//the size of an arrray is one larger than the no. of characters in the strings.
	bool s,s2;//bool datatype.
	wchar_t w=L'A';//using wchar_t datatype
				   //newly defined type which can take 65536 values
				   //size of wchar_t is wider than char
				   //it takes 2 bytes in memory.
	
	const char * const ptr1="good";//concept of constant pointer
								   //if we declare somethin constant then we cannot modify it.	
	cout<<"Wide character value  :: "<<w<<endl;
	cout<<"size of char datatype :: "<<sizeof(ch)<<endl;
	cout<<"size of wchar_t datatype :: "<<sizeof(w)<<endl;
	s=a==b;
	s2=ch==ch2;
	cout<<s<<endl;//false
	cout<<s2<<endl;//true
	cout<<str<<endl;//string 
	cout<<ptr1<<endl;//const pointer value
	
	//implicit converson
	double x=8.9;
	char r='a';
	int sum=(int ) x +2 + (char) r ;
	cout<<"Sum is :"<<sum<<endl;
	
	return 0;//when the return type is int we use return 0 stmt.
}
