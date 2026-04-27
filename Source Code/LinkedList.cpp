#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};

Node* head = NULL;

void Insert(){
	int value;
	cout<<"Enter element: ";
	cin>>value;
	
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = NULL;
	
	if(head == NULL){
		head = newNode;
	} else {
		Node* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
	
	cout<<"Element Inserted!"<<endl;
}

void Delete(){
	if(head == NULL){
		cout<<"List is empty"<<endl;
		return;
	} else {
		Node* temp = head;
		head = head->next;
		cout<<"Deleted element: "<<temp->data<<endl;
		delete temp;
	}
}

void Display(){
	Node* temp = head;
	
	if(temp == NULL){
		cout<<"List is empty!"<<endl;
		return;
	} else {
		cout<<"Linked list:";
		while(temp != NULL){
			cout<<temp->data<<"->";
			temp = temp->next;
		}
		
		cout<<"NULL"<<endl;
	}
}

int main(){
	int opt;
	cout<<"===== Linked List Operations =====";
	cout<<"\n1. Insert\n2. Delete\n3. Display\n4. Exit"<<endl;
	cout<<"=================================="<<endl;
	do{		
		cout<<"Enter your choice: ";
		cin>>opt;
		switch(opt){
			case 1: Insert(); break;
			case 2: Delete(); break;
			case 3: Display(); break;
			case 4: cout<<"Exiting from program!"<<endl; break;
			default: cout<<"Invalid Choice!"<<endl;
		}
	}while(opt != 4);
	return 0;
}
