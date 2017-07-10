#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
	int Array[10], First, Last, Mid, Special, n;
	bool flag = false;

	//food
	cout << "Enter number of elements: ";
	cin >> n;
	for (int i = 0; i < n; i++){
		cout << "Location " << i << ": ";
		cin >> Array[i];
	}

	Last = n-1;
	First = 0;

	cout << Last << " " << First;
	cout << "Enter bait: ";
	cin >> Special;

	//Searching...
	while (First <= Last) {
		
		Mid = ((First + Last)/2);

		if (Special == Array[Mid]){

			cout << "Element found at: " << Mid << endl;
			flag = true;
			return 0;

		}else if (Special > Array[Mid]){

			First = Mid + 1;	

		}else if (Special < Array[Mid]){

			Last = Mid - 1;	

		}
	}

	if (flag == false) {
		cout << "Element not found!";
	}
	return 0;
}

