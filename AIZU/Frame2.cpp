#include <iostream>
using namespace::std;
int main()
{
	int h, w;
	cin>>h>>w;
	for(int i=0; i<h; i++) {
		for(int j=0; j<w; j++) {
			if(j<=1 || j>=w-2 || i<=1 || i>=h-2)
				cout<<"#";
			else 
				cout<<".";
		}
	cout<<endl;
	}
}
