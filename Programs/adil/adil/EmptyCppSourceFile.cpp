
#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
	int k=0,l=0,m=0,n=0,total;
	cout<<"Enter a string:";
    cin >> a;
    for (int i = 0; i < a.size() ; i++)
        
	{
		cout << a.substr(i,1) << " "<<endl;
		k++;
	}
	for (int i = 0; i < a.size()-1 ; i++)
        
	{
		cout << a.substr(i,2) << " "<<endl;
		l++;
	}
	for (int i = 0; i < a.size()-2 ; i++)
        
	{
		cout << a.substr(i,3) << " "<<endl;
		m++;
	}
	for (int i = 0; i < a.size()-3 ; i++)
        
	{
		cout << a.substr(i,4) << " "<<endl;
		n++;
	}
		total=k+l+m+n;
	cout<<"the no of substrings are"<<total<<endl;
    cout << endl;
    
	return 0;
}
