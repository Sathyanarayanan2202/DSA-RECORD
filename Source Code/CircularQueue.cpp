#include <iostream>
using namespace std;
#define SIZE 5
int queue[SIZE], front = -1, rear = -1;

void enqueue(){
	int value;
	cout<<"Enter value to insert: ";
	cin>>value;
	
	if((rear+1)%SIZE == front){
		cout<<"Queue Overflow"<<endl;
		return;
	} else {
		if(front == -1){
			front = 0;
			rear = 0;
		} else {
			rear = (rear+1)%SIZE;
		}
		queue[rear] = value;
		cout<<"Inserted value: "<<value<<endl;
	}
}

void dequeue(){
	if(front == -1){
		cout<<"Queue Underflow"<<endl;
		return;
	} else {
		cout<<"Deleted Element: "<<queue[front]<<endl;
		
		if(front == rear){
			front = rear = -1;
		} else {
			front = (front + 1)%SIZE;
		}
	}
}

void display(){
	if(front == -1){
		cout<<"Queue is empty"<<endl;
		return;
	} else {
		cout<<"Displaying Queue elements: ";
		int i = front;
		
		while(true){
			cout<<queue[i]<<" ";
			if(i == rear) break;
			i = (i+1)%SIZE;
		}
		cout<<endl;
	}
}

int main(){
	int opt;
	cout<<"====== Circular Queue Menu ======"<<endl;
	cout<<"1. Enqueue "<<endl;
	cout<<"2. Dequeue "<<endl;
	cout<<"3. Display Queue "<<endl;
	cout<<"4. Exit "<<endl;
	cout<<"================================="<<endl;
	
	do{
		cout<<"Enter your choice: ";
		cin>>opt;
		
		switch(opt){
			case 1: enqueue(); break;
			case 2: dequeue(); break;
			case 3: display(); break;
			case 4: cout<<"Exit from program."<<endl; break;
			default: cout<<"Invalid Choice."<<endl;
		}
	}while(opt != 4);
	
	return 0;
}
