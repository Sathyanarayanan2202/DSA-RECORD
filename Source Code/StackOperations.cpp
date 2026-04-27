#include <iostream>
using namespace std;
int Stack[100], n=100, top= -1; //Stack declaration of Stack

void Push(){
	int value;
	cout<<"Enter the value to insert into the stack: ";
	cin>>value;
	
	if(top == n-1){
		cout<<"Stack Overflow"<<endl;
		return;
	} else {
		top++;
		Stack[top] = value;
		cout<<"Inserted element: "<<value<<endl;
	}
}

void Pop(){
	if(top == -1){
		cout<<"Stack Underflow"<<endl;
		return;
	} else {
		cout<<"Deleted element: "<<Stack[top]<<endl;
		top--;
	}
}

void Display(){
	if(top == -1){
		cout<<"Stack is empty"<<endl;
		return;
	} else {
		cout<<"Stack elements: ";
		for(int i=top; i>=0; i--){
			cout<<Stack[i]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int opt;
	cout<<"===== Stack Operations ====="<<endl;
	cout<<"1. Push \n2. Pop \n3. Display \n4. Exit"<<endl;
	cout<<"============================"<<endl;
	
	do{
		cout<<"Enter your choice: ";
		cin>>opt;
		
		switch(opt){
			case 1: Push(); break;
			case 2: Pop(); break;
			case 3: Display(); break;
			case 4: cout<<"Exiting...."<<endl; break;
			default: cout<<"Invalid choice."<<endl;
		}
	}while(opt != 4);
	return 0;
}
