#include <iostream>
using namespace::std;
int main()
{
	int bits;
	cout<<"Type a number";
	cin >>bits;
	int things = 1;
	for(int i=0; i<bits; i++) {
		//cout<<bits<<endl;
		things = things * 2;
		cout<<things<<endl;
	}
}
