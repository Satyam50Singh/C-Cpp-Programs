//example
//N -> 6
//arr -> 60 7 8 10 250 730
//ans -> 266

// sum of all elements of arr is 1065,
//and the next perfect cube is 1331,
//so the ans will be difference of these two values.

#include <iostream>
using namespace std;
int check=0;
int checkCube(int sum){
	for(int i=1; i<sum; i++){
		if(i*i*i == sum){
			return 1;
		}
	}
	return 0;
}
int main() {
	int N;
	cin >> N;
	int arr[N], sum=0;
	for(int i=0; i<N; i++){
		cin >> arr[i];
		sum+=arr[i];
	}
	int temp = sum;
	check = checkCube(sum);
	if(check){
		cout << "Yes";
	}else {
		while(check!=1){
			temp++;
			check = checkCube(temp);
		}
		if(temp >= sum){
			cout << temp-sum;
		}
	}
	return 0;
} 
