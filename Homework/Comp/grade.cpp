#include <iostream>
using namespace::std;
int main()
{
	int n;
	cin>>n;
	int *nums = new int[n];
	for(int i=0; i<n; i++) 
		cin>>nums[i];
	for(int i=0; i<n; i++) {
		if(nums[i] < 38) {
			cout<<nums[i]<<endl;
		}
		else if((nums[i] + 1)%5 == 0  && (nums[i]+1) - nums[i] < 3) 
			cout<<nums[i]+1<<endl;
		else if((nums[i]+2)%5 == 0 && (nums[i]+2) - nums[i] < 3)
			cout<<nums[i]+2<<endl;
		else 
			cout<<nums[i]<<endl;	
	}
}
