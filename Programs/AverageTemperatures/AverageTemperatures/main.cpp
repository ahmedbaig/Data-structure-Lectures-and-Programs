#include <iostream> 
#include <vector> 
#include <string>

using namespace std; 
 
 
string day(int D); 
string day(int D){ 
switch(D){ 
	case 0: return "Monday"; break; 
	case 1: return "Tuesday"; break; 
	case 2: return "Wednesday"; break; 
	case 3: return "Thursday"; break; 
	case 4: return "Friday"; break; 
	case 5: return "Saturday"; break; 
	case 6: return "Sunday"; break; 
	} 
} 

int main (){ 
	double cities[2][7]; int i, j; 
	for(i = 0; i < 2; i++){ 
		for(j = 0; j < 7; j++){ 
			if(i!=1){ 
				cout << "Karachi city ("<< day(j) <<"): "; 
				cin >> cities[0][j]; 
			}else{ 
				cout << "Islamabad city ("<< day(j) <<"): "; 
				cin >> cities[1][j]; 
			} 
		} 
		cout << endl << endl; 
	} 
 
	 
	cout << endl << endl; 
	 
	 
	for(j = 0; j < 7; j++){ 
		cout << "Karachi city ("<< day(j) <<"): " << cities[0][j]; 
		cout << "\t\tIslamabad city ("<< day(j) <<"): " << cities[1][j] << endl; 
	} 
	return 0;
} 
 