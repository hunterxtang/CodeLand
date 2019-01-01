#include <iostream>
using namespace::std;
int main()
{
	int W, H;
	while(1) {	
	
		cin>>H;
		cin>>W;
		if(W==0 && H==0) {
			break;
		}	
		for(int i=0; i<H; i++) {
			for(int j=0; j<W; j++) {
				cout<<"#";
			
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
