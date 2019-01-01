#include <iostream>
using namespace::std;

int main()
{
        char what;
        int size;
        cout << " character please: "<<endl;
        cin >> what;
        cout << "odd height please: "<<endl;
        cin >> size;
	if(what % 2 == 0) {
		cout<<"failure"<<endl;
		return 0;
	}
        int r, c;
	//top half
        for(r = 0; r < size; r ++) {
                for(c = 0; c < size - r; c ++) {
                        cout<<' ';
                }
                for(c = 0; c < 2*r+1; c ++) {
                        cout<<what;
                }
                cout<<endl;
	}	
	//bottom half
	for(r = 0; r < size; r ++) {
		for(c = 0; c < r; c++ ) {
			cout<<' ';
		}
                for(c = 0; c < 2*(size-r)+1; c ++) {
                       	cout<<what;
                }
                cout<<endl;
        }
	//rectangle
	for(r=0; r<5; r++) {
		for(c = 0; c < 2*size+1; c ++) 
			cout<<what;
		cout<<endl;
	}
        return(0);
}

