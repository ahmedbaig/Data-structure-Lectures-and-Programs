//============================================================================
// Name        : QueueWithLinkedList.cpp
// Author      : Ahmed Baig
// Version     :
// Copyright   : `Your copyright notice
// Description : Queue With Linked List in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct node{
	int data;
	node * link;
} * front = NULL, * rear = NULL, count = -1;

void enqueue(const int);
void dequeue();
void display();
int main() {
	int n;
	while (true){
		cout << "1- enqueue 2- dequeue 3- display" << endl;
		cin >> n;
		switch (n){
		case 1:
			cout << "Enter element to push: " << endl;
			cin >> n;
			enqueue(n);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		default:
			cout << "Wrong input" << endl;
			break;
		}
	}
	return 0;
}
void enqueue(const int &elem){
	node * newNode = new node();
	newNode->data = elem;
	newNode->link = NULL;
	if (front != NULL){
		count ++;
		rear->link = newNode;
		rear = newNode;
	}else{
		front = rear = newNode;
	}
}
void dequeue(){
	if (front != NULL){
		cout --;
		node * temp = front;
		front = front->link;
		delete temp;
	}else {
		cout << "Queue is empty" << endl;
		return;
	}
}
void display(){
	cout << "\t[ \tFRONT  ] [ \tCOUNT  ] [\t REAR  ]" << endl;
	cout << "\t[" << front->data << "] [" << count << "] [" << rear->data << "]" << endl;
	cout << "\t[" << front->link << "] [" << count << "] [" << rear->link << "]" << endl;
	node * temp = front;
}
