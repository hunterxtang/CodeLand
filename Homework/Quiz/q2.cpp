#include <iostream>
using namespace::std;
int main()
{	
	int x;
	cin>>x;
	int n[20000];
	int a,b;
	for(a=0; a<x; a++)
		cin>>n[a];
	int min = n[0];
	int max = n[0];
	for(b=1; b<x; b++) {
		if(n[b] < min)
			min = n[b];
		if(n[b] > max)
			max = n[b];
	}
	cout<<min<<"-"<<max<<endl;
}	
