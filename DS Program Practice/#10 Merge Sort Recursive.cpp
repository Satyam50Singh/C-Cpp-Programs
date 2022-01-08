#include <iostream>
using namespace std;
void showArray(int arr[], int n) {
	cout << "\nArray elements :\n";
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	} 
}	

void swap(int *p, int *q){
	int t = *p;
	*p = *q;
	*q = t;
}

void merge(int arr[], int low, int mid, int high){
	int i=low; 
	int j=mid+1;
	int k=low;
	int temp[low+high+1];
	while(i <= mid && j<=high){
		if(arr[i] <= arr[j]){
			temp[k++] = arr[i++];
		}else {
			temp [k++] = arr[j++];
		}
	}
	
	if(i > mid){
		while(j<=high){
			temp[k++] = arr[j++];
		}
	}else {
		while(i<=mid){
			temp[k++] = arr[i++];
		}
	}
	for(int i=low; i<=high; i++){
		arr[i] = temp[i];
	}
}

void sort(int arr[],int low,int high){
	int mid;
	if(low != high){
		mid = (low + high)/2;
		sort(arr, low, mid);
		sort(arr, mid+1, high);
		merge(arr, low, mid, high);
	}
}


int main(){
	int arr[10], n;

	cout << "Enter the value of n :";
	cin >> n;

	cout << "Enter " << n << " elements \n";
	for(int i=0; i<n; i++){
		cin >> arr[i];	
	} 

	showArray(arr, n);	
	
	sort(arr, 0, n-1);

	showArray(arr, n);	
	return 0;
}
