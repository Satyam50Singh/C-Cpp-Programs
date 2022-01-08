#include <iostream>
using namespace std;
void showArray(int arr[], int n) {
	cout << "\nArray elements :\n";
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	} 
}	

// 1st Way (Harish Sir)
//int partition(int arr[], int low, int high){
//	int pivot = arr[high];
//	int i = (low-1);
//	
//	for(int j=low; j<=high-1; j++){
//		if(arr[j] <= pivot){
//			i++;
//			int temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//	}
//	int t = arr[i+1];
//	arr[i+1] = arr[high];
//	arr[high] = t;
////	arr[i+1] = pivot;
//	return (i+1);
//}

void swap(int *p, int *q){
	int t = *p;
	*p = *q;
	*q = t;
}
// 2nd Way (Youtube)
int partition(int arr[], int low, int high){
	int pivot = arr[low];
	int start = low, end = high;
	
	while(start < end) {
		while(arr[start] <= pivot){
			start++;
		}
	
		while(arr[end] > pivot){
			end--;
		}
		
		if(start < end){
			swap(&arr[start], &arr[end]);
		}
	}
	
	swap(&arr[low], &arr[end]);
	return end;
}



void sort(int arr[],int low,int high){
	if(low < high){
//		pi is partition variable
		int pi = partition(arr, low, high);
		sort(arr, low, pi-1);
		sort(arr, pi+1, high);
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
