#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
	int a[5], v, length; bool flag = false;

	cout << "Enter special number: ";
	cin >> v;

	cout << "Enter size of array: ";
	cin >> length;
	for (int i; i < length; i++){
		cout << "Enter variable " << i << ": ";
		cin >> a[i];
		if (a[i] == v) flag = true;
	}

	if (flag == true) cout << "Integer found!" << endl;
	else cout << "Integer not found!" << endl;
	return 0;
}

