#include <iostream>
#include <iomanip>
using namespace std;

int main (){

	int col = 0, i;
	bool row = true;
	char ascii = 0;

	while (row != false){
		for (col; col < 5; col++) {
			i = ascii;
			cout << "| ";
			cout << i << "= " << ascii;
			cout << setw(5) << " |";
			ascii++;
		} 
		col = 0;
		cout << endl;
		if (i == 255) {row = false; break;}

	}
	return 0;
}

