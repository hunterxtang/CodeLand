#include <iostream>
using namespace::std;
int main()
{
	while(1) {
		int h, w;
		cin>>h>>w;
		if(h==0 && w==0) break;
		for(int i=0; i<h; i++) {
			if(i==0 || i==h-1) {
				for(int k=0; k<w; k++) {
					cout<<"#";
				}
				cout<<endl;
			}
			else {
				cout<<"#";
				for(int j=0; j<w-2; j++) {
					cout<<".";
			
				}
				cout<<"#"<<endl;
			}
		}
		cout<<endl;
	}
}
