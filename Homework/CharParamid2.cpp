#include <iostream>
using namespace::std;

int main() 
{
	char what;
	int size;
	cout << " character please: "<<endl;	
	cin >> what;
	cout << " height please: "<<endl;	
	cin >> size;
	int r, c;
	for(r = 0; r < size; r ++) {
		for(c = 0; c < size - r; c ++) {
			cout<<' ';
		}
		for(c = 0; c < 2*r+1; c ++) {
			cout<<what;
		}
		cout<<endl;
	}		
	return(0);
}
