#include <iostream>
using namespace::std;
int main()
{
	int num;
	cin>>num;
	for(int i=1; i<num+1; i++) {
		for(int j=0; j<num-i; j++)
			cout<<" ";
		for(int j=0; j<(2*i)-1; j++)
			cout<<i;
		for(int j=0; j<num-i; j++)
			cout<<" ";
		cout<<endl;
	}
	for(int i=0; i<(2*num)-1; i++) {
		cout<<"-";
	}
	cout<<endl;
	for(int i=num; i>0; i--) {
		for(int j=num-i; j>0; j--) 
			cout<<" ";
		for(int j=0; j<(2*i)-1; j++) 
			cout<<i;
		for(int j=num-i; j>0; j--)
			cout<<" ";
		cout<<endl;
	}
}
