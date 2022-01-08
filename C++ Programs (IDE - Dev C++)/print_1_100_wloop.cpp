//Program to print 1 to 100 by using MACRO.(print_1_100_wloop)
#include <iostream>
using namespace std;
#define COUT(i)  cout<< i <<" ";
#define LEVEL(N)  N N N N N N N N N N
#define PRINT(i)   LEVEL(LEVEL(COUT(i)))
	
int main()
{
	int i=1;
	PRINT(i++);
	return 0;
}
	
