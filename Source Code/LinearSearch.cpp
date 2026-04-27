#include <iostream>
using namespace std;
int main(){
	int n, i, key, found=0;
	cout<<"Enter the number of elements of the array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of the array: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the element to search in the array: ";
	cin>>key;
	
	//Linear Search
	for(i=0; i<n; i++){
		if(arr[i] == key){
			cout<<"Element found at position: "<<(i+1)<<endl;
			found = 1;
			break;
		}
	}
	
	if(found == 0){
		cout<<"Element not found in the given array!"<<endl;
	}
	
	return 0;
}
