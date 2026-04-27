#include <iostream>
using namespace std;
int main(){
	int n, i, key, low, high, mid, found=0;
	cout<<"Enter the number of elements of the array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of the array: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the element to search in the array: ";
	cin>>key;
	
	low = 0;
	high = n-1;
	
	//Binary Search
	while(low <= high){
		mid = (low+high)/2;
		
		if(arr[mid] == key){
			cout<<"Element found at position: "<<(mid+1)<<endl;
			found = 1;
			break;
		} else if(arr[mid] > key){
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	
	if(found == 0){
		cout<<"Element not found in the given array!"<<endl;
	}
	
	return 0;
}
