#include <iostream>
using namespace std;
int stack[10], Top = -1; //Glogal Declare
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
				if(Top == 9){
					cout << "Stack is full" << endl;
					continue;
				}
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
	Top++;
	stack[Top] = elem;
}
void pop(){
	if(Top == -1){
		cout << "Stack is empty" << endl;
		return;
	}
	stack[Top] = 0;
	Top--;
}
void top(){
	if(Top == -1){
		cout << "Stack is empty" << endl;
		return;
	}
	cout << "Top of stack is: [" << stack[Top] << "] at position " << Top << endl << endl;
}
void display(){
	if(Top == -1){
		cout << "Stack is empty" << endl;
		return;
	}
	for (int i = Top; i >= 0; i--){
		int n = i;
		cout << "Position " << n << " -> [" << stack[i] << "]" << endl;
	}
} 
