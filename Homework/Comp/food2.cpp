#include <iostream>
using namespace::std;
int main()
{
	int n;	
	cin>>n;
	int *nums = new int[n];
	int tot = 0;
	int all = 0;
	int diff = 100000;
	for(int i=0; i<n; i++) {
		cin>>nums[i];
		all+=nums[i];
	}
	cout<<all<<endl;
	for(int i=0; i<n; i++) {
		tot+=nums[i];
		cout<<tot<<endl;
		if(all - tot < diff) { 
			diff = all-tot;
			cout<<diff<<endl;
		}
		else
			diff+=0;
	}
	cout<<diff<<endl;
}
