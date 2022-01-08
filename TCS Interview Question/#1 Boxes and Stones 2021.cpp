//Given N stones, each stone has some weight assign to it.
//A box with C capacity is also given. The task is to find out
//minimum number of box/boxes which are required to put all stones in a box.
//
//Note : C>arr[0] to arr[N], where Arr[i] represent the weight of ith stone.
//
//INPUT :
//	5    -> value of N
//	{10, 20, 30, 40, 50} --> element of arr[]
//	60 -> Value of C
//	
//OUTPUT :
//3 -> minimum 3 boxes required
//
//1st box -> {10, 20 ,30}
//2nd box -> {40}
//3rd box -> {50}

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int N;
	cin >> N; // size of array
	int arr[N];
	
	float sum=0;
	for(int i=0; i<N; i++){
		cin >> arr[i]; // elements
		sum+=arr[i];
	}
	
	float capacity;
	cin >> capacity; // box capacity
	
	cout <<endl << "result :" << ceil(sum/capacity);
	return 0;
}
	
