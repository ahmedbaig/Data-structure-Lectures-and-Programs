#include <iostream>
using namespace std;
int Top = -1; //Glogal Declare
struct node{
	int data;
	node * link;
};node * head = NULL;
void push(const int &elem);
void pop();
void top();
void display(); 
int main (){
    int n;
    while (true){
        cout << "\n1- push 2- pop 3- top 4- display" << endl;
        cin >> n;
        switch(n){
            case 1:
                cout << "Enter data to push: ";
                cin >> n;
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                top();
                break;
            case 4: 
                display();
                break;
            default:
                cout << "wrong input";
                break;
        }
    }
    return 0;
}
void push(const int &elem){
	node * addnode = new node();
	addnode->data = elem;
	addnode->link = head;
	head = addnode;
	Top++;
}
void pop(){
    if(Top == -1 || head == NULL){
        cout << "Stack is empty" << endl;
        return;
    }
    node * freeNode = head;
    head = freeNode->link;
    delete freeNode;
    Top--;
}
void top(){
    if(Top == -1 || head == NULL){
        cout << "Stack is empty" << endl;
        return;
    }
    node * temp = head;
    cout << "Top of stack is: [" << temp->data << "] at position " << Top << endl << endl;
}
void display(){
    if(Top == -1 || head == NULL){
        cout << "Stack is empty" << endl;
        return;
    }
    node * temp = head;
    if (temp != NULL){
    	int i = Top;
    	while (temp->link != NULL){
    		i--;
    		cout << "Position " << i << " -> [" << temp->data << "]" << endl;
    		temp = temp->link;
    	}
    }
} 
