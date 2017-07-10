#include <iostream>

using namespace std;

int main (){

	int a[5];
	int num;
	cout << "Enter value of num: " ;
	cin >> num;
	for (int i = 0; i < 6; i++){
		cout << "Enter value of a[" << i << "]: ";
		cin >> a[i];
		if (a[i]==num){
			cout << "element found" << endl;
		}else{
			cout << "elemnt not found" << endl;
		}

	}
	return 0;
}