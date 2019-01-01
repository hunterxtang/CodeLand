#include <iostream>
using namespace::std;
int main()
{
	int tenants[4][3][10];
	for(int b=0; b<4; b++) 
		for(int f=0; f<3; f++)
			for(int r=0; r<10; r++)
				tenants[b][f][r] = 0;
	int notice;	
	cin>>notice;
	for(int i=0; i<notice; i++) {
		int b,f,r,p;
		cin>>b;
		cin>>f;
		cin>>r;
		cin>>p;
		tenants[b-1][f-1][r-1]+=p;
	}
	for(int b=0; b<4; b++) {
		for(int f=0; f<3; f++) {
			for(int r=0; r<10; r++)
				cout<<" "<<tenants[b][f][r];
			cout<<endl;
		}
		if(b!=3) 
			cout<<"####################"<<endl;
	}		
}	
