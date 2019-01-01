#include <iostream>
using namespace::std;
int main()
{
	int k,n;
	cin>>k>>n;
	int nums[10000];
	int sum = 0;
	for(int i=0; i<n; i++)
		cin>>nums[i];
	int jammed = 0;
	for(int i=0; i<n; i++) {
		jammed+=nums[i];
		if(jammed <= k)
			jammed = 0;
		else
			jammed-=k;;
	}
	cout<<jammed<<endl;
}
