#include <iostream>
#include <iomanip>

using namespace std;

struct node {
	int data;
	node * next;
};

node * head = NULL;

void add();
void print();
void insert();
void deletenode();

int main() {
	int n;
	while (true){
		cout << setw(2) << "1- Add " << setw(2) << "2- Insert " << setw(2) << "3- Delete" << setw(2) << "4- Print" << endl;
		cout << "Choice: ";
		cin >> n;
		cout << endl;
		switch (n) {
			case 1:
				add();
				break;
			case 2:
				insert();
				break;
			case 3:
				deletenode();
				break;
			case 4:
				print();
				break;
			default:
				break;
		}
	}
	return 0;
}

void add() {
	node * temp = head;
	node * add = new node();

	cout << "Enter node data: ";
	cin >> add->data;

	if(temp != NULL){
		while(temp->next != NULL){//till next is null
			temp = temp->next;//traversing
		}
		temp->next = add;
	}else{
		head = add;
	}
}

void print() {
	node * temp = head;
	int i = 0;

	while(temp != NULL) {
		i++;

		cout << "\nLinked List number:\t" << i << endl;
		cout << "Linked List data:\t" << temp->data << endl;
		cout << "Linked List address:\t" << temp->next << endl << endl;

		temp = temp->next;//traversing
	}
}

void insert() {
	int location;
	node * temp = new node();

	cout << "Enter node data: ";
	cin >> temp->data;
	cout << "Enter node location:  ";
	cin >> location;

	if(location == 1) {
		temp->next = head;
		head = temp;
		return;
	}

	node * traverse = head;
	for(int i = 0; i < location-2; i++) {
		traverse = traverse->next;
	}

	temp->next = traverse->next;
	traverse->next = temp;
}

void deletenode() {
	node * temp = head;
	int n;
	cout << "Enter which node to delete: ";
	cin >> n;
	cout << endl;
	if (temp != NULL){
		for (int i = 0; i n-2; i++){
			temp = temp->next;
		}
		node * temp1 = temp->next;
		temp->next = temp1->next;
		free(temp1);
	}else{
		cout << "List empty.." << endl;
	}
}