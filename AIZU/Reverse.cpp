#include <iostream>
using namespace::std;
int main()
{
	int n;
	cin>>n;
	int nums[100];
	for(int i=0; i<n; i++)
		cin>>nums[i];
	for(int j=n-1; j>=1; j--) {
		cout<<nums[j]<<" ";
	}	
	cout<<nums[0]<<endl;
	
}
