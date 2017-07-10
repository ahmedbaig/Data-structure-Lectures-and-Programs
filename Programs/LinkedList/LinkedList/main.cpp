#include <iostream>
using namespace std;

void addnode();
void print();

struct node{
	int data;
	node * next;
};

node * head = NULL;
int n;

int main (int argc, char *argv[])
{	
	cout << "How many data items: ";
	cin >> n;

	for (int i = 0; i < n; i++){
		addnode();	
	} 
	print();
	return 0;
}

void addnode(){
	node * temp = new node();
	node * addnode = new node();

	cout << "Enter node data: ";
	cin >> addnode->data;
	//
	addnode->next = NULL;
	temp = head;

	if (temp!=NULL){
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = addnode;
	}else{
		head = addnode;
	}
}

void print(){
	node * temp1 = new node();
	temp1 = head;
	while(temp1!=NULL){
		cout << temp1->data;
		temp1 = temp1->next;
		cout << "\n";
	}

}