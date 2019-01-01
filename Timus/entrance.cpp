#include <iostream>
using namespace::std;
int main()
{
	int n;
	cin>>n;
	int *nums = new int[n];
	for(int i=0; i<n; i++) {
		cin>>nums[i];
	}
	int biggest = 0;
	int middle = 0;
	for(int i=1; i<n-1; i++) {
		if(nums[i-1] + nums[i] + nums[i+1] > biggest) {
			biggest = nums[i-1] + nums[i] + nums[i+1];
			middle = i;
		}
	}
	cout<<biggest<<" "<<middle+1<<endl;
}
