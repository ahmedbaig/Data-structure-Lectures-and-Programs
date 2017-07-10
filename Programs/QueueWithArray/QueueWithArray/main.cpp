#include <iostream>
using namespace std;
void enqueue(const int &elem);
void dequeue();
void display();
int array[10], n, element, front = -1, back = -1;
int main () {
	while(true){
	cout << "1- Enqueue( ) 2- Dequeue( ) 3- Display( )" << endl; 
	cin >> n;	
	switch (n){
		case 1:
			cout << "Enter element to Enqueue: ";
			cin >> element;
			enqueue(element);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		}
	}
	return 0;
}

void enqueue(const int &elem){
	if (front != -1){
		back ++;
		array[back] = elem;
	}else{
		front++;
		back++;
		array[front] = array[back] = elem;
	}
}
void dequeue(){
	if (front != -1){
		array[front] = 0;
		front++;
	}else{
		cout << "Queue is empty" << endl;
	}
}
void display(){
	if (front != -1){
		cout << "Queue Front: " << array[front] << " and Back: " << array[back] << endl;
		for (int i = front; i <= back; i++){
			cout << "Position " << i << " -> " << array[i] << endl;
		}
	}else{ 
		cout << "Queue is empty" << endl;
	}
}