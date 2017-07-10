#include <iostream>
using namespace std;
//global
long int arr[10000000];
int size;
//declarations
void Bubblesort();
void Insertionsort();
void Selectionsort();
void Quicksort(int, int);
void show();
//main
int main(){
	int choice;
	while (true){
		cout << "Input array size: ";
		cin >> size;
		for (int i = 0; i < size; i++){
			arr[i] = rand() % 9999999;
		}
		cout << "1- BubbleSort 2- InsertionSort 3- SelectionSort 4- QuickSort" << endl;
		cin >> choice;
		switch (choice){
		case 1:
			Bubblesort();
			break;
		case 2:
			Insertionsort();
			break;
		case 3:
			Selectionsort();
			break;
		case 4: 
			Quicksort(0, size - 1);
			break;
		default:
			break;
		}
		show();
	}
	system("PAUSE");
	return 0;
}
void show(){
	for (int i = 0; i < size; i++){
		cout << i << "- " << arr[i] << endl;
	}
}
void Insertionsort(){
	cout << "*INSERTIONSORT*" << endl;
	for (int i = 1; i < size; i++){
		int temp = arr[i];
		int p = i - 1;
		while (temp < arr[p] && p >= 0){
			arr[p + 1] = arr[p];
			p = p - 1;
		}
		arr[p + 1] = temp;
	}
}
void Bubblesort(){
	cout << "*BUBBLESORT*" << endl;
	for (int i = 0; i < size; i++){//Passes
		for (int j = 0; j < size; j++){
			if (arr[j] > arr[j + 1]){
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
			else{
				continue;
			}
		}
	}
}
void Selectionsort(){
	cout << "*SELECTIONSORT*" << endl;
	for (int i = 0; i < size; i++){
		int min = arr[i];
		int loc = i;
		for (int j = i + 1; j < size; j++){
			if (arr[j] < min){
				min = j;
				loc = j;
			}
		}
		if (loc != i) {
			int temp = arr[i];
			arr[i] = arr[loc];
			arr[loc] = temp;
		}
	}
}
void Quicksort(int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	/* partition */
	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};

	/* recursion */
	if (left < j)
		Quicksort(left, j);
	if (i < right)
		Quicksort(i, right);
}