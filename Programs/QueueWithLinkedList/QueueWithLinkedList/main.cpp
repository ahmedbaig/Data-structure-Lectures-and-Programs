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
} * front = NULL, * rear = NULL;
int count = 0;

void enqueue(const int &elem);
void dequeue();
void display();
int main() {
	int n;
	while (true){
		cout << "1- enqueue 2- dequeue 3- display" << endl;
		cin >> n;
		switch (n){
		case 1:
			cout << "Enter element to push: ";
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
	count++;
	if (front != NULL){
		rear->link = newNode;
		rear = newNode;
	}else{
		front = rear = newNode;
	}
}
void dequeue(){
	if (front != NULL){
		count--;
		node * temp = front;
		front = front->link;
		delete temp;
	}else {
		cout << "Queue is empty" << endl;
		return;
	}
}
void display(){
	if (front != NULL){
		cout << "\t[FRONT:" << front->data << "] [COUNT:" << count << "] [REAR:" << rear->data << "]" << endl << endl;
		node * temp = front;
		int n = count;
		while(temp != NULL){
			cout << "Position " << n << "-> Data:" << temp->data << " Link:" << temp->link << endl;
			n--;
			temp = temp->link;
		}
		cout << endl;
	}else{
		cout << "\t[FRONT:" << front << "][COUNT:" << count << "][REAR:" << rear << "]" << endl << endl;
	}
}
