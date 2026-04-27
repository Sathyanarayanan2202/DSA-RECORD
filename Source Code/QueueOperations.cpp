#include <iostream>
using namespace std;
int Queue[100], n=100, front= -1, rear= -1; // static declaration of queue
int input_values[] = {10,20,30,40,50}; // predefined elements of queue
int input_index = 0;
int total_values = sizeof(input_values)/sizeof(input_values[0]);

void Enqueue(){
	if(rear == n-1){
		cout<<"Queue Overflow"<<endl;
		return;
	} else {
		if(front == -1){
			front = 0;
		} 
		
		if(input_index < total_values){
			int value = input_values[input_index++];
			Queue[++rear] = value;
			cout<<"Inserted element: "<<value<<endl;
		} else {
			cout<<"No more predefined element to insert into the queue."<<endl;
		}
	}
}

void Dequeue(){
	if(rear == -1) || front > rear{
		cout<<"Queue Underflow"<<endl;
		return;
	} else {
		cout<<"Deleted element: "<<Queue[front]<<endl;
		front++;
	}
}

void Display(){
	if(rear == -1 || front > rear){
		cout<<"Queue is empty"<<endl;
		return;
	} else {
		cout<<"Queue elements: ";
		for(int i=front; i<=rear; i++){
			cout<<Queue[i]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	Enqueue();
	Enqueue();
	Enqueue();
	Display();
	Dequeue();
	Enqueue();
	Enqueue();
	Enqueue();
	Dequeue();
	Display();
	
	return 0;
}
